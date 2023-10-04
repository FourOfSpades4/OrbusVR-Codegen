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
  // Forward declaring type: vx_req_base_t
  class vx_req_base_t;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: vx_req_account_archive_query_t
  class vx_req_account_archive_query_t;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::vx_req_account_archive_query_t);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::vx_req_account_archive_query_t*, "", "vx_req_account_archive_query_t");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x21
  #pragma pack(push, 1)
  // Autogenerated type: vx_req_account_archive_query_t
  // [TokenAttribute] Offset: FFFFFFFF
  class vx_req_account_archive_query_t : public ::Il2CppObject/*, public ::System::IDisposable*/ {
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
    // Offset: 0x218715C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static vx_req_account_archive_query_t* New_ctor(::System::IntPtr cPtr, bool cMemoryOwn) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::vx_req_account_archive_query_t::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<vx_req_account_archive_query_t*, creationType>(cPtr, cMemoryOwn)));
    }
    // static System.Runtime.InteropServices.HandleRef getCPtr(vx_req_account_archive_query_t obj)
    // Offset: 0x21871C0
    static ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::vx_req_account_archive_query_t* obj);
    // public System.Void Dispose()
    // Offset: 0x21872B0
    void Dispose();
    // public System.Void set_base_(vx_req_base_t value)
    // Offset: 0x21874FC
    void set_base_(::GlobalNamespace::vx_req_base_t* value);
    // public vx_req_base_t get_base_()
    // Offset: 0x2187448
    ::GlobalNamespace::vx_req_base_t* get_base_();
    // public System.Void set_account_handle(System.String value)
    // Offset: 0x2187594
    void set_account_handle(::StringW value);
    // public System.String get_account_handle()
    // Offset: 0x2187614
    ::StringW get_account_handle();
    // public System.Void set_time_start(System.String value)
    // Offset: 0x2187684
    void set_time_start(::StringW value);
    // public System.String get_time_start()
    // Offset: 0x2187704
    ::StringW get_time_start();
    // public System.Void set_time_end(System.String value)
    // Offset: 0x2187774
    void set_time_end(::StringW value);
    // public System.String get_time_end()
    // Offset: 0x21877F4
    ::StringW get_time_end();
    // public System.Void set_search_text(System.String value)
    // Offset: 0x2187864
    void set_search_text(::StringW value);
    // public System.String get_search_text()
    // Offset: 0x21878E4
    ::StringW get_search_text();
    // public System.Void set_channel_uri(System.String value)
    // Offset: 0x2187954
    void set_channel_uri(::StringW value);
    // public System.String get_channel_uri()
    // Offset: 0x21879D4
    ::StringW get_channel_uri();
    // public System.Void set_participant_uri(System.String value)
    // Offset: 0x2187A44
    void set_participant_uri(::StringW value);
    // public System.String get_participant_uri()
    // Offset: 0x2187AC4
    ::StringW get_participant_uri();
    // public System.Void set_max(System.UInt32 value)
    // Offset: 0x2187B34
    void set_max(uint value);
    // public System.UInt32 get_max()
    // Offset: 0x2187BB4
    uint get_max();
    // public System.Void set_before_id(System.String value)
    // Offset: 0x2187C24
    void set_before_id(::StringW value);
    // public System.String get_before_id()
    // Offset: 0x2187CA4
    ::StringW get_before_id();
    // public System.Void set_after_id(System.String value)
    // Offset: 0x2187D14
    void set_after_id(::StringW value);
    // public System.String get_after_id()
    // Offset: 0x2187D94
    ::StringW get_after_id();
    // public System.Void set_first_message_index(System.Int32 value)
    // Offset: 0x2187E04
    void set_first_message_index(int value);
    // public System.Int32 get_first_message_index()
    // Offset: 0x2187E84
    int get_first_message_index();
    // public System.Void set_application_stanza_namespace(System.String value)
    // Offset: 0x2187EF4
    void set_application_stanza_namespace(::StringW value);
    // public System.String get_application_stanza_namespace()
    // Offset: 0x2187F74
    ::StringW get_application_stanza_namespace();
    // public System.Void set_application_stanza_body(System.String value)
    // Offset: 0x2187FE4
    void set_application_stanza_body(::StringW value);
    // public System.String get_application_stanza_body()
    // Offset: 0x2188064
    ::StringW get_application_stanza_body();
    // public System.Void .ctor()
    // Offset: 0x21880D4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static vx_req_account_archive_query_t* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::vx_req_account_archive_query_t::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<vx_req_account_archive_query_t*, creationType>()));
    }
    // protected override System.Void Finalize()
    // Offset: 0x2187234
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
  }; // vx_req_account_archive_query_t
  #pragma pack(pop)
  static check_size<sizeof(vx_req_account_archive_query_t), 32 + sizeof(bool)> __GlobalNamespace_vx_req_account_archive_query_tSizeCheck;
  static_assert(sizeof(vx_req_account_archive_query_t) == 0x21);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::vx_req_account_archive_query_t::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::vx_req_account_archive_query_t::getCPtr
// Il2CppName: getCPtr
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::InteropServices::HandleRef (*)(::GlobalNamespace::vx_req_account_archive_query_t*)>(&GlobalNamespace::vx_req_account_archive_query_t::getCPtr)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("", "vx_req_account_archive_query_t")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_req_account_archive_query_t*), "getCPtr", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_req_account_archive_query_t::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_req_account_archive_query_t::*)()>(&GlobalNamespace::vx_req_account_archive_query_t::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_req_account_archive_query_t*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_req_account_archive_query_t::set_base_
// Il2CppName: set_base_
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_req_account_archive_query_t::*)(::GlobalNamespace::vx_req_base_t*)>(&GlobalNamespace::vx_req_account_archive_query_t::set_base_)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "vx_req_base_t")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_req_account_archive_query_t*), "set_base_", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_req_account_archive_query_t::get_base_
// Il2CppName: get_base_
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::vx_req_base_t* (GlobalNamespace::vx_req_account_archive_query_t::*)()>(&GlobalNamespace::vx_req_account_archive_query_t::get_base_)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_req_account_archive_query_t*), "get_base_", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_req_account_archive_query_t::set_account_handle
// Il2CppName: set_account_handle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_req_account_archive_query_t::*)(::StringW)>(&GlobalNamespace::vx_req_account_archive_query_t::set_account_handle)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_req_account_archive_query_t*), "set_account_handle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_req_account_archive_query_t::get_account_handle
// Il2CppName: get_account_handle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::vx_req_account_archive_query_t::*)()>(&GlobalNamespace::vx_req_account_archive_query_t::get_account_handle)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_req_account_archive_query_t*), "get_account_handle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_req_account_archive_query_t::set_time_start
// Il2CppName: set_time_start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_req_account_archive_query_t::*)(::StringW)>(&GlobalNamespace::vx_req_account_archive_query_t::set_time_start)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_req_account_archive_query_t*), "set_time_start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_req_account_archive_query_t::get_time_start
// Il2CppName: get_time_start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::vx_req_account_archive_query_t::*)()>(&GlobalNamespace::vx_req_account_archive_query_t::get_time_start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_req_account_archive_query_t*), "get_time_start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_req_account_archive_query_t::set_time_end
// Il2CppName: set_time_end
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_req_account_archive_query_t::*)(::StringW)>(&GlobalNamespace::vx_req_account_archive_query_t::set_time_end)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_req_account_archive_query_t*), "set_time_end", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_req_account_archive_query_t::get_time_end
// Il2CppName: get_time_end
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::vx_req_account_archive_query_t::*)()>(&GlobalNamespace::vx_req_account_archive_query_t::get_time_end)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_req_account_archive_query_t*), "get_time_end", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_req_account_archive_query_t::set_search_text
// Il2CppName: set_search_text
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_req_account_archive_query_t::*)(::StringW)>(&GlobalNamespace::vx_req_account_archive_query_t::set_search_text)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_req_account_archive_query_t*), "set_search_text", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_req_account_archive_query_t::get_search_text
// Il2CppName: get_search_text
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::vx_req_account_archive_query_t::*)()>(&GlobalNamespace::vx_req_account_archive_query_t::get_search_text)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_req_account_archive_query_t*), "get_search_text", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_req_account_archive_query_t::set_channel_uri
// Il2CppName: set_channel_uri
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_req_account_archive_query_t::*)(::StringW)>(&GlobalNamespace::vx_req_account_archive_query_t::set_channel_uri)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_req_account_archive_query_t*), "set_channel_uri", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_req_account_archive_query_t::get_channel_uri
// Il2CppName: get_channel_uri
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::vx_req_account_archive_query_t::*)()>(&GlobalNamespace::vx_req_account_archive_query_t::get_channel_uri)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_req_account_archive_query_t*), "get_channel_uri", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_req_account_archive_query_t::set_participant_uri
// Il2CppName: set_participant_uri
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_req_account_archive_query_t::*)(::StringW)>(&GlobalNamespace::vx_req_account_archive_query_t::set_participant_uri)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_req_account_archive_query_t*), "set_participant_uri", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_req_account_archive_query_t::get_participant_uri
// Il2CppName: get_participant_uri
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::vx_req_account_archive_query_t::*)()>(&GlobalNamespace::vx_req_account_archive_query_t::get_participant_uri)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_req_account_archive_query_t*), "get_participant_uri", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_req_account_archive_query_t::set_max
// Il2CppName: set_max
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_req_account_archive_query_t::*)(uint)>(&GlobalNamespace::vx_req_account_archive_query_t::set_max)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_req_account_archive_query_t*), "set_max", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_req_account_archive_query_t::get_max
// Il2CppName: get_max
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (GlobalNamespace::vx_req_account_archive_query_t::*)()>(&GlobalNamespace::vx_req_account_archive_query_t::get_max)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_req_account_archive_query_t*), "get_max", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_req_account_archive_query_t::set_before_id
// Il2CppName: set_before_id
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_req_account_archive_query_t::*)(::StringW)>(&GlobalNamespace::vx_req_account_archive_query_t::set_before_id)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_req_account_archive_query_t*), "set_before_id", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_req_account_archive_query_t::get_before_id
// Il2CppName: get_before_id
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::vx_req_account_archive_query_t::*)()>(&GlobalNamespace::vx_req_account_archive_query_t::get_before_id)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_req_account_archive_query_t*), "get_before_id", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_req_account_archive_query_t::set_after_id
// Il2CppName: set_after_id
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_req_account_archive_query_t::*)(::StringW)>(&GlobalNamespace::vx_req_account_archive_query_t::set_after_id)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_req_account_archive_query_t*), "set_after_id", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_req_account_archive_query_t::get_after_id
// Il2CppName: get_after_id
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::vx_req_account_archive_query_t::*)()>(&GlobalNamespace::vx_req_account_archive_query_t::get_after_id)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_req_account_archive_query_t*), "get_after_id", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_req_account_archive_query_t::set_first_message_index
// Il2CppName: set_first_message_index
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_req_account_archive_query_t::*)(int)>(&GlobalNamespace::vx_req_account_archive_query_t::set_first_message_index)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_req_account_archive_query_t*), "set_first_message_index", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_req_account_archive_query_t::get_first_message_index
// Il2CppName: get_first_message_index
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::vx_req_account_archive_query_t::*)()>(&GlobalNamespace::vx_req_account_archive_query_t::get_first_message_index)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_req_account_archive_query_t*), "get_first_message_index", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_req_account_archive_query_t::set_application_stanza_namespace
// Il2CppName: set_application_stanza_namespace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_req_account_archive_query_t::*)(::StringW)>(&GlobalNamespace::vx_req_account_archive_query_t::set_application_stanza_namespace)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_req_account_archive_query_t*), "set_application_stanza_namespace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_req_account_archive_query_t::get_application_stanza_namespace
// Il2CppName: get_application_stanza_namespace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::vx_req_account_archive_query_t::*)()>(&GlobalNamespace::vx_req_account_archive_query_t::get_application_stanza_namespace)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_req_account_archive_query_t*), "get_application_stanza_namespace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_req_account_archive_query_t::set_application_stanza_body
// Il2CppName: set_application_stanza_body
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_req_account_archive_query_t::*)(::StringW)>(&GlobalNamespace::vx_req_account_archive_query_t::set_application_stanza_body)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_req_account_archive_query_t*), "set_application_stanza_body", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_req_account_archive_query_t::get_application_stanza_body
// Il2CppName: get_application_stanza_body
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::vx_req_account_archive_query_t::*)()>(&GlobalNamespace::vx_req_account_archive_query_t::get_application_stanza_body)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_req_account_archive_query_t*), "get_application_stanza_body", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_req_account_archive_query_t::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::vx_req_account_archive_query_t::Finalize
// Il2CppName: Finalize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_req_account_archive_query_t::*)()>(&GlobalNamespace::vx_req_account_archive_query_t::Finalize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_req_account_archive_query_t*), "Finalize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
