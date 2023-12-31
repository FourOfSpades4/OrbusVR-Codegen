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
  // Forward declaring type: vx_evt_participant_added_t
  class vx_evt_participant_added_t;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::vx_evt_participant_added_t);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::vx_evt_participant_added_t*, "", "vx_evt_participant_added_t");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x21
  #pragma pack(push, 1)
  // Autogenerated type: vx_evt_participant_added_t
  // [TokenAttribute] Offset: FFFFFFFF
  class vx_evt_participant_added_t : public ::Il2CppObject/*, public ::System::IDisposable*/ {
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
    // Offset: 0x2172598
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static vx_evt_participant_added_t* New_ctor(::System::IntPtr cPtr, bool cMemoryOwn) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::vx_evt_participant_added_t::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<vx_evt_participant_added_t*, creationType>(cPtr, cMemoryOwn)));
    }
    // static System.Runtime.InteropServices.HandleRef getCPtr(vx_evt_participant_added_t obj)
    // Offset: 0x21725FC
    static ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::vx_evt_participant_added_t* obj);
    // public System.Void Dispose()
    // Offset: 0x21726EC
    void Dispose();
    // public System.Void set_base_(vx_evt_base_t value)
    // Offset: 0x217285C
    void set_base_(::GlobalNamespace::vx_evt_base_t* value);
    // public vx_evt_base_t get_base_()
    // Offset: 0x21728F4
    ::GlobalNamespace::vx_evt_base_t* get_base_();
    // public System.Void set_sessiongroup_handle(System.String value)
    // Offset: 0x21729A8
    void set_sessiongroup_handle(::StringW value);
    // public System.String get_sessiongroup_handle()
    // Offset: 0x2172A28
    ::StringW get_sessiongroup_handle();
    // public System.Void set_session_handle(System.String value)
    // Offset: 0x2172A98
    void set_session_handle(::StringW value);
    // public System.String get_session_handle()
    // Offset: 0x2172B18
    ::StringW get_session_handle();
    // public System.Void set_participant_uri(System.String value)
    // Offset: 0x2172B88
    void set_participant_uri(::StringW value);
    // public System.String get_participant_uri()
    // Offset: 0x2172C08
    ::StringW get_participant_uri();
    // public System.Void set_account_name(System.String value)
    // Offset: 0x2172C78
    void set_account_name(::StringW value);
    // public System.String get_account_name()
    // Offset: 0x2172CF8
    ::StringW get_account_name();
    // public System.Void set_display_name(System.String value)
    // Offset: 0x2172D68
    void set_display_name(::StringW value);
    // public System.String get_display_name()
    // Offset: 0x2172DE8
    ::StringW get_display_name();
    // public System.Void set_participant_type(System.Int32 value)
    // Offset: 0x2172E58
    void set_participant_type(int value);
    // public System.Int32 get_participant_type()
    // Offset: 0x2172ED8
    int get_participant_type();
    // public System.Void set_application(System.String value)
    // Offset: 0x2172F48
    void set_application(::StringW value);
    // public System.String get_application()
    // Offset: 0x2172FC8
    ::StringW get_application();
    // public System.Void set_is_anonymous_login(System.Int32 value)
    // Offset: 0x2173038
    void set_is_anonymous_login(int value);
    // public System.Int32 get_is_anonymous_login()
    // Offset: 0x21730B8
    int get_is_anonymous_login();
    // public System.Void set_displayname(System.String value)
    // Offset: 0x2173128
    void set_displayname(::StringW value);
    // public System.String get_displayname()
    // Offset: 0x21731A8
    ::StringW get_displayname();
    // public System.Void set_alias_username(System.String value)
    // Offset: 0x2173218
    void set_alias_username(::StringW value);
    // public System.String get_alias_username()
    // Offset: 0x2173298
    ::StringW get_alias_username();
    // public System.Void set_encoded_uri_with_tag(System.String value)
    // Offset: 0x2173308
    void set_encoded_uri_with_tag(::StringW value);
    // public System.String get_encoded_uri_with_tag()
    // Offset: 0x2173388
    ::StringW get_encoded_uri_with_tag();
    // public System.Void set_is_current_user(System.Int32 value)
    // Offset: 0x21733F8
    void set_is_current_user(int value);
    // public System.Int32 get_is_current_user()
    // Offset: 0x2173478
    int get_is_current_user();
    // public System.Void .ctor()
    // Offset: 0x21734E8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static vx_evt_participant_added_t* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::vx_evt_participant_added_t::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<vx_evt_participant_added_t*, creationType>()));
    }
    // protected override System.Void Finalize()
    // Offset: 0x2172670
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
  }; // vx_evt_participant_added_t
  #pragma pack(pop)
  static check_size<sizeof(vx_evt_participant_added_t), 32 + sizeof(bool)> __GlobalNamespace_vx_evt_participant_added_tSizeCheck;
  static_assert(sizeof(vx_evt_participant_added_t) == 0x21);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::vx_evt_participant_added_t::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::vx_evt_participant_added_t::getCPtr
// Il2CppName: getCPtr
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::InteropServices::HandleRef (*)(::GlobalNamespace::vx_evt_participant_added_t*)>(&GlobalNamespace::vx_evt_participant_added_t::getCPtr)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("", "vx_evt_participant_added_t")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_evt_participant_added_t*), "getCPtr", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_evt_participant_added_t::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_evt_participant_added_t::*)()>(&GlobalNamespace::vx_evt_participant_added_t::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_evt_participant_added_t*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_evt_participant_added_t::set_base_
// Il2CppName: set_base_
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_evt_participant_added_t::*)(::GlobalNamespace::vx_evt_base_t*)>(&GlobalNamespace::vx_evt_participant_added_t::set_base_)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "vx_evt_base_t")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_evt_participant_added_t*), "set_base_", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_evt_participant_added_t::get_base_
// Il2CppName: get_base_
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::vx_evt_base_t* (GlobalNamespace::vx_evt_participant_added_t::*)()>(&GlobalNamespace::vx_evt_participant_added_t::get_base_)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_evt_participant_added_t*), "get_base_", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_evt_participant_added_t::set_sessiongroup_handle
// Il2CppName: set_sessiongroup_handle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_evt_participant_added_t::*)(::StringW)>(&GlobalNamespace::vx_evt_participant_added_t::set_sessiongroup_handle)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_evt_participant_added_t*), "set_sessiongroup_handle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_evt_participant_added_t::get_sessiongroup_handle
// Il2CppName: get_sessiongroup_handle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::vx_evt_participant_added_t::*)()>(&GlobalNamespace::vx_evt_participant_added_t::get_sessiongroup_handle)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_evt_participant_added_t*), "get_sessiongroup_handle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_evt_participant_added_t::set_session_handle
// Il2CppName: set_session_handle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_evt_participant_added_t::*)(::StringW)>(&GlobalNamespace::vx_evt_participant_added_t::set_session_handle)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_evt_participant_added_t*), "set_session_handle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_evt_participant_added_t::get_session_handle
// Il2CppName: get_session_handle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::vx_evt_participant_added_t::*)()>(&GlobalNamespace::vx_evt_participant_added_t::get_session_handle)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_evt_participant_added_t*), "get_session_handle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_evt_participant_added_t::set_participant_uri
// Il2CppName: set_participant_uri
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_evt_participant_added_t::*)(::StringW)>(&GlobalNamespace::vx_evt_participant_added_t::set_participant_uri)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_evt_participant_added_t*), "set_participant_uri", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_evt_participant_added_t::get_participant_uri
// Il2CppName: get_participant_uri
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::vx_evt_participant_added_t::*)()>(&GlobalNamespace::vx_evt_participant_added_t::get_participant_uri)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_evt_participant_added_t*), "get_participant_uri", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_evt_participant_added_t::set_account_name
// Il2CppName: set_account_name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_evt_participant_added_t::*)(::StringW)>(&GlobalNamespace::vx_evt_participant_added_t::set_account_name)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_evt_participant_added_t*), "set_account_name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_evt_participant_added_t::get_account_name
// Il2CppName: get_account_name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::vx_evt_participant_added_t::*)()>(&GlobalNamespace::vx_evt_participant_added_t::get_account_name)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_evt_participant_added_t*), "get_account_name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_evt_participant_added_t::set_display_name
// Il2CppName: set_display_name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_evt_participant_added_t::*)(::StringW)>(&GlobalNamespace::vx_evt_participant_added_t::set_display_name)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_evt_participant_added_t*), "set_display_name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_evt_participant_added_t::get_display_name
// Il2CppName: get_display_name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::vx_evt_participant_added_t::*)()>(&GlobalNamespace::vx_evt_participant_added_t::get_display_name)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_evt_participant_added_t*), "get_display_name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_evt_participant_added_t::set_participant_type
// Il2CppName: set_participant_type
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_evt_participant_added_t::*)(int)>(&GlobalNamespace::vx_evt_participant_added_t::set_participant_type)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_evt_participant_added_t*), "set_participant_type", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_evt_participant_added_t::get_participant_type
// Il2CppName: get_participant_type
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::vx_evt_participant_added_t::*)()>(&GlobalNamespace::vx_evt_participant_added_t::get_participant_type)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_evt_participant_added_t*), "get_participant_type", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_evt_participant_added_t::set_application
// Il2CppName: set_application
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_evt_participant_added_t::*)(::StringW)>(&GlobalNamespace::vx_evt_participant_added_t::set_application)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_evt_participant_added_t*), "set_application", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_evt_participant_added_t::get_application
// Il2CppName: get_application
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::vx_evt_participant_added_t::*)()>(&GlobalNamespace::vx_evt_participant_added_t::get_application)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_evt_participant_added_t*), "get_application", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_evt_participant_added_t::set_is_anonymous_login
// Il2CppName: set_is_anonymous_login
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_evt_participant_added_t::*)(int)>(&GlobalNamespace::vx_evt_participant_added_t::set_is_anonymous_login)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_evt_participant_added_t*), "set_is_anonymous_login", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_evt_participant_added_t::get_is_anonymous_login
// Il2CppName: get_is_anonymous_login
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::vx_evt_participant_added_t::*)()>(&GlobalNamespace::vx_evt_participant_added_t::get_is_anonymous_login)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_evt_participant_added_t*), "get_is_anonymous_login", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_evt_participant_added_t::set_displayname
// Il2CppName: set_displayname
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_evt_participant_added_t::*)(::StringW)>(&GlobalNamespace::vx_evt_participant_added_t::set_displayname)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_evt_participant_added_t*), "set_displayname", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_evt_participant_added_t::get_displayname
// Il2CppName: get_displayname
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::vx_evt_participant_added_t::*)()>(&GlobalNamespace::vx_evt_participant_added_t::get_displayname)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_evt_participant_added_t*), "get_displayname", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_evt_participant_added_t::set_alias_username
// Il2CppName: set_alias_username
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_evt_participant_added_t::*)(::StringW)>(&GlobalNamespace::vx_evt_participant_added_t::set_alias_username)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_evt_participant_added_t*), "set_alias_username", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_evt_participant_added_t::get_alias_username
// Il2CppName: get_alias_username
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::vx_evt_participant_added_t::*)()>(&GlobalNamespace::vx_evt_participant_added_t::get_alias_username)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_evt_participant_added_t*), "get_alias_username", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_evt_participant_added_t::set_encoded_uri_with_tag
// Il2CppName: set_encoded_uri_with_tag
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_evt_participant_added_t::*)(::StringW)>(&GlobalNamespace::vx_evt_participant_added_t::set_encoded_uri_with_tag)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_evt_participant_added_t*), "set_encoded_uri_with_tag", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_evt_participant_added_t::get_encoded_uri_with_tag
// Il2CppName: get_encoded_uri_with_tag
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::vx_evt_participant_added_t::*)()>(&GlobalNamespace::vx_evt_participant_added_t::get_encoded_uri_with_tag)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_evt_participant_added_t*), "get_encoded_uri_with_tag", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_evt_participant_added_t::set_is_current_user
// Il2CppName: set_is_current_user
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_evt_participant_added_t::*)(int)>(&GlobalNamespace::vx_evt_participant_added_t::set_is_current_user)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_evt_participant_added_t*), "set_is_current_user", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_evt_participant_added_t::get_is_current_user
// Il2CppName: get_is_current_user
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::vx_evt_participant_added_t::*)()>(&GlobalNamespace::vx_evt_participant_added_t::get_is_current_user)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_evt_participant_added_t*), "get_is_current_user", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_evt_participant_added_t::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::vx_evt_participant_added_t::Finalize
// Il2CppName: Finalize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_evt_participant_added_t::*)()>(&GlobalNamespace::vx_evt_participant_added_t::Finalize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_evt_participant_added_t*), "Finalize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
