// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Nitro.CompiledFragment
#include "Nitro/CompiledFragment.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Nitro
namespace Nitro {
  // Forward declaring type: CompiledMethod
  class CompiledMethod;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: Nitro
namespace Nitro {
  // Forward declaring type: Operation
  class Operation;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Nitro::Operation);
DEFINE_IL2CPP_ARG_TYPE(::Nitro::Operation*, "Nitro", "Operation");
// Type namespace: Nitro
namespace Nitro {
  // Size: 0x68
  #pragma pack(push, 1)
  // Autogenerated type: Nitro.Operation
  // [TokenAttribute] Offset: FFFFFFFF
  class Operation : public ::Nitro::CompiledFragment {
    public:
    public:
    // public System.Int32 LineNumber
    // Size: 0x4
    // Offset: 0x48
    int LineNumber;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: LineNumber and: Method
    char __padding0[0x4] = {};
    // public Nitro.CompiledMethod Method
    // Size: 0x8
    // Offset: 0x50
    ::Nitro::CompiledMethod* Method;
    // Field size check
    static_assert(sizeof(::Nitro::CompiledMethod*) == 0x8);
    // public Nitro.CompiledFragment Input0
    // Size: 0x8
    // Offset: 0x58
    ::Nitro::CompiledFragment* Input0;
    // Field size check
    static_assert(sizeof(::Nitro::CompiledFragment*) == 0x8);
    // public Nitro.CompiledFragment Input1
    // Size: 0x8
    // Offset: 0x60
    ::Nitro::CompiledFragment* Input1;
    // Field size check
    static_assert(sizeof(::Nitro::CompiledFragment*) == 0x8);
    public:
    // Deleting conversion operator: operator ::Il2CppObject*
    constexpr operator ::Il2CppObject*() const noexcept = delete;
    // Get instance field reference: public System.Int32 LineNumber
    [[deprecated("Use field access instead!")]] int& dyn_LineNumber();
    // Get instance field reference: public Nitro.CompiledMethod Method
    [[deprecated("Use field access instead!")]] ::Nitro::CompiledMethod*& dyn_Method();
    // Get instance field reference: public Nitro.CompiledFragment Input0
    [[deprecated("Use field access instead!")]] ::Nitro::CompiledFragment*& dyn_Input0();
    // Get instance field reference: public Nitro.CompiledFragment Input1
    [[deprecated("Use field access instead!")]] ::Nitro::CompiledFragment*& dyn_Input1();
    // public System.Void .ctor(Nitro.CompiledMethod method)
    // Offset: 0x16E06B8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Operation* New_ctor(::Nitro::CompiledMethod* method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Nitro::Operation::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Operation*, creationType>(method)));
    }
    // public System.Boolean get_RequiresStoring()
    // Offset: 0x16E129C
    bool get_RequiresStoring();
    // public System.Boolean IsSet()
    // Offset: 0x16E12C8
    bool IsSet();
    // public System.Type EnforceType(ref Nitro.CompiledFragment input, System.Type inputType, System.Type newType)
    // Offset: 0x16E1358
    ::System::Type* EnforceType(ByRef<::Nitro::CompiledFragment*> input, ::System::Type* inputType, ::System::Type* newType);
    // public System.Type Numerical(ref Nitro.CompiledFragment input, System.Type inputType, System.Type defaultType)
    // Offset: 0x16E1884
    ::System::Type* Numerical(ByRef<::Nitro::CompiledFragment*> input, ::System::Type* inputType, ::System::Type* defaultType);
    // public System.Type Numerical(System.Type typeA, System.Type typeB, System.String overloadMethod, ref Nitro.CompiledFragment newOperation)
    // Offset: 0x16E19BC
    ::System::Type* Numerical(::System::Type* typeA, ::System::Type* typeB, ::StringW overloadMethod, ByRef<::Nitro::CompiledFragment*> newOperation);
    // public System.Type MapNumerical(System.Type typeA, System.Type typeB)
    // Offset: 0x16E1C7C
    ::System::Type* MapNumerical(::System::Type* typeA, ::System::Type* typeB);
    // public System.Type FindOverload(System.String methodName, System.Type typeA, System.Type typeB, ref Nitro.CompiledFragment newOperation)
    // Offset: 0x16E0818
    ::System::Type* FindOverload(::StringW methodName, ::System::Type* typeA, ::System::Type* typeB, ByRef<::Nitro::CompiledFragment*> newOperation);
    // public override System.Int32 GetLineNumber()
    // Offset: 0x16E12A4
    // Implemented from: Nitro.CodeFragment
    // Base method: System.Int32 CodeFragment::GetLineNumber()
    int GetLineNumber();
    // public override System.Boolean IsConstant()
    // Offset: 0x16E12C0
    // Implemented from: Nitro.CompiledFragment
    // Base method: System.Boolean CompiledFragment::IsConstant()
    bool IsConstant();
  }; // Nitro.Operation
  #pragma pack(pop)
  static check_size<sizeof(Operation), 96 + sizeof(::Nitro::CompiledFragment*)> __Nitro_OperationSizeCheck;
  static_assert(sizeof(Operation) == 0x68);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Nitro::Operation::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Nitro::Operation::get_RequiresStoring
// Il2CppName: get_RequiresStoring
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Nitro::Operation::*)()>(&Nitro::Operation::get_RequiresStoring)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Nitro::Operation*), "get_RequiresStoring", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Nitro::Operation::IsSet
// Il2CppName: IsSet
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Nitro::Operation::*)()>(&Nitro::Operation::IsSet)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Nitro::Operation*), "IsSet", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Nitro::Operation::EnforceType
// Il2CppName: EnforceType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (Nitro::Operation::*)(ByRef<::Nitro::CompiledFragment*>, ::System::Type*, ::System::Type*)>(&Nitro::Operation::EnforceType)> {
  static const MethodInfo* get() {
    static auto* input = &::il2cpp_utils::GetClassFromName("Nitro", "CompiledFragment")->this_arg;
    static auto* inputType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* newType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Nitro::Operation*), "EnforceType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input, inputType, newType});
  }
};
// Writing MetadataGetter for method: Nitro::Operation::Numerical
// Il2CppName: Numerical
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (Nitro::Operation::*)(ByRef<::Nitro::CompiledFragment*>, ::System::Type*, ::System::Type*)>(&Nitro::Operation::Numerical)> {
  static const MethodInfo* get() {
    static auto* input = &::il2cpp_utils::GetClassFromName("Nitro", "CompiledFragment")->this_arg;
    static auto* inputType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* defaultType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Nitro::Operation*), "Numerical", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input, inputType, defaultType});
  }
};
// Writing MetadataGetter for method: Nitro::Operation::Numerical
// Il2CppName: Numerical
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (Nitro::Operation::*)(::System::Type*, ::System::Type*, ::StringW, ByRef<::Nitro::CompiledFragment*>)>(&Nitro::Operation::Numerical)> {
  static const MethodInfo* get() {
    static auto* typeA = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* typeB = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* overloadMethod = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* newOperation = &::il2cpp_utils::GetClassFromName("Nitro", "CompiledFragment")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Nitro::Operation*), "Numerical", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{typeA, typeB, overloadMethod, newOperation});
  }
};
// Writing MetadataGetter for method: Nitro::Operation::MapNumerical
// Il2CppName: MapNumerical
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (Nitro::Operation::*)(::System::Type*, ::System::Type*)>(&Nitro::Operation::MapNumerical)> {
  static const MethodInfo* get() {
    static auto* typeA = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* typeB = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Nitro::Operation*), "MapNumerical", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{typeA, typeB});
  }
};
// Writing MetadataGetter for method: Nitro::Operation::FindOverload
// Il2CppName: FindOverload
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (Nitro::Operation::*)(::StringW, ::System::Type*, ::System::Type*, ByRef<::Nitro::CompiledFragment*>)>(&Nitro::Operation::FindOverload)> {
  static const MethodInfo* get() {
    static auto* methodName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* typeA = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* typeB = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* newOperation = &::il2cpp_utils::GetClassFromName("Nitro", "CompiledFragment")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Nitro::Operation*), "FindOverload", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{methodName, typeA, typeB, newOperation});
  }
};
// Writing MetadataGetter for method: Nitro::Operation::GetLineNumber
// Il2CppName: GetLineNumber
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Nitro::Operation::*)()>(&Nitro::Operation::GetLineNumber)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Nitro::Operation*), "GetLineNumber", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Nitro::Operation::IsConstant
// Il2CppName: IsConstant
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Nitro::Operation::*)()>(&Nitro::Operation::IsConstant)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Nitro::Operation*), "IsConstant", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
