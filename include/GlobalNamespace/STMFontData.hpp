// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.ScriptableObject
#include "UnityEngine/ScriptableObject.hpp"
// Including type: UnityEngine.FilterMode
#include "UnityEngine/FilterMode.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Font
  class Font;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: STMFontData
  class STMFontData;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::STMFontData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::STMFontData*, "", "STMFontData");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: STMFontData
  // [TokenAttribute] Offset: FFFFFFFF
  // [CreateAssetMenuAttribute] Offset: ACD774
  class STMFontData : public ::UnityEngine::ScriptableObject {
    public:
    public:
    // public UnityEngine.Font font
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::Font* font;
    // Field size check
    static_assert(sizeof(::UnityEngine::Font*) == 0x8);
    // [TooltipAttribute] Offset: 0xAD8CD4
    // public System.Boolean overrideQuality
    // Size: 0x1
    // Offset: 0x20
    bool overrideQuality;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: overrideQuality and: quality
    char __padding1[0x3] = {};
    // [RangeAttribute] Offset: 0xAD8D0C
    // [TooltipAttribute] Offset: 0xAD8D0C
    // public System.Int32 quality
    // Size: 0x4
    // Offset: 0x24
    int quality;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // [TooltipAttribute] Offset: 0xAD8D64
    // public System.Boolean overrideFilterMode
    // Size: 0x1
    // Offset: 0x28
    bool overrideFilterMode;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: overrideFilterMode and: filterMode
    char __padding3[0x3] = {};
    // public UnityEngine.FilterMode filterMode
    // Size: 0x4
    // Offset: 0x2C
    ::UnityEngine::FilterMode filterMode;
    // Field size check
    static_assert(sizeof(::UnityEngine::FilterMode) == 0x4);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public UnityEngine.Font font
    [[deprecated("Use field access instead!")]] ::UnityEngine::Font*& dyn_font();
    // Get instance field reference: public System.Boolean overrideQuality
    [[deprecated("Use field access instead!")]] bool& dyn_overrideQuality();
    // Get instance field reference: public System.Int32 quality
    [[deprecated("Use field access instead!")]] int& dyn_quality();
    // Get instance field reference: public System.Boolean overrideFilterMode
    [[deprecated("Use field access instead!")]] bool& dyn_overrideFilterMode();
    // Get instance field reference: public UnityEngine.FilterMode filterMode
    [[deprecated("Use field access instead!")]] ::UnityEngine::FilterMode& dyn_filterMode();
    // public System.Void .ctor(UnityEngine.Font font)
    // Offset: 0xE2E400
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static STMFontData* New_ctor(::UnityEngine::Font* font) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::STMFontData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<STMFontData*, creationType>(font)));
    }
  }; // STMFontData
  #pragma pack(pop)
  static check_size<sizeof(STMFontData), 44 + sizeof(::UnityEngine::FilterMode)> __GlobalNamespace_STMFontDataSizeCheck;
  static_assert(sizeof(STMFontData) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::STMFontData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!