// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include <initializer_list>
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: MemberInfo
  class MemberInfo;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Completed forward declares
// Type namespace: Nitro
namespace Nitro {
  // Forward declaring type: NitroObject
  class NitroObject;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Nitro::NitroObject);
DEFINE_IL2CPP_ARG_TYPE(::Nitro::NitroObject*, "Nitro", "NitroObject");
// Type namespace: Nitro
namespace Nitro {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: Nitro.NitroObject
  // [TokenAttribute] Offset: FFFFFFFF
  // [DefaultMemberAttribute] Offset: AD1130
  class NitroObject : public ::Il2CppObject {
    public:
    public:
    // private System.Type ObjectType
    // Size: 0x8
    // Offset: 0x10
    ::System::Type* ObjectType;
    // Field size check
    static_assert(sizeof(::System::Type*) == 0x8);
    // private System.Reflection.MemberInfo Member
    // Size: 0x8
    // Offset: 0x18
    ::System::Reflection::MemberInfo* Member;
    // Field size check
    static_assert(sizeof(::System::Reflection::MemberInfo*) == 0x8);
    // public System.Object UnderlayObject
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppObject* UnderlayObject;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private System.Collections.Generic.Dictionary`2<System.String,Nitro.NitroObject> PrototypeMap
    // Size: 0x8
    // Offset: 0x28
    ::System::Collections::Generic::Dictionary_2<::StringW, ::Nitro::NitroObject*>* PrototypeMap;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Dictionary_2<::StringW, ::Nitro::NitroObject*>*) == 0x8);
    public:
    // Get instance field reference: private System.Type ObjectType
    [[deprecated("Use field access instead!")]] ::System::Type*& dyn_ObjectType();
    // Get instance field reference: private System.Reflection.MemberInfo Member
    [[deprecated("Use field access instead!")]] ::System::Reflection::MemberInfo*& dyn_Member();
    // Get instance field reference: public System.Object UnderlayObject
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn_UnderlayObject();
    // Get instance field reference: private System.Collections.Generic.Dictionary`2<System.String,Nitro.NitroObject> PrototypeMap
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Dictionary_2<::StringW, ::Nitro::NitroObject*>*& dyn_PrototypeMap();
    // public System.Void .ctor(System.Object underObject)
    // Offset: 0xF68ABC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NitroObject* New_ctor(::Il2CppObject* underObject) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Nitro::NitroObject::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NitroObject*, creationType>(underObject)));
    }
    // public System.Void .ctor(System.Reflection.MemberInfo member, System.Object underObject)
    // Offset: 0xF68AE8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NitroObject* New_ctor(::System::Reflection::MemberInfo* member, ::Il2CppObject* underObject) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Nitro::NitroObject::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NitroObject*, creationType>(member, underObject)));
    }
    // public System.Object GetValue()
    // Offset: 0xF68B20
    ::Il2CppObject* GetValue();
    // public System.Void SetValue(System.Object value)
    // Offset: 0xF68CD4
    void SetValue(::Il2CppObject* value);
    // public System.Object Run(params System.Object[] arguments)
    // Offset: 0xF68E5C
    ::Il2CppObject* Run(::ArrayW<::Il2CppObject*> arguments);
    // public System.Object get_Item(System.String name)
    // Offset: 0xF68FB8
    ::Il2CppObject* get_Item(::StringW name);
    // public System.Void set_Item(System.String name, System.Object value)
    // Offset: 0xF691BC
    void set_Item(::StringW name, ::Il2CppObject* value);
  }; // Nitro.NitroObject
  #pragma pack(pop)
  static check_size<sizeof(NitroObject), 40 + sizeof(::System::Collections::Generic::Dictionary_2<::StringW, ::Nitro::NitroObject*>*)> __Nitro_NitroObjectSizeCheck;
  static_assert(sizeof(NitroObject) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Nitro::NitroObject::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Nitro::NitroObject::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Nitro::NitroObject::GetValue
// Il2CppName: GetValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (Nitro::NitroObject::*)()>(&Nitro::NitroObject::GetValue)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Nitro::NitroObject*), "GetValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Nitro::NitroObject::SetValue
// Il2CppName: SetValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Nitro::NitroObject::*)(::Il2CppObject*)>(&Nitro::NitroObject::SetValue)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Nitro::NitroObject*), "SetValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Nitro::NitroObject::Run
// Il2CppName: Run
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (Nitro::NitroObject::*)(::ArrayW<::Il2CppObject*>)>(&Nitro::NitroObject::Run)> {
  static const MethodInfo* get() {
    static auto* arguments = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Nitro::NitroObject*), "Run", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{arguments});
  }
};
// Writing MetadataGetter for method: Nitro::NitroObject::get_Item
// Il2CppName: get_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (Nitro::NitroObject::*)(::StringW)>(&Nitro::NitroObject::get_Item)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Nitro::NitroObject*), "get_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name});
  }
};
// Writing MetadataGetter for method: Nitro::NitroObject::set_Item
// Il2CppName: set_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Nitro::NitroObject::*)(::StringW, ::Il2CppObject*)>(&Nitro::NitroObject::set_Item)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Nitro::NitroObject*), "set_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, value});
  }
};