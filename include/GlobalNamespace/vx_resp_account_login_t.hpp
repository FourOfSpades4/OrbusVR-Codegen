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
  // Forward declaring type: vx_resp_base_t
  class vx_resp_base_t;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: vx_resp_account_login_t
  class vx_resp_account_login_t;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::vx_resp_account_login_t);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::vx_resp_account_login_t*, "", "vx_resp_account_login_t");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x21
  #pragma pack(push, 1)
  // Autogenerated type: vx_resp_account_login_t
  // [TokenAttribute] Offset: FFFFFFFF
  class vx_resp_account_login_t : public ::Il2CppObject/*, public ::System::IDisposable*/ {
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
    // Offset: 0x2287788
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static vx_resp_account_login_t* New_ctor(::System::IntPtr cPtr, bool cMemoryOwn) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::vx_resp_account_login_t::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<vx_resp_account_login_t*, creationType>(cPtr, cMemoryOwn)));
    }
    // static System.Runtime.InteropServices.HandleRef getCPtr(vx_resp_account_login_t obj)
    // Offset: 0x22877EC
    static ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::vx_resp_account_login_t* obj);
    // public System.Void Dispose()
    // Offset: 0x22878DC
    void Dispose();
    // public System.Void set_base_(vx_resp_base_t value)
    // Offset: 0x2287A4C
    void set_base_(::GlobalNamespace::vx_resp_base_t* value);
    // public vx_resp_base_t get_base_()
    // Offset: 0x2287AE4
    ::GlobalNamespace::vx_resp_base_t* get_base_();
    // public System.Void set_account_handle(System.String value)
    // Offset: 0x2287B98
    void set_account_handle(::StringW value);
    // public System.String get_account_handle()
    // Offset: 0x2287C18
    ::StringW get_account_handle();
    // public System.Void set_account_id(System.Int32 value)
    // Offset: 0x2287C88
    void set_account_id(int value);
    // public System.Int32 get_account_id()
    // Offset: 0x2287D08
    int get_account_id();
    // public System.Void set_display_name(System.String value)
    // Offset: 0x2287D78
    void set_display_name(::StringW value);
    // public System.String get_display_name()
    // Offset: 0x2287DF8
    ::StringW get_display_name();
    // public System.Void set_uri(System.String value)
    // Offset: 0x2287E68
    void set_uri(::StringW value);
    // public System.String get_uri()
    // Offset: 0x2287EE8
    ::StringW get_uri();
    // public System.Void set_num_aliases(System.Int32 value)
    // Offset: 0x2287F58
    void set_num_aliases(int value);
    // public System.Int32 get_num_aliases()
    // Offset: 0x2287FD8
    int get_num_aliases();
    // public System.Void set_buddy_list_uri(System.String value)
    // Offset: 0x2288048
    void set_buddy_list_uri(::StringW value);
    // public System.String get_buddy_list_uri()
    // Offset: 0x22880C8
    ::StringW get_buddy_list_uri();
    // public System.Void set_encoded_uri_with_tag(System.String value)
    // Offset: 0x2288138
    void set_encoded_uri_with_tag(::StringW value);
    // public System.String get_encoded_uri_with_tag()
    // Offset: 0x22881B8
    ::StringW get_encoded_uri_with_tag();
    // public System.Void .ctor()
    // Offset: 0x2288228
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static vx_resp_account_login_t* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::vx_resp_account_login_t::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<vx_resp_account_login_t*, creationType>()));
    }
    // protected override System.Void Finalize()
    // Offset: 0x2287860
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
  }; // vx_resp_account_login_t
  #pragma pack(pop)
  static check_size<sizeof(vx_resp_account_login_t), 32 + sizeof(bool)> __GlobalNamespace_vx_resp_account_login_tSizeCheck;
  static_assert(sizeof(vx_resp_account_login_t) == 0x21);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::vx_resp_account_login_t::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::vx_resp_account_login_t::getCPtr
// Il2CppName: getCPtr
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::InteropServices::HandleRef (*)(::GlobalNamespace::vx_resp_account_login_t*)>(&GlobalNamespace::vx_resp_account_login_t::getCPtr)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("", "vx_resp_account_login_t")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_resp_account_login_t*), "getCPtr", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_resp_account_login_t::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_resp_account_login_t::*)()>(&GlobalNamespace::vx_resp_account_login_t::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_resp_account_login_t*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_resp_account_login_t::set_base_
// Il2CppName: set_base_
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_resp_account_login_t::*)(::GlobalNamespace::vx_resp_base_t*)>(&GlobalNamespace::vx_resp_account_login_t::set_base_)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "vx_resp_base_t")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_resp_account_login_t*), "set_base_", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_resp_account_login_t::get_base_
// Il2CppName: get_base_
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::vx_resp_base_t* (GlobalNamespace::vx_resp_account_login_t::*)()>(&GlobalNamespace::vx_resp_account_login_t::get_base_)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_resp_account_login_t*), "get_base_", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_resp_account_login_t::set_account_handle
// Il2CppName: set_account_handle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_resp_account_login_t::*)(::StringW)>(&GlobalNamespace::vx_resp_account_login_t::set_account_handle)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_resp_account_login_t*), "set_account_handle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_resp_account_login_t::get_account_handle
// Il2CppName: get_account_handle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::vx_resp_account_login_t::*)()>(&GlobalNamespace::vx_resp_account_login_t::get_account_handle)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_resp_account_login_t*), "get_account_handle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_resp_account_login_t::set_account_id
// Il2CppName: set_account_id
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_resp_account_login_t::*)(int)>(&GlobalNamespace::vx_resp_account_login_t::set_account_id)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_resp_account_login_t*), "set_account_id", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_resp_account_login_t::get_account_id
// Il2CppName: get_account_id
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::vx_resp_account_login_t::*)()>(&GlobalNamespace::vx_resp_account_login_t::get_account_id)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_resp_account_login_t*), "get_account_id", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_resp_account_login_t::set_display_name
// Il2CppName: set_display_name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_resp_account_login_t::*)(::StringW)>(&GlobalNamespace::vx_resp_account_login_t::set_display_name)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_resp_account_login_t*), "set_display_name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_resp_account_login_t::get_display_name
// Il2CppName: get_display_name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::vx_resp_account_login_t::*)()>(&GlobalNamespace::vx_resp_account_login_t::get_display_name)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_resp_account_login_t*), "get_display_name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_resp_account_login_t::set_uri
// Il2CppName: set_uri
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_resp_account_login_t::*)(::StringW)>(&GlobalNamespace::vx_resp_account_login_t::set_uri)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_resp_account_login_t*), "set_uri", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_resp_account_login_t::get_uri
// Il2CppName: get_uri
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::vx_resp_account_login_t::*)()>(&GlobalNamespace::vx_resp_account_login_t::get_uri)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_resp_account_login_t*), "get_uri", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_resp_account_login_t::set_num_aliases
// Il2CppName: set_num_aliases
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_resp_account_login_t::*)(int)>(&GlobalNamespace::vx_resp_account_login_t::set_num_aliases)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_resp_account_login_t*), "set_num_aliases", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_resp_account_login_t::get_num_aliases
// Il2CppName: get_num_aliases
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::vx_resp_account_login_t::*)()>(&GlobalNamespace::vx_resp_account_login_t::get_num_aliases)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_resp_account_login_t*), "get_num_aliases", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_resp_account_login_t::set_buddy_list_uri
// Il2CppName: set_buddy_list_uri
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_resp_account_login_t::*)(::StringW)>(&GlobalNamespace::vx_resp_account_login_t::set_buddy_list_uri)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_resp_account_login_t*), "set_buddy_list_uri", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_resp_account_login_t::get_buddy_list_uri
// Il2CppName: get_buddy_list_uri
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::vx_resp_account_login_t::*)()>(&GlobalNamespace::vx_resp_account_login_t::get_buddy_list_uri)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_resp_account_login_t*), "get_buddy_list_uri", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_resp_account_login_t::set_encoded_uri_with_tag
// Il2CppName: set_encoded_uri_with_tag
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_resp_account_login_t::*)(::StringW)>(&GlobalNamespace::vx_resp_account_login_t::set_encoded_uri_with_tag)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_resp_account_login_t*), "set_encoded_uri_with_tag", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_resp_account_login_t::get_encoded_uri_with_tag
// Il2CppName: get_encoded_uri_with_tag
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::vx_resp_account_login_t::*)()>(&GlobalNamespace::vx_resp_account_login_t::get_encoded_uri_with_tag)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_resp_account_login_t*), "get_encoded_uri_with_tag", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_resp_account_login_t::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::vx_resp_account_login_t::Finalize
// Il2CppName: Finalize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_resp_account_login_t::*)()>(&GlobalNamespace::vx_resp_account_login_t::Finalize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_resp_account_login_t*), "Finalize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
