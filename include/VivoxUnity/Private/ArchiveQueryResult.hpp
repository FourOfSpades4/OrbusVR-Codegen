// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VivoxUnity.IArchiveQueryResult
#include "VivoxUnity/IArchiveQueryResult.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: vx_evt_session_archive_query_end_t
  class vx_evt_session_archive_query_end_t;
  // Forward declaring type: vx_evt_account_archive_query_end_t
  class vx_evt_account_archive_query_end_t;
}
// Completed forward declares
// Type namespace: VivoxUnity.Private
namespace VivoxUnity::Private {
  // Forward declaring type: ArchiveQueryResult
  class ArchiveQueryResult;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VivoxUnity::Private::ArchiveQueryResult);
DEFINE_IL2CPP_ARG_TYPE(::VivoxUnity::Private::ArchiveQueryResult*, "VivoxUnity.Private", "ArchiveQueryResult");
// Type namespace: VivoxUnity.Private
namespace VivoxUnity::Private {
  // Size: 0x39
  #pragma pack(push, 1)
  // Autogenerated type: VivoxUnity.Private.ArchiveQueryResult
  // [TokenAttribute] Offset: FFFFFFFF
  class ArchiveQueryResult : public ::Il2CppObject/*, public ::VivoxUnity::IArchiveQueryResult*/ {
    public:
    public:
    // [CompilerGeneratedAttribute] Offset: 0xABDF08
    // private System.String <QueryId>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::StringW QueryId;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xABDF18
    // private System.Int32 <ReturnCode>k__BackingField
    // Size: 0x4
    // Offset: 0x18
    int ReturnCode;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // [CompilerGeneratedAttribute] Offset: 0xABDF28
    // private System.Int32 <StatusCode>k__BackingField
    // Size: 0x4
    // Offset: 0x1C
    int StatusCode;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // [CompilerGeneratedAttribute] Offset: 0xABDF38
    // private System.String <FirstId>k__BackingField
    // Size: 0x8
    // Offset: 0x20
    ::StringW FirstId;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xABDF48
    // private System.String <LastId>k__BackingField
    // Size: 0x8
    // Offset: 0x28
    ::StringW LastId;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xABDF58
    // private System.UInt32 <FirstIndex>k__BackingField
    // Size: 0x4
    // Offset: 0x30
    uint FirstIndex;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // [CompilerGeneratedAttribute] Offset: 0xABDF68
    // private System.UInt32 <TotalCount>k__BackingField
    // Size: 0x4
    // Offset: 0x34
    uint TotalCount;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // [CompilerGeneratedAttribute] Offset: 0xABDF78
    // private System.Boolean <Running>k__BackingField
    // Size: 0x1
    // Offset: 0x38
    bool Running;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating interface conversion operator: operator ::VivoxUnity::IArchiveQueryResult
    operator ::VivoxUnity::IArchiveQueryResult() noexcept {
      return *reinterpret_cast<::VivoxUnity::IArchiveQueryResult*>(this);
    }
    // Get instance field reference: private System.String <QueryId>k__BackingField
    [[deprecated("Use field access instead!")]] ::StringW& dyn_$QueryId$k__BackingField();
    // Get instance field reference: private System.Int32 <ReturnCode>k__BackingField
    [[deprecated("Use field access instead!")]] int& dyn_$ReturnCode$k__BackingField();
    // Get instance field reference: private System.Int32 <StatusCode>k__BackingField
    [[deprecated("Use field access instead!")]] int& dyn_$StatusCode$k__BackingField();
    // Get instance field reference: private System.String <FirstId>k__BackingField
    [[deprecated("Use field access instead!")]] ::StringW& dyn_$FirstId$k__BackingField();
    // Get instance field reference: private System.String <LastId>k__BackingField
    [[deprecated("Use field access instead!")]] ::StringW& dyn_$LastId$k__BackingField();
    // Get instance field reference: private System.UInt32 <FirstIndex>k__BackingField
    [[deprecated("Use field access instead!")]] uint& dyn_$FirstIndex$k__BackingField();
    // Get instance field reference: private System.UInt32 <TotalCount>k__BackingField
    [[deprecated("Use field access instead!")]] uint& dyn_$TotalCount$k__BackingField();
    // Get instance field reference: private System.Boolean <Running>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$Running$k__BackingField();
    // public System.String get_QueryId()
    // Offset: 0x14B9D78
    ::StringW get_QueryId();
    // private System.Void set_QueryId(System.String value)
    // Offset: 0x14B9D80
    void set_QueryId(::StringW value);
    // public System.Int32 get_ReturnCode()
    // Offset: 0x14B9D88
    int get_ReturnCode();
    // private System.Void set_ReturnCode(System.Int32 value)
    // Offset: 0x14B9D90
    void set_ReturnCode(int value);
    // public System.Int32 get_StatusCode()
    // Offset: 0x14B9D98
    int get_StatusCode();
    // private System.Void set_StatusCode(System.Int32 value)
    // Offset: 0x14B9DA0
    void set_StatusCode(int value);
    // public System.String get_FirstId()
    // Offset: 0x14B9DA8
    ::StringW get_FirstId();
    // private System.Void set_FirstId(System.String value)
    // Offset: 0x14B9DB0
    void set_FirstId(::StringW value);
    // public System.String get_LastId()
    // Offset: 0x14B9DB8
    ::StringW get_LastId();
    // private System.Void set_LastId(System.String value)
    // Offset: 0x14B9DC0
    void set_LastId(::StringW value);
    // public System.UInt32 get_FirstIndex()
    // Offset: 0x14B9DC8
    uint get_FirstIndex();
    // private System.Void set_FirstIndex(System.UInt32 value)
    // Offset: 0x14B9DD0
    void set_FirstIndex(uint value);
    // public System.UInt32 get_TotalCount()
    // Offset: 0x14B9DD8
    uint get_TotalCount();
    // private System.Void set_TotalCount(System.UInt32 value)
    // Offset: 0x14B9DE0
    void set_TotalCount(uint value);
    // public System.Boolean get_Running()
    // Offset: 0x14B9DE8
    bool get_Running();
    // private System.Void set_Running(System.Boolean value)
    // Offset: 0x14B9DF0
    void set_Running(bool value);
    // public System.Void .ctor()
    // Offset: 0x14B9DFC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ArchiveQueryResult* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VivoxUnity::Private::ArchiveQueryResult::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ArchiveQueryResult*, creationType>()));
    }
    // public System.Void .ctor(System.String queryId)
    // Offset: 0x14B9E68
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ArchiveQueryResult* New_ctor(::StringW queryId) {
      static auto ___internal__logger = ::Logger::get().WithContext("::VivoxUnity::Private::ArchiveQueryResult::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ArchiveQueryResult*, creationType>(queryId)));
    }
    // public System.Void .ctor(vx_evt_session_archive_query_end_t evt)
    // Offset: 0x14B9EE4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ArchiveQueryResult* New_ctor(::GlobalNamespace::vx_evt_session_archive_query_end_t* evt) {
      static auto ___internal__logger = ::Logger::get().WithContext("::VivoxUnity::Private::ArchiveQueryResult::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ArchiveQueryResult*, creationType>(evt)));
    }
    // public System.Void .ctor(vx_evt_account_archive_query_end_t evt)
    // Offset: 0x14BA020
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ArchiveQueryResult* New_ctor(::GlobalNamespace::vx_evt_account_archive_query_end_t* evt) {
      static auto ___internal__logger = ::Logger::get().WithContext("::VivoxUnity::Private::ArchiveQueryResult::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ArchiveQueryResult*, creationType>(evt)));
    }
  }; // VivoxUnity.Private.ArchiveQueryResult
  #pragma pack(pop)
  static check_size<sizeof(ArchiveQueryResult), 56 + sizeof(bool)> __VivoxUnity_Private_ArchiveQueryResultSizeCheck;
  static_assert(sizeof(ArchiveQueryResult) == 0x39);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VivoxUnity::Private::ArchiveQueryResult::get_QueryId
// Il2CppName: get_QueryId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (VivoxUnity::Private::ArchiveQueryResult::*)()>(&VivoxUnity::Private::ArchiveQueryResult::get_QueryId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VivoxUnity::Private::ArchiveQueryResult*), "get_QueryId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VivoxUnity::Private::ArchiveQueryResult::set_QueryId
// Il2CppName: set_QueryId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VivoxUnity::Private::ArchiveQueryResult::*)(::StringW)>(&VivoxUnity::Private::ArchiveQueryResult::set_QueryId)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VivoxUnity::Private::ArchiveQueryResult*), "set_QueryId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VivoxUnity::Private::ArchiveQueryResult::get_ReturnCode
// Il2CppName: get_ReturnCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (VivoxUnity::Private::ArchiveQueryResult::*)()>(&VivoxUnity::Private::ArchiveQueryResult::get_ReturnCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VivoxUnity::Private::ArchiveQueryResult*), "get_ReturnCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VivoxUnity::Private::ArchiveQueryResult::set_ReturnCode
// Il2CppName: set_ReturnCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VivoxUnity::Private::ArchiveQueryResult::*)(int)>(&VivoxUnity::Private::ArchiveQueryResult::set_ReturnCode)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VivoxUnity::Private::ArchiveQueryResult*), "set_ReturnCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VivoxUnity::Private::ArchiveQueryResult::get_StatusCode
// Il2CppName: get_StatusCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (VivoxUnity::Private::ArchiveQueryResult::*)()>(&VivoxUnity::Private::ArchiveQueryResult::get_StatusCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VivoxUnity::Private::ArchiveQueryResult*), "get_StatusCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VivoxUnity::Private::ArchiveQueryResult::set_StatusCode
// Il2CppName: set_StatusCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VivoxUnity::Private::ArchiveQueryResult::*)(int)>(&VivoxUnity::Private::ArchiveQueryResult::set_StatusCode)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VivoxUnity::Private::ArchiveQueryResult*), "set_StatusCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VivoxUnity::Private::ArchiveQueryResult::get_FirstId
// Il2CppName: get_FirstId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (VivoxUnity::Private::ArchiveQueryResult::*)()>(&VivoxUnity::Private::ArchiveQueryResult::get_FirstId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VivoxUnity::Private::ArchiveQueryResult*), "get_FirstId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VivoxUnity::Private::ArchiveQueryResult::set_FirstId
// Il2CppName: set_FirstId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VivoxUnity::Private::ArchiveQueryResult::*)(::StringW)>(&VivoxUnity::Private::ArchiveQueryResult::set_FirstId)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VivoxUnity::Private::ArchiveQueryResult*), "set_FirstId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VivoxUnity::Private::ArchiveQueryResult::get_LastId
// Il2CppName: get_LastId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (VivoxUnity::Private::ArchiveQueryResult::*)()>(&VivoxUnity::Private::ArchiveQueryResult::get_LastId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VivoxUnity::Private::ArchiveQueryResult*), "get_LastId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VivoxUnity::Private::ArchiveQueryResult::set_LastId
// Il2CppName: set_LastId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VivoxUnity::Private::ArchiveQueryResult::*)(::StringW)>(&VivoxUnity::Private::ArchiveQueryResult::set_LastId)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VivoxUnity::Private::ArchiveQueryResult*), "set_LastId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VivoxUnity::Private::ArchiveQueryResult::get_FirstIndex
// Il2CppName: get_FirstIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (VivoxUnity::Private::ArchiveQueryResult::*)()>(&VivoxUnity::Private::ArchiveQueryResult::get_FirstIndex)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VivoxUnity::Private::ArchiveQueryResult*), "get_FirstIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VivoxUnity::Private::ArchiveQueryResult::set_FirstIndex
// Il2CppName: set_FirstIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VivoxUnity::Private::ArchiveQueryResult::*)(uint)>(&VivoxUnity::Private::ArchiveQueryResult::set_FirstIndex)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VivoxUnity::Private::ArchiveQueryResult*), "set_FirstIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VivoxUnity::Private::ArchiveQueryResult::get_TotalCount
// Il2CppName: get_TotalCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (VivoxUnity::Private::ArchiveQueryResult::*)()>(&VivoxUnity::Private::ArchiveQueryResult::get_TotalCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VivoxUnity::Private::ArchiveQueryResult*), "get_TotalCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VivoxUnity::Private::ArchiveQueryResult::set_TotalCount
// Il2CppName: set_TotalCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VivoxUnity::Private::ArchiveQueryResult::*)(uint)>(&VivoxUnity::Private::ArchiveQueryResult::set_TotalCount)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VivoxUnity::Private::ArchiveQueryResult*), "set_TotalCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VivoxUnity::Private::ArchiveQueryResult::get_Running
// Il2CppName: get_Running
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (VivoxUnity::Private::ArchiveQueryResult::*)()>(&VivoxUnity::Private::ArchiveQueryResult::get_Running)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VivoxUnity::Private::ArchiveQueryResult*), "get_Running", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VivoxUnity::Private::ArchiveQueryResult::set_Running
// Il2CppName: set_Running
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VivoxUnity::Private::ArchiveQueryResult::*)(bool)>(&VivoxUnity::Private::ArchiveQueryResult::set_Running)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VivoxUnity::Private::ArchiveQueryResult*), "set_Running", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VivoxUnity::Private::ArchiveQueryResult::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VivoxUnity::Private::ArchiveQueryResult::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VivoxUnity::Private::ArchiveQueryResult::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VivoxUnity::Private::ArchiveQueryResult::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!