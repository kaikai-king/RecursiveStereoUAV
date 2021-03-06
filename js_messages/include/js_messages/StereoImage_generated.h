// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_STEREOIMAGE_AIRSIM_TO_ROS_H_
#define FLATBUFFERS_GENERATED_STEREOIMAGE_AIRSIM_TO_ROS_H_

#include "flatbuffers/flatbuffers.h"

namespace airsim_to_ros {

struct StereoImage;

struct StereoImage FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum {
    VT_HEIGHT = 4,
    VT_WIDTH = 6,
    VT_ENCODING = 8,
    VT_IS_BIGENDIAN = 10,
    VT_STEP = 12,
    VT_DATA = 14
  };
  uint32_t height() const {
    return GetField<uint32_t>(VT_HEIGHT, 0);
  }
  uint32_t width() const {
    return GetField<uint32_t>(VT_WIDTH, 0);
  }
  const flatbuffers::String *encoding() const {
    return GetPointer<const flatbuffers::String *>(VT_ENCODING);
  }
  uint8_t is_bigendian() const {
    return GetField<uint8_t>(VT_IS_BIGENDIAN, 0);
  }
  uint32_t step() const {
    return GetField<uint32_t>(VT_STEP, 0);
  }
  const flatbuffers::Vector<uint8_t> *data() const {
    return GetPointer<const flatbuffers::Vector<uint8_t> *>(VT_DATA);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<uint32_t>(verifier, VT_HEIGHT) &&
           VerifyField<uint32_t>(verifier, VT_WIDTH) &&
           VerifyOffset(verifier, VT_ENCODING) &&
           verifier.Verify(encoding()) &&
           VerifyField<uint8_t>(verifier, VT_IS_BIGENDIAN) &&
           VerifyField<uint32_t>(verifier, VT_STEP) &&
           VerifyOffset(verifier, VT_DATA) &&
           verifier.Verify(data()) &&
           verifier.EndTable();
  }
};

struct StereoImageBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_height(uint32_t height) {
    fbb_.AddElement<uint32_t>(StereoImage::VT_HEIGHT, height, 0);
  }
  void add_width(uint32_t width) {
    fbb_.AddElement<uint32_t>(StereoImage::VT_WIDTH, width, 0);
  }
  void add_encoding(flatbuffers::Offset<flatbuffers::String> encoding) {
    fbb_.AddOffset(StereoImage::VT_ENCODING, encoding);
  }
  void add_is_bigendian(uint8_t is_bigendian) {
    fbb_.AddElement<uint8_t>(StereoImage::VT_IS_BIGENDIAN, is_bigendian, 0);
  }
  void add_step(uint32_t step) {
    fbb_.AddElement<uint32_t>(StereoImage::VT_STEP, step, 0);
  }
  void add_data(flatbuffers::Offset<flatbuffers::Vector<uint8_t>> data) {
    fbb_.AddOffset(StereoImage::VT_DATA, data);
  }
  explicit StereoImageBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  StereoImageBuilder &operator=(const StereoImageBuilder &);
  flatbuffers::Offset<StereoImage> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<StereoImage>(end);
    return o;
  }
};

inline flatbuffers::Offset<StereoImage> CreateStereoImage(
    flatbuffers::FlatBufferBuilder &_fbb,
    uint32_t height = 0,
    uint32_t width = 0,
    flatbuffers::Offset<flatbuffers::String> encoding = 0,
    uint8_t is_bigendian = 0,
    uint32_t step = 0,
    flatbuffers::Offset<flatbuffers::Vector<uint8_t>> data = 0) {
  StereoImageBuilder builder_(_fbb);
  builder_.add_data(data);
  builder_.add_step(step);
  builder_.add_encoding(encoding);
  builder_.add_width(width);
  builder_.add_height(height);
  builder_.add_is_bigendian(is_bigendian);
  return builder_.Finish();
}

inline flatbuffers::Offset<StereoImage> CreateStereoImageDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    uint32_t height = 0,
    uint32_t width = 0,
    const char *encoding = nullptr,
    uint8_t is_bigendian = 0,
    uint32_t step = 0,
    const std::vector<uint8_t> *data = nullptr) {
  return airsim_to_ros::CreateStereoImage(
      _fbb,
      height,
      width,
      encoding ? _fbb.CreateString(encoding) : 0,
      is_bigendian,
      step,
      data ? _fbb.CreateVector<uint8_t>(*data) : 0);
}

}  // namespace airsim_to_ros

#endif  // FLATBUFFERS_GENERATED_STEREOIMAGE_AIRSIM_TO_ROS_H_
