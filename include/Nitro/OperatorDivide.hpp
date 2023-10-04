// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Nitro.Operator
#include "Nitro/Operator.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Nitro
namespace Nitro {
  // Forward declaring type: Operation
  class Operation;
  // Forward declaring type: CompiledFragment
  class CompiledFragment;
  // Forward declaring type: CompiledMethod
  class CompiledMethod;
}
// Completed forward declares
// Type namespace: Nitro
namespace Nitro {
  // Forward declaring type: OperatorDivide
  class OperatorDivide;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Nitro::OperatorDivide);
DEFINE_IL2CPP_ARG_TYPE(::Nitro::OperatorDivide*, "Nitro", "OperatorDivide");
// Type namespace: Nitro
namespace Nitro {
  // Size: 0x21
  #pragma pack(push, 1)
  // Autogenerated type: Nitro.OperatorDivide
  // [TokenAttribute] Offset: FFFFFFFF
  class OperatorDivide : public ::Nitro::Operator {
    public:
    // public System.Void .ctor()
    // Offset: 0x16E2DF0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OperatorDivide* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Nitro::OperatorDivide::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OperatorDivide*, creationType>()));
    }
    // protected override Nitro.Operation Compile(Nitro.CompiledFragment left, Nitro.CompiledFragment right, Nitro.CompiledMethod method)
    // Offset: 0x16E2E7C
    // Implemented from: Nitro.Operator
    // Base method: Nitro.Operation Operator::Compile(Nitro.CompiledFragment left, Nitro.CompiledFragment right, Nitro.CompiledMethod method)
    ::Nitro::Operation* Compile(::Nitro::CompiledFragment* left, ::Nitro::CompiledFragment* right, ::Nitro::CompiledMethod* method);
  }; // Nitro.OperatorDivide
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Nitro::OperatorDivide::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Nitro::OperatorDivide::Compile
// Il2CppName: Compile
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Nitro::Operation* (Nitro::OperatorDivide::*)(::Nitro::CompiledFragment*, ::Nitro::CompiledFragment*, ::Nitro::CompiledMethod*)>(&Nitro::OperatorDivide::Compile)> {
  static const MethodInfo* get() {
    static auto* left = &::il2cpp_utils::GetClassFromName("Nitro", "CompiledFragment")->byval_arg;
    static auto* right = &::il2cpp_utils::GetClassFromName("Nitro", "CompiledFragment")->byval_arg;
    static auto* method = &::il2cpp_utils::GetClassFromName("Nitro", "CompiledMethod")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Nitro::OperatorDivide*), "Compile", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{left, right, method});
  }
};
