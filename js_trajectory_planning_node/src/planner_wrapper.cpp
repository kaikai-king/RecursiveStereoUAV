#include "js_trajectory_planning_node/planner_wrapper.h"
#include "js_trajectory_planning_node/postprocessing.h"

PlannerWrapper::PlannerWrapper(Eigen::Vector3d size,
                               Eigen::Vector3d start,
                               Eigen::Vector3d goal)
{
    statespace_ = std::make_shared<RRT::GridStateSpace>(size.x(), size.y(), size.z(), size.x(), size.y(), size.z());
    birrt_ = std::make_unique<RRT::BiRRT<Eigen::Vector3d>>(statespace_, 3);
    
    // Own start/goal
    SetStartState(start);
    SetGoalState(goal);
    
    //  setup birrt
    birrt_->SetStartState(start);
    birrt_->SetGoalState(goal);
    birrt_->SetMaxStepSize(100);
    birrt_->SetStepSize(5);
    birrt_->SetMaxIterations(1000);
    birrt_->SetAdaptiveScalingEnable(true);
    birrt_->SetGoalBias(0.5);
    birrt_->SetWaypointBias(0.2);
    birrt_->SetMaxDistanceToGoal(1);

    start_velocity_ = Eigen::Vector3d(3, 0, 0);
    goal_velocity_ = Eigen::Vector3d(0, 3, 0);
}

void PlannerWrapper::Reset()
{
    solution_.clear();
    statespace_->GetObstacleGrid().Clear();
    //  reset and re-setup birrt
    birrt_->Reset();
    birrt_->SetStartState(start_state_);
    birrt_->SetGoalState(goal_state_);
}

void PlannerWrapper::SetStartState(Eigen::Vector3d state)
{
    start_state_ = state;
}

void PlannerWrapper::SetGoalState(Eigen::Vector3d state)
{
    goal_state_ = state;
}
    void SetGoalState(Eigen::Vector3d state);

void PlannerWrapper::Step()
{
    int number_step_iterations = 1000;

    for (int i = 0; i < number_step_iterations; i++)
    {
        birrt_->Grow();
        if (birrt_->GetStartSolutionNode() != nullptr && i >= birrt_->GetMinIterations())
        {
            ROS_INFO("   Found a solution");
            break;
        }
    }

    // store solution
    solution_.clear();
    if (birrt_->GetStartSolutionNode() != nullptr)
    {
            ROS_INFO("      ... and stored it");
        solution_ = birrt_->GetPath();
        RRT::SmoothPath(solution_, *statespace_);
    }
}

Eigen::Vector3d PlannerWrapper::GetStartVelocity() { return start_velocity_; };
Eigen::Vector3d PlannerWrapper::GetGoalVelocity() { return goal_velocity_; };
std::vector<Eigen::Vector3d> PlannerWrapper::GetSolution() { return solution_; };
