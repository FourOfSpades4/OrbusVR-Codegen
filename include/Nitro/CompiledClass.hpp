// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
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
// Forward declaring namespace: Nitro
namespace Nitro {
  // Forward declaring type: NitroCode
  class NitroCode;
  // Forward declaring type: CodeFragment
  class CodeFragment;
  // Forward declaring type: MethodOverloads
  class MethodOverloads;
  // Forward declaring type: CompiledFragment
  class CompiledFragment;
  // Forward declaring type: CompiledMethod
  class CompiledMethod;
  // Forward declaring type: BracketFragment
  class BracketFragment;
  // Forward declaring type: TypeFragment
  class TypeFragment;
}
// Forward declaring namespace: System::Reflection::Emit
namespace System::Reflection::Emit {
  // Forward declaring type: TypeBuilder
  class TypeBuilder;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: FieldInfo
  class FieldInfo;
  // Forward declaring type: MethodInfo
  class MethodInfo;
  // Forward declaring type: PropertyInfo
  class PropertyInfo;
}
// Completed forward declares
// Type namespace: Nitro
namespace Nitro {
  // Forward declaring type: CompiledClass
  class CompiledClass;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Nitro::CompiledClass);
DEFINE_IL2CPP_ARG_TYPE(::Nitro::CompiledClass*, "Nitro", "CompiledClass");
// Type namespace: Nitro
namespace Nitro {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: Nitro.CompiledClass
  // [TokenAttribute] Offset: FFFFFFFF
  class CompiledClass : public ::Il2CppObject {
    public:
    public:
    // public System.Type BaseType
    // Size: 0x8
    // Offset: 0x10
    ::System::Type* BaseType;
    // Field size check
    static_assert(sizeof(::System::Type*) == 0x8);
    // public System.Type compiledType
    // Size: 0x8
    // Offset: 0x18
    ::System::Type* compiledType;
    // Field size check
    static_assert(sizeof(::System::Type*) == 0x8);
    // public Nitro.NitroCode Script
    // Size: 0x8
    // Offset: 0x20
    ::Nitro::NitroCode* Script;
    // Field size check
    static_assert(sizeof(::Nitro::NitroCode*) == 0x8);
    // public System.Boolean IsPublic
    // Size: 0x1
    // Offset: 0x28
    bool IsPublic;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: IsPublic and: AnonymousCount
    char __padding3[0x3] = {};
    // protected System.Int32 AnonymousCount
    // Size: 0x4
    // Offset: 0x2C
    int AnonymousCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Reflection.Emit.TypeBuilder Builder
    // Size: 0x8
    // Offset: 0x30
    ::System::Reflection::Emit::TypeBuilder* Builder;
    // Field size check
    static_assert(sizeof(::System::Reflection::Emit::TypeBuilder*) == 0x8);
    // public Nitro.CodeFragment ClassFragment
    // Size: 0x8
    // Offset: 0x38
    ::Nitro::CodeFragment* ClassFragment;
    // Field size check
    static_assert(sizeof(::Nitro::CodeFragment*) == 0x8);
    // public System.Collections.Generic.Dictionary`2<System.String,System.Reflection.FieldInfo> Fields
    // Size: 0x8
    // Offset: 0x40
    ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Reflection::FieldInfo*>* Fields;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Dictionary_2<::StringW, ::System::Reflection::FieldInfo*>*) == 0x8);
    // public System.Collections.Generic.Dictionary`2<System.String,Nitro.MethodOverloads> Methods
    // Size: 0x8
    // Offset: 0x48
    ::System::Collections::Generic::Dictionary_2<::StringW, ::Nitro::MethodOverloads*>* Methods;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Dictionary_2<::StringW, ::Nitro::MethodOverloads*>*) == 0x8);
    public:
    // Get instance field reference: public System.Type BaseType
    [[deprecated("Use field access instead!")]] ::System::Type*& dyn_BaseType();
    // Get instance field reference: public System.Type compiledType
    [[deprecated("Use field access instead!")]] ::System::Type*& dyn_compiledType();
    // Get instance field reference: public Nitro.NitroCode Script
    [[deprecated("Use field access instead!")]] ::Nitro::NitroCode*& dyn_Script();
    // Get instance field reference: public System.Boolean IsPublic
    [[deprecated("Use field access instead!")]] bool& dyn_IsPublic();
    // Get instance field reference: protected System.Int32 AnonymousCount
    [[deprecated("Use field access instead!")]] int& dyn_AnonymousCount();
    // Get instance field reference: public System.Reflection.Emit.TypeBuilder Builder
    [[deprecated("Use field access instead!")]] ::System::Reflection::Emit::TypeBuilder*& dyn_Builder();
    // Get instance field reference: public Nitro.CodeFragment ClassFragment
    [[deprecated("Use field access instead!")]] ::Nitro::CodeFragment*& dyn_ClassFragment();
    // Get instance field reference: public System.Collections.Generic.Dictionary`2<System.String,System.Reflection.FieldInfo> Fields
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Reflection::FieldInfo*>*& dyn_Fields();
    // Get instance field reference: public System.Collections.Generic.Dictionary`2<System.String,Nitro.MethodOverloads> Methods
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Dictionary_2<::StringW, ::Nitro::MethodOverloads*>*& dyn_Methods();
    // public System.Void .ctor()
    // Offset: 0xF5ADD0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CompiledClass* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Nitro::CompiledClass::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CompiledClass*, creationType>()));
    }
    // public System.Void .ctor(Nitro.CodeFragment classFragment, Nitro.NitroCode script, System.String name, System.Type baseType, System.Boolean isPublic)
    // Offset: 0xF5AE70
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CompiledClass* New_ctor(::Nitro::CodeFragment* classFragment, ::Nitro::NitroCode* script, ::StringW name, ::System::Type* baseType, bool isPublic) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Nitro::CompiledClass::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CompiledClass*, creationType>(classFragment, script, name, baseType, isPublic)));
    }
    // public System.Void StartType(System.String name, Nitro.NitroCode script, System.Type baseType)
    // Offset: 0xF5AF60
    void StartType(::StringW name, ::Nitro::NitroCode* script, ::System::Type* baseType);
    // public System.Type GetAsType()
    // Offset: 0xF5AFDC
    ::System::Type* GetAsType();
    // public System.Void Compile()
    // Offset: 0xF5AFE4
    void Compile();
    // private Nitro.MethodOverloads MakeOrFind(System.String name, System.Type returnType)
    // Offset: 0xF5C738
    ::Nitro::MethodOverloads* MakeOrFind(::StringW name, ::System::Type* returnType);
    // public System.Boolean ContainsMethod(System.String name)
    // Offset: 0xF5C8E4
    bool ContainsMethod(::StringW name);
    // public System.Boolean ContainsField(System.String field)
    // Offset: 0xF5C980
    bool ContainsField(::StringW field);
    // public System.Type MethodReturnType(System.String name)
    // Offset: 0xF5CA70
    ::System::Type* MethodReturnType(::StringW name);
    // public System.Reflection.MethodInfo FindMethodOverload(System.String name, Nitro.CompiledFragment[] arguments)
    // Offset: 0xF5CBA0
    ::System::Reflection::MethodInfo* FindMethodOverload(::StringW name, ::ArrayW<::Nitro::CompiledFragment*> arguments);
    // public System.Reflection.MethodInfo FindMethodOverload(System.String name, System.Type[] arguments)
    // Offset: 0xF5CDA4
    ::System::Reflection::MethodInfo* FindMethodOverload(::StringW name, ::ArrayW<::System::Type*> arguments);
    // public Nitro.MethodOverloads FindMethodSet(System.String name)
    // Offset: 0xF5C900
    ::Nitro::MethodOverloads* FindMethodSet(::StringW name);
    // public System.Reflection.PropertyInfo GetProperty(System.String name)
    // Offset: 0xF5CE38
    ::System::Reflection::PropertyInfo* GetProperty(::StringW name);
    // public System.Reflection.FieldInfo GetField(System.String name)
    // Offset: 0xF5C99C
    ::System::Reflection::FieldInfo* GetField(::StringW name);
    // public System.Void FindOperations(Nitro.CodeFragment fragment)
    // Offset: 0xF5BD88
    void FindOperations(::Nitro::CodeFragment* fragment);
    // private System.Void GloballyScope(Nitro.CodeFragment fragment)
    // Offset: 0xF5D00C
    void GloballyScope(::Nitro::CodeFragment* fragment);
    // System.Reflection.FieldInfo DefineField(System.String name, System.Boolean isPublic, System.Type type)
    // Offset: 0xF5D15C
    ::System::Reflection::FieldInfo* DefineField(::StringW name, bool isPublic, ::System::Type* type);
    // private Nitro.CompiledMethod GetStartMethod()
    // Offset: 0xF5CEE4
    ::Nitro::CompiledMethod* GetStartMethod();
    // private Nitro.CompiledMethod GetInit()
    // Offset: 0xF5D6D8
    ::Nitro::CompiledMethod* GetInit();
    // public System.Void FindMethods(Nitro.CodeFragment fragment)
    // Offset: 0xF5B2D8
    void FindMethods(::Nitro::CodeFragment* fragment);
    // protected Nitro.CodeFragment AddFoundMethod(Nitro.CodeFragment fragment, Nitro.CodeFragment body, System.String name, System.Boolean anonymous, Nitro.BracketFragment parameters, Nitro.TypeFragment returnType, System.Boolean isPublic)
    // Offset: 0xF5D85C
    ::Nitro::CodeFragment* AddFoundMethod(::Nitro::CodeFragment* fragment, ::Nitro::CodeFragment* body, ::StringW name, bool anonymous, ::Nitro::BracketFragment* parameters, ::Nitro::TypeFragment* returnType, bool isPublic);
  }; // Nitro.CompiledClass
  #pragma pack(pop)
  static check_size<sizeof(CompiledClass), 72 + sizeof(::System::Collections::Generic::Dictionary_2<::StringW, ::Nitro::MethodOverloads*>*)> __Nitro_CompiledClassSizeCheck;
  static_assert(sizeof(CompiledClass) == 0x50);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Nitro::CompiledClass::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Nitro::CompiledClass::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Nitro::CompiledClass::StartType
// Il2CppName: StartType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Nitro::CompiledClass::*)(::StringW, ::Nitro::NitroCode*, ::System::Type*)>(&Nitro::CompiledClass::StartType)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* script = &::il2cpp_utils::GetClassFromName("Nitro", "NitroCode")->byval_arg;
    static auto* baseType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Nitro::CompiledClass*), "StartType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, script, baseType});
  }
};
// Writing MetadataGetter for method: Nitro::CompiledClass::GetAsType
// Il2CppName: GetAsType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (Nitro::CompiledClass::*)()>(&Nitro::CompiledClass::GetAsType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Nitro::CompiledClass*), "GetAsType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Nitro::CompiledClass::Compile
// Il2CppName: Compile
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Nitro::CompiledClass::*)()>(&Nitro::CompiledClass::Compile)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Nitro::CompiledClass*), "Compile", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Nitro::CompiledClass::MakeOrFind
// Il2CppName: MakeOrFind
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Nitro::MethodOverloads* (Nitro::CompiledClass::*)(::StringW, ::System::Type*)>(&Nitro::CompiledClass::MakeOrFind)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* returnType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Nitro::CompiledClass*), "MakeOrFind", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, returnType});
  }
};
// Writing MetadataGetter for method: Nitro::CompiledClass::ContainsMethod
// Il2CppName: ContainsMethod
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Nitro::CompiledClass::*)(::StringW)>(&Nitro::CompiledClass::ContainsMethod)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Nitro::CompiledClass*), "ContainsMethod", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name});
  }
};
// Writing MetadataGetter for method: Nitro::CompiledClass::ContainsField
// Il2CppName: ContainsField
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Nitro::CompiledClass::*)(::StringW)>(&Nitro::CompiledClass::ContainsField)> {
  static const MethodInfo* get() {
    static auto* field = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Nitro::CompiledClass*), "ContainsField", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{field});
  }
};
// Writing MetadataGetter for method: Nitro::CompiledClass::MethodReturnType
// Il2CppName: MethodReturnType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (Nitro::CompiledClass::*)(::StringW)>(&Nitro::CompiledClass::MethodReturnType)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Nitro::CompiledClass*), "MethodReturnType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name});
  }
};
// Writing MetadataGetter for method: Nitro::CompiledClass::FindMethodOverload
// Il2CppName: FindMethodOverload
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::MethodInfo* (Nitro::CompiledClass::*)(::StringW, ::ArrayW<::Nitro::CompiledFragment*>)>(&Nitro::CompiledClass::FindMethodOverload)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* arguments = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("Nitro", "CompiledFragment"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Nitro::CompiledClass*), "FindMethodOverload", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, arguments});
  }
};
// Writing MetadataGetter for method: Nitro::CompiledClass::FindMethodOverload
// Il2CppName: FindMethodOverload
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::MethodInfo* (Nitro::CompiledClass::*)(::StringW, ::ArrayW<::System::Type*>)>(&Nitro::CompiledClass::FindMethodOverload)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* arguments = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Type"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Nitro::CompiledClass*), "FindMethodOverload", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, arguments});
  }
};
// Writing MetadataGetter for method: Nitro::CompiledClass::FindMethodSet
// Il2CppName: FindMethodSet
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Nitro::MethodOverloads* (Nitro::CompiledClass::*)(::StringW)>(&Nitro::CompiledClass::FindMethodSet)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Nitro::CompiledClass*), "FindMethodSet", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name});
  }
};
// Writing MetadataGetter for method: Nitro::CompiledClass::GetProperty
// Il2CppName: GetProperty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::PropertyInfo* (Nitro::CompiledClass::*)(::StringW)>(&Nitro::CompiledClass::GetProperty)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Nitro::CompiledClass*), "GetProperty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name});
  }
};
// Writing MetadataGetter for method: Nitro::CompiledClass::GetField
// Il2CppName: GetField
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::FieldInfo* (Nitro::CompiledClass::*)(::StringW)>(&Nitro::CompiledClass::GetField)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Nitro::CompiledClass*), "GetField", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name});
  }
};
// Writing MetadataGetter for method: Nitro::CompiledClass::FindOperations
// Il2CppName: FindOperations
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Nitro::CompiledClass::*)(::Nitro::CodeFragment*)>(&Nitro::CompiledClass::FindOperations)> {
  static const MethodInfo* get() {
    static auto* fragment = &::il2cpp_utils::GetClassFromName("Nitro", "CodeFragment")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Nitro::CompiledClass*), "FindOperations", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{fragment});
  }
};
// Writing MetadataGetter for method: Nitro::CompiledClass::GloballyScope
// Il2CppName: GloballyScope
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Nitro::CompiledClass::*)(::Nitro::CodeFragment*)>(&Nitro::CompiledClass::GloballyScope)> {
  static const MethodInfo* get() {
    static auto* fragment = &::il2cpp_utils::GetClassFromName("Nitro", "CodeFragment")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Nitro::CompiledClass*), "GloballyScope", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{fragment});
  }
};
// Writing MetadataGetter for method: Nitro::CompiledClass::DefineField
// Il2CppName: DefineField
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::FieldInfo* (Nitro::CompiledClass::*)(::StringW, bool, ::System::Type*)>(&Nitro::CompiledClass::DefineField)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* isPublic = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Nitro::CompiledClass*), "DefineField", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, isPublic, type});
  }
};
// Writing MetadataGetter for method: Nitro::CompiledClass::GetStartMethod
// Il2CppName: GetStartMethod
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Nitro::CompiledMethod* (Nitro::CompiledClass::*)()>(&Nitro::CompiledClass::GetStartMethod)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Nitro::CompiledClass*), "GetStartMethod", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Nitro::CompiledClass::GetInit
// Il2CppName: GetInit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Nitro::CompiledMethod* (Nitro::CompiledClass::*)()>(&Nitro::CompiledClass::GetInit)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Nitro::CompiledClass*), "GetInit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Nitro::CompiledClass::FindMethods
// Il2CppName: FindMethods
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Nitro::CompiledClass::*)(::Nitro::CodeFragment*)>(&Nitro::CompiledClass::FindMethods)> {
  static const MethodInfo* get() {
    static auto* fragment = &::il2cpp_utils::GetClassFromName("Nitro", "CodeFragment")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Nitro::CompiledClass*), "FindMethods", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{fragment});
  }
};
// Writing MetadataGetter for method: Nitro::CompiledClass::AddFoundMethod
// Il2CppName: AddFoundMethod
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Nitro::CodeFragment* (Nitro::CompiledClass::*)(::Nitro::CodeFragment*, ::Nitro::CodeFragment*, ::StringW, bool, ::Nitro::BracketFragment*, ::Nitro::TypeFragment*, bool)>(&Nitro::CompiledClass::AddFoundMethod)> {
  static const MethodInfo* get() {
    static auto* fragment = &::il2cpp_utils::GetClassFromName("Nitro", "CodeFragment")->byval_arg;
    static auto* body = &::il2cpp_utils::GetClassFromName("Nitro", "CodeFragment")->byval_arg;
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* anonymous = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* parameters = &::il2cpp_utils::GetClassFromName("Nitro", "BracketFragment")->byval_arg;
    static auto* returnType = &::il2cpp_utils::GetClassFromName("Nitro", "TypeFragment")->byval_arg;
    static auto* isPublic = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Nitro::CompiledClass*), "AddFoundMethod", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{fragment, body, name, anonymous, parameters, returnType, isPublic});
  }
};
