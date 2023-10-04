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
  // Forward declaring type: IVRDriverManager
  struct IVRDriverManager;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRDriverManager, "OVR.OpenVR", "IVRDriverManager");
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0x18
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: OVR.OpenVR.IVRDriverManager
  // [TokenAttribute] Offset: FFFFFFFF
  struct IVRDriverManager/*, public ::System::ValueType*/ {
    public:
    // Nested type: ::OVR::OpenVR::IVRDriverManager::_GetDriverCount
    class _GetDriverCount;
    // Nested type: ::OVR::OpenVR::IVRDriverManager::_GetDriverName
    class _GetDriverName;
    // Nested type: ::OVR::OpenVR::IVRDriverManager::_GetDriverHandle
    class _GetDriverHandle;
    public:
    // OVR.OpenVR.IVRDriverManager/_GetDriverCount GetDriverCount
    // Size: 0x8
    // Offset: 0x0
    ::OVR::OpenVR::IVRDriverManager::_GetDriverCount* GetDriverCount;
    // Field size check
    static_assert(sizeof(::OVR::OpenVR::IVRDriverManager::_GetDriverCount*) == 0x8);
    // OVR.OpenVR.IVRDriverManager/_GetDriverName GetDriverName
    // Size: 0x8
    // Offset: 0x8
    ::OVR::OpenVR::IVRDriverManager::_GetDriverName* GetDriverName;
    // Field size check
    static_assert(sizeof(::OVR::OpenVR::IVRDriverManager::_GetDriverName*) == 0x8);
    // OVR.OpenVR.IVRDriverManager/_GetDriverHandle GetDriverHandle
    // Size: 0x8
    // Offset: 0x10
    ::OVR::OpenVR::IVRDriverManager::_GetDriverHandle* GetDriverHandle;
    // Field size check
    static_assert(sizeof(::OVR::OpenVR::IVRDriverManager::_GetDriverHandle*) == 0x8);
    public:
    // Creating value type constructor for type: IVRDriverManager
    constexpr IVRDriverManager(::OVR::OpenVR::IVRDriverManager::_GetDriverCount* GetDriverCount_ = {}, ::OVR::OpenVR::IVRDriverManager::_GetDriverName* GetDriverName_ = {}, ::OVR::OpenVR::IVRDriverManager::_GetDriverHandle* GetDriverHandle_ = {}) noexcept : GetDriverCount{GetDriverCount_}, GetDriverName{GetDriverName_}, GetDriverHandle{GetDriverHandle_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: OVR.OpenVR.IVRDriverManager/_GetDriverCount GetDriverCount
    [[deprecated("Use field access instead!")]] ::OVR::OpenVR::IVRDriverManager::_GetDriverCount*& dyn_GetDriverCount();
    // Get instance field reference: OVR.OpenVR.IVRDriverManager/_GetDriverName GetDriverName
    [[deprecated("Use field access instead!")]] ::OVR::OpenVR::IVRDriverManager::_GetDriverName*& dyn_GetDriverName();
    // Get instance field reference: OVR.OpenVR.IVRDriverManager/_GetDriverHandle GetDriverHandle
    [[deprecated("Use field access instead!")]] ::OVR::OpenVR::IVRDriverManager::_GetDriverHandle*& dyn_GetDriverHandle();
  }; // OVR.OpenVR.IVRDriverManager
  #pragma pack(pop)
  static check_size<sizeof(IVRDriverManager), 16 + sizeof(::OVR::OpenVR::IVRDriverManager::_GetDriverHandle*)> __OVR_OpenVR_IVRDriverManagerSizeCheck;
  static_assert(sizeof(IVRDriverManager) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
