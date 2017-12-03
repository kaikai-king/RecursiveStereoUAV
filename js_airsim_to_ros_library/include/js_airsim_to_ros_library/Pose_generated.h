// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_POSE_ROS_TO_AIRSIM_H_
#define FLATBUFFERS_GENERATED_POSE_ROS_TO_AIRSIM_H_

#include "flatbuffers/flatbuffers.h"

#include "Point_generated.h"
#include "Quaternion_generated.h"

namespace ros_to_airsim {

struct Pose;

struct Pose FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum {
    VT_POSITION = 4,
    VT_ORIENTATION = 6
  };
  const Point *position() const {
    return GetPointer<const Point *>(VT_POSITION);
  }
  const Quaternion *orientation() const {
    return GetPointer<const Quaternion *>(VT_ORIENTATION);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset(verifier, VT_POSITION) &&
           verifier.VerifyTable(position()) &&
           VerifyOffset(verifier, VT_ORIENTATION) &&
           verifier.VerifyTable(orientation()) &&
           verifier.EndTable();
  }
};

struct PoseBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_position(flatbuffers::Offset<Point> position) {
    fbb_.AddOffset(Pose::VT_POSITION, position);
  }
  void add_orientation(flatbuffers::Offset<Quaternion> orientation) {
    fbb_.AddOffset(Pose::VT_ORIENTATION, orientation);
  }
  explicit PoseBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  PoseBuilder &operator=(const PoseBuilder &);
  flatbuffers::Offset<Pose> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<Pose>(end);
    return o;
  }
};

inline flatbuffers::Offset<Pose> CreatePose(
    flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<Point> position = 0,
    flatbuffers::Offset<Quaternion> orientation = 0) {
  PoseBuilder builder_(_fbb);
  builder_.add_orientation(orientation);
  builder_.add_position(position);
  return builder_.Finish();
}

}  // namespace ros_to_airsim

#endif  // FLATBUFFERS_GENERATED_POSE_ROS_TO_AIRSIM_H_
