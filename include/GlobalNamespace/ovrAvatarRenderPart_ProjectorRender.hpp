// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: ovrAvatarTransform
#include "GlobalNamespace/ovrAvatarTransform.hpp"
// Including type: ovrAvatarMaterialState
#include "GlobalNamespace/ovrAvatarMaterialState.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: ovrAvatarRenderPart_ProjectorRender
  struct ovrAvatarRenderPart_ProjectorRender;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ovrAvatarRenderPart_ProjectorRender, "", "ovrAvatarRenderPart_ProjectorRender");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xD8
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: ovrAvatarRenderPart_ProjectorRender
  // [TokenAttribute] Offset: FFFFFFFF
  struct ovrAvatarRenderPart_ProjectorRender/*, public ::System::ValueType*/ {
    public:
    public:
    // public ovrAvatarTransform localTransform
    // Size: 0x28
    // Offset: 0x0
    ::GlobalNamespace::ovrAvatarTransform localTransform;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::ovrAvatarTransform) == 0x28);
    // public System.UInt32 componentIndex
    // Size: 0x4
    // Offset: 0x28
    uint componentIndex;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // public System.UInt32 renderPartIndex
    // Size: 0x4
    // Offset: 0x2C
    uint renderPartIndex;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // public ovrAvatarMaterialState materialState
    // Size: 0xA8
    // Offset: 0x30
    ::GlobalNamespace::ovrAvatarMaterialState materialState;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::ovrAvatarMaterialState) == 0xA8);
    public:
    // Creating value type constructor for type: ovrAvatarRenderPart_ProjectorRender
    constexpr ovrAvatarRenderPart_ProjectorRender(::GlobalNamespace::ovrAvatarTransform localTransform_ = {}, uint componentIndex_ = {}, uint renderPartIndex_ = {}, ::GlobalNamespace::ovrAvatarMaterialState materialState_ = {}) noexcept : localTransform{localTransform_}, componentIndex{componentIndex_}, renderPartIndex{renderPartIndex_}, materialState{materialState_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public ovrAvatarTransform localTransform
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::ovrAvatarTransform& dyn_localTransform();
    // Get instance field reference: public System.UInt32 componentIndex
    [[deprecated("Use field access instead!")]] uint& dyn_componentIndex();
    // Get instance field reference: public System.UInt32 renderPartIndex
    [[deprecated("Use field access instead!")]] uint& dyn_renderPartIndex();
    // Get instance field reference: public ovrAvatarMaterialState materialState
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::ovrAvatarMaterialState& dyn_materialState();
  }; // ovrAvatarRenderPart_ProjectorRender
  #pragma pack(pop)
  static check_size<sizeof(ovrAvatarRenderPart_ProjectorRender), 48 + sizeof(::GlobalNamespace::ovrAvatarMaterialState)> __GlobalNamespace_ovrAvatarRenderPart_ProjectorRenderSizeCheck;
  static_assert(sizeof(ovrAvatarRenderPart_ProjectorRender) == 0xD8);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"