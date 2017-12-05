// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_HEADER_AIRSIM_TO_ROS_H_
#define FLATBUFFERS_GENERATED_HEADER_AIRSIM_TO_ROS_H_

#include "flatbuffers/flatbuffers.h"

#include "time_generated.h"

namespace airsim_to_ros {

struct Header;

struct Header FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum {
    VT_SEQ = 4,
    VT_STAMP = 6,
    VT_FRAME_ID = 8
  };
  uint32_t seq() const {
    return GetField<uint32_t>(VT_SEQ, 0);
  }
  const time *stamp() const {
    return GetStruct<const time *>(VT_STAMP);
  }
  const flatbuffers::String *frame_id() const {
    return GetPointer<const flatbuffers::String *>(VT_FRAME_ID);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<uint32_t>(verifier, VT_SEQ) &&
           VerifyField<time>(verifier, VT_STAMP) &&
           VerifyOffset(verifier, VT_FRAME_ID) &&
           verifier.Verify(frame_id()) &&
           verifier.EndTable();
  }
};

struct HeaderBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_seq(uint32_t seq) {
    fbb_.AddElement<uint32_t>(Header::VT_SEQ, seq, 0);
  }
  void add_stamp(const time *stamp) {
    fbb_.AddStruct(Header::VT_STAMP, stamp);
  }
  void add_frame_id(flatbuffers::Offset<flatbuffers::String> frame_id) {
    fbb_.AddOffset(Header::VT_FRAME_ID, frame_id);
  }
  explicit HeaderBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  HeaderBuilder &operator=(const HeaderBuilder &);
  flatbuffers::Offset<Header> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<Header>(end);
    return o;
  }
};

inline flatbuffers::Offset<Header> CreateHeader(
    flatbuffers::FlatBufferBuilder &_fbb,
    uint32_t seq = 0,
    const time *stamp = 0,
    flatbuffers::Offset<flatbuffers::String> frame_id = 0) {
  HeaderBuilder builder_(_fbb);
  builder_.add_frame_id(frame_id);
  builder_.add_stamp(stamp);
  builder_.add_seq(seq);
  return builder_.Finish();
}

inline flatbuffers::Offset<Header> CreateHeaderDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    uint32_t seq = 0,
    const time *stamp = 0,
    const char *frame_id = nullptr) {
  return airsim_to_ros::CreateHeader(
      _fbb,
      seq,
      stamp,
      frame_id ? _fbb.CreateString(frame_id) : 0);
}

}  // namespace airsim_to_ros

#endif  // FLATBUFFERS_GENERATED_HEADER_AIRSIM_TO_ROS_H_