// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.PropertyAttribute
#include "UnityEngine/PropertyAttribute.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: ColorUsageAttribute
  class ColorUsageAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::ColorUsageAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ColorUsageAttribute*, "UnityEngine", "ColorUsageAttribute");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x24
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ColorUsageAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: A70638
  class ColorUsageAttribute : public ::UnityEngine::PropertyAttribute {
    public:
    public:
    // public readonly System.Boolean showAlpha
    // Size: 0x1
    // Offset: 0x10
    bool showAlpha;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public readonly System.Boolean hdr
    // Size: 0x1
    // Offset: 0x11
    bool hdr;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: hdr and: minBrightness
    char __padding1[0x2] = {};
    // [ObsoleteAttribute] Offset: 0xA73490
    // public readonly System.Single minBrightness
    // Size: 0x4
    // Offset: 0x14
    float minBrightness;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [ObsoleteAttribute] Offset: 0xA734C8
    // public readonly System.Single maxBrightness
    // Size: 0x4
    // Offset: 0x18
    float maxBrightness;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [ObsoleteAttribute] Offset: 0xA73500
    // public readonly System.Single minExposureValue
    // Size: 0x4
    // Offset: 0x1C
    float minExposureValue;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [ObsoleteAttribute] Offset: 0xA73538
    // public readonly System.Single maxExposureValue
    // Size: 0x4
    // Offset: 0x20
    float maxExposureValue;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Get instance field reference: public readonly System.Boolean showAlpha
    [[deprecated("Use field access instead!")]] bool& dyn_showAlpha();
    // Get instance field reference: public readonly System.Boolean hdr
    [[deprecated("Use field access instead!")]] bool& dyn_hdr();
    // Get instance field reference: public readonly System.Single minBrightness
    [[deprecated("Use field access instead!")]] float& dyn_minBrightness();
    // Get instance field reference: public readonly System.Single maxBrightness
    [[deprecated("Use field access instead!")]] float& dyn_maxBrightness();
    // Get instance field reference: public readonly System.Single minExposureValue
    [[deprecated("Use field access instead!")]] float& dyn_minExposureValue();
    // Get instance field reference: public readonly System.Single maxExposureValue
    [[deprecated("Use field access instead!")]] float& dyn_maxExposureValue();
    // public System.Void .ctor(System.Boolean showAlpha)
    // Offset: 0x2041DBC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ColorUsageAttribute* New_ctor(bool showAlpha) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::ColorUsageAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ColorUsageAttribute*, creationType>(showAlpha)));
    }
    // public System.Void .ctor(System.Boolean showAlpha, System.Boolean hdr)
    // Offset: 0x2041E00
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ColorUsageAttribute* New_ctor(bool showAlpha, bool hdr) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::ColorUsageAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ColorUsageAttribute*, creationType>(showAlpha, hdr)));
    }
  }; // UnityEngine.ColorUsageAttribute
  #pragma pack(pop)
  static check_size<sizeof(ColorUsageAttribute), 32 + sizeof(float)> __UnityEngine_ColorUsageAttributeSizeCheck;
  static_assert(sizeof(ColorUsageAttribute) == 0x24);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ColorUsageAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::ColorUsageAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
