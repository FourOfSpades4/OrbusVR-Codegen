// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Attribute
#include "System/Attribute.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: VivoxUnity.Properties
namespace VivoxUnity::Properties {
  // Forward declaring type: AspMvcActionAttribute
  class AspMvcActionAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VivoxUnity::Properties::AspMvcActionAttribute);
DEFINE_IL2CPP_ARG_TYPE(::VivoxUnity::Properties::AspMvcActionAttribute*, "VivoxUnity.Properties", "AspMvcActionAttribute");
// Type namespace: VivoxUnity.Properties
namespace VivoxUnity::Properties {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: VivoxUnity.Properties.AspMvcActionAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: ABD2E8
  class AspMvcActionAttribute : public ::System::Attribute {
    public:
    public:
    // [CompilerGeneratedAttribute] Offset: 0xABDE18
    // private System.String <AnonymousProperty>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::StringW AnonymousProperty;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Creating conversion operator: operator ::StringW
    constexpr operator ::StringW() const noexcept {
      return AnonymousProperty;
    }
    // Get instance field reference: private System.String <AnonymousProperty>k__BackingField
    [[deprecated("Use field access instead!")]] ::StringW& dyn_$AnonymousProperty$k__BackingField();
    // public System.Void .ctor()
    // Offset: 0x12D8BD0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AspMvcActionAttribute* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VivoxUnity::Properties::AspMvcActionAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AspMvcActionAttribute*, creationType>()));
    }
    // public System.Void .ctor(System.String anonymousProperty)
    // Offset: 0x12D8BD8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AspMvcActionAttribute* New_ctor(::StringW anonymousProperty) {
      static auto ___internal__logger = ::Logger::get().WithContext("::VivoxUnity::Properties::AspMvcActionAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AspMvcActionAttribute*, creationType>(anonymousProperty)));
    }
    // public System.String get_AnonymousProperty()
    // Offset: 0x12D8C0C
    ::StringW get_AnonymousProperty();
    // private System.Void set_AnonymousProperty(System.String value)
    // Offset: 0x12D8C04
    void set_AnonymousProperty(::StringW value);
  }; // VivoxUnity.Properties.AspMvcActionAttribute
  #pragma pack(pop)
  static check_size<sizeof(AspMvcActionAttribute), 16 + sizeof(::StringW)> __VivoxUnity_Properties_AspMvcActionAttributeSizeCheck;
  static_assert(sizeof(AspMvcActionAttribute) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VivoxUnity::Properties::AspMvcActionAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VivoxUnity::Properties::AspMvcActionAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VivoxUnity::Properties::AspMvcActionAttribute::get_AnonymousProperty
// Il2CppName: get_AnonymousProperty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (VivoxUnity::Properties::AspMvcActionAttribute::*)()>(&VivoxUnity::Properties::AspMvcActionAttribute::get_AnonymousProperty)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VivoxUnity::Properties::AspMvcActionAttribute*), "get_AnonymousProperty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VivoxUnity::Properties::AspMvcActionAttribute::set_AnonymousProperty
// Il2CppName: set_AnonymousProperty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VivoxUnity::Properties::AspMvcActionAttribute::*)(::StringW)>(&VivoxUnity::Properties::AspMvcActionAttribute::set_AnonymousProperty)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VivoxUnity::Properties::AspMvcActionAttribute*), "set_AnonymousProperty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};