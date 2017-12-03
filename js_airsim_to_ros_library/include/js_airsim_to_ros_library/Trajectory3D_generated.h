// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_TRAJECTORY3D_AIRSIM_TO_ROS_H_
#define FLATBUFFERS_GENERATED_TRAJECTORY3D_AIRSIM_TO_ROS_H_

#include "flatbuffers/flatbuffers.h"

#include "Point_generated.h"
#include "Pose_generated.h"
#include "Quaternion_generated.h"
#include "Trajectory3DPointStamped_generated.h"
#include "time_generated.h"

namespace airsim_to_ros {

struct Trajectory3D;

struct Trajectory3D FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum {
    VT_TRAJECTORY = 4
  };
  const flatbuffers::Vector<const Trajectory3DPointStamped *> *trajectory() const {
    return GetPointer<const flatbuffers::Vector<const Trajectory3DPointStamped *> *>(VT_TRAJECTORY);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset(verifier, VT_TRAJECTORY) &&
           verifier.Verify(trajectory()) &&
           verifier.EndTable();
  }
};

struct Trajectory3DBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_trajectory(flatbuffers::Offset<flatbuffers::Vector<const Trajectory3DPointStamped *>> trajectory) {
    fbb_.AddOffset(Trajectory3D::VT_TRAJECTORY, trajectory);
  }
  explicit Trajectory3DBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  Trajectory3DBuilder &operator=(const Trajectory3DBuilder &);
  flatbuffers::Offset<Trajectory3D> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<Trajectory3D>(end);
    return o;
  }
};

inline flatbuffers::Offset<Trajectory3D> CreateTrajectory3D(
    flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<flatbuffers::Vector<const Trajectory3DPointStamped *>> trajectory = 0) {
  Trajectory3DBuilder builder_(_fbb);
  builder_.add_trajectory(trajectory);
  return builder_.Finish();
}

inline flatbuffers::Offset<Trajectory3D> CreateTrajectory3DDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    const std::vector<const Trajectory3DPointStamped *> *trajectory = nullptr) {
  return airsim_to_ros::CreateTrajectory3D(
      _fbb,
      trajectory ? _fbb.CreateVector<const Trajectory3DPointStamped *>(*trajectory) : 0);
}

}  // namespace airsim_to_ros

#endif  // FLATBUFFERS_GENERATED_TRAJECTORY3D_AIRSIM_TO_ROS_H_