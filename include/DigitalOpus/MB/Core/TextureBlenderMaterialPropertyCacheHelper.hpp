// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
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
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Completed forward declares
// Type namespace: DigitalOpus.MB.Core
namespace DigitalOpus::MB::Core {
  // Forward declaring type: TextureBlenderMaterialPropertyCacheHelper
  class TextureBlenderMaterialPropertyCacheHelper;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::DigitalOpus::MB::Core::TextureBlenderMaterialPropertyCacheHelper);
DEFINE_IL2CPP_ARG_TYPE(::DigitalOpus::MB::Core::TextureBlenderMaterialPropertyCacheHelper*, "DigitalOpus.MB.Core", "TextureBlenderMaterialPropertyCacheHelper");
// Type namespace: DigitalOpus.MB.Core
namespace DigitalOpus::MB::Core {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: DigitalOpus.MB.Core.TextureBlenderMaterialPropertyCacheHelper
  // [TokenAttribute] Offset: FFFFFFFF
  class TextureBlenderMaterialPropertyCacheHelper : public ::Il2CppObject {
    public:
    // Nested type: ::DigitalOpus::MB::Core::TextureBlenderMaterialPropertyCacheHelper::MaterialPropertyPair
    struct MaterialPropertyPair;
    // Size: 0x10
    #pragma pack(push, 1)
    // WARNING Layout: Sequential may not be correctly taken into account!
    // Autogenerated type: DigitalOpus.MB.Core.TextureBlenderMaterialPropertyCacheHelper/MaterialPropertyPair
    // [TokenAttribute] Offset: FFFFFFFF
    struct MaterialPropertyPair/*, public ::System::ValueType*/ {
      public:
      public:
      // public UnityEngine.Material material
      // Size: 0x8
      // Offset: 0x0
      ::UnityEngine::Material* material;
      // Field size check
      static_assert(sizeof(::UnityEngine::Material*) == 0x8);
      // public System.String property
      // Size: 0x8
      // Offset: 0x8
      ::StringW property;
      // Field size check
      static_assert(sizeof(::StringW) == 0x8);
      public:
      // Creating value type constructor for type: MaterialPropertyPair
      constexpr MaterialPropertyPair(::UnityEngine::Material* material_ = {}, ::StringW property_ = {}) noexcept : material{material_}, property{property_} {}
      // Creating interface conversion operator: operator ::System::ValueType
      operator ::System::ValueType() noexcept {
        return *reinterpret_cast<::System::ValueType*>(this);
      }
      // Get instance field reference: public UnityEngine.Material material
      [[deprecated("Use field access instead!")]] ::UnityEngine::Material*& dyn_material();
      // Get instance field reference: public System.String property
      [[deprecated("Use field access instead!")]] ::StringW& dyn_property();
      // public System.Void .ctor(UnityEngine.Material m, System.String prop)
      // Offset: 0xB94174
      // ABORTED: conflicts with another method.  MaterialPropertyPair(::UnityEngine::Material* m, ::StringW prop);
      // public override System.Boolean Equals(System.Object obj)
      // Offset: 0xB9417C
      // Implemented from: System.ValueType
      // Base method: System.Boolean ValueType::Equals(System.Object obj)
      bool Equals(::Il2CppObject* obj);
      // public override System.Int32 GetHashCode()
      // Offset: 0xB94184
      // Implemented from: System.ValueType
      // Base method: System.Int32 ValueType::GetHashCode()
      int GetHashCode();
    }; // DigitalOpus.MB.Core.TextureBlenderMaterialPropertyCacheHelper/MaterialPropertyPair
    #pragma pack(pop)
    static check_size<sizeof(TextureBlenderMaterialPropertyCacheHelper::MaterialPropertyPair), 8 + sizeof(::StringW)> __DigitalOpus_MB_Core_TextureBlenderMaterialPropertyCacheHelper_MaterialPropertyPairSizeCheck;
    static_assert(sizeof(TextureBlenderMaterialPropertyCacheHelper::MaterialPropertyPair) == 0x10);
    public:
    // private System.Collections.Generic.Dictionary`2<DigitalOpus.MB.Core.TextureBlenderMaterialPropertyCacheHelper/MaterialPropertyPair,System.Object> nonTexturePropertyValuesForSourceMaterials
    // Size: 0x8
    // Offset: 0x10
    ::System::Collections::Generic::Dictionary_2<::DigitalOpus::MB::Core::TextureBlenderMaterialPropertyCacheHelper::MaterialPropertyPair, ::Il2CppObject*>* nonTexturePropertyValuesForSourceMaterials;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Dictionary_2<::DigitalOpus::MB::Core::TextureBlenderMaterialPropertyCacheHelper::MaterialPropertyPair, ::Il2CppObject*>*) == 0x8);
    public:
    // Creating conversion operator: operator ::System::Collections::Generic::Dictionary_2<::DigitalOpus::MB::Core::TextureBlenderMaterialPropertyCacheHelper::MaterialPropertyPair, ::Il2CppObject*>*
    constexpr operator ::System::Collections::Generic::Dictionary_2<::DigitalOpus::MB::Core::TextureBlenderMaterialPropertyCacheHelper::MaterialPropertyPair, ::Il2CppObject*>*() const noexcept {
      return nonTexturePropertyValuesForSourceMaterials;
    }
    // Get instance field reference: private System.Collections.Generic.Dictionary`2<DigitalOpus.MB.Core.TextureBlenderMaterialPropertyCacheHelper/MaterialPropertyPair,System.Object> nonTexturePropertyValuesForSourceMaterials
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Dictionary_2<::DigitalOpus::MB::Core::TextureBlenderMaterialPropertyCacheHelper::MaterialPropertyPair, ::Il2CppObject*>*& dyn_nonTexturePropertyValuesForSourceMaterials();
    // private System.Boolean AllNonTexturePropertyValuesAreEqual(System.String prop)
    // Offset: 0xF3EF44
    bool AllNonTexturePropertyValuesAreEqual(::StringW prop);
    // public System.Void CacheMaterialProperty(UnityEngine.Material m, System.String property, System.Object value)
    // Offset: 0xF3F16C
    void CacheMaterialProperty(::UnityEngine::Material* m, ::StringW property, ::Il2CppObject* value);
    // public System.Object GetValueIfAllSourceAreTheSameOrDefault(System.String property, System.Object defaultValue)
    // Offset: 0xF3F1FC
    ::Il2CppObject* GetValueIfAllSourceAreTheSameOrDefault(::StringW property, ::Il2CppObject* defaultValue);
    // public System.Void .ctor()
    // Offset: 0xF3F3B4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TextureBlenderMaterialPropertyCacheHelper* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::DigitalOpus::MB::Core::TextureBlenderMaterialPropertyCacheHelper::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TextureBlenderMaterialPropertyCacheHelper*, creationType>()));
    }
  }; // DigitalOpus.MB.Core.TextureBlenderMaterialPropertyCacheHelper
  #pragma pack(pop)
  static check_size<sizeof(TextureBlenderMaterialPropertyCacheHelper), 16 + sizeof(::System::Collections::Generic::Dictionary_2<::DigitalOpus::MB::Core::TextureBlenderMaterialPropertyCacheHelper::MaterialPropertyPair, ::Il2CppObject*>*)> __DigitalOpus_MB_Core_TextureBlenderMaterialPropertyCacheHelperSizeCheck;
  static_assert(sizeof(TextureBlenderMaterialPropertyCacheHelper) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::DigitalOpus::MB::Core::TextureBlenderMaterialPropertyCacheHelper::MaterialPropertyPair, "DigitalOpus.MB.Core", "TextureBlenderMaterialPropertyCacheHelper/MaterialPropertyPair");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: DigitalOpus::MB::Core::TextureBlenderMaterialPropertyCacheHelper::AllNonTexturePropertyValuesAreEqual
// Il2CppName: AllNonTexturePropertyValuesAreEqual
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (DigitalOpus::MB::Core::TextureBlenderMaterialPropertyCacheHelper::*)(::StringW)>(&DigitalOpus::MB::Core::TextureBlenderMaterialPropertyCacheHelper::AllNonTexturePropertyValuesAreEqual)> {
  static const MethodInfo* get() {
    static auto* prop = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::TextureBlenderMaterialPropertyCacheHelper*), "AllNonTexturePropertyValuesAreEqual", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{prop});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::TextureBlenderMaterialPropertyCacheHelper::CacheMaterialProperty
// Il2CppName: CacheMaterialProperty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (DigitalOpus::MB::Core::TextureBlenderMaterialPropertyCacheHelper::*)(::UnityEngine::Material*, ::StringW, ::Il2CppObject*)>(&DigitalOpus::MB::Core::TextureBlenderMaterialPropertyCacheHelper::CacheMaterialProperty)> {
  static const MethodInfo* get() {
    static auto* m = &::il2cpp_utils::GetClassFromName("UnityEngine", "Material")->byval_arg;
    static auto* property = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::TextureBlenderMaterialPropertyCacheHelper*), "CacheMaterialProperty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{m, property, value});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::TextureBlenderMaterialPropertyCacheHelper::GetValueIfAllSourceAreTheSameOrDefault
// Il2CppName: GetValueIfAllSourceAreTheSameOrDefault
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (DigitalOpus::MB::Core::TextureBlenderMaterialPropertyCacheHelper::*)(::StringW, ::Il2CppObject*)>(&DigitalOpus::MB::Core::TextureBlenderMaterialPropertyCacheHelper::GetValueIfAllSourceAreTheSameOrDefault)> {
  static const MethodInfo* get() {
    static auto* property = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* defaultValue = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::TextureBlenderMaterialPropertyCacheHelper*), "GetValueIfAllSourceAreTheSameOrDefault", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{property, defaultValue});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::TextureBlenderMaterialPropertyCacheHelper::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
