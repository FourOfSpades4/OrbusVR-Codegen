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
  // Forward declaring type: CompiledFragment
  class CompiledFragment;
  // Forward declaring type: CompiledMethod
  class CompiledMethod;
}
// Completed forward declares
// Type namespace: Nitro
namespace Nitro {
  // Forward declaring type: DynamicMethodCompiler
  class DynamicMethodCompiler;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Nitro::DynamicMethodCompiler);
DEFINE_IL2CPP_ARG_TYPE(::Nitro::DynamicMethodCompiler*, "Nitro", "DynamicMethodCompiler");
// Type namespace: Nitro
namespace Nitro {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Nitro.DynamicMethodCompiler
  // [TokenAttribute] Offset: FFFFFFFF
  class DynamicMethodCompiler : public ::Il2CppObject {
    public:
    // static public System.Type TypeFor(System.Type methodReturnType)
    // Offset: 0xF60F38
    static ::System::Type* TypeFor(::System::Type* methodReturnType);
    // static public Nitro.CompiledFragment Compile(Nitro.CompiledMethod function, System.String methodName, System.Type methodReturnType, Nitro.CompiledFragment target)
    // Offset: 0xF5DB1C
    static ::Nitro::CompiledFragment* Compile(::Nitro::CompiledMethod* function, ::StringW methodName, ::System::Type* methodReturnType, ::Nitro::CompiledFragment* target);
    // public System.Void .ctor()
    // Offset: 0xF6104C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DynamicMethodCompiler* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Nitro::DynamicMethodCompiler::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DynamicMethodCompiler*, creationType>()));
    }
  }; // Nitro.DynamicMethodCompiler
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Nitro::DynamicMethodCompiler::TypeFor
// Il2CppName: TypeFor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (*)(::System::Type*)>(&Nitro::DynamicMethodCompiler::TypeFor)> {
  static const MethodInfo* get() {
    static auto* methodReturnType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Nitro::DynamicMethodCompiler*), "TypeFor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{methodReturnType});
  }
};
// Writing MetadataGetter for method: Nitro::DynamicMethodCompiler::Compile
// Il2CppName: Compile
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Nitro::CompiledFragment* (*)(::Nitro::CompiledMethod*, ::StringW, ::System::Type*, ::Nitro::CompiledFragment*)>(&Nitro::DynamicMethodCompiler::Compile)> {
  static const MethodInfo* get() {
    static auto* function = &::il2cpp_utils::GetClassFromName("Nitro", "CompiledMethod")->byval_arg;
    static auto* methodName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* methodReturnType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* target = &::il2cpp_utils::GetClassFromName("Nitro", "CompiledFragment")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Nitro::DynamicMethodCompiler*), "Compile", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{function, methodName, methodReturnType, target});
  }
};
// Writing MetadataGetter for method: Nitro::DynamicMethodCompiler::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!