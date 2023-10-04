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
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Forward declaring type: DefaultPropertyAttribute
  class DefaultPropertyAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::ComponentModel::DefaultPropertyAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::DefaultPropertyAttribute*, "System.ComponentModel", "DefaultPropertyAttribute");
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.ComponentModel.DefaultPropertyAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: A65460
  class DefaultPropertyAttribute : public ::System::Attribute {
    public:
    public:
    // private readonly System.String name
    // Size: 0x8
    // Offset: 0x10
    ::StringW name;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Creating conversion operator: operator ::StringW
    constexpr operator ::StringW() const noexcept {
      return name;
    }
    // Get static field: static public readonly System.ComponentModel.DefaultPropertyAttribute Default
    static ::System::ComponentModel::DefaultPropertyAttribute* _get_Default();
    // Set static field: static public readonly System.ComponentModel.DefaultPropertyAttribute Default
    static void _set_Default(::System::ComponentModel::DefaultPropertyAttribute* value);
    // Get instance field reference: private readonly System.String name
    [[deprecated("Use field access instead!")]] ::StringW& dyn_name();
    // public System.Void .ctor(System.String name)
    // Offset: 0x1C3FE84
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DefaultPropertyAttribute* New_ctor(::StringW name) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ComponentModel::DefaultPropertyAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DefaultPropertyAttribute*, creationType>(name)));
    }
    // public System.String get_Name()
    // Offset: 0x1C3FEB0
    ::StringW get_Name();
    // static private System.Void .cctor()
    // Offset: 0x1C3FF58
    static void _cctor();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x1C3FEB8
    // Implemented from: System.Attribute
    // Base method: System.Boolean Attribute::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x1C3FF50
    // Implemented from: System.Attribute
    // Base method: System.Int32 Attribute::GetHashCode()
    int GetHashCode();
  }; // System.ComponentModel.DefaultPropertyAttribute
  #pragma pack(pop)
  static check_size<sizeof(DefaultPropertyAttribute), 16 + sizeof(::StringW)> __System_ComponentModel_DefaultPropertyAttributeSizeCheck;
  static_assert(sizeof(DefaultPropertyAttribute) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::ComponentModel::DefaultPropertyAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::ComponentModel::DefaultPropertyAttribute::get_Name
// Il2CppName: get_Name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::ComponentModel::DefaultPropertyAttribute::*)()>(&System::ComponentModel::DefaultPropertyAttribute::get_Name)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::DefaultPropertyAttribute*), "get_Name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::DefaultPropertyAttribute::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::ComponentModel::DefaultPropertyAttribute::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::DefaultPropertyAttribute*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::DefaultPropertyAttribute::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::ComponentModel::DefaultPropertyAttribute::*)(::Il2CppObject*)>(&System::ComponentModel::DefaultPropertyAttribute::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::DefaultPropertyAttribute*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::DefaultPropertyAttribute::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::ComponentModel::DefaultPropertyAttribute::*)()>(&System::ComponentModel::DefaultPropertyAttribute::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::DefaultPropertyAttribute*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};