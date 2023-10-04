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
  // Forward declaring type: AspMvcAreaMasterLocationFormatAttribute
  class AspMvcAreaMasterLocationFormatAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VivoxUnity::Properties::AspMvcAreaMasterLocationFormatAttribute);
DEFINE_IL2CPP_ARG_TYPE(::VivoxUnity::Properties::AspMvcAreaMasterLocationFormatAttribute*, "VivoxUnity.Properties", "AspMvcAreaMasterLocationFormatAttribute");
// Type namespace: VivoxUnity.Properties
namespace VivoxUnity::Properties {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: VivoxUnity.Properties.AspMvcAreaMasterLocationFormatAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: ABD180
  class AspMvcAreaMasterLocationFormatAttribute : public ::System::Attribute {
    public:
    public:
    // [CompilerGeneratedAttribute] Offset: 0xABDDB8
    // private System.String <Format>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::StringW Format;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Creating conversion operator: operator ::StringW
    constexpr operator ::StringW() const noexcept {
      return Format;
    }
    // Get instance field reference: private System.String <Format>k__BackingField
    [[deprecated("Use field access instead!")]] ::StringW& dyn_$Format$k__BackingField();
    // public System.Void .ctor(System.String format)
    // Offset: 0x12D8C60
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AspMvcAreaMasterLocationFormatAttribute* New_ctor(::StringW format) {
      static auto ___internal__logger = ::Logger::get().WithContext("::VivoxUnity::Properties::AspMvcAreaMasterLocationFormatAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AspMvcAreaMasterLocationFormatAttribute*, creationType>(format)));
    }
    // public System.String get_Format()
    // Offset: 0x12D8C94
    ::StringW get_Format();
    // private System.Void set_Format(System.String value)
    // Offset: 0x12D8C8C
    void set_Format(::StringW value);
  }; // VivoxUnity.Properties.AspMvcAreaMasterLocationFormatAttribute
  #pragma pack(pop)
  static check_size<sizeof(AspMvcAreaMasterLocationFormatAttribute), 16 + sizeof(::StringW)> __VivoxUnity_Properties_AspMvcAreaMasterLocationFormatAttributeSizeCheck;
  static_assert(sizeof(AspMvcAreaMasterLocationFormatAttribute) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VivoxUnity::Properties::AspMvcAreaMasterLocationFormatAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VivoxUnity::Properties::AspMvcAreaMasterLocationFormatAttribute::get_Format
// Il2CppName: get_Format
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (VivoxUnity::Properties::AspMvcAreaMasterLocationFormatAttribute::*)()>(&VivoxUnity::Properties::AspMvcAreaMasterLocationFormatAttribute::get_Format)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VivoxUnity::Properties::AspMvcAreaMasterLocationFormatAttribute*), "get_Format", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VivoxUnity::Properties::AspMvcAreaMasterLocationFormatAttribute::set_Format
// Il2CppName: set_Format
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VivoxUnity::Properties::AspMvcAreaMasterLocationFormatAttribute::*)(::StringW)>(&VivoxUnity::Properties::AspMvcAreaMasterLocationFormatAttribute::set_Format)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VivoxUnity::Properties::AspMvcAreaMasterLocationFormatAttribute*), "set_Format", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
