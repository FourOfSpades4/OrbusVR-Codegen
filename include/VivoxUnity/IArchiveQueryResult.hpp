// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: VivoxUnity
namespace VivoxUnity {
  // Forward declaring type: IArchiveQueryResult
  class IArchiveQueryResult;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VivoxUnity::IArchiveQueryResult);
DEFINE_IL2CPP_ARG_TYPE(::VivoxUnity::IArchiveQueryResult*, "VivoxUnity", "IArchiveQueryResult");
// Type namespace: VivoxUnity
namespace VivoxUnity {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: VivoxUnity.IArchiveQueryResult
  // [TokenAttribute] Offset: FFFFFFFF
  class IArchiveQueryResult {
    public:
    // public System.String get_QueryId()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::StringW get_QueryId();
    // public System.Int32 get_ReturnCode()
    // Offset: 0xFFFFFFFFFFFFFFFF
    int get_ReturnCode();
    // public System.Int32 get_StatusCode()
    // Offset: 0xFFFFFFFFFFFFFFFF
    int get_StatusCode();
    // public System.String get_FirstId()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::StringW get_FirstId();
    // public System.String get_LastId()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::StringW get_LastId();
    // public System.UInt32 get_FirstIndex()
    // Offset: 0xFFFFFFFFFFFFFFFF
    uint get_FirstIndex();
    // public System.UInt32 get_TotalCount()
    // Offset: 0xFFFFFFFFFFFFFFFF
    uint get_TotalCount();
    // public System.Boolean get_Running()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool get_Running();
  }; // VivoxUnity.IArchiveQueryResult
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VivoxUnity::IArchiveQueryResult::get_QueryId
// Il2CppName: get_QueryId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (VivoxUnity::IArchiveQueryResult::*)()>(&VivoxUnity::IArchiveQueryResult::get_QueryId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VivoxUnity::IArchiveQueryResult*), "get_QueryId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VivoxUnity::IArchiveQueryResult::get_ReturnCode
// Il2CppName: get_ReturnCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (VivoxUnity::IArchiveQueryResult::*)()>(&VivoxUnity::IArchiveQueryResult::get_ReturnCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VivoxUnity::IArchiveQueryResult*), "get_ReturnCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VivoxUnity::IArchiveQueryResult::get_StatusCode
// Il2CppName: get_StatusCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (VivoxUnity::IArchiveQueryResult::*)()>(&VivoxUnity::IArchiveQueryResult::get_StatusCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VivoxUnity::IArchiveQueryResult*), "get_StatusCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VivoxUnity::IArchiveQueryResult::get_FirstId
// Il2CppName: get_FirstId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (VivoxUnity::IArchiveQueryResult::*)()>(&VivoxUnity::IArchiveQueryResult::get_FirstId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VivoxUnity::IArchiveQueryResult*), "get_FirstId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VivoxUnity::IArchiveQueryResult::get_LastId
// Il2CppName: get_LastId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (VivoxUnity::IArchiveQueryResult::*)()>(&VivoxUnity::IArchiveQueryResult::get_LastId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VivoxUnity::IArchiveQueryResult*), "get_LastId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VivoxUnity::IArchiveQueryResult::get_FirstIndex
// Il2CppName: get_FirstIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (VivoxUnity::IArchiveQueryResult::*)()>(&VivoxUnity::IArchiveQueryResult::get_FirstIndex)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VivoxUnity::IArchiveQueryResult*), "get_FirstIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VivoxUnity::IArchiveQueryResult::get_TotalCount
// Il2CppName: get_TotalCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (VivoxUnity::IArchiveQueryResult::*)()>(&VivoxUnity::IArchiveQueryResult::get_TotalCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VivoxUnity::IArchiveQueryResult*), "get_TotalCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VivoxUnity::IArchiveQueryResult::get_Running
// Il2CppName: get_Running
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (VivoxUnity::IArchiveQueryResult::*)()>(&VivoxUnity::IArchiveQueryResult::get_Running)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VivoxUnity::IArchiveQueryResult*), "get_Running", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
