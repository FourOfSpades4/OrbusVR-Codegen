// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Nitro.ISettable
#include "Nitro/ISettable.hpp"
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
// Forward declaring namespace: Nitro
namespace Nitro {
  // Forward declaring type: NitroIL
  class NitroIL;
}
// Completed forward declares
// Type namespace: Nitro
namespace Nitro {
  // Forward declaring type: Variable
  class Variable;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Nitro::Variable);
DEFINE_IL2CPP_ARG_TYPE(::Nitro::Variable*, "Nitro", "Variable");
// Type namespace: Nitro
namespace Nitro {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Nitro.Variable
  // [TokenAttribute] Offset: FFFFFFFF
  class Variable : public ::Il2CppObject/*, public ::Nitro::ISettable*/ {
    public:
    public:
    // public System.String Name
    // Size: 0x8
    // Offset: 0x10
    ::StringW Name;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Creating interface conversion operator: operator ::Nitro::ISettable
    operator ::Nitro::ISettable() noexcept {
      return *reinterpret_cast<::Nitro::ISettable*>(this);
    }
    // Creating conversion operator: operator ::StringW
    constexpr operator ::StringW() const noexcept {
      return Name;
    }
    // Get instance field reference: public System.String Name
    [[deprecated("Use field access instead!")]] ::StringW& dyn_Name();
    // public System.Void .ctor(System.String name)
    // Offset: 0x16E4A70
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Variable* New_ctor(::StringW name) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Nitro::Variable::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Variable*, creationType>(name)));
    }
    // public System.Type Type()
    // Offset: 0x16EE2E4
    ::System::Type* Type();
    // public System.Void OutputIL(Nitro.NitroIL into, System.Boolean accessingMember)
    // Offset: 0x16EE354
    void OutputIL(::Nitro::NitroIL* into, bool accessingMember);
    // public System.Void OutputSet(Nitro.NitroIL into, System.Type setting)
    // Offset: 0x16EE358
    void OutputSet(::Nitro::NitroIL* into, ::System::Type* setting);
    // public System.Boolean OutputTarget(Nitro.NitroIL into)
    // Offset: 0x16EE35C
    bool OutputTarget(::Nitro::NitroIL* into);
    // public System.Boolean Equals(Nitro.Variable other)
    // Offset: 0x16E8EE4
    bool Equals(::Nitro::Variable* other);
  }; // Nitro.Variable
  #pragma pack(pop)
  static check_size<sizeof(Variable), 16 + sizeof(::StringW)> __Nitro_VariableSizeCheck;
  static_assert(sizeof(Variable) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Nitro::Variable::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Nitro::Variable::Type
// Il2CppName: Type
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (Nitro::Variable::*)()>(&Nitro::Variable::Type)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Nitro::Variable*), "Type", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Nitro::Variable::OutputIL
// Il2CppName: OutputIL
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Nitro::Variable::*)(::Nitro::NitroIL*, bool)>(&Nitro::Variable::OutputIL)> {
  static const MethodInfo* get() {
    static auto* into = &::il2cpp_utils::GetClassFromName("Nitro", "NitroIL")->byval_arg;
    static auto* accessingMember = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Nitro::Variable*), "OutputIL", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{into, accessingMember});
  }
};
// Writing MetadataGetter for method: Nitro::Variable::OutputSet
// Il2CppName: OutputSet
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Nitro::Variable::*)(::Nitro::NitroIL*, ::System::Type*)>(&Nitro::Variable::OutputSet)> {
  static const MethodInfo* get() {
    static auto* into = &::il2cpp_utils::GetClassFromName("Nitro", "NitroIL")->byval_arg;
    static auto* setting = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Nitro::Variable*), "OutputSet", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{into, setting});
  }
};
// Writing MetadataGetter for method: Nitro::Variable::OutputTarget
// Il2CppName: OutputTarget
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Nitro::Variable::*)(::Nitro::NitroIL*)>(&Nitro::Variable::OutputTarget)> {
  static const MethodInfo* get() {
    static auto* into = &::il2cpp_utils::GetClassFromName("Nitro", "NitroIL")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Nitro::Variable*), "OutputTarget", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{into});
  }
};
// Writing MetadataGetter for method: Nitro::Variable::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Nitro::Variable::*)(::Nitro::Variable*)>(&Nitro::Variable::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("Nitro", "Variable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Nitro::Variable*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};