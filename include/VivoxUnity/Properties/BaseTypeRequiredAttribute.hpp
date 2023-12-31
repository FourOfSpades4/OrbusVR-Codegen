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
  // Forward declaring type: BaseTypeRequiredAttribute
  class BaseTypeRequiredAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VivoxUnity::Properties::BaseTypeRequiredAttribute);
DEFINE_IL2CPP_ARG_TYPE(::VivoxUnity::Properties::BaseTypeRequiredAttribute*, "VivoxUnity.Properties", "BaseTypeRequiredAttribute");
// Type namespace: VivoxUnity.Properties
namespace VivoxUnity::Properties {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: VivoxUnity.Properties.BaseTypeRequiredAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: ABCFE4
  // [BaseTypeRequiredAttribute] Offset: ABCFE4
  class BaseTypeRequiredAttribute : public ::System::Attribute {
    public:
    public:
    // [CompilerGeneratedAttribute] Offset: 0xABDD08
    // private System.Type <BaseType>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::System::Type* BaseType;
    // Field size check
    static_assert(sizeof(::System::Type*) == 0x8);
    public:
    // Creating conversion operator: operator ::System::Type*
    constexpr operator ::System::Type*() const noexcept {
      return BaseType;
    }
    // Get instance field reference: private System.Type <BaseType>k__BackingField
    [[deprecated("Use field access instead!")]] ::System::Type*& dyn_$BaseType$k__BackingField();
    // public System.Void .ctor(System.Type baseType)
    // Offset: 0x12D8F20
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BaseTypeRequiredAttribute* New_ctor(::System::Type* baseType) {
      static auto ___internal__logger = ::Logger::get().WithContext("::VivoxUnity::Properties::BaseTypeRequiredAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BaseTypeRequiredAttribute*, creationType>(baseType)));
    }
    // public System.Type get_BaseType()
    // Offset: 0x12D8F54
    ::System::Type* get_BaseType();
    // private System.Void set_BaseType(System.Type value)
    // Offset: 0x12D8F4C
    void set_BaseType(::System::Type* value);
  }; // VivoxUnity.Properties.BaseTypeRequiredAttribute
  #pragma pack(pop)
  static check_size<sizeof(BaseTypeRequiredAttribute), 16 + sizeof(::System::Type*)> __VivoxUnity_Properties_BaseTypeRequiredAttributeSizeCheck;
  static_assert(sizeof(BaseTypeRequiredAttribute) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VivoxUnity::Properties::BaseTypeRequiredAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VivoxUnity::Properties::BaseTypeRequiredAttribute::get_BaseType
// Il2CppName: get_BaseType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (VivoxUnity::Properties::BaseTypeRequiredAttribute::*)()>(&VivoxUnity::Properties::BaseTypeRequiredAttribute::get_BaseType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VivoxUnity::Properties::BaseTypeRequiredAttribute*), "get_BaseType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VivoxUnity::Properties::BaseTypeRequiredAttribute::set_BaseType
// Il2CppName: set_BaseType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VivoxUnity::Properties::BaseTypeRequiredAttribute::*)(::System::Type*)>(&VivoxUnity::Properties::BaseTypeRequiredAttribute::set_BaseType)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VivoxUnity::Properties::BaseTypeRequiredAttribute*), "set_BaseType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
