// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Nitro.Operation
#include "Nitro/Operation.hpp"
// Including type: Nitro.ISettable
#include "Nitro/ISettable.hpp"
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
// Forward declaring namespace: Nitro
namespace Nitro {
  // Forward declaring type: CompiledMethod
  class CompiledMethod;
  // Forward declaring type: NitroIL
  class NitroIL;
}
// Completed forward declares
// Type namespace: Nitro
namespace Nitro {
  // Forward declaring type: IndexOperation
  class IndexOperation;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Nitro::IndexOperation);
DEFINE_IL2CPP_ARG_TYPE(::Nitro::IndexOperation*, "Nitro", "IndexOperation");
// Type namespace: Nitro
namespace Nitro {
  // Size: 0x80
  #pragma pack(push, 1)
  // Autogenerated type: Nitro.IndexOperation
  // [TokenAttribute] Offset: FFFFFFFF
  class IndexOperation : public ::Nitro::Operation/*, public ::Nitro::ISettable*/ {
    public:
    public:
    // public System.Type ElementType
    // Size: 0x8
    // Offset: 0x68
    ::System::Type* ElementType;
    // Field size check
    static_assert(sizeof(::System::Type*) == 0x8);
    // public Nitro.CompiledFragment Index
    // Size: 0x8
    // Offset: 0x70
    ::Nitro::CompiledFragment* Index;
    // Field size check
    static_assert(sizeof(::Nitro::CompiledFragment*) == 0x8);
    // public Nitro.CompiledFragment AppliedTo
    // Size: 0x8
    // Offset: 0x78
    ::Nitro::CompiledFragment* AppliedTo;
    // Field size check
    static_assert(sizeof(::Nitro::CompiledFragment*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::Nitro::ISettable
    operator ::Nitro::ISettable() noexcept {
      return *reinterpret_cast<::Nitro::ISettable*>(this);
    }
    // Get instance field reference: public System.Type ElementType
    [[deprecated("Use field access instead!")]] ::System::Type*& dyn_ElementType();
    // Get instance field reference: public Nitro.CompiledFragment Index
    [[deprecated("Use field access instead!")]] ::Nitro::CompiledFragment*& dyn_Index();
    // Get instance field reference: public Nitro.CompiledFragment AppliedTo
    [[deprecated("Use field access instead!")]] ::Nitro::CompiledFragment*& dyn_AppliedTo();
    // public System.Void .ctor(Nitro.CompiledMethod method, Nitro.CompiledFragment appliedTo, Nitro.CompiledFragment[] indices)
    // Offset: 0xF62AE8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IndexOperation* New_ctor(::Nitro::CompiledMethod* method, ::Nitro::CompiledFragment* appliedTo, ::ArrayW<::Nitro::CompiledFragment*> indices) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Nitro::IndexOperation::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IndexOperation*, creationType>(method, appliedTo, indices)));
    }
    // public System.Boolean OutputTarget(Nitro.NitroIL into)
    // Offset: 0xF63254
    bool OutputTarget(::Nitro::NitroIL* into);
    // public System.Void OutputSet(Nitro.NitroIL into, System.Type setting)
    // Offset: 0xF6332C
    void OutputSet(::Nitro::NitroIL* into, ::System::Type* setting);
    // public override System.Type OutputType(out Nitro.CompiledFragment v)
    // Offset: 0xF62C24
    // Implemented from: Nitro.CompiledFragment
    // Base method: System.Type CompiledFragment::OutputType(out Nitro.CompiledFragment v)
    ::System::Type* OutputType(ByRef<::Nitro::CompiledFragment*> v);
    // public override System.Void OutputIL(Nitro.NitroIL into)
    // Offset: 0xF6345C
    // Implemented from: Nitro.CompiledFragment
    // Base method: System.Void CompiledFragment::OutputIL(Nitro.NitroIL into)
    void OutputIL(::Nitro::NitroIL* into);
  }; // Nitro.IndexOperation
  #pragma pack(pop)
  static check_size<sizeof(IndexOperation), 120 + sizeof(::Nitro::CompiledFragment*)> __Nitro_IndexOperationSizeCheck;
  static_assert(sizeof(IndexOperation) == 0x80);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Nitro::IndexOperation::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Nitro::IndexOperation::OutputTarget
// Il2CppName: OutputTarget
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Nitro::IndexOperation::*)(::Nitro::NitroIL*)>(&Nitro::IndexOperation::OutputTarget)> {
  static const MethodInfo* get() {
    static auto* into = &::il2cpp_utils::GetClassFromName("Nitro", "NitroIL")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Nitro::IndexOperation*), "OutputTarget", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{into});
  }
};
// Writing MetadataGetter for method: Nitro::IndexOperation::OutputSet
// Il2CppName: OutputSet
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Nitro::IndexOperation::*)(::Nitro::NitroIL*, ::System::Type*)>(&Nitro::IndexOperation::OutputSet)> {
  static const MethodInfo* get() {
    static auto* into = &::il2cpp_utils::GetClassFromName("Nitro", "NitroIL")->byval_arg;
    static auto* setting = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Nitro::IndexOperation*), "OutputSet", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{into, setting});
  }
};
// Writing MetadataGetter for method: Nitro::IndexOperation::OutputType
// Il2CppName: OutputType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (Nitro::IndexOperation::*)(ByRef<::Nitro::CompiledFragment*>)>(&Nitro::IndexOperation::OutputType)> {
  static const MethodInfo* get() {
    static auto* v = &::il2cpp_utils::GetClassFromName("Nitro", "CompiledFragment")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Nitro::IndexOperation*), "OutputType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{v});
  }
};
// Writing MetadataGetter for method: Nitro::IndexOperation::OutputIL
// Il2CppName: OutputIL
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Nitro::IndexOperation::*)(::Nitro::NitroIL*)>(&Nitro::IndexOperation::OutputIL)> {
  static const MethodInfo* get() {
    static auto* into = &::il2cpp_utils::GetClassFromName("Nitro", "NitroIL")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Nitro::IndexOperation*), "OutputIL", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{into});
  }
};