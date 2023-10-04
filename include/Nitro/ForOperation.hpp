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
  // Forward declaring type: ForOperation
  class ForOperation;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Nitro::ForOperation);
DEFINE_IL2CPP_ARG_TYPE(::Nitro::ForOperation*, "Nitro", "ForOperation");
// Type namespace: Nitro
namespace Nitro {
  // Size: 0x78
  #pragma pack(push, 1)
  // Autogenerated type: Nitro.ForOperation
  // [TokenAttribute] Offset: FFFFFFFF
  class ForOperation : public ::Nitro::Operation {
    public:
    public:
    // public Nitro.BracketFragment Body
    // Size: 0x8
    // Offset: 0x68
    ::Nitro::BracketFragment* Body;
    // Field size check
    static_assert(sizeof(::Nitro::BracketFragment*) == 0x8);
    // public Nitro.CompiledFragment[] Parameters
    // Size: 0x8
    // Offset: 0x70
    ::ArrayW<::Nitro::CompiledFragment*> Parameters;
    // Field size check
    static_assert(sizeof(::ArrayW<::Nitro::CompiledFragment*>) == 0x8);
    public:
    // Get instance field reference: public Nitro.BracketFragment Body
    [[deprecated("Use field access instead!")]] ::Nitro::BracketFragment*& dyn_Body();
    // Get instance field reference: public Nitro.CompiledFragment[] Parameters
    [[deprecated("Use field access instead!")]] ::ArrayW<::Nitro::CompiledFragment*>& dyn_Parameters();
    // public System.Void .ctor(Nitro.CompiledMethod method, Nitro.BracketFragment rules, Nitro.BracketFragment body)
    // Offset: 0xF6140C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ForOperation* New_ctor(::Nitro::CompiledMethod* method, ::Nitro::BracketFragment* rules, ::Nitro::BracketFragment* body) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Nitro::ForOperation::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ForOperation*, creationType>(method, rules, body)));
    }
    // public override System.Boolean get_RequiresStoring()
    // Offset: 0xF614D4
    // Implemented from: Nitro.Operation
    // Base method: System.Boolean Operation::get_RequiresStoring()
    bool get_RequiresStoring();
    // public override System.Type OutputType(out Nitro.CompiledFragment v)
    // Offset: 0xF614DC
    // Implemented from: Nitro.CompiledFragment
    // Base method: System.Type CompiledFragment::OutputType(out Nitro.CompiledFragment v)
    ::System::Type* OutputType(ByRef<::Nitro::CompiledFragment*> v);
    // public override System.Void OutputIL(Nitro.NitroIL into)
    // Offset: 0xF614E8
    // Implemented from: Nitro.CompiledFragment
    // Base method: System.Void CompiledFragment::OutputIL(Nitro.NitroIL into)
    void OutputIL(::Nitro::NitroIL* into);
  }; // Nitro.ForOperation
  #pragma pack(pop)
  static check_size<sizeof(ForOperation), 112 + sizeof(::ArrayW<::Nitro::CompiledFragment*>)> __Nitro_ForOperationSizeCheck;
  static_assert(sizeof(ForOperation) == 0x78);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Nitro::ForOperation::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Nitro::ForOperation::get_RequiresStoring
// Il2CppName: get_RequiresStoring
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Nitro::ForOperation::*)()>(&Nitro::ForOperation::get_RequiresStoring)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Nitro::ForOperation*), "get_RequiresStoring", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Nitro::ForOperation::OutputType
// Il2CppName: OutputType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (Nitro::ForOperation::*)(ByRef<::Nitro::CompiledFragment*>)>(&Nitro::ForOperation::OutputType)> {
  static const MethodInfo* get() {
    static auto* v = &::il2cpp_utils::GetClassFromName("Nitro", "CompiledFragment")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Nitro::ForOperation*), "OutputType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{v});
  }
};
// Writing MetadataGetter for method: Nitro::ForOperation::OutputIL
// Il2CppName: OutputIL
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Nitro::ForOperation::*)(::Nitro::NitroIL*)>(&Nitro::ForOperation::OutputIL)> {
  static const MethodInfo* get() {
    static auto* into = &::il2cpp_utils::GetClassFromName("Nitro", "NitroIL")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Nitro::ForOperation*), "OutputIL", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{into});
  }
};