// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: DigitalOpus.MB.Core.TextureBlender
#include "DigitalOpus/MB/Core/TextureBlender.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Material
  class Material;
}
// Forward declaring namespace: DigitalOpus::MB::Core
namespace DigitalOpus::MB::Core {
  // Forward declaring type: TextureBlenderMaterialPropertyCacheHelper
  class TextureBlenderMaterialPropertyCacheHelper;
  // Forward declaring type: ShaderTextureProperty
  class ShaderTextureProperty;
}
// Completed forward declares
// Type namespace: DigitalOpus.MB.Core
namespace DigitalOpus::MB::Core {
  // Forward declaring type: TextureBlenderStandardMetallic
  class TextureBlenderStandardMetallic;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::DigitalOpus::MB::Core::TextureBlenderStandardMetallic);
DEFINE_IL2CPP_ARG_TYPE(::DigitalOpus::MB::Core::TextureBlenderStandardMetallic*, "DigitalOpus.MB.Core", "TextureBlenderStandardMetallic");
// Type namespace: DigitalOpus.MB.Core
namespace DigitalOpus::MB::Core {
  // Size: 0xAC
  #pragma pack(push, 1)
  // Autogenerated type: DigitalOpus.MB.Core.TextureBlenderStandardMetallic
  // [TokenAttribute] Offset: FFFFFFFF
  class TextureBlenderStandardMetallic : public ::Il2CppObject/*, public ::DigitalOpus::MB::Core::TextureBlender*/ {
    public:
    // Nested type: ::DigitalOpus::MB::Core::TextureBlenderStandardMetallic::Prop
    struct Prop;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: DigitalOpus.MB.Core.TextureBlenderStandardMetallic/Prop
    // [TokenAttribute] Offset: FFFFFFFF
    struct Prop/*, public ::System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: Prop
      constexpr Prop(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public DigitalOpus.MB.Core.TextureBlenderStandardMetallic/Prop doColor
      static constexpr const int doColor = 0;
      // Get static field: static public DigitalOpus.MB.Core.TextureBlenderStandardMetallic/Prop doColor
      static ::DigitalOpus::MB::Core::TextureBlenderStandardMetallic::Prop _get_doColor();
      // Set static field: static public DigitalOpus.MB.Core.TextureBlenderStandardMetallic/Prop doColor
      static void _set_doColor(::DigitalOpus::MB::Core::TextureBlenderStandardMetallic::Prop value);
      // static field const value: static public DigitalOpus.MB.Core.TextureBlenderStandardMetallic/Prop doMetallic
      static constexpr const int doMetallic = 1;
      // Get static field: static public DigitalOpus.MB.Core.TextureBlenderStandardMetallic/Prop doMetallic
      static ::DigitalOpus::MB::Core::TextureBlenderStandardMetallic::Prop _get_doMetallic();
      // Set static field: static public DigitalOpus.MB.Core.TextureBlenderStandardMetallic/Prop doMetallic
      static void _set_doMetallic(::DigitalOpus::MB::Core::TextureBlenderStandardMetallic::Prop value);
      // static field const value: static public DigitalOpus.MB.Core.TextureBlenderStandardMetallic/Prop doEmission
      static constexpr const int doEmission = 2;
      // Get static field: static public DigitalOpus.MB.Core.TextureBlenderStandardMetallic/Prop doEmission
      static ::DigitalOpus::MB::Core::TextureBlenderStandardMetallic::Prop _get_doEmission();
      // Set static field: static public DigitalOpus.MB.Core.TextureBlenderStandardMetallic/Prop doEmission
      static void _set_doEmission(::DigitalOpus::MB::Core::TextureBlenderStandardMetallic::Prop value);
      // static field const value: static public DigitalOpus.MB.Core.TextureBlenderStandardMetallic/Prop doBump
      static constexpr const int doBump = 3;
      // Get static field: static public DigitalOpus.MB.Core.TextureBlenderStandardMetallic/Prop doBump
      static ::DigitalOpus::MB::Core::TextureBlenderStandardMetallic::Prop _get_doBump();
      // Set static field: static public DigitalOpus.MB.Core.TextureBlenderStandardMetallic/Prop doBump
      static void _set_doBump(::DigitalOpus::MB::Core::TextureBlenderStandardMetallic::Prop value);
      // static field const value: static public DigitalOpus.MB.Core.TextureBlenderStandardMetallic/Prop doNone
      static constexpr const int doNone = 4;
      // Get static field: static public DigitalOpus.MB.Core.TextureBlenderStandardMetallic/Prop doNone
      static ::DigitalOpus::MB::Core::TextureBlenderStandardMetallic::Prop _get_doNone();
      // Set static field: static public DigitalOpus.MB.Core.TextureBlenderStandardMetallic/Prop doNone
      static void _set_doNone(::DigitalOpus::MB::Core::TextureBlenderStandardMetallic::Prop value);
      // Get instance field reference: public System.Int32 value__
      [[deprecated("Use field access instead!")]] int& dyn_value__();
    }; // DigitalOpus.MB.Core.TextureBlenderStandardMetallic/Prop
    #pragma pack(pop)
    static check_size<sizeof(TextureBlenderStandardMetallic::Prop), 0 + sizeof(int)> __DigitalOpus_MB_Core_TextureBlenderStandardMetallic_PropSizeCheck;
    static_assert(sizeof(TextureBlenderStandardMetallic::Prop) == 0x4);
    public:
    // private DigitalOpus.MB.Core.TextureBlenderMaterialPropertyCacheHelper sourceMaterialPropertyCache
    // Size: 0x8
    // Offset: 0x10
    ::DigitalOpus::MB::Core::TextureBlenderMaterialPropertyCacheHelper* sourceMaterialPropertyCache;
    // Field size check
    static_assert(sizeof(::DigitalOpus::MB::Core::TextureBlenderMaterialPropertyCacheHelper*) == 0x8);
    // private UnityEngine.Color m_tintColor
    // Size: 0x10
    // Offset: 0x18
    ::UnityEngine::Color m_tintColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // private System.Single m_glossiness
    // Size: 0x4
    // Offset: 0x28
    float m_glossiness;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single m_glossMapScale
    // Size: 0x4
    // Offset: 0x2C
    float m_glossMapScale;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single m_metallic
    // Size: 0x4
    // Offset: 0x30
    float m_metallic;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean m_hasMetallicGlossMap
    // Size: 0x1
    // Offset: 0x34
    bool m_hasMetallicGlossMap;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: m_hasMetallicGlossMap and: m_bumpScale
    char __padding5[0x3] = {};
    // private System.Single m_bumpScale
    // Size: 0x4
    // Offset: 0x38
    float m_bumpScale;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean m_shaderDoesEmission
    // Size: 0x1
    // Offset: 0x3C
    bool m_shaderDoesEmission;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: m_shaderDoesEmission and: m_emissionColor
    char __padding7[0x3] = {};
    // private UnityEngine.Color m_emissionColor
    // Size: 0x10
    // Offset: 0x40
    ::UnityEngine::Color m_emissionColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // private DigitalOpus.MB.Core.TextureBlenderStandardMetallic/Prop propertyToDo
    // Size: 0x4
    // Offset: 0x50
    ::DigitalOpus::MB::Core::TextureBlenderStandardMetallic::Prop propertyToDo;
    // Field size check
    static_assert(sizeof(::DigitalOpus::MB::Core::TextureBlenderStandardMetallic::Prop) == 0x4);
    // private UnityEngine.Color m_generatingTintedAtlasColor
    // Size: 0x10
    // Offset: 0x54
    ::UnityEngine::Color m_generatingTintedAtlasColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // private System.Single m_generatingTintedAtlasMetallic
    // Size: 0x4
    // Offset: 0x64
    float m_generatingTintedAtlasMetallic;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single m_generatingTintedAtlasGlossiness
    // Size: 0x4
    // Offset: 0x68
    float m_generatingTintedAtlasGlossiness;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single m_generatingTintedAtlasGlossMapScale
    // Size: 0x4
    // Offset: 0x6C
    float m_generatingTintedAtlasGlossMapScale;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single m_generatingTintedAtlasBumpScale
    // Size: 0x4
    // Offset: 0x70
    float m_generatingTintedAtlasBumpScale;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.Color m_generatingTintedAtlasEmission
    // Size: 0x10
    // Offset: 0x74
    ::UnityEngine::Color m_generatingTintedAtlasEmission;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // private UnityEngine.Color m_notGeneratingAtlasDefaultColor
    // Size: 0x10
    // Offset: 0x84
    ::UnityEngine::Color m_notGeneratingAtlasDefaultColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // private System.Single m_notGeneratingAtlasDefaultMetallic
    // Size: 0x4
    // Offset: 0x94
    float m_notGeneratingAtlasDefaultMetallic;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single m_notGeneratingAtlasDefaultGlossiness
    // Size: 0x4
    // Offset: 0x98
    float m_notGeneratingAtlasDefaultGlossiness;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.Color m_notGeneratingAtlasDefaultEmisionColor
    // Size: 0x10
    // Offset: 0x9C
    ::UnityEngine::Color m_notGeneratingAtlasDefaultEmisionColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    public:
    // Creating interface conversion operator: operator ::DigitalOpus::MB::Core::TextureBlender
    operator ::DigitalOpus::MB::Core::TextureBlender() noexcept {
      return *reinterpret_cast<::DigitalOpus::MB::Core::TextureBlender*>(this);
    }
    // Get static field: static private UnityEngine.Color NeutralNormalMap
    static ::UnityEngine::Color _get_NeutralNormalMap();
    // Set static field: static private UnityEngine.Color NeutralNormalMap
    static void _set_NeutralNormalMap(::UnityEngine::Color value);
    // Get instance field reference: private DigitalOpus.MB.Core.TextureBlenderMaterialPropertyCacheHelper sourceMaterialPropertyCache
    [[deprecated("Use field access instead!")]] ::DigitalOpus::MB::Core::TextureBlenderMaterialPropertyCacheHelper*& dyn_sourceMaterialPropertyCache();
    // Get instance field reference: private UnityEngine.Color m_tintColor
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color& dyn_m_tintColor();
    // Get instance field reference: private System.Single m_glossiness
    [[deprecated("Use field access instead!")]] float& dyn_m_glossiness();
    // Get instance field reference: private System.Single m_glossMapScale
    [[deprecated("Use field access instead!")]] float& dyn_m_glossMapScale();
    // Get instance field reference: private System.Single m_metallic
    [[deprecated("Use field access instead!")]] float& dyn_m_metallic();
    // Get instance field reference: private System.Boolean m_hasMetallicGlossMap
    [[deprecated("Use field access instead!")]] bool& dyn_m_hasMetallicGlossMap();
    // Get instance field reference: private System.Single m_bumpScale
    [[deprecated("Use field access instead!")]] float& dyn_m_bumpScale();
    // Get instance field reference: private System.Boolean m_shaderDoesEmission
    [[deprecated("Use field access instead!")]] bool& dyn_m_shaderDoesEmission();
    // Get instance field reference: private UnityEngine.Color m_emissionColor
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color& dyn_m_emissionColor();
    // Get instance field reference: private DigitalOpus.MB.Core.TextureBlenderStandardMetallic/Prop propertyToDo
    [[deprecated("Use field access instead!")]] ::DigitalOpus::MB::Core::TextureBlenderStandardMetallic::Prop& dyn_propertyToDo();
    // Get instance field reference: private UnityEngine.Color m_generatingTintedAtlasColor
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color& dyn_m_generatingTintedAtlasColor();
    // Get instance field reference: private System.Single m_generatingTintedAtlasMetallic
    [[deprecated("Use field access instead!")]] float& dyn_m_generatingTintedAtlasMetallic();
    // Get instance field reference: private System.Single m_generatingTintedAtlasGlossiness
    [[deprecated("Use field access instead!")]] float& dyn_m_generatingTintedAtlasGlossiness();
    // Get instance field reference: private System.Single m_generatingTintedAtlasGlossMapScale
    [[deprecated("Use field access instead!")]] float& dyn_m_generatingTintedAtlasGlossMapScale();
    // Get instance field reference: private System.Single m_generatingTintedAtlasBumpScale
    [[deprecated("Use field access instead!")]] float& dyn_m_generatingTintedAtlasBumpScale();
    // Get instance field reference: private UnityEngine.Color m_generatingTintedAtlasEmission
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color& dyn_m_generatingTintedAtlasEmission();
    // Get instance field reference: private UnityEngine.Color m_notGeneratingAtlasDefaultColor
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color& dyn_m_notGeneratingAtlasDefaultColor();
    // Get instance field reference: private System.Single m_notGeneratingAtlasDefaultMetallic
    [[deprecated("Use field access instead!")]] float& dyn_m_notGeneratingAtlasDefaultMetallic();
    // Get instance field reference: private System.Single m_notGeneratingAtlasDefaultGlossiness
    [[deprecated("Use field access instead!")]] float& dyn_m_notGeneratingAtlasDefaultGlossiness();
    // Get instance field reference: private UnityEngine.Color m_notGeneratingAtlasDefaultEmisionColor
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color& dyn_m_notGeneratingAtlasDefaultEmisionColor();
    // public System.Boolean DoesShaderNameMatch(System.String shaderName)
    // Offset: 0xF3F55C
    bool DoesShaderNameMatch(::StringW shaderName);
    // public System.Void OnBeforeTintTexture(UnityEngine.Material sourceMat, System.String shaderTexturePropertyName)
    // Offset: 0xF3F5BC
    void OnBeforeTintTexture(::UnityEngine::Material* sourceMat, ::StringW shaderTexturePropertyName);
    // public UnityEngine.Color OnBlendTexturePixel(System.String propertyToDoshaderPropertyName, UnityEngine.Color pixelColor)
    // Offset: 0xF3F9C0
    ::UnityEngine::Color OnBlendTexturePixel(::StringW propertyToDoshaderPropertyName, ::UnityEngine::Color pixelColor);
    // public System.Boolean NonTexturePropertiesAreEqual(UnityEngine.Material a, UnityEngine.Material b)
    // Offset: 0xF3FB4C
    bool NonTexturePropertiesAreEqual(::UnityEngine::Material* a, ::UnityEngine::Material* b);
    // public System.Void SetNonTexturePropertyValuesOnResultMaterial(UnityEngine.Material resultMaterial)
    // Offset: 0xF3FDD0
    void SetNonTexturePropertyValuesOnResultMaterial(::UnityEngine::Material* resultMaterial);
    // public UnityEngine.Color GetColorIfNoTexture(UnityEngine.Material mat, DigitalOpus.MB.Core.ShaderTextureProperty texPropertyName)
    // Offset: 0xF402E4
    ::UnityEngine::Color GetColorIfNoTexture(::UnityEngine::Material* mat, ::DigitalOpus::MB::Core::ShaderTextureProperty* texPropertyName);
    // public System.Void .ctor()
    // Offset: 0xF40A44
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TextureBlenderStandardMetallic* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::DigitalOpus::MB::Core::TextureBlenderStandardMetallic::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TextureBlenderStandardMetallic*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0xF40B08
    static void _cctor();
  }; // DigitalOpus.MB.Core.TextureBlenderStandardMetallic
  #pragma pack(pop)
  static check_size<sizeof(TextureBlenderStandardMetallic), 156 + sizeof(::UnityEngine::Color)> __DigitalOpus_MB_Core_TextureBlenderStandardMetallicSizeCheck;
  static_assert(sizeof(TextureBlenderStandardMetallic) == 0xAC);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::DigitalOpus::MB::Core::TextureBlenderStandardMetallic::Prop, "DigitalOpus.MB.Core", "TextureBlenderStandardMetallic/Prop");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: DigitalOpus::MB::Core::TextureBlenderStandardMetallic::DoesShaderNameMatch
// Il2CppName: DoesShaderNameMatch
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (DigitalOpus::MB::Core::TextureBlenderStandardMetallic::*)(::StringW)>(&DigitalOpus::MB::Core::TextureBlenderStandardMetallic::DoesShaderNameMatch)> {
  static const MethodInfo* get() {
    static auto* shaderName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::TextureBlenderStandardMetallic*), "DoesShaderNameMatch", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{shaderName});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::TextureBlenderStandardMetallic::OnBeforeTintTexture
// Il2CppName: OnBeforeTintTexture
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (DigitalOpus::MB::Core::TextureBlenderStandardMetallic::*)(::UnityEngine::Material*, ::StringW)>(&DigitalOpus::MB::Core::TextureBlenderStandardMetallic::OnBeforeTintTexture)> {
  static const MethodInfo* get() {
    static auto* sourceMat = &::il2cpp_utils::GetClassFromName("UnityEngine", "Material")->byval_arg;
    static auto* shaderTexturePropertyName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::TextureBlenderStandardMetallic*), "OnBeforeTintTexture", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sourceMat, shaderTexturePropertyName});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::TextureBlenderStandardMetallic::OnBlendTexturePixel
// Il2CppName: OnBlendTexturePixel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (DigitalOpus::MB::Core::TextureBlenderStandardMetallic::*)(::StringW, ::UnityEngine::Color)>(&DigitalOpus::MB::Core::TextureBlenderStandardMetallic::OnBlendTexturePixel)> {
  static const MethodInfo* get() {
    static auto* propertyToDoshaderPropertyName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* pixelColor = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::TextureBlenderStandardMetallic*), "OnBlendTexturePixel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{propertyToDoshaderPropertyName, pixelColor});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::TextureBlenderStandardMetallic::NonTexturePropertiesAreEqual
// Il2CppName: NonTexturePropertiesAreEqual
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (DigitalOpus::MB::Core::TextureBlenderStandardMetallic::*)(::UnityEngine::Material*, ::UnityEngine::Material*)>(&DigitalOpus::MB::Core::TextureBlenderStandardMetallic::NonTexturePropertiesAreEqual)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("UnityEngine", "Material")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("UnityEngine", "Material")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::TextureBlenderStandardMetallic*), "NonTexturePropertiesAreEqual", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, b});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::TextureBlenderStandardMetallic::SetNonTexturePropertyValuesOnResultMaterial
// Il2CppName: SetNonTexturePropertyValuesOnResultMaterial
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (DigitalOpus::MB::Core::TextureBlenderStandardMetallic::*)(::UnityEngine::Material*)>(&DigitalOpus::MB::Core::TextureBlenderStandardMetallic::SetNonTexturePropertyValuesOnResultMaterial)> {
  static const MethodInfo* get() {
    static auto* resultMaterial = &::il2cpp_utils::GetClassFromName("UnityEngine", "Material")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::TextureBlenderStandardMetallic*), "SetNonTexturePropertyValuesOnResultMaterial", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{resultMaterial});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::TextureBlenderStandardMetallic::GetColorIfNoTexture
// Il2CppName: GetColorIfNoTexture
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (DigitalOpus::MB::Core::TextureBlenderStandardMetallic::*)(::UnityEngine::Material*, ::DigitalOpus::MB::Core::ShaderTextureProperty*)>(&DigitalOpus::MB::Core::TextureBlenderStandardMetallic::GetColorIfNoTexture)> {
  static const MethodInfo* get() {
    static auto* mat = &::il2cpp_utils::GetClassFromName("UnityEngine", "Material")->byval_arg;
    static auto* texPropertyName = &::il2cpp_utils::GetClassFromName("DigitalOpus.MB.Core", "ShaderTextureProperty")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::TextureBlenderStandardMetallic*), "GetColorIfNoTexture", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mat, texPropertyName});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::TextureBlenderStandardMetallic::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: DigitalOpus::MB::Core::TextureBlenderStandardMetallic::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&DigitalOpus::MB::Core::TextureBlenderStandardMetallic::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::TextureBlenderStandardMetallic*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
