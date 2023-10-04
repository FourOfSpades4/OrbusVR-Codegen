// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Including type: FMOD.DSP_RESAMPLER
#include "FMOD/DSP_RESAMPLER.hpp"
// Completed includes
// Type namespace: FMOD
namespace FMOD {
  // Forward declaring type: ADVANCEDSETTINGS
  struct ADVANCEDSETTINGS;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::FMOD::ADVANCEDSETTINGS, "FMOD", "ADVANCEDSETTINGS");
// Type namespace: FMOD
namespace FMOD {
  // Size: 0x78
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: FMOD.ADVANCEDSETTINGS
  // [TokenAttribute] Offset: FFFFFFFF
  struct ADVANCEDSETTINGS/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.Int32 cbSize
    // Size: 0x4
    // Offset: 0x0
    int cbSize;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 maxMPEGCodecs
    // Size: 0x4
    // Offset: 0x4
    int maxMPEGCodecs;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 maxADPCMCodecs
    // Size: 0x4
    // Offset: 0x8
    int maxADPCMCodecs;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 maxXMACodecs
    // Size: 0x4
    // Offset: 0xC
    int maxXMACodecs;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 maxVorbisCodecs
    // Size: 0x4
    // Offset: 0x10
    int maxVorbisCodecs;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 maxAT9Codecs
    // Size: 0x4
    // Offset: 0x14
    int maxAT9Codecs;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 maxFADPCMCodecs
    // Size: 0x4
    // Offset: 0x18
    int maxFADPCMCodecs;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 maxPCMCodecs
    // Size: 0x4
    // Offset: 0x1C
    int maxPCMCodecs;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 ASIONumChannels
    // Size: 0x4
    // Offset: 0x20
    int ASIONumChannels;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: ASIONumChannels and: ASIOChannelList
    char __padding8[0x4] = {};
    // public System.IntPtr ASIOChannelList
    // Size: 0x8
    // Offset: 0x28
    ::System::IntPtr ASIOChannelList;
    // Field size check
    static_assert(sizeof(::System::IntPtr) == 0x8);
    // public System.IntPtr ASIOSpeakerList
    // Size: 0x8
    // Offset: 0x30
    ::System::IntPtr ASIOSpeakerList;
    // Field size check
    static_assert(sizeof(::System::IntPtr) == 0x8);
    // public System.Single HRTFMinAngle
    // Size: 0x4
    // Offset: 0x38
    float HRTFMinAngle;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single HRTFMaxAngle
    // Size: 0x4
    // Offset: 0x3C
    float HRTFMaxAngle;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single HRTFFreq
    // Size: 0x4
    // Offset: 0x40
    float HRTFFreq;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single vol0virtualvol
    // Size: 0x4
    // Offset: 0x44
    float vol0virtualvol;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.UInt32 defaultDecodeBufferSize
    // Size: 0x4
    // Offset: 0x48
    uint defaultDecodeBufferSize;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // public System.UInt16 profilePort
    // Size: 0x2
    // Offset: 0x4C
    uint16_t profilePort;
    // Field size check
    static_assert(sizeof(uint16_t) == 0x2);
    // Padding between fields: profilePort and: geometryMaxFadeTime
    char __padding16[0x2] = {};
    // public System.UInt32 geometryMaxFadeTime
    // Size: 0x4
    // Offset: 0x50
    uint geometryMaxFadeTime;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // public System.Single distanceFilterCenterFreq
    // Size: 0x4
    // Offset: 0x54
    float distanceFilterCenterFreq;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Int32 reverb3Dinstance
    // Size: 0x4
    // Offset: 0x58
    int reverb3Dinstance;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 DSPBufferPoolSize
    // Size: 0x4
    // Offset: 0x5C
    int DSPBufferPoolSize;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.UInt32 stackSizeStream
    // Size: 0x4
    // Offset: 0x60
    uint stackSizeStream;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // public System.UInt32 stackSizeNonBlocking
    // Size: 0x4
    // Offset: 0x64
    uint stackSizeNonBlocking;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // public System.UInt32 stackSizeMixer
    // Size: 0x4
    // Offset: 0x68
    uint stackSizeMixer;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // public FMOD.DSP_RESAMPLER resamplerMethod
    // Size: 0x4
    // Offset: 0x6C
    ::FMOD::DSP_RESAMPLER resamplerMethod;
    // Field size check
    static_assert(sizeof(::FMOD::DSP_RESAMPLER) == 0x4);
    // public System.UInt32 commandQueueSize
    // Size: 0x4
    // Offset: 0x70
    uint commandQueueSize;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // public System.UInt32 randomSeed
    // Size: 0x4
    // Offset: 0x74
    uint randomSeed;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    public:
    // Creating value type constructor for type: ADVANCEDSETTINGS
    constexpr ADVANCEDSETTINGS(int cbSize_ = {}, int maxMPEGCodecs_ = {}, int maxADPCMCodecs_ = {}, int maxXMACodecs_ = {}, int maxVorbisCodecs_ = {}, int maxAT9Codecs_ = {}, int maxFADPCMCodecs_ = {}, int maxPCMCodecs_ = {}, int ASIONumChannels_ = {}, ::System::IntPtr ASIOChannelList_ = {}, ::System::IntPtr ASIOSpeakerList_ = {}, float HRTFMinAngle_ = {}, float HRTFMaxAngle_ = {}, float HRTFFreq_ = {}, float vol0virtualvol_ = {}, uint defaultDecodeBufferSize_ = {}, uint16_t profilePort_ = {}, uint geometryMaxFadeTime_ = {}, float distanceFilterCenterFreq_ = {}, int reverb3Dinstance_ = {}, int DSPBufferPoolSize_ = {}, uint stackSizeStream_ = {}, uint stackSizeNonBlocking_ = {}, uint stackSizeMixer_ = {}, ::FMOD::DSP_RESAMPLER resamplerMethod_ = {}, uint commandQueueSize_ = {}, uint randomSeed_ = {}) noexcept : cbSize{cbSize_}, maxMPEGCodecs{maxMPEGCodecs_}, maxADPCMCodecs{maxADPCMCodecs_}, maxXMACodecs{maxXMACodecs_}, maxVorbisCodecs{maxVorbisCodecs_}, maxAT9Codecs{maxAT9Codecs_}, maxFADPCMCodecs{maxFADPCMCodecs_}, maxPCMCodecs{maxPCMCodecs_}, ASIONumChannels{ASIONumChannels_}, ASIOChannelList{ASIOChannelList_}, ASIOSpeakerList{ASIOSpeakerList_}, HRTFMinAngle{HRTFMinAngle_}, HRTFMaxAngle{HRTFMaxAngle_}, HRTFFreq{HRTFFreq_}, vol0virtualvol{vol0virtualvol_}, defaultDecodeBufferSize{defaultDecodeBufferSize_}, profilePort{profilePort_}, geometryMaxFadeTime{geometryMaxFadeTime_}, distanceFilterCenterFreq{distanceFilterCenterFreq_}, reverb3Dinstance{reverb3Dinstance_}, DSPBufferPoolSize{DSPBufferPoolSize_}, stackSizeStream{stackSizeStream_}, stackSizeNonBlocking{stackSizeNonBlocking_}, stackSizeMixer{stackSizeMixer_}, resamplerMethod{resamplerMethod_}, commandQueueSize{commandQueueSize_}, randomSeed{randomSeed_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public System.Int32 cbSize
    [[deprecated("Use field access instead!")]] int& dyn_cbSize();
    // Get instance field reference: public System.Int32 maxMPEGCodecs
    [[deprecated("Use field access instead!")]] int& dyn_maxMPEGCodecs();
    // Get instance field reference: public System.Int32 maxADPCMCodecs
    [[deprecated("Use field access instead!")]] int& dyn_maxADPCMCodecs();
    // Get instance field reference: public System.Int32 maxXMACodecs
    [[deprecated("Use field access instead!")]] int& dyn_maxXMACodecs();
    // Get instance field reference: public System.Int32 maxVorbisCodecs
    [[deprecated("Use field access instead!")]] int& dyn_maxVorbisCodecs();
    // Get instance field reference: public System.Int32 maxAT9Codecs
    [[deprecated("Use field access instead!")]] int& dyn_maxAT9Codecs();
    // Get instance field reference: public System.Int32 maxFADPCMCodecs
    [[deprecated("Use field access instead!")]] int& dyn_maxFADPCMCodecs();
    // Get instance field reference: public System.Int32 maxPCMCodecs
    [[deprecated("Use field access instead!")]] int& dyn_maxPCMCodecs();
    // Get instance field reference: public System.Int32 ASIONumChannels
    [[deprecated("Use field access instead!")]] int& dyn_ASIONumChannels();
    // Get instance field reference: public System.IntPtr ASIOChannelList
    [[deprecated("Use field access instead!")]] ::System::IntPtr& dyn_ASIOChannelList();
    // Get instance field reference: public System.IntPtr ASIOSpeakerList
    [[deprecated("Use field access instead!")]] ::System::IntPtr& dyn_ASIOSpeakerList();
    // Get instance field reference: public System.Single HRTFMinAngle
    [[deprecated("Use field access instead!")]] float& dyn_HRTFMinAngle();
    // Get instance field reference: public System.Single HRTFMaxAngle
    [[deprecated("Use field access instead!")]] float& dyn_HRTFMaxAngle();
    // Get instance field reference: public System.Single HRTFFreq
    [[deprecated("Use field access instead!")]] float& dyn_HRTFFreq();
    // Get instance field reference: public System.Single vol0virtualvol
    [[deprecated("Use field access instead!")]] float& dyn_vol0virtualvol();
    // Get instance field reference: public System.UInt32 defaultDecodeBufferSize
    [[deprecated("Use field access instead!")]] uint& dyn_defaultDecodeBufferSize();
    // Get instance field reference: public System.UInt16 profilePort
    [[deprecated("Use field access instead!")]] uint16_t& dyn_profilePort();
    // Get instance field reference: public System.UInt32 geometryMaxFadeTime
    [[deprecated("Use field access instead!")]] uint& dyn_geometryMaxFadeTime();
    // Get instance field reference: public System.Single distanceFilterCenterFreq
    [[deprecated("Use field access instead!")]] float& dyn_distanceFilterCenterFreq();
    // Get instance field reference: public System.Int32 reverb3Dinstance
    [[deprecated("Use field access instead!")]] int& dyn_reverb3Dinstance();
    // Get instance field reference: public System.Int32 DSPBufferPoolSize
    [[deprecated("Use field access instead!")]] int& dyn_DSPBufferPoolSize();
    // Get instance field reference: public System.UInt32 stackSizeStream
    [[deprecated("Use field access instead!")]] uint& dyn_stackSizeStream();
    // Get instance field reference: public System.UInt32 stackSizeNonBlocking
    [[deprecated("Use field access instead!")]] uint& dyn_stackSizeNonBlocking();
    // Get instance field reference: public System.UInt32 stackSizeMixer
    [[deprecated("Use field access instead!")]] uint& dyn_stackSizeMixer();
    // Get instance field reference: public FMOD.DSP_RESAMPLER resamplerMethod
    [[deprecated("Use field access instead!")]] ::FMOD::DSP_RESAMPLER& dyn_resamplerMethod();
    // Get instance field reference: public System.UInt32 commandQueueSize
    [[deprecated("Use field access instead!")]] uint& dyn_commandQueueSize();
    // Get instance field reference: public System.UInt32 randomSeed
    [[deprecated("Use field access instead!")]] uint& dyn_randomSeed();
  }; // FMOD.ADVANCEDSETTINGS
  #pragma pack(pop)
  static check_size<sizeof(ADVANCEDSETTINGS), 116 + sizeof(uint)> __FMOD_ADVANCEDSETTINGSSizeCheck;
  static_assert(sizeof(ADVANCEDSETTINGS) == 0x78);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
