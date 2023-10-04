// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.UI.StencilMaterial
#include "UnityEngine/UI/StencilMaterial.hpp"
// Including type: UnityEngine.Rendering.StencilOp
#include "UnityEngine/Rendering/StencilOp.hpp"
// Including type: UnityEngine.Rendering.CompareFunction
#include "UnityEngine/Rendering/CompareFunction.hpp"
// Including type: UnityEngine.Rendering.ColorWriteMask
#include "UnityEngine/Rendering/ColorWriteMask.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Material
  class Material;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::UI::StencilMaterial::MatEntry);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::StencilMaterial::MatEntry*, "UnityEngine.UI", "StencilMaterial/MatEntry");
// Type namespace: UnityEngine.UI
namespace UnityEngine::UI {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UI.StencilMaterial/MatEntry
  // [TokenAttribute] Offset: FFFFFFFF
  class StencilMaterial::MatEntry : public ::Il2CppObject {
    public:
    public:
    // public UnityEngine.Material baseMat
    // Size: 0x8
    // Offset: 0x10
    ::UnityEngine::Material* baseMat;
    // Field size check
    static_assert(sizeof(::UnityEngine::Material*) == 0x8);
    // public UnityEngine.Material customMat
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::Material* customMat;
    // Field size check
    static_assert(sizeof(::UnityEngine::Material*) == 0x8);
    // public System.Int32 count
    // Size: 0x4
    // Offset: 0x20
    int count;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 stencilId
    // Size: 0x4
    // Offset: 0x24
    int stencilId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public UnityEngine.Rendering.StencilOp operation
    // Size: 0x4
    // Offset: 0x28
    ::UnityEngine::Rendering::StencilOp operation;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::StencilOp) == 0x4);
    // public UnityEngine.Rendering.CompareFunction compareFunction
    // Size: 0x4
    // Offset: 0x2C
    ::UnityEngine::Rendering::CompareFunction compareFunction;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::CompareFunction) == 0x4);
    // public System.Int32 readMask
    // Size: 0x4
    // Offset: 0x30
    int readMask;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 writeMask
    // Size: 0x4
    // Offset: 0x34
    int writeMask;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Boolean useAlphaClip
    // Size: 0x1
    // Offset: 0x38
    bool useAlphaClip;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: useAlphaClip and: colorMask
    char __padding8[0x3] = {};
    // public UnityEngine.Rendering.ColorWriteMask colorMask
    // Size: 0x4
    // Offset: 0x3C
    ::UnityEngine::Rendering::ColorWriteMask colorMask;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::ColorWriteMask) == 0x4);
    public:
    // Get instance field reference: public UnityEngine.Material baseMat
    [[deprecated("Use field access instead!")]] ::UnityEngine::Material*& dyn_baseMat();
    // Get instance field reference: public UnityEngine.Material customMat
    [[deprecated("Use field access instead!")]] ::UnityEngine::Material*& dyn_customMat();
    // Get instance field reference: public System.Int32 count
    [[deprecated("Use field access instead!")]] int& dyn_count();
    // Get instance field reference: public System.Int32 stencilId
    [[deprecated("Use field access instead!")]] int& dyn_stencilId();
    // Get instance field reference: public UnityEngine.Rendering.StencilOp operation
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::StencilOp& dyn_operation();
    // Get instance field reference: public UnityEngine.Rendering.CompareFunction compareFunction
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::CompareFunction& dyn_compareFunction();
    // Get instance field reference: public System.Int32 readMask
    [[deprecated("Use field access instead!")]] int& dyn_readMask();
    // Get instance field reference: public System.Int32 writeMask
    [[deprecated("Use field access instead!")]] int& dyn_writeMask();
    // Get instance field reference: public System.Boolean useAlphaClip
    [[deprecated("Use field access instead!")]] bool& dyn_useAlphaClip();
    // Get instance field reference: public UnityEngine.Rendering.ColorWriteMask colorMask
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::ColorWriteMask& dyn_colorMask();
    // public System.Void .ctor()
    // Offset: 0x1E1B000
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StencilMaterial::MatEntry* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UI::StencilMaterial::MatEntry::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StencilMaterial::MatEntry*, creationType>()));
    }
  }; // UnityEngine.UI.StencilMaterial/MatEntry
  #pragma pack(pop)
  static check_size<sizeof(StencilMaterial::MatEntry), 60 + sizeof(::UnityEngine::Rendering::ColorWriteMask)> __UnityEngine_UI_StencilMaterial_MatEntrySizeCheck;
  static_assert(sizeof(StencilMaterial::MatEntry) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UI::StencilMaterial::MatEntry::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!