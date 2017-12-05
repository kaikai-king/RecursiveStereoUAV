// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_POINT_ROS_TO_AIRSIM_H_
#define FLATBUFFERS_GENERATED_POINT_ROS_TO_AIRSIM_H_

#include "flatbuffers/flatbuffers.h"

namespace ros_to_airsim {

struct Point;

MANUALLY_ALIGNED_STRUCT(8) Point FLATBUFFERS_FINAL_CLASS {
 private:
  double x_;
  double y_;
  double z_;

 public:
  Point() {
    memset(this, 0, sizeof(Point));
  }
  Point(double _x, double _y, double _z)
      : x_(flatbuffers::EndianScalar(_x)),
        y_(flatbuffers::EndianScalar(_y)),
        z_(flatbuffers::EndianScalar(_z)) {
  }
  double x() const {
    return flatbuffers::EndianScalar(x_);
  }
  double y() const {
    return flatbuffers::EndianScalar(y_);
  }
  double z() const {
    return flatbuffers::EndianScalar(z_);
  }
};
STRUCT_END(Point, 24);

}  // namespace ros_to_airsim

#endif  // FLATBUFFERS_GENERATED_POINT_ROS_TO_AIRSIM_H_