// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Globalization.CompareOptions
#include "System/Globalization/CompareOptions.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: System.Globalization
namespace System::Globalization {
  // Forward declaring type: SortKey
  class SortKey;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Globalization::SortKey);
DEFINE_IL2CPP_ARG_TYPE(::System::Globalization::SortKey*, "System.Globalization", "SortKey");
// Type namespace: System.Globalization
namespace System::Globalization {
  // Size: 0x28
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.Globalization.SortKey
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: A59E78
  class SortKey : public ::Il2CppObject {
    public:
    public:
    // private readonly System.String source
    // Size: 0x8
    // Offset: 0x10
    ::StringW source;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private readonly System.Byte[] key
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<uint8_t> key;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // private readonly System.Globalization.CompareOptions options
    // Size: 0x4
    // Offset: 0x20
    ::System::Globalization::CompareOptions options;
    // Field size check
    static_assert(sizeof(::System::Globalization::CompareOptions) == 0x4);
    // private readonly System.Int32 lcid
    // Size: 0x4
    // Offset: 0x24
    int lcid;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: private readonly System.String source
    [[deprecated("Use field access instead!")]] ::StringW& dyn_source();
    // Get instance field reference: private readonly System.Byte[] key
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn_key();
    // Get instance field reference: private readonly System.Globalization.CompareOptions options
    [[deprecated("Use field access instead!")]] ::System::Globalization::CompareOptions& dyn_options();
    // Get instance field reference: private readonly System.Int32 lcid
    [[deprecated("Use field access instead!")]] int& dyn_lcid();
    // static public System.Int32 Compare(System.Globalization.SortKey sortkey1, System.Globalization.SortKey sortkey2)
    // Offset: 0x17E99DC
    static int Compare(::System::Globalization::SortKey* sortkey1, ::System::Globalization::SortKey* sortkey2);
    // System.Void .ctor(System.Int32 lcid, System.String source, System.Globalization.CompareOptions opt)
    // Offset: 0x17E9C0C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SortKey* New_ctor(int lcid, ::StringW source, ::System::Globalization::CompareOptions opt) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Globalization::SortKey::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SortKey*, creationType>(lcid, source, opt)));
    }
    // System.Void .ctor(System.Int32 lcid, System.String source, System.Byte[] buffer, System.Globalization.CompareOptions opt, System.Int32 lv1Length, System.Int32 lv2Length, System.Int32 lv3Length, System.Int32 kanaSmallLength, System.Int32 markTypeLength, System.Int32 katakanaLength, System.Int32 kanaWidthLength, System.Int32 identLength)
    // Offset: 0x17E9C4C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SortKey* New_ctor(int lcid, ::StringW source, ::ArrayW<uint8_t> buffer, ::System::Globalization::CompareOptions opt, int lv1Length, int lv2Length, int lv3Length, int kanaSmallLength, int markTypeLength, int katakanaLength, int kanaWidthLength, int identLength) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Globalization::SortKey::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SortKey*, creationType>(lcid, source, buffer, opt, lv1Length, lv2Length, lv3Length, kanaSmallLength, markTypeLength, katakanaLength, kanaWidthLength, identLength)));
    }
    // public System.String get_OriginalString()
    // Offset: 0x17E9C98
    ::StringW get_OriginalString();
    // public System.Byte[] get_KeyData()
    // Offset: 0x17E9CA0
    ::ArrayW<uint8_t> get_KeyData();
    // public override System.Boolean Equals(System.Object value)
    // Offset: 0x17E9CA8
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object value)
    bool Equals(::Il2CppObject* value);
    // public override System.Int32 GetHashCode()
    // Offset: 0x17E9D68
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
    // public override System.String ToString()
    // Offset: 0x17E9E50
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::StringW ToString();
    // System.Void .ctor()
    // Offset: 0x17EA0D8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SortKey* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Globalization::SortKey::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SortKey*, creationType>()));
    }
  }; // System.Globalization.SortKey
  #pragma pack(pop)
  static check_size<sizeof(SortKey), 36 + sizeof(int)> __System_Globalization_SortKeySizeCheck;
  static_assert(sizeof(SortKey) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Globalization::SortKey::Compare
// Il2CppName: Compare
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::System::Globalization::SortKey*, ::System::Globalization::SortKey*)>(&System::Globalization::SortKey::Compare)> {
  static const MethodInfo* get() {
    static auto* sortkey1 = &::il2cpp_utils::GetClassFromName("System.Globalization", "SortKey")->byval_arg;
    static auto* sortkey2 = &::il2cpp_utils::GetClassFromName("System.Globalization", "SortKey")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::SortKey*), "Compare", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sortkey1, sortkey2});
  }
};
// Writing MetadataGetter for method: System::Globalization::SortKey::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Globalization::SortKey::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Globalization::SortKey::get_OriginalString
// Il2CppName: get_OriginalString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Globalization::SortKey::*)()>(&System::Globalization::SortKey::get_OriginalString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::SortKey*), "get_OriginalString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Globalization::SortKey::get_KeyData
// Il2CppName: get_KeyData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (System::Globalization::SortKey::*)()>(&System::Globalization::SortKey::get_KeyData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::SortKey*), "get_KeyData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Globalization::SortKey::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Globalization::SortKey::*)(::Il2CppObject*)>(&System::Globalization::SortKey::Equals)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::SortKey*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Globalization::SortKey::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Globalization::SortKey::*)()>(&System::Globalization::SortKey::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::SortKey*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Globalization::SortKey::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Globalization::SortKey::*)()>(&System::Globalization::SortKey::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::SortKey*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Globalization::SortKey::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
