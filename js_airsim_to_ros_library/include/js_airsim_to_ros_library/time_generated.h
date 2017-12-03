// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_TIME_AIRSIM_TO_ROS_H_
#define FLATBUFFERS_GENERATED_TIME_AIRSIM_TO_ROS_H_

#include "flatbuffers/flatbuffers.h"

namespace airsim_to_ros {

struct time;

struct time FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum {
    VT_SEC = 4,
    VT_NSEC = 6
  };
  uint32_t sec() const {
    return GetField<uint32_t>(VT_SEC, 0);
  }
  uint32_t nsec() const {
    return GetField<uint32_t>(VT_NSEC, 0);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<uint32_t>(verifier, VT_SEC) &&
           VerifyField<uint32_t>(verifier, VT_NSEC) &&
           verifier.EndTable();
  }
};

struct timeBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_sec(uint32_t sec) {
    fbb_.AddElement<uint32_t>(time::VT_SEC, sec, 0);
  }
  void add_nsec(uint32_t nsec) {
    fbb_.AddElement<uint32_t>(time::VT_NSEC, nsec, 0);
  }
  explicit timeBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  timeBuilder &operator=(const timeBuilder &);
  flatbuffers::Offset<time> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<time>(end);
    return o;
  }
};

inline flatbuffers::Offset<time> Createtime(
    flatbuffers::FlatBufferBuilder &_fbb,
    uint32_t sec = 0,
    uint32_t nsec = 0) {
  timeBuilder builder_(_fbb);
  builder_.add_nsec(nsec);
  builder_.add_sec(sec);
  return builder_.Finish();
}

}  // namespace airsim_to_ros

#endif  // FLATBUFFERS_GENERATED_TIME_AIRSIM_TO_ROS_H_
