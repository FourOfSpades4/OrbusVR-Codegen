// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: OVR::OpenVR
namespace OVR::OpenVR {
}
// Completed forward declares
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Forward declaring type: IVRExtendedDisplay
  struct IVRExtendedDisplay;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRExtendedDisplay, "OVR.OpenVR", "IVRExtendedDisplay");
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0x18
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: OVR.OpenVR.IVRExtendedDisplay
  // [TokenAttribute] Offset: FFFFFFFF
  struct IVRExtendedDisplay/*, public ::System::ValueType*/ {
    public:
    // Nested type: ::OVR::OpenVR::IVRExtendedDisplay::_GetWindowBounds
    class _GetWindowBounds;
    // Nested type: ::OVR::OpenVR::IVRExtendedDisplay::_GetEyeOutputViewport
    class _GetEyeOutputViewport;
    // Nested type: ::OVR::OpenVR::IVRExtendedDisplay::_GetDXGIOutputInfo
    class _GetDXGIOutputInfo;
    public:
    // OVR.OpenVR.IVRExtendedDisplay/_GetWindowBounds GetWindowBounds
    // Size: 0x8
    // Offset: 0x0
    ::OVR::OpenVR::IVRExtendedDisplay::_GetWindowBounds* GetWindowBounds;
    // Field size check
    static_assert(sizeof(::OVR::OpenVR::IVRExtendedDisplay::_GetWindowBounds*) == 0x8);
    // OVR.OpenVR.IVRExtendedDisplay/_GetEyeOutputViewport GetEyeOutputViewport
    // Size: 0x8
    // Offset: 0x8
    ::OVR::OpenVR::IVRExtendedDisplay::_GetEyeOutputViewport* GetEyeOutputViewport;
    // Field size check
    static_assert(sizeof(::OVR::OpenVR::IVRExtendedDisplay::_GetEyeOutputViewport*) == 0x8);
    // OVR.OpenVR.IVRExtendedDisplay/_GetDXGIOutputInfo GetDXGIOutputInfo
    // Size: 0x8
    // Offset: 0x10
    ::OVR::OpenVR::IVRExtendedDisplay::_GetDXGIOutputInfo* GetDXGIOutputInfo;
    // Field size check
    static_assert(sizeof(::OVR::OpenVR::IVRExtendedDisplay::_GetDXGIOutputInfo*) == 0x8);
    public:
    // Creating value type constructor for type: IVRExtendedDisplay
    constexpr IVRExtendedDisplay(::OVR::OpenVR::IVRExtendedDisplay::_GetWindowBounds* GetWindowBounds_ = {}, ::OVR::OpenVR::IVRExtendedDisplay::_GetEyeOutputViewport* GetEyeOutputViewport_ = {}, ::OVR::OpenVR::IVRExtendedDisplay::_GetDXGIOutputInfo* GetDXGIOutputInfo_ = {}) noexcept : GetWindowBounds{GetWindowBounds_}, GetEyeOutputViewport{GetEyeOutputViewport_}, GetDXGIOutputInfo{GetDXGIOutputInfo_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: OVR.OpenVR.IVRExtendedDisplay/_GetWindowBounds GetWindowBounds
    [[deprecated("Use field access instead!")]] ::OVR::OpenVR::IVRExtendedDisplay::_GetWindowBounds*& dyn_GetWindowBounds();
    // Get instance field reference: OVR.OpenVR.IVRExtendedDisplay/_GetEyeOutputViewport GetEyeOutputViewport
    [[deprecated("Use field access instead!")]] ::OVR::OpenVR::IVRExtendedDisplay::_GetEyeOutputViewport*& dyn_GetEyeOutputViewport();
    // Get instance field reference: OVR.OpenVR.IVRExtendedDisplay/_GetDXGIOutputInfo GetDXGIOutputInfo
    [[deprecated("Use field access instead!")]] ::OVR::OpenVR::IVRExtendedDisplay::_GetDXGIOutputInfo*& dyn_GetDXGIOutputInfo();
  }; // OVR.OpenVR.IVRExtendedDisplay
  #pragma pack(pop)
  static check_size<sizeof(IVRExtendedDisplay), 16 + sizeof(::OVR::OpenVR::IVRExtendedDisplay::_GetDXGIOutputInfo*)> __OVR_OpenVR_IVRExtendedDisplaySizeCheck;
  static_assert(sizeof(IVRExtendedDisplay) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"