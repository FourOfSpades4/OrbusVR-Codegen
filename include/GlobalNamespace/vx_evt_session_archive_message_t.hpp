// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Including type: System.Runtime.InteropServices.HandleRef
#include "System/Runtime/InteropServices/HandleRef.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: vx_evt_base_t
  class vx_evt_base_t;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: vx_evt_session_archive_message_t
  class vx_evt_session_archive_message_t;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::vx_evt_session_archive_message_t);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::vx_evt_session_archive_message_t*, "", "vx_evt_session_archive_message_t");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x21
  #pragma pack(push, 1)
  // Autogenerated type: vx_evt_session_archive_message_t
  // [TokenAttribute] Offset: FFFFFFFF
  class vx_evt_session_archive_message_t : public ::Il2CppObject/*, public ::System::IDisposable*/ {
    public:
    public:
    // private System.Runtime.InteropServices.HandleRef swigCPtr
    // Size: 0x10
    // Offset: 0x10
    ::System::Runtime::InteropServices::HandleRef swigCPtr;
    // Field size check
    static_assert(sizeof(::System::Runtime::InteropServices::HandleRef) == 0x10);
    // protected System.Boolean swigCMemOwn
    // Size: 0x1
    // Offset: 0x20
    bool swigCMemOwn;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating interface conversion operator: operator ::System::IDisposable
    operator ::System::IDisposable() noexcept {
      return *reinterpret_cast<::System::IDisposable*>(this);
    }
    // Get instance field reference: private System.Runtime.InteropServices.HandleRef swigCPtr
    [[deprecated("Use field access instead!")]] ::System::Runtime::InteropServices::HandleRef& dyn_swigCPtr();
    // Get instance field reference: protected System.Boolean swigCMemOwn
    [[deprecated("Use field access instead!")]] bool& dyn_swigCMemOwn();
    // System.Void .ctor(System.IntPtr cPtr, System.Boolean cMemoryOwn)
    // Offset: 0x217776C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static vx_evt_session_archive_message_t* New_ctor(::System::IntPtr cPtr, bool cMemoryOwn) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::vx_evt_session_archive_message_t::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<vx_evt_session_archive_message_t*, creationType>(cPtr, cMemoryOwn)));
    }
    // static System.Runtime.InteropServices.HandleRef getCPtr(vx_evt_session_archive_message_t obj)
    // Offset: 0x21777D0
    static ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::vx_evt_session_archive_message_t* obj);
    // public System.Void Dispose()
    // Offset: 0x21778C0
    void Dispose();
    // public System.Void set_base_(vx_evt_base_t value)
    // Offset: 0x2177A30
    void set_base_(::GlobalNamespace::vx_evt_base_t* value);
    // public vx_evt_base_t get_base_()
    // Offset: 0x2177AC8
    ::GlobalNamespace::vx_evt_base_t* get_base_();
    // public System.Void set_sessiongroup_handle(System.String value)
    // Offset: 0x2177B7C
    void set_sessiongroup_handle(::StringW value);
    // public System.String get_sessiongroup_handle()
    // Offset: 0x2177BFC
    ::StringW get_sessiongroup_handle();
    // public System.Void set_session_handle(System.String value)
    // Offset: 0x2177C6C
    void set_session_handle(::StringW value);
    // public System.String get_session_handle()
    // Offset: 0x2177CEC
    ::StringW get_session_handle();
    // public System.Void set_query_id(System.String value)
    // Offset: 0x2177D5C
    void set_query_id(::StringW value);
    // public System.String get_query_id()
    // Offset: 0x2177DDC
    ::StringW get_query_id();
    // public System.Void set_time_stamp(System.String value)
    // Offset: 0x2177E4C
    void set_time_stamp(::StringW value);
    // public System.String get_time_stamp()
    // Offset: 0x2177ECC
    ::StringW get_time_stamp();
    // public System.Void set_participant_uri(System.String value)
    // Offset: 0x2177F3C
    void set_participant_uri(::StringW value);
    // public System.String get_participant_uri()
    // Offset: 0x2177FBC
    ::StringW get_participant_uri();
    // public System.Void set_message_body(System.String value)
    // Offset: 0x217802C
    void set_message_body(::StringW value);
    // public System.String get_message_body()
    // Offset: 0x21780AC
    ::StringW get_message_body();
    // public System.Void set_message_id(System.String value)
    // Offset: 0x217811C
    void set_message_id(::StringW value);
    // public System.String get_message_id()
    // Offset: 0x217819C
    ::StringW get_message_id();
    // public System.Void set_encoded_uri_with_tag(System.String value)
    // Offset: 0x217820C
    void set_encoded_uri_with_tag(::StringW value);
    // public System.String get_encoded_uri_with_tag()
    // Offset: 0x217828C
    ::StringW get_encoded_uri_with_tag();
    // public System.Void set_is_current_user(System.Int32 value)
    // Offset: 0x21782FC
    void set_is_current_user(int value);
    // public System.Int32 get_is_current_user()
    // Offset: 0x217837C
    int get_is_current_user();
    // public System.Void set_language(System.String value)
    // Offset: 0x21783EC
    void set_language(::StringW value);
    // public System.String get_language()
    // Offset: 0x217846C
    ::StringW get_language();
    // public System.Void .ctor()
    // Offset: 0x21784DC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static vx_evt_session_archive_message_t* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::vx_evt_session_archive_message_t::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<vx_evt_session_archive_message_t*, creationType>()));
    }
    // protected override System.Void Finalize()
    // Offset: 0x2177844
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
  }; // vx_evt_session_archive_message_t
  #pragma pack(pop)
  static check_size<sizeof(vx_evt_session_archive_message_t), 32 + sizeof(bool)> __GlobalNamespace_vx_evt_session_archive_message_tSizeCheck;
  static_assert(sizeof(vx_evt_session_archive_message_t) == 0x21);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::vx_evt_session_archive_message_t::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::vx_evt_session_archive_message_t::getCPtr
// Il2CppName: getCPtr
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::InteropServices::HandleRef (*)(::GlobalNamespace::vx_evt_session_archive_message_t*)>(&GlobalNamespace::vx_evt_session_archive_message_t::getCPtr)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("", "vx_evt_session_archive_message_t")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_evt_session_archive_message_t*), "getCPtr", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_evt_session_archive_message_t::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_evt_session_archive_message_t::*)()>(&GlobalNamespace::vx_evt_session_archive_message_t::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_evt_session_archive_message_t*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_evt_session_archive_message_t::set_base_
// Il2CppName: set_base_
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_evt_session_archive_message_t::*)(::GlobalNamespace::vx_evt_base_t*)>(&GlobalNamespace::vx_evt_session_archive_message_t::set_base_)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "vx_evt_base_t")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_evt_session_archive_message_t*), "set_base_", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_evt_session_archive_message_t::get_base_
// Il2CppName: get_base_
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::vx_evt_base_t* (GlobalNamespace::vx_evt_session_archive_message_t::*)()>(&GlobalNamespace::vx_evt_session_archive_message_t::get_base_)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_evt_session_archive_message_t*), "get_base_", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_evt_session_archive_message_t::set_sessiongroup_handle
// Il2CppName: set_sessiongroup_handle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_evt_session_archive_message_t::*)(::StringW)>(&GlobalNamespace::vx_evt_session_archive_message_t::set_sessiongroup_handle)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_evt_session_archive_message_t*), "set_sessiongroup_handle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_evt_session_archive_message_t::get_sessiongroup_handle
// Il2CppName: get_sessiongroup_handle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::vx_evt_session_archive_message_t::*)()>(&GlobalNamespace::vx_evt_session_archive_message_t::get_sessiongroup_handle)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_evt_session_archive_message_t*), "get_sessiongroup_handle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_evt_session_archive_message_t::set_session_handle
// Il2CppName: set_session_handle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_evt_session_archive_message_t::*)(::StringW)>(&GlobalNamespace::vx_evt_session_archive_message_t::set_session_handle)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_evt_session_archive_message_t*), "set_session_handle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_evt_session_archive_message_t::get_session_handle
// Il2CppName: get_session_handle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::vx_evt_session_archive_message_t::*)()>(&GlobalNamespace::vx_evt_session_archive_message_t::get_session_handle)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_evt_session_archive_message_t*), "get_session_handle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_evt_session_archive_message_t::set_query_id
// Il2CppName: set_query_id
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_evt_session_archive_message_t::*)(::StringW)>(&GlobalNamespace::vx_evt_session_archive_message_t::set_query_id)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_evt_session_archive_message_t*), "set_query_id", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_evt_session_archive_message_t::get_query_id
// Il2CppName: get_query_id
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::vx_evt_session_archive_message_t::*)()>(&GlobalNamespace::vx_evt_session_archive_message_t::get_query_id)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_evt_session_archive_message_t*), "get_query_id", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_evt_session_archive_message_t::set_time_stamp
// Il2CppName: set_time_stamp
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_evt_session_archive_message_t::*)(::StringW)>(&GlobalNamespace::vx_evt_session_archive_message_t::set_time_stamp)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_evt_session_archive_message_t*), "set_time_stamp", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_evt_session_archive_message_t::get_time_stamp
// Il2CppName: get_time_stamp
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::vx_evt_session_archive_message_t::*)()>(&GlobalNamespace::vx_evt_session_archive_message_t::get_time_stamp)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_evt_session_archive_message_t*), "get_time_stamp", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_evt_session_archive_message_t::set_participant_uri
// Il2CppName: set_participant_uri
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_evt_session_archive_message_t::*)(::StringW)>(&GlobalNamespace::vx_evt_session_archive_message_t::set_participant_uri)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_evt_session_archive_message_t*), "set_participant_uri", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_evt_session_archive_message_t::get_participant_uri
// Il2CppName: get_participant_uri
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::vx_evt_session_archive_message_t::*)()>(&GlobalNamespace::vx_evt_session_archive_message_t::get_participant_uri)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_evt_session_archive_message_t*), "get_participant_uri", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_evt_session_archive_message_t::set_message_body
// Il2CppName: set_message_body
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_evt_session_archive_message_t::*)(::StringW)>(&GlobalNamespace::vx_evt_session_archive_message_t::set_message_body)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_evt_session_archive_message_t*), "set_message_body", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_evt_session_archive_message_t::get_message_body
// Il2CppName: get_message_body
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::vx_evt_session_archive_message_t::*)()>(&GlobalNamespace::vx_evt_session_archive_message_t::get_message_body)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_evt_session_archive_message_t*), "get_message_body", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_evt_session_archive_message_t::set_message_id
// Il2CppName: set_message_id
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_evt_session_archive_message_t::*)(::StringW)>(&GlobalNamespace::vx_evt_session_archive_message_t::set_message_id)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_evt_session_archive_message_t*), "set_message_id", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_evt_session_archive_message_t::get_message_id
// Il2CppName: get_message_id
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::vx_evt_session_archive_message_t::*)()>(&GlobalNamespace::vx_evt_session_archive_message_t::get_message_id)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_evt_session_archive_message_t*), "get_message_id", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_evt_session_archive_message_t::set_encoded_uri_with_tag
// Il2CppName: set_encoded_uri_with_tag
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_evt_session_archive_message_t::*)(::StringW)>(&GlobalNamespace::vx_evt_session_archive_message_t::set_encoded_uri_with_tag)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_evt_session_archive_message_t*), "set_encoded_uri_with_tag", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_evt_session_archive_message_t::get_encoded_uri_with_tag
// Il2CppName: get_encoded_uri_with_tag
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::vx_evt_session_archive_message_t::*)()>(&GlobalNamespace::vx_evt_session_archive_message_t::get_encoded_uri_with_tag)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_evt_session_archive_message_t*), "get_encoded_uri_with_tag", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_evt_session_archive_message_t::set_is_current_user
// Il2CppName: set_is_current_user
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_evt_session_archive_message_t::*)(int)>(&GlobalNamespace::vx_evt_session_archive_message_t::set_is_current_user)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_evt_session_archive_message_t*), "set_is_current_user", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_evt_session_archive_message_t::get_is_current_user
// Il2CppName: get_is_current_user
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::vx_evt_session_archive_message_t::*)()>(&GlobalNamespace::vx_evt_session_archive_message_t::get_is_current_user)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_evt_session_archive_message_t*), "get_is_current_user", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_evt_session_archive_message_t::set_language
// Il2CppName: set_language
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_evt_session_archive_message_t::*)(::StringW)>(&GlobalNamespace::vx_evt_session_archive_message_t::set_language)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_evt_session_archive_message_t*), "set_language", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_evt_session_archive_message_t::get_language
// Il2CppName: get_language
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::vx_evt_session_archive_message_t::*)()>(&GlobalNamespace::vx_evt_session_archive_message_t::get_language)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_evt_session_archive_message_t*), "get_language", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_evt_session_archive_message_t::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::vx_evt_session_archive_message_t::Finalize
// Il2CppName: Finalize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_evt_session_archive_message_t::*)()>(&GlobalNamespace::vx_evt_session_archive_message_t::Finalize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_evt_session_archive_message_t*), "Finalize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
