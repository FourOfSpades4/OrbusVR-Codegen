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
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: Nitro
namespace Nitro {
  // Forward declaring type: NitroIL
  class NitroIL;
  // Forward declaring type: CompiledMethod
  class CompiledMethod;
}
// Completed forward declares
// Type namespace: Nitro
namespace Nitro {
  // Forward declaring type: CastOperation
  class CastOperation;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Nitro::CastOperation);
DEFINE_IL2CPP_ARG_TYPE(::Nitro::CastOperation*, "Nitro", "CastOperation");
// Type namespace: Nitro
namespace Nitro {
  // Size: 0x78
  #pragma pack(push, 1)
  // Autogenerated type: Nitro.CastOperation
  // [TokenAttribute] Offset: FFFFFFFF
  class CastOperation : public ::Nitro::Operation {
    public:
    public:
    // public System.Type ToType
    // Size: 0x8
    // Offset: 0x68
    ::System::Type* ToType;
    // Field size check
    static_assert(sizeof(::System::Type*) == 0x8);
    // public Nitro.CompiledFragment ToCast
    // Size: 0x8
    // Offset: 0x70
    ::Nitro::CompiledFragment* ToCast;
    // Field size check
    static_assert(sizeof(::Nitro::CompiledFragment*) == 0x8);
    public:
    // Get instance field reference: public System.Type ToType
    [[deprecated("Use field access instead!")]] ::System::Type*& dyn_ToType();
    // Get instance field reference: public Nitro.CompiledFragment ToCast
    [[deprecated("Use field access instead!")]] ::Nitro::CompiledFragment*& dyn_ToCast();
    // public System.Void .ctor(Nitro.CompiledMethod method, Nitro.CompiledFragment toCast, System.Type toType)
    // Offset: 0xF58184
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CastOperation* New_ctor(::Nitro::CompiledMethod* method, ::Nitro::CompiledFragment* toCast, ::System::Type* toType) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Nitro::CastOperation::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CastOperation*, creationType>(method, toCast, toType)));
    }
    // public override System.Type OutputType(out Nitro.CompiledFragment newOperation)
    // Offset: 0xF59574
    // Implemented from: Nitro.CompiledFragment
    // Base method: System.Type CompiledFragment::OutputType(out Nitro.CompiledFragment newOperation)
    ::System::Type* OutputType(ByRef<::Nitro::CompiledFragment*> newOperation);
    // public override System.Void OutputIL(Nitro.NitroIL into)
    // Offset: 0xF59720
    // Implemented from: Nitro.CompiledFragment
    // Base method: System.Void CompiledFragment::OutputIL(Nitro.NitroIL into)
    void OutputIL(::Nitro::NitroIL* into);
  }; // Nitro.CastOperation
  #pragma pack(pop)
  static check_size<sizeof(CastOperation), 112 + sizeof(::Nitro::CompiledFragment*)> __Nitro_CastOperationSizeCheck;
  static_assert(sizeof(CastOperation) == 0x78);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Nitro::CastOperation::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Nitro::CastOperation::OutputType
// Il2CppName: OutputType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (Nitro::CastOperation::*)(ByRef<::Nitro::CompiledFragment*>)>(&Nitro::CastOperation::OutputType)> {
  static const MethodInfo* get() {
    static auto* newOperation = &::il2cpp_utils::GetClassFromName("Nitro", "CompiledFragment")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Nitro::CastOperation*), "OutputType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{newOperation});
  }
};
// Writing MetadataGetter for method: Nitro::CastOperation::OutputIL
// Il2CppName: OutputIL
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Nitro::CastOperation::*)(::Nitro::NitroIL*)>(&Nitro::CastOperation::OutputIL)> {
  static const MethodInfo* get() {
    static auto* into = &::il2cpp_utils::GetClassFromName("Nitro", "NitroIL")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Nitro::CastOperation*), "OutputIL", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{into});
  }
};