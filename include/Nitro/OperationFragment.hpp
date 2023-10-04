// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Nitro.CodeFragment
#include "Nitro/CodeFragment.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Nitro
namespace Nitro {
  // Forward declaring type: CodeLexer
  class CodeLexer;
  // Forward declaring type: CompiledFragment
  class CompiledFragment;
  // Forward declaring type: CompiledMethod
  class CompiledMethod;
}
// Completed forward declares
// Type namespace: Nitro
namespace Nitro {
  // Forward declaring type: OperationFragment
  class OperationFragment;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Nitro::OperationFragment);
DEFINE_IL2CPP_ARG_TYPE(::Nitro::OperationFragment*, "Nitro", "OperationFragment");
// Type namespace: Nitro
namespace Nitro {
  // Size: 0x44
  #pragma pack(push, 1)
  // Autogenerated type: Nitro.OperationFragment
  // [TokenAttribute] Offset: FFFFFFFF
  class OperationFragment : public ::Nitro::CodeFragment {
    public:
    public:
    // public System.Int32 LineNumber
    // Size: 0x4
    // Offset: 0x40
    int LineNumber;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return LineNumber;
    }
    // Get instance field reference: public System.Int32 LineNumber
    [[deprecated("Use field access instead!")]] int& dyn_LineNumber();
    // public System.Void .ctor(Nitro.CodeLexer sr, Nitro.CodeFragment parent)
    // Offset: 0x16E1DD4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OperationFragment* New_ctor(::Nitro::CodeLexer* sr, ::Nitro::CodeFragment* parent) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Nitro::OperationFragment::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OperationFragment*, creationType>(sr, parent)));
    }
    // public System.Void .ctor()
    // Offset: 0x16E1DCC
    // Implemented from: Nitro.CodeFragment
    // Base method: System.Void CodeFragment::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OperationFragment* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Nitro::OperationFragment::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OperationFragment*, creationType>()));
    }
    // public override System.Int32 GetLineNumber()
    // Offset: 0x16E215C
    // Implemented from: Nitro.CodeFragment
    // Base method: System.Int32 CodeFragment::GetLineNumber()
    int GetLineNumber();
    // public override Nitro.CompiledFragment Compile(Nitro.CompiledMethod method)
    // Offset: 0x16E2164
    // Implemented from: Nitro.CodeFragment
    // Base method: Nitro.CompiledFragment CodeFragment::Compile(Nitro.CompiledMethod method)
    ::Nitro::CompiledFragment* Compile(::Nitro::CompiledMethod* method);
    // public override System.String ToString()
    // Offset: 0x16E22B4
    // Implemented from: Nitro.CodeFragment
    // Base method: System.String CodeFragment::ToString()
    ::StringW ToString();
  }; // Nitro.OperationFragment
  #pragma pack(pop)
  static check_size<sizeof(OperationFragment), 64 + sizeof(int)> __Nitro_OperationFragmentSizeCheck;
  static_assert(sizeof(OperationFragment) == 0x44);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Nitro::OperationFragment::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Nitro::OperationFragment::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Nitro::OperationFragment::GetLineNumber
// Il2CppName: GetLineNumber
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Nitro::OperationFragment::*)()>(&Nitro::OperationFragment::GetLineNumber)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Nitro::OperationFragment*), "GetLineNumber", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Nitro::OperationFragment::Compile
// Il2CppName: Compile
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Nitro::CompiledFragment* (Nitro::OperationFragment::*)(::Nitro::CompiledMethod*)>(&Nitro::OperationFragment::Compile)> {
  static const MethodInfo* get() {
    static auto* method = &::il2cpp_utils::GetClassFromName("Nitro", "CompiledMethod")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Nitro::OperationFragment*), "Compile", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{method});
  }
};
// Writing MetadataGetter for method: Nitro::OperationFragment::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Nitro::OperationFragment::*)()>(&Nitro::OperationFragment::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Nitro::OperationFragment*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
