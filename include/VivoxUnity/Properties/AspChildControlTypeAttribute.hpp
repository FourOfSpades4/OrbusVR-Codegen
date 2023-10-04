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
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: VivoxUnity.Properties
namespace VivoxUnity::Properties {
  // Forward declaring type: AspChildControlTypeAttribute
  class AspChildControlTypeAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VivoxUnity::Properties::AspChildControlTypeAttribute);
DEFINE_IL2CPP_ARG_TYPE(::VivoxUnity::Properties::AspChildControlTypeAttribute*, "VivoxUnity.Properties", "AspChildControlTypeAttribute");
// Type namespace: VivoxUnity.Properties
namespace VivoxUnity::Properties {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: VivoxUnity.Properties.AspChildControlTypeAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: ABD550
  class AspChildControlTypeAttribute : public ::System::Attribute {
    public:
    public:
    // [CompilerGeneratedAttribute] Offset: 0xABDE88
    // private System.String <TagName>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::StringW TagName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xABDE98
    // private System.Type <ControlType>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    ::System::Type* ControlType;
    // Field size check
    static_assert(sizeof(::System::Type*) == 0x8);
    public:
    // Get instance field reference: private System.String <TagName>k__BackingField
    [[deprecated("Use field access instead!")]] ::StringW& dyn_$TagName$k__BackingField();
    // Get instance field reference: private System.Type <ControlType>k__BackingField
    [[deprecated("Use field access instead!")]] ::System::Type*& dyn_$ControlType$k__BackingField();
    // public System.Void .ctor(System.String tagName, System.Type controlType)
    // Offset: 0x12D8B60
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AspChildControlTypeAttribute* New_ctor(::StringW tagName, ::System::Type* controlType) {
      static auto ___internal__logger = ::Logger::get().WithContext("::VivoxUnity::Properties::AspChildControlTypeAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AspChildControlTypeAttribute*, creationType>(tagName, controlType)));
    }
    // public System.String get_TagName()
    // Offset: 0x12D8BA8
    ::StringW get_TagName();
    // private System.Void set_TagName(System.String value)
    // Offset: 0x12D8B98
    void set_TagName(::StringW value);
    // public System.Type get_ControlType()
    // Offset: 0x12D8BB0
    ::System::Type* get_ControlType();
    // private System.Void set_ControlType(System.Type value)
    // Offset: 0x12D8BA0
    void set_ControlType(::System::Type* value);
  }; // VivoxUnity.Properties.AspChildControlTypeAttribute
  #pragma pack(pop)
  static check_size<sizeof(AspChildControlTypeAttribute), 24 + sizeof(::System::Type*)> __VivoxUnity_Properties_AspChildControlTypeAttributeSizeCheck;
  static_assert(sizeof(AspChildControlTypeAttribute) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VivoxUnity::Properties::AspChildControlTypeAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VivoxUnity::Properties::AspChildControlTypeAttribute::get_TagName
// Il2CppName: get_TagName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (VivoxUnity::Properties::AspChildControlTypeAttribute::*)()>(&VivoxUnity::Properties::AspChildControlTypeAttribute::get_TagName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VivoxUnity::Properties::AspChildControlTypeAttribute*), "get_TagName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VivoxUnity::Properties::AspChildControlTypeAttribute::set_TagName
// Il2CppName: set_TagName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VivoxUnity::Properties::AspChildControlTypeAttribute::*)(::StringW)>(&VivoxUnity::Properties::AspChildControlTypeAttribute::set_TagName)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VivoxUnity::Properties::AspChildControlTypeAttribute*), "set_TagName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VivoxUnity::Properties::AspChildControlTypeAttribute::get_ControlType
// Il2CppName: get_ControlType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (VivoxUnity::Properties::AspChildControlTypeAttribute::*)()>(&VivoxUnity::Properties::AspChildControlTypeAttribute::get_ControlType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VivoxUnity::Properties::AspChildControlTypeAttribute*), "get_ControlType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VivoxUnity::Properties::AspChildControlTypeAttribute::set_ControlType
// Il2CppName: set_ControlType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VivoxUnity::Properties::AspChildControlTypeAttribute::*)(::System::Type*)>(&VivoxUnity::Properties::AspChildControlTypeAttribute::set_ControlType)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VivoxUnity::Properties::AspChildControlTypeAttribute*), "set_ControlType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};