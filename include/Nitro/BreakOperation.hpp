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
  // Forward declaring type: BreakOperation
  class BreakOperation;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Nitro::BreakOperation);
DEFINE_IL2CPP_ARG_TYPE(::Nitro::BreakOperation*, "Nitro", "BreakOperation");
// Type namespace: Nitro
namespace Nitro {
  // Size: 0x6C
  #pragma pack(push, 1)
  // Autogenerated type: Nitro.BreakOperation
  // [TokenAttribute] Offset: FFFFFFFF
  class BreakOperation : public ::Nitro::Operation {
    public:
    public:
    // public System.Int32 Depth
    // Size: 0x4
    // Offset: 0x68
    int Depth;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: public System.Int32 Depth
    [[deprecated("Use field access instead!")]] int& dyn_Depth();
    // public System.Void .ctor(Nitro.CompiledMethod method, System.Int32 depth)
    // Offset: 0xF591D8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BreakOperation* New_ctor(::Nitro::CompiledMethod* method, int depth) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Nitro::BreakOperation::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BreakOperation*, creationType>(method, depth)));
    }
    // public override System.Boolean get_RequiresStoring()
    // Offset: 0xF59204
    // Implemented from: Nitro.Operation
    // Base method: System.Boolean Operation::get_RequiresStoring()
    bool get_RequiresStoring();
    // public override System.Type OutputType(out Nitro.CompiledFragment v)
    // Offset: 0xF5920C
    // Implemented from: Nitro.CompiledFragment
    // Base method: System.Type CompiledFragment::OutputType(out Nitro.CompiledFragment v)
    ::System::Type* OutputType(ByRef<::Nitro::CompiledFragment*> v);
    // public override System.Void OutputIL(Nitro.NitroIL into)
    // Offset: 0xF59218
    // Implemented from: Nitro.CompiledFragment
    // Base method: System.Void CompiledFragment::OutputIL(Nitro.NitroIL into)
    void OutputIL(::Nitro::NitroIL* into);
  }; // Nitro.BreakOperation
  #pragma pack(pop)
  static check_size<sizeof(BreakOperation), 104 + sizeof(int)> __Nitro_BreakOperationSizeCheck;
  static_assert(sizeof(BreakOperation) == 0x6C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Nitro::BreakOperation::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Nitro::BreakOperation::get_RequiresStoring
// Il2CppName: get_RequiresStoring
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Nitro::BreakOperation::*)()>(&Nitro::BreakOperation::get_RequiresStoring)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Nitro::BreakOperation*), "get_RequiresStoring", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Nitro::BreakOperation::OutputType
// Il2CppName: OutputType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (Nitro::BreakOperation::*)(ByRef<::Nitro::CompiledFragment*>)>(&Nitro::BreakOperation::OutputType)> {
  static const MethodInfo* get() {
    static auto* v = &::il2cpp_utils::GetClassFromName("Nitro", "CompiledFragment")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Nitro::BreakOperation*), "OutputType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{v});
  }
};
// Writing MetadataGetter for method: Nitro::BreakOperation::OutputIL
// Il2CppName: OutputIL
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Nitro::BreakOperation::*)(::Nitro::NitroIL*)>(&Nitro::BreakOperation::OutputIL)> {
  static const MethodInfo* get() {
    static auto* into = &::il2cpp_utils::GetClassFromName("Nitro", "NitroIL")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Nitro::BreakOperation*), "OutputIL", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{into});
  }
};