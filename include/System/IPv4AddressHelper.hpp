// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: System
namespace System {
  // Forward declaring type: IPv4AddressHelper
  class IPv4AddressHelper;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::IPv4AddressHelper);
DEFINE_IL2CPP_ARG_TYPE(::System::IPv4AddressHelper*, "System", "IPv4AddressHelper");
// Type namespace: System
namespace System {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.IPv4AddressHelper
  // [TokenAttribute] Offset: FFFFFFFF
  class IPv4AddressHelper : public ::Il2CppObject {
    public:
    // static System.String ParseCanonicalName(System.String str, System.Int32 start, System.Int32 end, ref System.Boolean isLoopback)
    // Offset: 0x1AAF9C4
    static ::StringW ParseCanonicalName(::StringW str, int start, int end, ByRef<bool> isLoopback);
    // static System.Int32 ParseHostNumber(System.String str, System.Int32 start, System.Int32 end)
    // Offset: 0x1AAFD98
    static int ParseHostNumber(::StringW str, int start, int end);
    // static System.Boolean IsValid(System.Char* name, System.Int32 start, ref System.Int32 end, System.Boolean allowIPv6, System.Boolean notImplicitFile, System.Boolean unknownScheme)
    // Offset: 0x1AAFEB4
    static bool IsValid(::Il2CppChar* name, int start, ByRef<int> end, bool allowIPv6, bool notImplicitFile, bool unknownScheme);
    // static System.Boolean IsValidCanonical(System.Char* name, System.Int32 start, ref System.Int32 end, System.Boolean allowIPv6, System.Boolean notImplicitFile)
    // Offset: 0x1AAFEE8
    static bool IsValidCanonical(::Il2CppChar* name, int start, ByRef<int> end, bool allowIPv6, bool notImplicitFile);
    // static System.Int64 ParseNonCanonical(System.Char* name, System.Int32 start, ref System.Int32 end, System.Boolean notImplicitFile)
    // Offset: 0x1AB0024
    static int64_t ParseNonCanonical(::Il2CppChar* name, int start, ByRef<int> end, bool notImplicitFile);
    // static private System.Boolean Parse(System.String name, System.Byte* numbers, System.Int32 start, System.Int32 end)
    // Offset: 0x1AAFD08
    static bool Parse(::StringW name, uint8_t* numbers, int start, int end);
    // static private System.Boolean ParseCanonical(System.String name, System.Byte* numbers, System.Int32 start, System.Int32 end)
    // Offset: 0x1AAFDEC
    static bool ParseCanonical(::StringW name, uint8_t* numbers, int start, int end);
  }; // System.IPv4AddressHelper
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::IPv4AddressHelper::ParseCanonicalName
// Il2CppName: ParseCanonicalName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW, int, int, ByRef<bool>)>(&System::IPv4AddressHelper::ParseCanonicalName)> {
  static const MethodInfo* get() {
    static auto* str = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* start = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* end = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* isLoopback = &::il2cpp_utils::GetClassFromName("System", "Boolean")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IPv4AddressHelper*), "ParseCanonicalName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{str, start, end, isLoopback});
  }
};
// Writing MetadataGetter for method: System::IPv4AddressHelper::ParseHostNumber
// Il2CppName: ParseHostNumber
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::StringW, int, int)>(&System::IPv4AddressHelper::ParseHostNumber)> {
  static const MethodInfo* get() {
    static auto* str = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* start = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* end = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IPv4AddressHelper*), "ParseHostNumber", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{str, start, end});
  }
};
// Writing MetadataGetter for method: System::IPv4AddressHelper::IsValid
// Il2CppName: IsValid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Il2CppChar*, int, ByRef<int>, bool, bool, bool)>(&System::IPv4AddressHelper::IsValid)> {
  static const MethodInfo* get() {
    static auto* name = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Char"))->byval_arg;
    static auto* start = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* end = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* allowIPv6 = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* notImplicitFile = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* unknownScheme = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IPv4AddressHelper*), "IsValid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, start, end, allowIPv6, notImplicitFile, unknownScheme});
  }
};
// Writing MetadataGetter for method: System::IPv4AddressHelper::IsValidCanonical
// Il2CppName: IsValidCanonical
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Il2CppChar*, int, ByRef<int>, bool, bool)>(&System::IPv4AddressHelper::IsValidCanonical)> {
  static const MethodInfo* get() {
    static auto* name = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Char"))->byval_arg;
    static auto* start = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* end = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* allowIPv6 = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* notImplicitFile = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IPv4AddressHelper*), "IsValidCanonical", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, start, end, allowIPv6, notImplicitFile});
  }
};
// Writing MetadataGetter for method: System::IPv4AddressHelper::ParseNonCanonical
// Il2CppName: ParseNonCanonical
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (*)(::Il2CppChar*, int, ByRef<int>, bool)>(&System::IPv4AddressHelper::ParseNonCanonical)> {
  static const MethodInfo* get() {
    static auto* name = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Char"))->byval_arg;
    static auto* start = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* end = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* notImplicitFile = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IPv4AddressHelper*), "ParseNonCanonical", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, start, end, notImplicitFile});
  }
};
// Writing MetadataGetter for method: System::IPv4AddressHelper::Parse
// Il2CppName: Parse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, uint8_t*, int, int)>(&System::IPv4AddressHelper::Parse)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* numbers = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Byte"))->byval_arg;
    static auto* start = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* end = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IPv4AddressHelper*), "Parse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, numbers, start, end});
  }
};
// Writing MetadataGetter for method: System::IPv4AddressHelper::ParseCanonical
// Il2CppName: ParseCanonical
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, uint8_t*, int, int)>(&System::IPv4AddressHelper::ParseCanonical)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* numbers = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Byte"))->byval_arg;
    static auto* start = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* end = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IPv4AddressHelper*), "ParseCanonical", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, numbers, start, end});
  }
};
