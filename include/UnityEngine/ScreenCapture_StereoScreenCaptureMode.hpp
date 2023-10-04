// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.ScreenCapture
#include "UnityEngine/ScreenCapture.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ScreenCapture::StereoScreenCaptureMode, "UnityEngine", "ScreenCapture/StereoScreenCaptureMode");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ScreenCapture/StereoScreenCaptureMode
  // [TokenAttribute] Offset: FFFFFFFF
  struct ScreenCapture::StereoScreenCaptureMode/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: StereoScreenCaptureMode
    constexpr StereoScreenCaptureMode(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.ScreenCapture/StereoScreenCaptureMode LeftEye
    static constexpr const int LeftEye = 1;
    // Get static field: static public UnityEngine.ScreenCapture/StereoScreenCaptureMode LeftEye
    static ::UnityEngine::ScreenCapture::StereoScreenCaptureMode _get_LeftEye();
    // Set static field: static public UnityEngine.ScreenCapture/StereoScreenCaptureMode LeftEye
    static void _set_LeftEye(::UnityEngine::ScreenCapture::StereoScreenCaptureMode value);
    // static field const value: static public UnityEngine.ScreenCapture/StereoScreenCaptureMode RightEye
    static constexpr const int RightEye = 2;
    // Get static field: static public UnityEngine.ScreenCapture/StereoScreenCaptureMode RightEye
    static ::UnityEngine::ScreenCapture::StereoScreenCaptureMode _get_RightEye();
    // Set static field: static public UnityEngine.ScreenCapture/StereoScreenCaptureMode RightEye
    static void _set_RightEye(::UnityEngine::ScreenCapture::StereoScreenCaptureMode value);
    // static field const value: static public UnityEngine.ScreenCapture/StereoScreenCaptureMode BothEyes
    static constexpr const int BothEyes = 3;
    // Get static field: static public UnityEngine.ScreenCapture/StereoScreenCaptureMode BothEyes
    static ::UnityEngine::ScreenCapture::StereoScreenCaptureMode _get_BothEyes();
    // Set static field: static public UnityEngine.ScreenCapture/StereoScreenCaptureMode BothEyes
    static void _set_BothEyes(::UnityEngine::ScreenCapture::StereoScreenCaptureMode value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // UnityEngine.ScreenCapture/StereoScreenCaptureMode
  #pragma pack(pop)
  static check_size<sizeof(ScreenCapture::StereoScreenCaptureMode), 0 + sizeof(int)> __UnityEngine_ScreenCapture_StereoScreenCaptureModeSizeCheck;
  static_assert(sizeof(ScreenCapture::StereoScreenCaptureMode) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
