// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include <initializer_list>
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Nitro.Operation
#include "Nitro/Operation.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: MethodInfo
  class MethodInfo;
}
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
  // Forward declaring type: MethodOperation
  class MethodOperation;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Nitro::MethodOperation);
DEFINE_IL2CPP_ARG_TYPE(::Nitro::MethodOperation*, "Nitro", "MethodOperation");
// Type namespace: Nitro
namespace Nitro {
  // Size: 0x80
  #pragma pack(push, 1)
  // Autogenerated type: Nitro.MethodOperation
  // [TokenAttribute] Offset: FFFFFFFF
  class MethodOperation : public ::Nitro::Operation {
    public:
    public:
    // public System.Reflection.MethodInfo MethodToCall
    // Size: 0x8
    // Offset: 0x68
    ::System::Reflection::MethodInfo* MethodToCall;
    // Field size check
    static_assert(sizeof(::System::Reflection::MethodInfo*) == 0x8);
    // public Nitro.CompiledFragment CalledOn
    // Size: 0x8
    // Offset: 0x70
    ::Nitro::CompiledFragment* CalledOn;
    // Field size check
    static_assert(sizeof(::Nitro::CompiledFragment*) == 0x8);
    // public Nitro.CompiledFragment[] Arguments
    // Size: 0x8
    // Offset: 0x78
    ::ArrayW<::Nitro::CompiledFragment*> Arguments;
    // Field size check
    static_assert(sizeof(::ArrayW<::Nitro::CompiledFragment*>) == 0x8);
    public:
    // Get instance field reference: public System.Reflection.MethodInfo MethodToCall
    [[deprecated("Use field access instead!")]] ::System::Reflection::MethodInfo*& dyn_MethodToCall();
    // Get instance field reference: public Nitro.CompiledFragment CalledOn
    [[deprecated("Use field access instead!")]] ::Nitro::CompiledFragment*& dyn_CalledOn();
    // Get instance field reference: public Nitro.CompiledFragment[] Arguments
    [[deprecated("Use field access instead!")]] ::ArrayW<::Nitro::CompiledFragment*>& dyn_Arguments();
    // public System.Void .ctor(Nitro.CompiledMethod method, System.Reflection.MethodInfo methodInfo, params Nitro.CompiledFragment[] arguments)
    // Offset: 0xF559E8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MethodOperation* New_ctor(::Nitro::CompiledMethod* method, ::System::Reflection::MethodInfo* methodInfo, ::ArrayW<::Nitro::CompiledFragment*> arguments) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Nitro::MethodOperation::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MethodOperation*, creationType>(method, methodInfo, arguments)));
    }
    // public System.Void .ctor(Nitro.CompiledMethod method, Nitro.CompiledFragment calledOn, Nitro.CompiledFragment[] arguments)
    // Offset: 0xF648C4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MethodOperation* New_ctor(::Nitro::CompiledMethod* method, ::Nitro::CompiledFragment* calledOn, ::ArrayW<::Nitro::CompiledFragment*> arguments) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Nitro::MethodOperation::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MethodOperation*, creationType>(method, calledOn, arguments)));
    }
    // private System.Void GetMethodInfo()
    // Offset: 0xF649A8
    void GetMethodInfo();
    // public System.String get_Name()
    // Offset: 0xF64D30
    ::StringW get_Name();
    // public System.String get_MethodName()
    // Offset: 0xF64E58
    ::StringW get_MethodName();
    // public override System.Boolean get_RequiresStoring()
    // Offset: 0xF64998
    // Implemented from: Nitro.Operation
    // Base method: System.Boolean Operation::get_RequiresStoring()
    bool get_RequiresStoring();
    // public override System.Boolean IsMemberAccessor()
    // Offset: 0xF649A0
    // Implemented from: Nitro.CodeFragment
    // Base method: System.Boolean CodeFragment::IsMemberAccessor()
    bool IsMemberAccessor();
    // public override System.Type OutputType(out Nitro.CompiledFragment nv)
    // Offset: 0xF64EE8
    // Implemented from: Nitro.CompiledFragment
    // Base method: System.Type CompiledFragment::OutputType(out Nitro.CompiledFragment nv)
    ::System::Type* OutputType(ByRef<::Nitro::CompiledFragment*> nv);
    // public override System.Void OutputIL(Nitro.NitroIL into)
    // Offset: 0xF64FA8
    // Implemented from: Nitro.CompiledFragment
    // Base method: System.Void CompiledFragment::OutputIL(Nitro.NitroIL into)
    void OutputIL(::Nitro::NitroIL* into);
  }; // Nitro.MethodOperation
  #pragma pack(pop)
  static check_size<sizeof(MethodOperation), 120 + sizeof(::ArrayW<::Nitro::CompiledFragment*>)> __Nitro_MethodOperationSizeCheck;
  static_assert(sizeof(MethodOperation) == 0x80);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Nitro::MethodOperation::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Nitro::MethodOperation::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Nitro::MethodOperation::GetMethodInfo
// Il2CppName: GetMethodInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Nitro::MethodOperation::*)()>(&Nitro::MethodOperation::GetMethodInfo)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Nitro::MethodOperation*), "GetMethodInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Nitro::MethodOperation::get_Name
// Il2CppName: get_Name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Nitro::MethodOperation::*)()>(&Nitro::MethodOperation::get_Name)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Nitro::MethodOperation*), "get_Name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Nitro::MethodOperation::get_MethodName
// Il2CppName: get_MethodName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Nitro::MethodOperation::*)()>(&Nitro::MethodOperation::get_MethodName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Nitro::MethodOperation*), "get_MethodName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Nitro::MethodOperation::get_RequiresStoring
// Il2CppName: get_RequiresStoring
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Nitro::MethodOperation::*)()>(&Nitro::MethodOperation::get_RequiresStoring)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Nitro::MethodOperation*), "get_RequiresStoring", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Nitro::MethodOperation::IsMemberAccessor
// Il2CppName: IsMemberAccessor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Nitro::MethodOperation::*)()>(&Nitro::MethodOperation::IsMemberAccessor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Nitro::MethodOperation*), "IsMemberAccessor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Nitro::MethodOperation::OutputType
// Il2CppName: OutputType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (Nitro::MethodOperation::*)(ByRef<::Nitro::CompiledFragment*>)>(&Nitro::MethodOperation::OutputType)> {
  static const MethodInfo* get() {
    static auto* nv = &::il2cpp_utils::GetClassFromName("Nitro", "CompiledFragment")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Nitro::MethodOperation*), "OutputType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{nv});
  }
};
// Writing MetadataGetter for method: Nitro::MethodOperation::OutputIL
// Il2CppName: OutputIL
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Nitro::MethodOperation::*)(::Nitro::NitroIL*)>(&Nitro::MethodOperation::OutputIL)> {
  static const MethodInfo* get() {
    static auto* into = &::il2cpp_utils::GetClassFromName("Nitro", "NitroIL")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Nitro::MethodOperation*), "OutputIL", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{into});
  }
};