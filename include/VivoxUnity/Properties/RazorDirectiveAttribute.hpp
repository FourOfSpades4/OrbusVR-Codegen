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
  // Forward declaring type: RazorDirectiveAttribute
  class RazorDirectiveAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VivoxUnity::Properties::RazorDirectiveAttribute);
DEFINE_IL2CPP_ARG_TYPE(::VivoxUnity::Properties::RazorDirectiveAttribute*, "VivoxUnity.Properties", "RazorDirectiveAttribute");
// Type namespace: VivoxUnity.Properties
namespace VivoxUnity::Properties {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: VivoxUnity.Properties.RazorDirectiveAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: ABD690
  class RazorDirectiveAttribute : public ::System::Attribute {
    public:
    public:
    // [CompilerGeneratedAttribute] Offset: 0xABDEF8
    // private System.String <Directive>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::StringW Directive;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Creating conversion operator: operator ::StringW
    constexpr operator ::StringW() const noexcept {
      return Directive;
    }
    // Get instance field reference: private System.String <Directive>k__BackingField
    [[deprecated("Use field access instead!")]] ::StringW& dyn_$Directive$k__BackingField();
    // public System.Void .ctor(System.String directive)
    // Offset: 0x12D93AC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RazorDirectiveAttribute* New_ctor(::StringW directive) {
      static auto ___internal__logger = ::Logger::get().WithContext("::VivoxUnity::Properties::RazorDirectiveAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RazorDirectiveAttribute*, creationType>(directive)));
    }
    // public System.String get_Directive()
    // Offset: 0x12D93E0
    ::StringW get_Directive();
    // private System.Void set_Directive(System.String value)
    // Offset: 0x12D93D8
    void set_Directive(::StringW value);
  }; // VivoxUnity.Properties.RazorDirectiveAttribute
  #pragma pack(pop)
  static check_size<sizeof(RazorDirectiveAttribute), 16 + sizeof(::StringW)> __VivoxUnity_Properties_RazorDirectiveAttributeSizeCheck;
  static_assert(sizeof(RazorDirectiveAttribute) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VivoxUnity::Properties::RazorDirectiveAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VivoxUnity::Properties::RazorDirectiveAttribute::get_Directive
// Il2CppName: get_Directive
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (VivoxUnity::Properties::RazorDirectiveAttribute::*)()>(&VivoxUnity::Properties::RazorDirectiveAttribute::get_Directive)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VivoxUnity::Properties::RazorDirectiveAttribute*), "get_Directive", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VivoxUnity::Properties::RazorDirectiveAttribute::set_Directive
// Il2CppName: set_Directive
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VivoxUnity::Properties::RazorDirectiveAttribute::*)(::StringW)>(&VivoxUnity::Properties::RazorDirectiveAttribute::set_Directive)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VivoxUnity::Properties::RazorDirectiveAttribute*), "set_Directive", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
