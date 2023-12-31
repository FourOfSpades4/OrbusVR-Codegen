// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Nitro.Operation
#include "Nitro/Operation.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Nitro
namespace Nitro {
  // Forward declaring type: CompiledMethod
  class CompiledMethod;
  // Forward declaring type: NitroIL
  class NitroIL;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: Nitro
namespace Nitro {
  // Forward declaring type: EqualsOperation
  class EqualsOperation;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Nitro::EqualsOperation);
DEFINE_IL2CPP_ARG_TYPE(::Nitro::EqualsOperation*, "Nitro", "EqualsOperation");
// Type namespace: Nitro
namespace Nitro {
  // Size: 0x68
  #pragma pack(push, 1)
  // Autogenerated type: Nitro.EqualsOperation
  // [TokenAttribute] Offset: FFFFFFFF
  class EqualsOperation : public ::Nitro::Operation {
    public:
    // public System.Void .ctor(Nitro.CompiledMethod method, Nitro.CompiledFragment input0, Nitro.CompiledFragment input1)
    // Offset: 0xF61054
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EqualsOperation* New_ctor(::Nitro::CompiledMethod* method, ::Nitro::CompiledFragment* input0, ::Nitro::CompiledFragment* input1) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Nitro::EqualsOperation::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EqualsOperation*, creationType>(method, input0, input1)));
    }
    // public override System.Type OutputType(out Nitro.CompiledFragment v)
    // Offset: 0xF6108C
    // Implemented from: Nitro.CompiledFragment
    // Base method: System.Type CompiledFragment::OutputType(out Nitro.CompiledFragment v)
    ::System::Type* OutputType(ByRef<::Nitro::CompiledFragment*> v);
    // public override System.Void OutputIL(Nitro.NitroIL into)
    // Offset: 0xF611A8
    // Implemented from: Nitro.CompiledFragment
    // Base method: System.Void CompiledFragment::OutputIL(Nitro.NitroIL into)
    void OutputIL(::Nitro::NitroIL* into);
  }; // Nitro.EqualsOperation
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Nitro::EqualsOperation::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Nitro::EqualsOperation::OutputType
// Il2CppName: OutputType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (Nitro::EqualsOperation::*)(ByRef<::Nitro::CompiledFragment*>)>(&Nitro::EqualsOperation::OutputType)> {
  static const MethodInfo* get() {
    static auto* v = &::il2cpp_utils::GetClassFromName("Nitro", "CompiledFragment")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Nitro::EqualsOperation*), "OutputType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{v});
  }
};
// Writing MetadataGetter for method: Nitro::EqualsOperation::OutputIL
// Il2CppName: OutputIL
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Nitro::EqualsOperation::*)(::Nitro::NitroIL*)>(&Nitro::EqualsOperation::OutputIL)> {
  static const MethodInfo* get() {
    static auto* into = &::il2cpp_utils::GetClassFromName("Nitro", "NitroIL")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Nitro::EqualsOperation*), "OutputIL", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{into});
  }
};
