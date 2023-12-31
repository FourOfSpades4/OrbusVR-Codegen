// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: VivoxUnity
namespace VivoxUnity {
  // Forward declaring type: AccountId
  class AccountId;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VivoxUnity::AccountId);
DEFINE_IL2CPP_ARG_TYPE(::VivoxUnity::AccountId*, "VivoxUnity", "AccountId");
// Type namespace: VivoxUnity
namespace VivoxUnity {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: VivoxUnity.AccountId
  // [TokenAttribute] Offset: FFFFFFFF
  class AccountId : public ::Il2CppObject {
    public:
    public:
    // private readonly System.String _domain
    // Size: 0x8
    // Offset: 0x10
    ::StringW domain;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private readonly System.String _name
    // Size: 0x8
    // Offset: 0x18
    ::StringW name;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private readonly System.String _issuer
    // Size: 0x8
    // Offset: 0x20
    ::StringW issuer;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private readonly System.String _displayname
    // Size: 0x8
    // Offset: 0x28
    ::StringW displayname;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private readonly System.String[] _spokenLanguages
    // Size: 0x8
    // Offset: 0x30
    ::ArrayW<::StringW> spokenLanguages;
    // Field size check
    static_assert(sizeof(::ArrayW<::StringW>) == 0x8);
    public:
    // static field const value: static public System.Int32 _accountNameMaxLength
    static constexpr const int _accountNameMaxLength = 127;
    // Get static field: static public System.Int32 _accountNameMaxLength
    static int _get__accountNameMaxLength();
    // Set static field: static public System.Int32 _accountNameMaxLength
    static void _set__accountNameMaxLength(int value);
    // Get instance field reference: private readonly System.String _domain
    [[deprecated("Use field access instead!")]] ::StringW& dyn__domain();
    // Get instance field reference: private readonly System.String _name
    [[deprecated("Use field access instead!")]] ::StringW& dyn__name();
    // Get instance field reference: private readonly System.String _issuer
    [[deprecated("Use field access instead!")]] ::StringW& dyn__issuer();
    // Get instance field reference: private readonly System.String _displayname
    [[deprecated("Use field access instead!")]] ::StringW& dyn__displayname();
    // Get instance field reference: private readonly System.String[] _spokenLanguages
    [[deprecated("Use field access instead!")]] ::ArrayW<::StringW>& dyn__spokenLanguages();
    // public System.Void .ctor(System.String uri, System.String displayname)
    // Offset: 0x14B3804
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AccountId* New_ctor(::StringW uri, ::StringW displayname) {
      static auto ___internal__logger = ::Logger::get().WithContext("::VivoxUnity::AccountId::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AccountId*, creationType>(uri, displayname)));
    }
    // public System.Void .ctor(System.String issuer, System.String name, System.String domain, System.String displayname, System.String[] spokenLanguages)
    // Offset: 0x14B4170
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AccountId* New_ctor(::StringW issuer, ::StringW name, ::StringW domain, ::StringW displayname, ::ArrayW<::StringW> spokenLanguages) {
      static auto ___internal__logger = ::Logger::get().WithContext("::VivoxUnity::AccountId::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AccountId*, creationType>(issuer, name, domain, displayname, spokenLanguages)));
    }
    // public System.String get_Issuer()
    // Offset: 0x14B4860
    ::StringW get_Issuer();
    // public System.String get_Name()
    // Offset: 0x14B4868
    ::StringW get_Name();
    // public System.String get_Domain()
    // Offset: 0x14B4870
    ::StringW get_Domain();
    // public System.String[] get_SpokenLanguages()
    // Offset: 0x14B4878
    ::ArrayW<::StringW> get_SpokenLanguages();
    // System.String get_AccountName()
    // Offset: 0x14B48D4
    ::StringW get_AccountName();
    // public System.String get_DisplayName()
    // Offset: 0x14B4B40
    ::StringW get_DisplayName();
    // private System.Boolean Equals(VivoxUnity.AccountId other)
    // Offset: 0x14B4CA0
    bool Equals(::VivoxUnity::AccountId* other);
    // public System.Boolean get_IsEmpty()
    // Offset: 0x14B4AEC
    bool get_IsEmpty();
    // static public System.Boolean IsNullOrEmpty(VivoxUnity.AccountId id)
    // Offset: 0x14B4DA4
    static bool IsNullOrEmpty(::VivoxUnity::AccountId* id);
    // System.Boolean IsValidName(System.String name)
    // Offset: 0x14B406C
    bool IsValidName(::StringW name);
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x14B4B78
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x14B4D20
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
    // public override System.String ToString()
    // Offset: 0x14B4DB4
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::StringW ToString();
  }; // VivoxUnity.AccountId
  #pragma pack(pop)
  static check_size<sizeof(AccountId), 48 + sizeof(::ArrayW<::StringW>)> __VivoxUnity_AccountIdSizeCheck;
  static_assert(sizeof(AccountId) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VivoxUnity::AccountId::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VivoxUnity::AccountId::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VivoxUnity::AccountId::get_Issuer
// Il2CppName: get_Issuer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (VivoxUnity::AccountId::*)()>(&VivoxUnity::AccountId::get_Issuer)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VivoxUnity::AccountId*), "get_Issuer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VivoxUnity::AccountId::get_Name
// Il2CppName: get_Name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (VivoxUnity::AccountId::*)()>(&VivoxUnity::AccountId::get_Name)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VivoxUnity::AccountId*), "get_Name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VivoxUnity::AccountId::get_Domain
// Il2CppName: get_Domain
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (VivoxUnity::AccountId::*)()>(&VivoxUnity::AccountId::get_Domain)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VivoxUnity::AccountId*), "get_Domain", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VivoxUnity::AccountId::get_SpokenLanguages
// Il2CppName: get_SpokenLanguages
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW> (VivoxUnity::AccountId::*)()>(&VivoxUnity::AccountId::get_SpokenLanguages)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VivoxUnity::AccountId*), "get_SpokenLanguages", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VivoxUnity::AccountId::get_AccountName
// Il2CppName: get_AccountName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (VivoxUnity::AccountId::*)()>(&VivoxUnity::AccountId::get_AccountName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VivoxUnity::AccountId*), "get_AccountName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VivoxUnity::AccountId::get_DisplayName
// Il2CppName: get_DisplayName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (VivoxUnity::AccountId::*)()>(&VivoxUnity::AccountId::get_DisplayName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VivoxUnity::AccountId*), "get_DisplayName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VivoxUnity::AccountId::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (VivoxUnity::AccountId::*)(::VivoxUnity::AccountId*)>(&VivoxUnity::AccountId::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("VivoxUnity", "AccountId")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VivoxUnity::AccountId*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: VivoxUnity::AccountId::get_IsEmpty
// Il2CppName: get_IsEmpty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (VivoxUnity::AccountId::*)()>(&VivoxUnity::AccountId::get_IsEmpty)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VivoxUnity::AccountId*), "get_IsEmpty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VivoxUnity::AccountId::IsNullOrEmpty
// Il2CppName: IsNullOrEmpty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::VivoxUnity::AccountId*)>(&VivoxUnity::AccountId::IsNullOrEmpty)> {
  static const MethodInfo* get() {
    static auto* id = &::il2cpp_utils::GetClassFromName("VivoxUnity", "AccountId")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VivoxUnity::AccountId*), "IsNullOrEmpty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{id});
  }
};
// Writing MetadataGetter for method: VivoxUnity::AccountId::IsValidName
// Il2CppName: IsValidName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (VivoxUnity::AccountId::*)(::StringW)>(&VivoxUnity::AccountId::IsValidName)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VivoxUnity::AccountId*), "IsValidName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name});
  }
};
// Writing MetadataGetter for method: VivoxUnity::AccountId::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (VivoxUnity::AccountId::*)(::Il2CppObject*)>(&VivoxUnity::AccountId::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VivoxUnity::AccountId*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: VivoxUnity::AccountId::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (VivoxUnity::AccountId::*)()>(&VivoxUnity::AccountId::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VivoxUnity::AccountId*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VivoxUnity::AccountId::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (VivoxUnity::AccountId::*)()>(&VivoxUnity::AccountId::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VivoxUnity::AccountId*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
