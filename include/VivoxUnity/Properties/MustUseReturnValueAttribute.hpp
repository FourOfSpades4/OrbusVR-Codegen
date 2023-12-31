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
  // Forward declaring type: MustUseReturnValueAttribute
  class MustUseReturnValueAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VivoxUnity::Properties::MustUseReturnValueAttribute);
DEFINE_IL2CPP_ARG_TYPE(::VivoxUnity::Properties::MustUseReturnValueAttribute*, "VivoxUnity.Properties", "MustUseReturnValueAttribute");
// Type namespace: VivoxUnity.Properties
namespace VivoxUnity::Properties {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: VivoxUnity.Properties.MustUseReturnValueAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: ABD0F4
  class MustUseReturnValueAttribute : public ::System::Attribute {
    public:
    public:
    // [CompilerGeneratedAttribute] Offset: 0xABDD68
    // private System.String <Justification>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::StringW Justification;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Creating conversion operator: operator ::StringW
    constexpr operator ::StringW() const noexcept {
      return Justification;
    }
    // Get instance field reference: private System.String <Justification>k__BackingField
    [[deprecated("Use field access instead!")]] ::StringW& dyn_$Justification$k__BackingField();
    // public System.Void .ctor()
    // Offset: 0x12D9274
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MustUseReturnValueAttribute* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VivoxUnity::Properties::MustUseReturnValueAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MustUseReturnValueAttribute*, creationType>()));
    }
    // public System.Void .ctor(System.String justification)
    // Offset: 0x12D927C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MustUseReturnValueAttribute* New_ctor(::StringW justification) {
      static auto ___internal__logger = ::Logger::get().WithContext("::VivoxUnity::Properties::MustUseReturnValueAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MustUseReturnValueAttribute*, creationType>(justification)));
    }
    // public System.String get_Justification()
    // Offset: 0x12D92B0
    ::StringW get_Justification();
    // private System.Void set_Justification(System.String value)
    // Offset: 0x12D92A8
    void set_Justification(::StringW value);
  }; // VivoxUnity.Properties.MustUseReturnValueAttribute
  #pragma pack(pop)
  static check_size<sizeof(MustUseReturnValueAttribute), 16 + sizeof(::StringW)> __VivoxUnity_Properties_MustUseReturnValueAttributeSizeCheck;
  static_assert(sizeof(MustUseReturnValueAttribute) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VivoxUnity::Properties::MustUseReturnValueAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VivoxUnity::Properties::MustUseReturnValueAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VivoxUnity::Properties::MustUseReturnValueAttribute::get_Justification
// Il2CppName: get_Justification
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (VivoxUnity::Properties::MustUseReturnValueAttribute::*)()>(&VivoxUnity::Properties::MustUseReturnValueAttribute::get_Justification)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VivoxUnity::Properties::MustUseReturnValueAttribute*), "get_Justification", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VivoxUnity::Properties::MustUseReturnValueAttribute::set_Justification
// Il2CppName: set_Justification
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VivoxUnity::Properties::MustUseReturnValueAttribute::*)(::StringW)>(&VivoxUnity::Properties::MustUseReturnValueAttribute::set_Justification)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VivoxUnity::Properties::MustUseReturnValueAttribute*), "set_Justification", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
