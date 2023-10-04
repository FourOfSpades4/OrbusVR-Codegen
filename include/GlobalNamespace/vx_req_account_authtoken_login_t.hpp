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
  // Forward declaring type: vx_text_mode
  struct vx_text_mode;
  // Forward declaring type: vx_buddy_management_mode
  struct vx_buddy_management_mode;
  // Forward declaring type: vx_session_answer_mode
  struct vx_session_answer_mode;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: vx_req_account_authtoken_login_t
  class vx_req_account_authtoken_login_t;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::vx_req_account_authtoken_login_t);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::vx_req_account_authtoken_login_t*, "", "vx_req_account_authtoken_login_t");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x21
  #pragma pack(push, 1)
  // Autogenerated type: vx_req_account_authtoken_login_t
  // [TokenAttribute] Offset: FFFFFFFF
  class vx_req_account_authtoken_login_t : public ::Il2CppObject/*, public ::System::IDisposable*/ {
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
    // Offset: 0x2188148
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static vx_req_account_authtoken_login_t* New_ctor(::System::IntPtr cPtr, bool cMemoryOwn) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::vx_req_account_authtoken_login_t::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<vx_req_account_authtoken_login_t*, creationType>(cPtr, cMemoryOwn)));
    }
    // static System.Runtime.InteropServices.HandleRef getCPtr(vx_req_account_authtoken_login_t obj)
    // Offset: 0x21881AC
    static ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::vx_req_account_authtoken_login_t* obj);
    // public System.Void Dispose()
    // Offset: 0x218829C
    void Dispose();
    // public System.Void set_base_(vx_req_base_t value)
    // Offset: 0x21884E8
    void set_base_(::GlobalNamespace::vx_req_base_t* value);
    // public vx_req_base_t get_base_()
    // Offset: 0x2188434
    ::GlobalNamespace::vx_req_base_t* get_base_();
    // public System.Void set_connector_handle(System.String value)
    // Offset: 0x2188580
    void set_connector_handle(::StringW value);
    // public System.String get_connector_handle()
    // Offset: 0x2188600
    ::StringW get_connector_handle();
    // public System.Void set_authtoken(System.String value)
    // Offset: 0x2188670
    void set_authtoken(::StringW value);
    // public System.String get_authtoken()
    // Offset: 0x21886F0
    ::StringW get_authtoken();
    // public System.Void set_enable_text(vx_text_mode value)
    // Offset: 0x2188760
    void set_enable_text(::GlobalNamespace::vx_text_mode value);
    // public vx_text_mode get_enable_text()
    // Offset: 0x21887E0
    ::GlobalNamespace::vx_text_mode get_enable_text();
    // public System.Void set_participant_property_frequency(System.Int32 value)
    // Offset: 0x2188850
    void set_participant_property_frequency(int value);
    // public System.Int32 get_participant_property_frequency()
    // Offset: 0x21888D0
    int get_participant_property_frequency();
    // public System.Void set_enable_buddies_and_presence(System.Int32 value)
    // Offset: 0x2188940
    void set_enable_buddies_and_presence(int value);
    // public System.Int32 get_enable_buddies_and_presence()
    // Offset: 0x21889C0
    int get_enable_buddies_and_presence();
    // public System.Void set_buddy_management_mode(vx_buddy_management_mode value)
    // Offset: 0x2188A30
    void set_buddy_management_mode(::GlobalNamespace::vx_buddy_management_mode value);
    // public vx_buddy_management_mode get_buddy_management_mode()
    // Offset: 0x2188AB0
    ::GlobalNamespace::vx_buddy_management_mode get_buddy_management_mode();
    // public System.Void set_autopost_crash_dumps(System.Int32 value)
    // Offset: 0x2188B20
    void set_autopost_crash_dumps(int value);
    // public System.Int32 get_autopost_crash_dumps()
    // Offset: 0x2188BA0
    int get_autopost_crash_dumps();
    // public System.Void set_acct_mgmt_server(System.String value)
    // Offset: 0x2188C10
    void set_acct_mgmt_server(::StringW value);
    // public System.String get_acct_mgmt_server()
    // Offset: 0x2188C90
    ::StringW get_acct_mgmt_server();
    // public System.Void set_application_token(System.String value)
    // Offset: 0x2188D00
    void set_application_token(::StringW value);
    // public System.String get_application_token()
    // Offset: 0x2188D80
    ::StringW get_application_token();
    // public System.Void set_application_override(System.String value)
    // Offset: 0x2188DF0
    void set_application_override(::StringW value);
    // public System.String get_application_override()
    // Offset: 0x2188E70
    ::StringW get_application_override();
    // public System.Void set_answer_mode(vx_session_answer_mode value)
    // Offset: 0x2188EE0
    void set_answer_mode(::GlobalNamespace::vx_session_answer_mode value);
    // public vx_session_answer_mode get_answer_mode()
    // Offset: 0x2188F60
    ::GlobalNamespace::vx_session_answer_mode get_answer_mode();
    // public System.Void set_client_ip_override(System.String value)
    // Offset: 0x2188FD0
    void set_client_ip_override(::StringW value);
    // public System.String get_client_ip_override()
    // Offset: 0x2189050
    ::StringW get_client_ip_override();
    // public System.Void set_enable_presence_persistence(System.Int32 value)
    // Offset: 0x21890C0
    void set_enable_presence_persistence(int value);
    // public System.Int32 get_enable_presence_persistence()
    // Offset: 0x2189140
    int get_enable_presence_persistence();
    // public System.Void set_account_handle(System.String value)
    // Offset: 0x21891B0
    void set_account_handle(::StringW value);
    // public System.String get_account_handle()
    // Offset: 0x2189230
    ::StringW get_account_handle();
    // public System.Void .ctor()
    // Offset: 0x21892A0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static vx_req_account_authtoken_login_t* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::vx_req_account_authtoken_login_t::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<vx_req_account_authtoken_login_t*, creationType>()));
    }
    // protected override System.Void Finalize()
    // Offset: 0x2188220
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
  }; // vx_req_account_authtoken_login_t
  #pragma pack(pop)
  static check_size<sizeof(vx_req_account_authtoken_login_t), 32 + sizeof(bool)> __GlobalNamespace_vx_req_account_authtoken_login_tSizeCheck;
  static_assert(sizeof(vx_req_account_authtoken_login_t) == 0x21);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::vx_req_account_authtoken_login_t::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::vx_req_account_authtoken_login_t::getCPtr
// Il2CppName: getCPtr
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::InteropServices::HandleRef (*)(::GlobalNamespace::vx_req_account_authtoken_login_t*)>(&GlobalNamespace::vx_req_account_authtoken_login_t::getCPtr)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("", "vx_req_account_authtoken_login_t")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_req_account_authtoken_login_t*), "getCPtr", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_req_account_authtoken_login_t::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_req_account_authtoken_login_t::*)()>(&GlobalNamespace::vx_req_account_authtoken_login_t::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_req_account_authtoken_login_t*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_req_account_authtoken_login_t::set_base_
// Il2CppName: set_base_
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_req_account_authtoken_login_t::*)(::GlobalNamespace::vx_req_base_t*)>(&GlobalNamespace::vx_req_account_authtoken_login_t::set_base_)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "vx_req_base_t")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_req_account_authtoken_login_t*), "set_base_", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_req_account_authtoken_login_t::get_base_
// Il2CppName: get_base_
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::vx_req_base_t* (GlobalNamespace::vx_req_account_authtoken_login_t::*)()>(&GlobalNamespace::vx_req_account_authtoken_login_t::get_base_)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_req_account_authtoken_login_t*), "get_base_", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_req_account_authtoken_login_t::set_connector_handle
// Il2CppName: set_connector_handle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_req_account_authtoken_login_t::*)(::StringW)>(&GlobalNamespace::vx_req_account_authtoken_login_t::set_connector_handle)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_req_account_authtoken_login_t*), "set_connector_handle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_req_account_authtoken_login_t::get_connector_handle
// Il2CppName: get_connector_handle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::vx_req_account_authtoken_login_t::*)()>(&GlobalNamespace::vx_req_account_authtoken_login_t::get_connector_handle)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_req_account_authtoken_login_t*), "get_connector_handle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_req_account_authtoken_login_t::set_authtoken
// Il2CppName: set_authtoken
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_req_account_authtoken_login_t::*)(::StringW)>(&GlobalNamespace::vx_req_account_authtoken_login_t::set_authtoken)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_req_account_authtoken_login_t*), "set_authtoken", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_req_account_authtoken_login_t::get_authtoken
// Il2CppName: get_authtoken
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::vx_req_account_authtoken_login_t::*)()>(&GlobalNamespace::vx_req_account_authtoken_login_t::get_authtoken)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_req_account_authtoken_login_t*), "get_authtoken", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_req_account_authtoken_login_t::set_enable_text
// Il2CppName: set_enable_text
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_req_account_authtoken_login_t::*)(::GlobalNamespace::vx_text_mode)>(&GlobalNamespace::vx_req_account_authtoken_login_t::set_enable_text)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "vx_text_mode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_req_account_authtoken_login_t*), "set_enable_text", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_req_account_authtoken_login_t::get_enable_text
// Il2CppName: get_enable_text
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::vx_text_mode (GlobalNamespace::vx_req_account_authtoken_login_t::*)()>(&GlobalNamespace::vx_req_account_authtoken_login_t::get_enable_text)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_req_account_authtoken_login_t*), "get_enable_text", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_req_account_authtoken_login_t::set_participant_property_frequency
// Il2CppName: set_participant_property_frequency
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_req_account_authtoken_login_t::*)(int)>(&GlobalNamespace::vx_req_account_authtoken_login_t::set_participant_property_frequency)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_req_account_authtoken_login_t*), "set_participant_property_frequency", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_req_account_authtoken_login_t::get_participant_property_frequency
// Il2CppName: get_participant_property_frequency
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::vx_req_account_authtoken_login_t::*)()>(&GlobalNamespace::vx_req_account_authtoken_login_t::get_participant_property_frequency)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_req_account_authtoken_login_t*), "get_participant_property_frequency", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_req_account_authtoken_login_t::set_enable_buddies_and_presence
// Il2CppName: set_enable_buddies_and_presence
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_req_account_authtoken_login_t::*)(int)>(&GlobalNamespace::vx_req_account_authtoken_login_t::set_enable_buddies_and_presence)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_req_account_authtoken_login_t*), "set_enable_buddies_and_presence", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_req_account_authtoken_login_t::get_enable_buddies_and_presence
// Il2CppName: get_enable_buddies_and_presence
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::vx_req_account_authtoken_login_t::*)()>(&GlobalNamespace::vx_req_account_authtoken_login_t::get_enable_buddies_and_presence)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_req_account_authtoken_login_t*), "get_enable_buddies_and_presence", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_req_account_authtoken_login_t::set_buddy_management_mode
// Il2CppName: set_buddy_management_mode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_req_account_authtoken_login_t::*)(::GlobalNamespace::vx_buddy_management_mode)>(&GlobalNamespace::vx_req_account_authtoken_login_t::set_buddy_management_mode)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "vx_buddy_management_mode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_req_account_authtoken_login_t*), "set_buddy_management_mode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_req_account_authtoken_login_t::get_buddy_management_mode
// Il2CppName: get_buddy_management_mode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::vx_buddy_management_mode (GlobalNamespace::vx_req_account_authtoken_login_t::*)()>(&GlobalNamespace::vx_req_account_authtoken_login_t::get_buddy_management_mode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_req_account_authtoken_login_t*), "get_buddy_management_mode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_req_account_authtoken_login_t::set_autopost_crash_dumps
// Il2CppName: set_autopost_crash_dumps
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_req_account_authtoken_login_t::*)(int)>(&GlobalNamespace::vx_req_account_authtoken_login_t::set_autopost_crash_dumps)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_req_account_authtoken_login_t*), "set_autopost_crash_dumps", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_req_account_authtoken_login_t::get_autopost_crash_dumps
// Il2CppName: get_autopost_crash_dumps
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::vx_req_account_authtoken_login_t::*)()>(&GlobalNamespace::vx_req_account_authtoken_login_t::get_autopost_crash_dumps)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_req_account_authtoken_login_t*), "get_autopost_crash_dumps", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_req_account_authtoken_login_t::set_acct_mgmt_server
// Il2CppName: set_acct_mgmt_server
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_req_account_authtoken_login_t::*)(::StringW)>(&GlobalNamespace::vx_req_account_authtoken_login_t::set_acct_mgmt_server)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_req_account_authtoken_login_t*), "set_acct_mgmt_server", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_req_account_authtoken_login_t::get_acct_mgmt_server
// Il2CppName: get_acct_mgmt_server
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::vx_req_account_authtoken_login_t::*)()>(&GlobalNamespace::vx_req_account_authtoken_login_t::get_acct_mgmt_server)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_req_account_authtoken_login_t*), "get_acct_mgmt_server", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_req_account_authtoken_login_t::set_application_token
// Il2CppName: set_application_token
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_req_account_authtoken_login_t::*)(::StringW)>(&GlobalNamespace::vx_req_account_authtoken_login_t::set_application_token)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_req_account_authtoken_login_t*), "set_application_token", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_req_account_authtoken_login_t::get_application_token
// Il2CppName: get_application_token
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::vx_req_account_authtoken_login_t::*)()>(&GlobalNamespace::vx_req_account_authtoken_login_t::get_application_token)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_req_account_authtoken_login_t*), "get_application_token", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_req_account_authtoken_login_t::set_application_override
// Il2CppName: set_application_override
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_req_account_authtoken_login_t::*)(::StringW)>(&GlobalNamespace::vx_req_account_authtoken_login_t::set_application_override)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_req_account_authtoken_login_t*), "set_application_override", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_req_account_authtoken_login_t::get_application_override
// Il2CppName: get_application_override
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::vx_req_account_authtoken_login_t::*)()>(&GlobalNamespace::vx_req_account_authtoken_login_t::get_application_override)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_req_account_authtoken_login_t*), "get_application_override", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_req_account_authtoken_login_t::set_answer_mode
// Il2CppName: set_answer_mode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_req_account_authtoken_login_t::*)(::GlobalNamespace::vx_session_answer_mode)>(&GlobalNamespace::vx_req_account_authtoken_login_t::set_answer_mode)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "vx_session_answer_mode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_req_account_authtoken_login_t*), "set_answer_mode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_req_account_authtoken_login_t::get_answer_mode
// Il2CppName: get_answer_mode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::vx_session_answer_mode (GlobalNamespace::vx_req_account_authtoken_login_t::*)()>(&GlobalNamespace::vx_req_account_authtoken_login_t::get_answer_mode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_req_account_authtoken_login_t*), "get_answer_mode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_req_account_authtoken_login_t::set_client_ip_override
// Il2CppName: set_client_ip_override
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_req_account_authtoken_login_t::*)(::StringW)>(&GlobalNamespace::vx_req_account_authtoken_login_t::set_client_ip_override)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_req_account_authtoken_login_t*), "set_client_ip_override", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_req_account_authtoken_login_t::get_client_ip_override
// Il2CppName: get_client_ip_override
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::vx_req_account_authtoken_login_t::*)()>(&GlobalNamespace::vx_req_account_authtoken_login_t::get_client_ip_override)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_req_account_authtoken_login_t*), "get_client_ip_override", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_req_account_authtoken_login_t::set_enable_presence_persistence
// Il2CppName: set_enable_presence_persistence
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_req_account_authtoken_login_t::*)(int)>(&GlobalNamespace::vx_req_account_authtoken_login_t::set_enable_presence_persistence)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_req_account_authtoken_login_t*), "set_enable_presence_persistence", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_req_account_authtoken_login_t::get_enable_presence_persistence
// Il2CppName: get_enable_presence_persistence
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::vx_req_account_authtoken_login_t::*)()>(&GlobalNamespace::vx_req_account_authtoken_login_t::get_enable_presence_persistence)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_req_account_authtoken_login_t*), "get_enable_presence_persistence", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_req_account_authtoken_login_t::set_account_handle
// Il2CppName: set_account_handle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_req_account_authtoken_login_t::*)(::StringW)>(&GlobalNamespace::vx_req_account_authtoken_login_t::set_account_handle)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_req_account_authtoken_login_t*), "set_account_handle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_req_account_authtoken_login_t::get_account_handle
// Il2CppName: get_account_handle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::vx_req_account_authtoken_login_t::*)()>(&GlobalNamespace::vx_req_account_authtoken_login_t::get_account_handle)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_req_account_authtoken_login_t*), "get_account_handle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_req_account_authtoken_login_t::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::vx_req_account_authtoken_login_t::Finalize
// Il2CppName: Finalize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_req_account_authtoken_login_t::*)()>(&GlobalNamespace::vx_req_account_authtoken_login_t::Finalize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_req_account_authtoken_login_t*), "Finalize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
