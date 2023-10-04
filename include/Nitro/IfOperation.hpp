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
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Nitro
namespace Nitro {
  // Forward declaring type: BracketFragment
  class BracketFragment;
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
  // Forward declaring type: IfOperation
  class IfOperation;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Nitro::IfOperation);
DEFINE_IL2CPP_ARG_TYPE(::Nitro::IfOperation*, "Nitro", "IfOperation");
// Type namespace: Nitro
namespace Nitro {
  // Size: 0x88
  #pragma pack(push, 1)
  // Autogenerated type: Nitro.IfOperation
  // [TokenAttribute] Offset: FFFFFFFF
  class IfOperation : public ::Nitro::Operation {
    public:
    public:
    // public System.Boolean AllRoutesReturn
    // Size: 0x1
    // Offset: 0x68
    bool AllRoutesReturn;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: AllRoutesReturn and: IfTrue
    char __padding0[0x7] = {};
    // public Nitro.BracketFragment IfTrue
    // Size: 0x8
    // Offset: 0x70
    ::Nitro::BracketFragment* IfTrue;
    // Field size check
    static_assert(sizeof(::Nitro::BracketFragment*) == 0x8);
    // public Nitro.BracketFragment IfFalse
    // Size: 0x8
    // Offset: 0x78
    ::Nitro::BracketFragment* IfFalse;
    // Field size check
    static_assert(sizeof(::Nitro::BracketFragment*) == 0x8);
    // public Nitro.CompiledFragment[] Conditions
    // Size: 0x8
    // Offset: 0x80
    ::ArrayW<::Nitro::CompiledFragment*> Conditions;
    // Field size check
    static_assert(sizeof(::ArrayW<::Nitro::CompiledFragment*>) == 0x8);
    public:
    // Get instance field reference: public System.Boolean AllRoutesReturn
    [[deprecated("Use field access instead!")]] bool& dyn_AllRoutesReturn();
    // Get instance field reference: public Nitro.BracketFragment IfTrue
    [[deprecated("Use field access instead!")]] ::Nitro::BracketFragment*& dyn_IfTrue();
    // Get instance field reference: public Nitro.BracketFragment IfFalse
    [[deprecated("Use field access instead!")]] ::Nitro::BracketFragment*& dyn_IfFalse();
    // Get instance field reference: public Nitro.CompiledFragment[] Conditions
    [[deprecated("Use field access instead!")]] ::ArrayW<::Nitro::CompiledFragment*>& dyn_Conditions();
    // public System.Void .ctor(Nitro.CompiledMethod method, Nitro.BracketFragment condition, Nitro.BracketFragment ifTrue, Nitro.BracketFragment ifFalse)
    // Offset: 0xF624FC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IfOperation* New_ctor(::Nitro::CompiledMethod* method, ::Nitro::BracketFragment* condition, ::Nitro::BracketFragment* ifTrue, ::Nitro::BracketFragment* ifFalse) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Nitro::IfOperation::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IfOperation*, creationType>(method, condition, ifTrue, ifFalse)));
    }
    // public override System.Boolean get_RequiresStoring()
    // Offset: 0xF62690
    // Implemented from: Nitro.Operation
    // Base method: System.Boolean Operation::get_RequiresStoring()
    bool get_RequiresStoring();
    // public override System.Type OutputType(out Nitro.CompiledFragment v)
    // Offset: 0xF62698
    // Implemented from: Nitro.CompiledFragment
    // Base method: System.Type CompiledFragment::OutputType(out Nitro.CompiledFragment v)
    ::System::Type* OutputType(ByRef<::Nitro::CompiledFragment*> v);
    // public override System.Void OutputIL(Nitro.NitroIL into)
    // Offset: 0xF627BC
    // Implemented from: Nitro.CompiledFragment
    // Base method: System.Void CompiledFragment::OutputIL(Nitro.NitroIL into)
    void OutputIL(::Nitro::NitroIL* into);
  }; // Nitro.IfOperation
  #pragma pack(pop)
  static check_size<sizeof(IfOperation), 128 + sizeof(::ArrayW<::Nitro::CompiledFragment*>)> __Nitro_IfOperationSizeCheck;
  static_assert(sizeof(IfOperation) == 0x88);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Nitro::IfOperation::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Nitro::IfOperation::get_RequiresStoring
// Il2CppName: get_RequiresStoring
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Nitro::IfOperation::*)()>(&Nitro::IfOperation::get_RequiresStoring)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Nitro::IfOperation*), "get_RequiresStoring", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Nitro::IfOperation::OutputType
// Il2CppName: OutputType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (Nitro::IfOperation::*)(ByRef<::Nitro::CompiledFragment*>)>(&Nitro::IfOperation::OutputType)> {
  static const MethodInfo* get() {
    static auto* v = &::il2cpp_utils::GetClassFromName("Nitro", "CompiledFragment")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Nitro::IfOperation*), "OutputType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{v});
  }
};
// Writing MetadataGetter for method: Nitro::IfOperation::OutputIL
// Il2CppName: OutputIL
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Nitro::IfOperation::*)(::Nitro::NitroIL*)>(&Nitro::IfOperation::OutputIL)> {
  static const MethodInfo* get() {
    static auto* into = &::il2cpp_utils::GetClassFromName("Nitro", "NitroIL")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Nitro::IfOperation*), "OutputIL", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{into});
  }
};
