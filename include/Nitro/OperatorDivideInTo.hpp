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
  // Forward declaring type: OperatorDivideInTo
  class OperatorDivideInTo;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Nitro::OperatorDivideInTo);
DEFINE_IL2CPP_ARG_TYPE(::Nitro::OperatorDivideInTo*, "Nitro", "OperatorDivideInTo");
// Type namespace: Nitro
namespace Nitro {
  // Size: 0x21
  #pragma pack(push, 1)
  // Autogenerated type: Nitro.OperatorDivideInTo
  // [TokenAttribute] Offset: FFFFFFFF
  class OperatorDivideInTo : public ::Nitro::Operator {
    public:
    // public System.Void .ctor()
    // Offset: 0x16E2EF8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OperatorDivideInTo* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Nitro::OperatorDivideInTo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OperatorDivideInTo*, creationType>()));
    }
    // protected override Nitro.Operation Compile(Nitro.CompiledFragment left, Nitro.CompiledFragment right, Nitro.CompiledMethod method)
    // Offset: 0x16E2F84
    // Implemented from: Nitro.Operator
    // Base method: Nitro.Operation Operator::Compile(Nitro.CompiledFragment left, Nitro.CompiledFragment right, Nitro.CompiledMethod method)
    ::Nitro::Operation* Compile(::Nitro::CompiledFragment* left, ::Nitro::CompiledFragment* right, ::Nitro::CompiledMethod* method);
  }; // Nitro.OperatorDivideInTo
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Nitro::OperatorDivideInTo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Nitro::OperatorDivideInTo::Compile
// Il2CppName: Compile
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Nitro::Operation* (Nitro::OperatorDivideInTo::*)(::Nitro::CompiledFragment*, ::Nitro::CompiledFragment*, ::Nitro::CompiledMethod*)>(&Nitro::OperatorDivideInTo::Compile)> {
  static const MethodInfo* get() {
    static auto* left = &::il2cpp_utils::GetClassFromName("Nitro", "CompiledFragment")->byval_arg;
    static auto* right = &::il2cpp_utils::GetClassFromName("Nitro", "CompiledFragment")->byval_arg;
    static auto* method = &::il2cpp_utils::GetClassFromName("Nitro", "CompiledMethod")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Nitro::OperatorDivideInTo*), "Compile", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{left, right, method});
  }
};
