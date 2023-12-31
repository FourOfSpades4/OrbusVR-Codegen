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
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: Nitro
namespace Nitro {
  // Forward declaring type: CompiledMethod
  class CompiledMethod;
  // Forward declaring type: CodeFragment
  class CodeFragment;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: MethodInfo
  class MethodInfo;
}
// Completed forward declares
// Type namespace: Nitro
namespace Nitro {
  // Forward declaring type: MethodOverloads
  class MethodOverloads;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Nitro::MethodOverloads);
DEFINE_IL2CPP_ARG_TYPE(::Nitro::MethodOverloads*, "Nitro", "MethodOverloads");
// Type namespace: Nitro
namespace Nitro {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Nitro.MethodOverloads
  // [TokenAttribute] Offset: FFFFFFFF
  class MethodOverloads : public ::Il2CppObject {
    public:
    public:
    // public System.Type ReturnType
    // Size: 0x8
    // Offset: 0x10
    ::System::Type* ReturnType;
    // Field size check
    static_assert(sizeof(::System::Type*) == 0x8);
    // public System.Collections.Generic.List`1<Nitro.CompiledMethod> Methods
    // Size: 0x8
    // Offset: 0x18
    ::System::Collections::Generic::List_1<::Nitro::CompiledMethod*>* Methods;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::Nitro::CompiledMethod*>*) == 0x8);
    public:
    // Get instance field reference: public System.Type ReturnType
    [[deprecated("Use field access instead!")]] ::System::Type*& dyn_ReturnType();
    // Get instance field reference: public System.Collections.Generic.List`1<Nitro.CompiledMethod> Methods
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::Nitro::CompiledMethod*>*& dyn_Methods();
    // public System.Void .ctor(System.Type returnType)
    // Offset: 0xF5C860
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MethodOverloads* New_ctor(::System::Type* returnType) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Nitro::MethodOverloads::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MethodOverloads*, creationType>(returnType)));
    }
    // public System.Void AddMethod(Nitro.CompiledMethod method)
    // Offset: 0xF5D668
    void AddMethod(::Nitro::CompiledMethod* method);
    // public System.Void ParametersOk(Nitro.CompiledMethod method)
    // Offset: 0xF652C0
    void ParametersOk(::Nitro::CompiledMethod* method);
    // public System.Reflection.MethodInfo GetOverload(System.Type[] arguments)
    // Offset: 0xF5CC5C
    ::System::Reflection::MethodInfo* GetOverload(::ArrayW<::System::Type*> arguments);
    // public System.Void CompileParameters()
    // Offset: 0xF5BE40
    void CompileParameters();
    // public System.Void CompileBody()
    // Offset: 0xF5BE44
    void CompileBody();
    // private System.Boolean NewBaseCall(Nitro.CodeFragment fragment)
    // Offset: 0xF65454
    bool NewBaseCall(::Nitro::CodeFragment* fragment);
  }; // Nitro.MethodOverloads
  #pragma pack(pop)
  static check_size<sizeof(MethodOverloads), 24 + sizeof(::System::Collections::Generic::List_1<::Nitro::CompiledMethod*>*)> __Nitro_MethodOverloadsSizeCheck;
  static_assert(sizeof(MethodOverloads) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Nitro::MethodOverloads::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Nitro::MethodOverloads::AddMethod
// Il2CppName: AddMethod
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Nitro::MethodOverloads::*)(::Nitro::CompiledMethod*)>(&Nitro::MethodOverloads::AddMethod)> {
  static const MethodInfo* get() {
    static auto* method = &::il2cpp_utils::GetClassFromName("Nitro", "CompiledMethod")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Nitro::MethodOverloads*), "AddMethod", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{method});
  }
};
// Writing MetadataGetter for method: Nitro::MethodOverloads::ParametersOk
// Il2CppName: ParametersOk
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Nitro::MethodOverloads::*)(::Nitro::CompiledMethod*)>(&Nitro::MethodOverloads::ParametersOk)> {
  static const MethodInfo* get() {
    static auto* method = &::il2cpp_utils::GetClassFromName("Nitro", "CompiledMethod")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Nitro::MethodOverloads*), "ParametersOk", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{method});
  }
};
// Writing MetadataGetter for method: Nitro::MethodOverloads::GetOverload
// Il2CppName: GetOverload
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::MethodInfo* (Nitro::MethodOverloads::*)(::ArrayW<::System::Type*>)>(&Nitro::MethodOverloads::GetOverload)> {
  static const MethodInfo* get() {
    static auto* arguments = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Type"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Nitro::MethodOverloads*), "GetOverload", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{arguments});
  }
};
// Writing MetadataGetter for method: Nitro::MethodOverloads::CompileParameters
// Il2CppName: CompileParameters
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Nitro::MethodOverloads::*)()>(&Nitro::MethodOverloads::CompileParameters)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Nitro::MethodOverloads*), "CompileParameters", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Nitro::MethodOverloads::CompileBody
// Il2CppName: CompileBody
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Nitro::MethodOverloads::*)()>(&Nitro::MethodOverloads::CompileBody)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Nitro::MethodOverloads*), "CompileBody", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Nitro::MethodOverloads::NewBaseCall
// Il2CppName: NewBaseCall
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Nitro::MethodOverloads::*)(::Nitro::CodeFragment*)>(&Nitro::MethodOverloads::NewBaseCall)> {
  static const MethodInfo* get() {
    static auto* fragment = &::il2cpp_utils::GetClassFromName("Nitro", "CodeFragment")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Nitro::MethodOverloads*), "NewBaseCall", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{fragment});
  }
};
