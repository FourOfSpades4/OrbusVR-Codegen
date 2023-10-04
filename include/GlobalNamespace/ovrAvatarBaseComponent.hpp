// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: ovrAvatarBaseComponent
  struct ovrAvatarBaseComponent;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ovrAvatarBaseComponent, "", "ovrAvatarBaseComponent");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: ovrAvatarBaseComponent
  // [TokenAttribute] Offset: FFFFFFFF
  struct ovrAvatarBaseComponent/*, public ::System::ValueType*/ {
    public:
    public:
    // public UnityEngine.Vector3 basePosition
    // Size: 0xC
    // Offset: 0x0
    ::UnityEngine::Vector3 basePosition;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // Padding between fields: basePosition and: renderComponent
    char __padding0[0x4] = {};
    // public System.IntPtr renderComponent
    // Size: 0x8
    // Offset: 0x10
    ::System::IntPtr renderComponent;
    // Field size check
    static_assert(sizeof(::System::IntPtr) == 0x8);
    public:
    // Creating value type constructor for type: ovrAvatarBaseComponent
    constexpr ovrAvatarBaseComponent(::UnityEngine::Vector3 basePosition_ = {}, ::System::IntPtr renderComponent_ = {}) noexcept : basePosition{basePosition_}, renderComponent{renderComponent_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public UnityEngine.Vector3 basePosition
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_basePosition();
    // Get instance field reference: public System.IntPtr renderComponent
    [[deprecated("Use field access instead!")]] ::System::IntPtr& dyn_renderComponent();
  }; // ovrAvatarBaseComponent
  #pragma pack(pop)
  static check_size<sizeof(ovrAvatarBaseComponent), 16 + sizeof(::System::IntPtr)> __GlobalNamespace_ovrAvatarBaseComponentSizeCheck;
  static_assert(sizeof(ovrAvatarBaseComponent) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
