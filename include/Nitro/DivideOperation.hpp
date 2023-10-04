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
  // Forward declaring type: DivideOperation
  class DivideOperation;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Nitro::DivideOperation);
DEFINE_IL2CPP_ARG_TYPE(::Nitro::DivideOperation*, "Nitro", "DivideOperation");
// Type namespace: Nitro
namespace Nitro {
  // Size: 0x68
  #pragma pack(push, 1)
  // Autogenerated type: Nitro.DivideOperation
  // [TokenAttribute] Offset: FFFFFFFF
  class DivideOperation : public ::Nitro::Operation {
    public:
    // public System.Void .ctor(Nitro.CompiledMethod method, Nitro.CompiledFragment input0, Nitro.CompiledFragment input1)
    // Offset: 0xF60D48
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DivideOperation* New_ctor(::Nitro::CompiledMethod* method, ::Nitro::CompiledFragment* input0, ::Nitro::CompiledFragment* input1) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Nitro::DivideOperation::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DivideOperation*, creationType>(method, input0, input1)));
    }
    // public override System.Type OutputType(out Nitro.CompiledFragment v)
    // Offset: 0xF60D80
    // Implemented from: Nitro.CompiledFragment
    // Base method: System.Type CompiledFragment::OutputType(out Nitro.CompiledFragment v)
    ::System::Type* OutputType(ByRef<::Nitro::CompiledFragment*> v);
    // public override System.Void OutputIL(Nitro.NitroIL into)
    // Offset: 0xF60E4C
    // Implemented from: Nitro.CompiledFragment
    // Base method: System.Void CompiledFragment::OutputIL(Nitro.NitroIL into)
    void OutputIL(::Nitro::NitroIL* into);
  }; // Nitro.DivideOperation
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Nitro::DivideOperation::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Nitro::DivideOperation::OutputType
// Il2CppName: OutputType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (Nitro::DivideOperation::*)(ByRef<::Nitro::CompiledFragment*>)>(&Nitro::DivideOperation::OutputType)> {
  static const MethodInfo* get() {
    static auto* v = &::il2cpp_utils::GetClassFromName("Nitro", "CompiledFragment")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Nitro::DivideOperation*), "OutputType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{v});
  }
};
// Writing MetadataGetter for method: Nitro::DivideOperation::OutputIL
// Il2CppName: OutputIL
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Nitro::DivideOperation::*)(::Nitro::NitroIL*)>(&Nitro::DivideOperation::OutputIL)> {
  static const MethodInfo* get() {
    static auto* into = &::il2cpp_utils::GetClassFromName("Nitro", "NitroIL")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Nitro::DivideOperation*), "OutputIL", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{into});
  }
};