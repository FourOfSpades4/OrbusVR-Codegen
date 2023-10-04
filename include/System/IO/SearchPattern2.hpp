// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::IO
namespace System::IO {
}
// Completed forward declares
// Type namespace: System.IO
namespace System::IO {
  // Forward declaring type: SearchPattern2
  class SearchPattern2;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::IO::SearchPattern2);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::SearchPattern2*, "System.IO", "SearchPattern2");
// Type namespace: System.IO
namespace System::IO {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: System.IO.SearchPattern2
  // [TokenAttribute] Offset: FFFFFFFF
  class SearchPattern2 : public ::Il2CppObject {
    public:
    // Nested type: ::System::IO::SearchPattern2::Op
    class Op;
    // Nested type: ::System::IO::SearchPattern2::OpCode
    struct OpCode;
    public:
    // private System.IO.SearchPattern2/Op ops
    // Size: 0x8
    // Offset: 0x10
    ::System::IO::SearchPattern2::Op* ops;
    // Field size check
    static_assert(sizeof(::System::IO::SearchPattern2::Op*) == 0x8);
    // private System.Boolean ignore
    // Size: 0x1
    // Offset: 0x18
    bool ignore;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean hasWildcard
    // Size: 0x1
    // Offset: 0x19
    bool hasWildcard;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: hasWildcard and: pattern
    char __padding2[0x6] = {};
    // private System.String pattern
    // Size: 0x8
    // Offset: 0x20
    ::StringW pattern;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Get static field: static readonly System.Char[] WildcardChars
    static ::ArrayW<::Il2CppChar> _get_WildcardChars();
    // Set static field: static readonly System.Char[] WildcardChars
    static void _set_WildcardChars(::ArrayW<::Il2CppChar> value);
    // Get static field: static readonly System.Char[] InvalidChars
    static ::ArrayW<::Il2CppChar> _get_InvalidChars();
    // Set static field: static readonly System.Char[] InvalidChars
    static void _set_InvalidChars(::ArrayW<::Il2CppChar> value);
    // Get instance field reference: private System.IO.SearchPattern2/Op ops
    [[deprecated("Use field access instead!")]] ::System::IO::SearchPattern2::Op*& dyn_ops();
    // Get instance field reference: private System.Boolean ignore
    [[deprecated("Use field access instead!")]] bool& dyn_ignore();
    // Get instance field reference: private System.Boolean hasWildcard
    [[deprecated("Use field access instead!")]] bool& dyn_hasWildcard();
    // Get instance field reference: private System.String pattern
    [[deprecated("Use field access instead!")]] ::StringW& dyn_pattern();
    // public System.Void .ctor(System.String pattern)
    // Offset: 0x1AAD584
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SearchPattern2* New_ctor(::StringW pattern) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::IO::SearchPattern2::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SearchPattern2*, creationType>(pattern)));
    }
    // public System.Void .ctor(System.String pattern, System.Boolean ignore)
    // Offset: 0x1AAEA94
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SearchPattern2* New_ctor(::StringW pattern, bool ignore) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::IO::SearchPattern2::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SearchPattern2*, creationType>(pattern, ignore)));
    }
    // public System.Boolean get_HasWildcard()
    // Offset: 0x1AA9958
    bool get_HasWildcard();
    // private System.Void Compile(System.String pattern)
    // Offset: 0x1AAEADC
    void Compile(::StringW pattern);
    // static private System.Void .cctor()
    // Offset: 0x1AAEE28
    static void _cctor();
  }; // System.IO.SearchPattern2
  #pragma pack(pop)
  static check_size<sizeof(SearchPattern2), 32 + sizeof(::StringW)> __System_IO_SearchPattern2SizeCheck;
  static_assert(sizeof(SearchPattern2) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::IO::SearchPattern2::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::IO::SearchPattern2::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::IO::SearchPattern2::get_HasWildcard
// Il2CppName: get_HasWildcard
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::IO::SearchPattern2::*)()>(&System::IO::SearchPattern2::get_HasWildcard)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::SearchPattern2*), "get_HasWildcard", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::SearchPattern2::Compile
// Il2CppName: Compile
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::SearchPattern2::*)(::StringW)>(&System::IO::SearchPattern2::Compile)> {
  static const MethodInfo* get() {
    static auto* pattern = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::SearchPattern2*), "Compile", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pattern});
  }
};
// Writing MetadataGetter for method: System::IO::SearchPattern2::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::IO::SearchPattern2::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::SearchPattern2*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};