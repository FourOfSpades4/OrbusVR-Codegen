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
  // Forward declaring type: vx_evt_network_message_type
  struct vx_evt_network_message_type;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: vx_evt_network_message_t
  class vx_evt_network_message_t;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::vx_evt_network_message_t);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::vx_evt_network_message_t*, "", "vx_evt_network_message_t");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x21
  #pragma pack(push, 1)
  // Autogenerated type: vx_evt_network_message_t
  // [TokenAttribute] Offset: FFFFFFFF
  class vx_evt_network_message_t : public ::Il2CppObject/*, public ::System::IDisposable*/ {
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
    // Offset: 0x2171994
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static vx_evt_network_message_t* New_ctor(::System::IntPtr cPtr, bool cMemoryOwn) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::vx_evt_network_message_t::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<vx_evt_network_message_t*, creationType>(cPtr, cMemoryOwn)));
    }
    // static System.Runtime.InteropServices.HandleRef getCPtr(vx_evt_network_message_t obj)
    // Offset: 0x21719F8
    static ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::vx_evt_network_message_t* obj);
    // public System.Void Dispose()
    // Offset: 0x2171AE8
    void Dispose();
    // public System.Void set_base_(vx_evt_base_t value)
    // Offset: 0x2171C58
    void set_base_(::GlobalNamespace::vx_evt_base_t* value);
    // public vx_evt_base_t get_base_()
    // Offset: 0x2171CF0
    ::GlobalNamespace::vx_evt_base_t* get_base_();
    // public System.Void set_account_handle(System.String value)
    // Offset: 0x2171DA4
    void set_account_handle(::StringW value);
    // public System.String get_account_handle()
    // Offset: 0x2171E24
    ::StringW get_account_handle();
    // public System.Void set_network_message_type(vx_evt_network_message_type value)
    // Offset: 0x2171E94
    void set_network_message_type(::GlobalNamespace::vx_evt_network_message_type value);
    // public vx_evt_network_message_type get_network_message_type()
    // Offset: 0x2171F14
    ::GlobalNamespace::vx_evt_network_message_type get_network_message_type();
    // public System.Void set_content_type(System.String value)
    // Offset: 0x2171F84
    void set_content_type(::StringW value);
    // public System.String get_content_type()
    // Offset: 0x2172004
    ::StringW get_content_type();
    // public System.Void set_content(System.String value)
    // Offset: 0x2172074
    void set_content(::StringW value);
    // public System.String get_content()
    // Offset: 0x21720F4
    ::StringW get_content();
    // public System.Void set_sender_uri(System.String value)
    // Offset: 0x2172164
    void set_sender_uri(::StringW value);
    // public System.String get_sender_uri()
    // Offset: 0x21721E4
    ::StringW get_sender_uri();
    // public System.Void set_sender_display_name(System.String value)
    // Offset: 0x2172254
    void set_sender_display_name(::StringW value);
    // public System.String get_sender_display_name()
    // Offset: 0x21722D4
    ::StringW get_sender_display_name();
    // public System.Void set_sender_alias_username(System.String value)
    // Offset: 0x2172344
    void set_sender_alias_username(::StringW value);
    // public System.String get_sender_alias_username()
    // Offset: 0x21723C4
    ::StringW get_sender_alias_username();
    // public System.Void set_receiver_alias_username(System.String value)
    // Offset: 0x2172434
    void set_receiver_alias_username(::StringW value);
    // public System.String get_receiver_alias_username()
    // Offset: 0x21724B4
    ::StringW get_receiver_alias_username();
    // public System.Void .ctor()
    // Offset: 0x2172524
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static vx_evt_network_message_t* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::vx_evt_network_message_t::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<vx_evt_network_message_t*, creationType>()));
    }
    // protected override System.Void Finalize()
    // Offset: 0x2171A6C
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
  }; // vx_evt_network_message_t
  #pragma pack(pop)
  static check_size<sizeof(vx_evt_network_message_t), 32 + sizeof(bool)> __GlobalNamespace_vx_evt_network_message_tSizeCheck;
  static_assert(sizeof(vx_evt_network_message_t) == 0x21);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::vx_evt_network_message_t::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::vx_evt_network_message_t::getCPtr
// Il2CppName: getCPtr
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::InteropServices::HandleRef (*)(::GlobalNamespace::vx_evt_network_message_t*)>(&GlobalNamespace::vx_evt_network_message_t::getCPtr)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("", "vx_evt_network_message_t")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_evt_network_message_t*), "getCPtr", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_evt_network_message_t::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_evt_network_message_t::*)()>(&GlobalNamespace::vx_evt_network_message_t::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_evt_network_message_t*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_evt_network_message_t::set_base_
// Il2CppName: set_base_
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_evt_network_message_t::*)(::GlobalNamespace::vx_evt_base_t*)>(&GlobalNamespace::vx_evt_network_message_t::set_base_)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "vx_evt_base_t")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_evt_network_message_t*), "set_base_", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_evt_network_message_t::get_base_
// Il2CppName: get_base_
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::vx_evt_base_t* (GlobalNamespace::vx_evt_network_message_t::*)()>(&GlobalNamespace::vx_evt_network_message_t::get_base_)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_evt_network_message_t*), "get_base_", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_evt_network_message_t::set_account_handle
// Il2CppName: set_account_handle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_evt_network_message_t::*)(::StringW)>(&GlobalNamespace::vx_evt_network_message_t::set_account_handle)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_evt_network_message_t*), "set_account_handle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_evt_network_message_t::get_account_handle
// Il2CppName: get_account_handle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::vx_evt_network_message_t::*)()>(&GlobalNamespace::vx_evt_network_message_t::get_account_handle)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_evt_network_message_t*), "get_account_handle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_evt_network_message_t::set_network_message_type
// Il2CppName: set_network_message_type
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_evt_network_message_t::*)(::GlobalNamespace::vx_evt_network_message_type)>(&GlobalNamespace::vx_evt_network_message_t::set_network_message_type)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "vx_evt_network_message_type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_evt_network_message_t*), "set_network_message_type", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_evt_network_message_t::get_network_message_type
// Il2CppName: get_network_message_type
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::vx_evt_network_message_type (GlobalNamespace::vx_evt_network_message_t::*)()>(&GlobalNamespace::vx_evt_network_message_t::get_network_message_type)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_evt_network_message_t*), "get_network_message_type", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_evt_network_message_t::set_content_type
// Il2CppName: set_content_type
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_evt_network_message_t::*)(::StringW)>(&GlobalNamespace::vx_evt_network_message_t::set_content_type)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_evt_network_message_t*), "set_content_type", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_evt_network_message_t::get_content_type
// Il2CppName: get_content_type
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::vx_evt_network_message_t::*)()>(&GlobalNamespace::vx_evt_network_message_t::get_content_type)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_evt_network_message_t*), "get_content_type", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_evt_network_message_t::set_content
// Il2CppName: set_content
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_evt_network_message_t::*)(::StringW)>(&GlobalNamespace::vx_evt_network_message_t::set_content)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_evt_network_message_t*), "set_content", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_evt_network_message_t::get_content
// Il2CppName: get_content
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::vx_evt_network_message_t::*)()>(&GlobalNamespace::vx_evt_network_message_t::get_content)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_evt_network_message_t*), "get_content", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_evt_network_message_t::set_sender_uri
// Il2CppName: set_sender_uri
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_evt_network_message_t::*)(::StringW)>(&GlobalNamespace::vx_evt_network_message_t::set_sender_uri)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_evt_network_message_t*), "set_sender_uri", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_evt_network_message_t::get_sender_uri
// Il2CppName: get_sender_uri
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::vx_evt_network_message_t::*)()>(&GlobalNamespace::vx_evt_network_message_t::get_sender_uri)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_evt_network_message_t*), "get_sender_uri", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_evt_network_message_t::set_sender_display_name
// Il2CppName: set_sender_display_name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_evt_network_message_t::*)(::StringW)>(&GlobalNamespace::vx_evt_network_message_t::set_sender_display_name)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_evt_network_message_t*), "set_sender_display_name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_evt_network_message_t::get_sender_display_name
// Il2CppName: get_sender_display_name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::vx_evt_network_message_t::*)()>(&GlobalNamespace::vx_evt_network_message_t::get_sender_display_name)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_evt_network_message_t*), "get_sender_display_name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_evt_network_message_t::set_sender_alias_username
// Il2CppName: set_sender_alias_username
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_evt_network_message_t::*)(::StringW)>(&GlobalNamespace::vx_evt_network_message_t::set_sender_alias_username)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_evt_network_message_t*), "set_sender_alias_username", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_evt_network_message_t::get_sender_alias_username
// Il2CppName: get_sender_alias_username
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::vx_evt_network_message_t::*)()>(&GlobalNamespace::vx_evt_network_message_t::get_sender_alias_username)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_evt_network_message_t*), "get_sender_alias_username", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_evt_network_message_t::set_receiver_alias_username
// Il2CppName: set_receiver_alias_username
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_evt_network_message_t::*)(::StringW)>(&GlobalNamespace::vx_evt_network_message_t::set_receiver_alias_username)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_evt_network_message_t*), "set_receiver_alias_username", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_evt_network_message_t::get_receiver_alias_username
// Il2CppName: get_receiver_alias_username
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::vx_evt_network_message_t::*)()>(&GlobalNamespace::vx_evt_network_message_t::get_receiver_alias_username)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_evt_network_message_t*), "get_receiver_alias_username", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_evt_network_message_t::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::vx_evt_network_message_t::Finalize
// Il2CppName: Finalize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_evt_network_message_t::*)()>(&GlobalNamespace::vx_evt_network_message_t::Finalize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_evt_network_message_t*), "Finalize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
