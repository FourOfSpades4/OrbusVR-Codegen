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
  // Forward declaring type: MacroAttribute
  class MacroAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VivoxUnity::Properties::MacroAttribute);
DEFINE_IL2CPP_ARG_TYPE(::VivoxUnity::Properties::MacroAttribute*, "VivoxUnity.Properties", "MacroAttribute");
// Type namespace: VivoxUnity.Properties
namespace VivoxUnity::Properties {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: VivoxUnity.Properties.MacroAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: ABD144
  class MacroAttribute : public ::System::Attribute {
    public:
    public:
    // [CompilerGeneratedAttribute] Offset: 0xABDD88
    // private System.String <Expression>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::StringW Expression;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xABDD98
    // private System.Int32 <Editable>k__BackingField
    // Size: 0x4
    // Offset: 0x18
    int Editable;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: Editable and: Target
    char __padding1[0x4] = {};
    // [CompilerGeneratedAttribute] Offset: 0xABDDA8
    // private System.String <Target>k__BackingField
    // Size: 0x8
    // Offset: 0x20
    ::StringW Target;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Get instance field reference: private System.String <Expression>k__BackingField
    [[deprecated("Use field access instead!")]] ::StringW& dyn_$Expression$k__BackingField();
    // Get instance field reference: private System.Int32 <Editable>k__BackingField
    [[deprecated("Use field access instead!")]] int& dyn_$Editable$k__BackingField();
    // Get instance field reference: private System.String <Target>k__BackingField
    [[deprecated("Use field access instead!")]] ::StringW& dyn_$Target$k__BackingField();
    // public System.String get_Expression()
    // Offset: 0x12D9154
    ::StringW get_Expression();
    // public System.Void set_Expression(System.String value)
    // Offset: 0x12D915C
    void set_Expression(::StringW value);
    // public System.Int32 get_Editable()
    // Offset: 0x12D9164
    int get_Editable();
    // public System.Void set_Editable(System.Int32 value)
    // Offset: 0x12D916C
    void set_Editable(int value);
    // public System.String get_Target()
    // Offset: 0x12D9174
    ::StringW get_Target();
    // public System.Void set_Target(System.String value)
    // Offset: 0x12D917C
    void set_Target(::StringW value);
    // public System.Void .ctor()
    // Offset: 0x12D9184
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MacroAttribute* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VivoxUnity::Properties::MacroAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MacroAttribute*, creationType>()));
    }
  }; // VivoxUnity.Properties.MacroAttribute
  #pragma pack(pop)
  static check_size<sizeof(MacroAttribute), 32 + sizeof(::StringW)> __VivoxUnity_Properties_MacroAttributeSizeCheck;
  static_assert(sizeof(MacroAttribute) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VivoxUnity::Properties::MacroAttribute::get_Expression
// Il2CppName: get_Expression
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (VivoxUnity::Properties::MacroAttribute::*)()>(&VivoxUnity::Properties::MacroAttribute::get_Expression)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VivoxUnity::Properties::MacroAttribute*), "get_Expression", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VivoxUnity::Properties::MacroAttribute::set_Expression
// Il2CppName: set_Expression
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VivoxUnity::Properties::MacroAttribute::*)(::StringW)>(&VivoxUnity::Properties::MacroAttribute::set_Expression)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VivoxUnity::Properties::MacroAttribute*), "set_Expression", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VivoxUnity::Properties::MacroAttribute::get_Editable
// Il2CppName: get_Editable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (VivoxUnity::Properties::MacroAttribute::*)()>(&VivoxUnity::Properties::MacroAttribute::get_Editable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VivoxUnity::Properties::MacroAttribute*), "get_Editable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VivoxUnity::Properties::MacroAttribute::set_Editable
// Il2CppName: set_Editable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VivoxUnity::Properties::MacroAttribute::*)(int)>(&VivoxUnity::Properties::MacroAttribute::set_Editable)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VivoxUnity::Properties::MacroAttribute*), "set_Editable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VivoxUnity::Properties::MacroAttribute::get_Target
// Il2CppName: get_Target
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (VivoxUnity::Properties::MacroAttribute::*)()>(&VivoxUnity::Properties::MacroAttribute::get_Target)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VivoxUnity::Properties::MacroAttribute*), "get_Target", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VivoxUnity::Properties::MacroAttribute::set_Target
// Il2CppName: set_Target
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VivoxUnity::Properties::MacroAttribute::*)(::StringW)>(&VivoxUnity::Properties::MacroAttribute::set_Target)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VivoxUnity::Properties::MacroAttribute*), "set_Target", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VivoxUnity::Properties::MacroAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!