// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Nitro.Variable
#include "Nitro/Variable.hpp"
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
// Forward declaring namespace: System::Reflection::Emit
namespace System::Reflection::Emit {
  // Forward declaring type: ParameterBuilder
  class ParameterBuilder;
}
// Forward declaring namespace: Nitro
namespace Nitro {
  // Forward declaring type: NitroIL
  class NitroIL;
}
// Completed forward declares
// Type namespace: Nitro
namespace Nitro {
  // Forward declaring type: ParameterVariable
  class ParameterVariable;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Nitro::ParameterVariable);
DEFINE_IL2CPP_ARG_TYPE(::Nitro::ParameterVariable*, "Nitro", "ParameterVariable");
// Type namespace: Nitro
namespace Nitro {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: Nitro.ParameterVariable
  // [TokenAttribute] Offset: FFFFFFFF
  class ParameterVariable : public ::Nitro::Variable {
    public:
    public:
    // public System.Type ParameterType
    // Size: 0x8
    // Offset: 0x18
    ::System::Type* ParameterType;
    // Field size check
    static_assert(sizeof(::System::Type*) == 0x8);
    // public System.Reflection.Emit.ParameterBuilder Builder
    // Size: 0x8
    // Offset: 0x20
    ::System::Reflection::Emit::ParameterBuilder* Builder;
    // Field size check
    static_assert(sizeof(::System::Reflection::Emit::ParameterBuilder*) == 0x8);
    public:
    // Deleting conversion operator: operator ::StringW
    constexpr operator ::StringW() const noexcept = delete;
    // Get instance field reference: public System.Type ParameterType
    [[deprecated("Use field access instead!")]] ::System::Type*& dyn_ParameterType();
    // Get instance field reference: public System.Reflection.Emit.ParameterBuilder Builder
    [[deprecated("Use field access instead!")]] ::System::Reflection::Emit::ParameterBuilder*& dyn_Builder();
    // public System.Void .ctor(System.String name, System.Type type)
    // Offset: 0x16E4A38
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ParameterVariable* New_ctor(::StringW name, ::System::Type* type) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Nitro::ParameterVariable::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ParameterVariable*, creationType>(name, type)));
    }
    // public override System.Type Type()
    // Offset: 0x16E4A9C
    // Implemented from: Nitro.Variable
    // Base method: System.Type Variable::Type()
    ::System::Type* Type();
    // public override System.Void OutputSet(Nitro.NitroIL into, System.Type setting)
    // Offset: 0x16E4AA4
    // Implemented from: Nitro.Variable
    // Base method: System.Void Variable::OutputSet(Nitro.NitroIL into, System.Type setting)
    void OutputSet(::Nitro::NitroIL* into, ::System::Type* setting);
    // public override System.Void OutputIL(Nitro.NitroIL into, System.Boolean accessingMember)
    // Offset: 0x16E4B58
    // Implemented from: Nitro.Variable
    // Base method: System.Void Variable::OutputIL(Nitro.NitroIL into, System.Boolean accessingMember)
    void OutputIL(::Nitro::NitroIL* into, bool accessingMember);
  }; // Nitro.ParameterVariable
  #pragma pack(pop)
  static check_size<sizeof(ParameterVariable), 32 + sizeof(::System::Reflection::Emit::ParameterBuilder*)> __Nitro_ParameterVariableSizeCheck;
  static_assert(sizeof(ParameterVariable) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Nitro::ParameterVariable::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Nitro::ParameterVariable::Type
// Il2CppName: Type
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (Nitro::ParameterVariable::*)()>(&Nitro::ParameterVariable::Type)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Nitro::ParameterVariable*), "Type", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Nitro::ParameterVariable::OutputSet
// Il2CppName: OutputSet
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Nitro::ParameterVariable::*)(::Nitro::NitroIL*, ::System::Type*)>(&Nitro::ParameterVariable::OutputSet)> {
  static const MethodInfo* get() {
    static auto* into = &::il2cpp_utils::GetClassFromName("Nitro", "NitroIL")->byval_arg;
    static auto* setting = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Nitro::ParameterVariable*), "OutputSet", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{into, setting});
  }
};
// Writing MetadataGetter for method: Nitro::ParameterVariable::OutputIL
// Il2CppName: OutputIL
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Nitro::ParameterVariable::*)(::Nitro::NitroIL*, bool)>(&Nitro::ParameterVariable::OutputIL)> {
  static const MethodInfo* get() {
    static auto* into = &::il2cpp_utils::GetClassFromName("Nitro", "NitroIL")->byval_arg;
    static auto* accessingMember = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Nitro::ParameterVariable*), "OutputIL", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{into, accessingMember});
  }
};
