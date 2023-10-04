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
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Nitro
namespace Nitro {
  // Forward declaring type: CodeLexer
  class CodeLexer;
  // Forward declaring type: NitroCode
  class NitroCode;
  // Forward declaring type: AddResult
  struct AddResult;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: Nitro
namespace Nitro {
  // Forward declaring type: TypeFragment
  class TypeFragment;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Nitro::TypeFragment);
DEFINE_IL2CPP_ARG_TYPE(::Nitro::TypeFragment*, "Nitro", "TypeFragment");
// Type namespace: Nitro
namespace Nitro {
  // Size: 0x60
  #pragma pack(push, 1)
  // Autogenerated type: Nitro.TypeFragment
  // [TokenAttribute] Offset: FFFFFFFF
  class TypeFragment : public ::Nitro::CodeFragment {
    public:
    public:
    // public System.Boolean IsArray
    // Size: 0x1
    // Offset: 0x40
    bool IsArray;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean HasColon
    // Size: 0x1
    // Offset: 0x41
    bool HasColon;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: HasColon and: Value
    char __padding1[0x6] = {};
    // public System.String Value
    // Size: 0x8
    // Offset: 0x48
    ::StringW Value;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Int32 Dimensions
    // Size: 0x4
    // Offset: 0x50
    int Dimensions;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: Dimensions and: GenericSet
    char __padding3[0x4] = {};
    // public Nitro.TypeFragment[] GenericSet
    // Size: 0x8
    // Offset: 0x58
    ::ArrayW<::Nitro::TypeFragment*> GenericSet;
    // Field size check
    static_assert(sizeof(::ArrayW<::Nitro::TypeFragment*>) == 0x8);
    public:
    // Get instance field reference: public System.Boolean IsArray
    [[deprecated("Use field access instead!")]] bool& dyn_IsArray();
    // Get instance field reference: public System.Boolean HasColon
    [[deprecated("Use field access instead!")]] bool& dyn_HasColon();
    // Get instance field reference: public System.String Value
    [[deprecated("Use field access instead!")]] ::StringW& dyn_Value();
    // Get instance field reference: public System.Int32 Dimensions
    [[deprecated("Use field access instead!")]] int& dyn_Dimensions();
    // Get instance field reference: public Nitro.TypeFragment[] GenericSet
    [[deprecated("Use field access instead!")]] ::ArrayW<::Nitro::TypeFragment*>& dyn_GenericSet();
    // static public System.Boolean WillHandle(System.Char character)
    // Offset: 0x16EB050
    static bool WillHandle(::Il2CppChar character);
    // public System.Void .ctor(Nitro.CodeLexer sr)
    // Offset: 0x16EB060
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TypeFragment* New_ctor(::Nitro::CodeLexer* sr) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Nitro::TypeFragment::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TypeFragment*, creationType>(sr)));
    }
    // public System.Void .ctor(Nitro.CodeLexer sr, System.Boolean hasColon)
    // Offset: 0x16EB068
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TypeFragment* New_ctor(::Nitro::CodeLexer* sr, bool hasColon) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Nitro::TypeFragment::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TypeFragment*, creationType>(sr, hasColon)));
    }
    // private System.Void SetArray(Nitro.CodeLexer sr)
    // Offset: 0x16EB380
    void SetArray(::Nitro::CodeLexer* sr);
    // public System.Type FindType(Nitro.NitroCode script)
    // Offset: 0x16EB56C
    ::System::Type* FindType(::Nitro::NitroCode* script);
    // public override Nitro.AddResult AddTo(Nitro.CodeFragment to, Nitro.CodeLexer sr)
    // Offset: 0x16EB49C
    // Implemented from: Nitro.CodeFragment
    // Base method: Nitro.AddResult CodeFragment::AddTo(Nitro.CodeFragment to, Nitro.CodeLexer sr)
    ::Nitro::AddResult AddTo(::Nitro::CodeFragment* to, ::Nitro::CodeLexer* sr);
    // public override System.String ToString()
    // Offset: 0x16EB8B0
    // Implemented from: Nitro.CodeFragment
    // Base method: System.String CodeFragment::ToString()
    ::StringW ToString();
  }; // Nitro.TypeFragment
  #pragma pack(pop)
  static check_size<sizeof(TypeFragment), 88 + sizeof(::ArrayW<::Nitro::TypeFragment*>)> __Nitro_TypeFragmentSizeCheck;
  static_assert(sizeof(TypeFragment) == 0x60);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Nitro::TypeFragment::WillHandle
// Il2CppName: WillHandle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Il2CppChar)>(&Nitro::TypeFragment::WillHandle)> {
  static const MethodInfo* get() {
    static auto* character = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Nitro::TypeFragment*), "WillHandle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{character});
  }
};
// Writing MetadataGetter for method: Nitro::TypeFragment::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Nitro::TypeFragment::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Nitro::TypeFragment::SetArray
// Il2CppName: SetArray
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Nitro::TypeFragment::*)(::Nitro::CodeLexer*)>(&Nitro::TypeFragment::SetArray)> {
  static const MethodInfo* get() {
    static auto* sr = &::il2cpp_utils::GetClassFromName("Nitro", "CodeLexer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Nitro::TypeFragment*), "SetArray", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sr});
  }
};
// Writing MetadataGetter for method: Nitro::TypeFragment::FindType
// Il2CppName: FindType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (Nitro::TypeFragment::*)(::Nitro::NitroCode*)>(&Nitro::TypeFragment::FindType)> {
  static const MethodInfo* get() {
    static auto* script = &::il2cpp_utils::GetClassFromName("Nitro", "NitroCode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Nitro::TypeFragment*), "FindType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{script});
  }
};
// Writing MetadataGetter for method: Nitro::TypeFragment::AddTo
// Il2CppName: AddTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Nitro::AddResult (Nitro::TypeFragment::*)(::Nitro::CodeFragment*, ::Nitro::CodeLexer*)>(&Nitro::TypeFragment::AddTo)> {
  static const MethodInfo* get() {
    static auto* to = &::il2cpp_utils::GetClassFromName("Nitro", "CodeFragment")->byval_arg;
    static auto* sr = &::il2cpp_utils::GetClassFromName("Nitro", "CodeLexer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Nitro::TypeFragment*), "AddTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{to, sr});
  }
};
// Writing MetadataGetter for method: Nitro::TypeFragment::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Nitro::TypeFragment::*)()>(&Nitro::TypeFragment::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Nitro::TypeFragment*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};