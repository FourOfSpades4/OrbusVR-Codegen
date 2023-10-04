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
// Type namespace: UnityEngine.Scripting.APIUpdating
namespace UnityEngine::Scripting::APIUpdating {
  // Forward declaring type: MovedFromAttribute
  class MovedFromAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Scripting::APIUpdating::MovedFromAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Scripting::APIUpdating::MovedFromAttribute*, "UnityEngine.Scripting.APIUpdating", "MovedFromAttribute");
// Type namespace: UnityEngine.Scripting.APIUpdating
namespace UnityEngine::Scripting::APIUpdating {
  // Size: 0x19
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Scripting.APIUpdating.MovedFromAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: A72054
  class MovedFromAttribute : public ::System::Attribute {
    public:
    public:
    // [CompilerGeneratedAttribute] Offset: 0xA744D8
    // [DebuggerBrowsableAttribute] Offset: 0xA744D8
    // private System.String <Namespace>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::StringW Namespace;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xA74514
    // [DebuggerBrowsableAttribute] Offset: 0xA74514
    // private System.Boolean <IsInDifferentAssembly>k__BackingField
    // Size: 0x1
    // Offset: 0x18
    bool IsInDifferentAssembly;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: private System.String <Namespace>k__BackingField
    [[deprecated("Use field access instead!")]] ::StringW& dyn_$Namespace$k__BackingField();
    // Get instance field reference: private System.Boolean <IsInDifferentAssembly>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$IsInDifferentAssembly$k__BackingField();
    // public System.Void .ctor(System.String sourceNamespace)
    // Offset: 0x1F97F08
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MovedFromAttribute* New_ctor(::StringW sourceNamespace) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Scripting::APIUpdating::MovedFromAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MovedFromAttribute*, creationType>(sourceNamespace)));
    }
    // public System.Void .ctor(System.String sourceNamespace, System.Boolean isInDifferentAssembly)
    // Offset: 0x1F97F38
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MovedFromAttribute* New_ctor(::StringW sourceNamespace, bool isInDifferentAssembly) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Scripting::APIUpdating::MovedFromAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MovedFromAttribute*, creationType>(sourceNamespace, isInDifferentAssembly)));
    }
    // private System.Void set_Namespace(System.String value)
    // Offset: 0x1F97F78
    void set_Namespace(::StringW value);
    // private System.Void set_IsInDifferentAssembly(System.Boolean value)
    // Offset: 0x1F97F80
    void set_IsInDifferentAssembly(bool value);
  }; // UnityEngine.Scripting.APIUpdating.MovedFromAttribute
  #pragma pack(pop)
  static check_size<sizeof(MovedFromAttribute), 24 + sizeof(bool)> __UnityEngine_Scripting_APIUpdating_MovedFromAttributeSizeCheck;
  static_assert(sizeof(MovedFromAttribute) == 0x19);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Scripting::APIUpdating::MovedFromAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Scripting::APIUpdating::MovedFromAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Scripting::APIUpdating::MovedFromAttribute::set_Namespace
// Il2CppName: set_Namespace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Scripting::APIUpdating::MovedFromAttribute::*)(::StringW)>(&UnityEngine::Scripting::APIUpdating::MovedFromAttribute::set_Namespace)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Scripting::APIUpdating::MovedFromAttribute*), "set_Namespace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Scripting::APIUpdating::MovedFromAttribute::set_IsInDifferentAssembly
// Il2CppName: set_IsInDifferentAssembly
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Scripting::APIUpdating::MovedFromAttribute::*)(bool)>(&UnityEngine::Scripting::APIUpdating::MovedFromAttribute::set_IsInDifferentAssembly)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Scripting::APIUpdating::MovedFromAttribute*), "set_IsInDifferentAssembly", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
