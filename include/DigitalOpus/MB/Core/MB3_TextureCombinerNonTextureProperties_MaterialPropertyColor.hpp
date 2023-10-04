// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: DigitalOpus.MB.Core.MB3_TextureCombinerNonTextureProperties
#include "DigitalOpus/MB/Core/MB3_TextureCombinerNonTextureProperties.hpp"
// Including type: DigitalOpus.MB.Core.MB3_TextureCombinerNonTextureProperties/MaterialProperty
#include "DigitalOpus/MB/Core/MB3_TextureCombinerNonTextureProperties_MaterialProperty.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties::MaterialPropertyColor);
DEFINE_IL2CPP_ARG_TYPE(::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties::MaterialPropertyColor*, "DigitalOpus.MB.Core", "MB3_TextureCombinerNonTextureProperties/MaterialPropertyColor");
// Type namespace: DigitalOpus.MB.Core
namespace DigitalOpus::MB::Core {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: DigitalOpus.MB.Core.MB3_TextureCombinerNonTextureProperties/MaterialPropertyColor
  // [TokenAttribute] Offset: FFFFFFFF
  class MB3_TextureCombinerNonTextureProperties::MaterialPropertyColor : public ::Il2CppObject/*, public ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties::MaterialProperty*/ {
    public:
    public:
    // [CompilerGeneratedAttribute] Offset: 0xAE11BC
    // private System.String <PropertyName>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::StringW PropertyName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private DigitalOpus.MB.Core.MB3_TextureCombinerNonTextureProperties/MaterialPropertyValueAveragedColor _averageCalc
    // Size: 0x8
    // Offset: 0x18
    ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties::MaterialPropertyValueAveragedColor* averageCalc;
    // Field size check
    static_assert(sizeof(::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties::MaterialPropertyValueAveragedColor*) == 0x8);
    // private UnityEngine.Color _defaultValue
    // Size: 0x10
    // Offset: 0x20
    ::UnityEngine::Color defaultValue;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    public:
    // Creating interface conversion operator: operator ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties::MaterialProperty
    operator ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties::MaterialProperty() noexcept {
      return *reinterpret_cast<::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties::MaterialProperty*>(this);
    }
    // Get instance field reference: private System.String <PropertyName>k__BackingField
    [[deprecated("Use field access instead!")]] ::StringW& dyn_$PropertyName$k__BackingField();
    // Get instance field reference: private DigitalOpus.MB.Core.MB3_TextureCombinerNonTextureProperties/MaterialPropertyValueAveragedColor _averageCalc
    [[deprecated("Use field access instead!")]] ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties::MaterialPropertyValueAveragedColor*& dyn__averageCalc();
    // Get instance field reference: private UnityEngine.Color _defaultValue
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color& dyn__defaultValue();
    // public System.String get_PropertyName()
    // Offset: 0x18EFB50
    ::StringW get_PropertyName();
    // public System.Void set_PropertyName(System.String value)
    // Offset: 0x18EFB58
    void set_PropertyName(::StringW value);
    // public System.Void .ctor(System.String name, UnityEngine.Color defaultVal)
    // Offset: 0x18EE994
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MB3_TextureCombinerNonTextureProperties::MaterialPropertyColor* New_ctor(::StringW name, ::UnityEngine::Color defaultVal) {
      static auto ___internal__logger = ::Logger::get().WithContext("::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties::MaterialPropertyColor::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MB3_TextureCombinerNonTextureProperties::MaterialPropertyColor*, creationType>(name, defaultVal)));
    }
    // public DigitalOpus.MB.Core.MB3_TextureCombinerNonTextureProperties/MaterialPropertyValueAveraged GetAverageCalculator()
    // Offset: 0x18EFB68
    ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties::MaterialPropertyValueAveraged* GetAverageCalculator();
    // public System.Object GetDefaultValue()
    // Offset: 0x18EFB70
    ::Il2CppObject* GetDefaultValue();
  }; // DigitalOpus.MB.Core.MB3_TextureCombinerNonTextureProperties/MaterialPropertyColor
  #pragma pack(pop)
  static check_size<sizeof(MB3_TextureCombinerNonTextureProperties::MaterialPropertyColor), 32 + sizeof(::UnityEngine::Color)> __DigitalOpus_MB_Core_MB3_TextureCombinerNonTextureProperties_MaterialPropertyColorSizeCheck;
  static_assert(sizeof(MB3_TextureCombinerNonTextureProperties::MaterialPropertyColor) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties::MaterialPropertyColor::get_PropertyName
// Il2CppName: get_PropertyName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties::MaterialPropertyColor::*)()>(&DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties::MaterialPropertyColor::get_PropertyName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties::MaterialPropertyColor*), "get_PropertyName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties::MaterialPropertyColor::set_PropertyName
// Il2CppName: set_PropertyName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties::MaterialPropertyColor::*)(::StringW)>(&DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties::MaterialPropertyColor::set_PropertyName)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties::MaterialPropertyColor*), "set_PropertyName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties::MaterialPropertyColor::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties::MaterialPropertyColor::GetAverageCalculator
// Il2CppName: GetAverageCalculator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties::MaterialPropertyValueAveraged* (DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties::MaterialPropertyColor::*)()>(&DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties::MaterialPropertyColor::GetAverageCalculator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties::MaterialPropertyColor*), "GetAverageCalculator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties::MaterialPropertyColor::GetDefaultValue
// Il2CppName: GetDefaultValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties::MaterialPropertyColor::*)()>(&DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties::MaterialPropertyColor::GetDefaultValue)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties::MaterialPropertyColor*), "GetDefaultValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};