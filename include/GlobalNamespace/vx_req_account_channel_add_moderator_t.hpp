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
  // Forward declaring type: vx_req_account_channel_add_moderator_t
  class vx_req_account_channel_add_moderator_t;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::vx_req_account_channel_add_moderator_t);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::vx_req_account_channel_add_moderator_t*, "", "vx_req_account_channel_add_moderator_t");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x21
  #pragma pack(push, 1)
  // Autogenerated type: vx_req_account_channel_add_moderator_t
  // [TokenAttribute] Offset: FFFFFFFF
  class vx_req_account_channel_add_moderator_t : public ::Il2CppObject/*, public ::System::IDisposable*/ {
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
    // Offset: 0x2207294
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static vx_req_account_channel_add_moderator_t* New_ctor(::System::IntPtr cPtr, bool cMemoryOwn) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::vx_req_account_channel_add_moderator_t::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<vx_req_account_channel_add_moderator_t*, creationType>(cPtr, cMemoryOwn)));
    }
    // static System.Runtime.InteropServices.HandleRef getCPtr(vx_req_account_channel_add_moderator_t obj)
    // Offset: 0x22072F8
    static ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::vx_req_account_channel_add_moderator_t* obj);
    // public System.Void Dispose()
    // Offset: 0x22073E8
    void Dispose();
    // public System.Void set_base_(vx_req_base_t value)
    // Offset: 0x2207634
    void set_base_(::GlobalNamespace::vx_req_base_t* value);
    // public vx_req_base_t get_base_()
    // Offset: 0x2207580
    ::GlobalNamespace::vx_req_base_t* get_base_();
    // public System.Void set_account_handle(System.String value)
    // Offset: 0x22076CC
    void set_account_handle(::StringW value);
    // public System.String get_account_handle()
    // Offset: 0x220774C
    ::StringW get_account_handle();
    // public System.Void set_channel_uri(System.String value)
    // Offset: 0x22077BC
    void set_channel_uri(::StringW value);
    // public System.String get_channel_uri()
    // Offset: 0x220783C
    ::StringW get_channel_uri();
    // public System.Void set_channel_name(System.String value)
    // Offset: 0x22078AC
    void set_channel_name(::StringW value);
    // public System.String get_channel_name()
    // Offset: 0x220792C
    ::StringW get_channel_name();
    // public System.Void set_moderator_uri(System.String value)
    // Offset: 0x220799C
    void set_moderator_uri(::StringW value);
    // public System.String get_moderator_uri()
    // Offset: 0x2207A1C
    ::StringW get_moderator_uri();
    // public System.Void .ctor()
    // Offset: 0x2207A8C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static vx_req_account_channel_add_moderator_t* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::vx_req_account_channel_add_moderator_t::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<vx_req_account_channel_add_moderator_t*, creationType>()));
    }
    // protected override System.Void Finalize()
    // Offset: 0x220736C
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
  }; // vx_req_account_channel_add_moderator_t
  #pragma pack(pop)
  static check_size<sizeof(vx_req_account_channel_add_moderator_t), 32 + sizeof(bool)> __GlobalNamespace_vx_req_account_channel_add_moderator_tSizeCheck;
  static_assert(sizeof(vx_req_account_channel_add_moderator_t) == 0x21);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::vx_req_account_channel_add_moderator_t::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::vx_req_account_channel_add_moderator_t::getCPtr
// Il2CppName: getCPtr
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::InteropServices::HandleRef (*)(::GlobalNamespace::vx_req_account_channel_add_moderator_t*)>(&GlobalNamespace::vx_req_account_channel_add_moderator_t::getCPtr)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("", "vx_req_account_channel_add_moderator_t")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_req_account_channel_add_moderator_t*), "getCPtr", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_req_account_channel_add_moderator_t::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_req_account_channel_add_moderator_t::*)()>(&GlobalNamespace::vx_req_account_channel_add_moderator_t::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_req_account_channel_add_moderator_t*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_req_account_channel_add_moderator_t::set_base_
// Il2CppName: set_base_
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_req_account_channel_add_moderator_t::*)(::GlobalNamespace::vx_req_base_t*)>(&GlobalNamespace::vx_req_account_channel_add_moderator_t::set_base_)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "vx_req_base_t")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_req_account_channel_add_moderator_t*), "set_base_", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_req_account_channel_add_moderator_t::get_base_
// Il2CppName: get_base_
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::vx_req_base_t* (GlobalNamespace::vx_req_account_channel_add_moderator_t::*)()>(&GlobalNamespace::vx_req_account_channel_add_moderator_t::get_base_)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_req_account_channel_add_moderator_t*), "get_base_", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_req_account_channel_add_moderator_t::set_account_handle
// Il2CppName: set_account_handle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_req_account_channel_add_moderator_t::*)(::StringW)>(&GlobalNamespace::vx_req_account_channel_add_moderator_t::set_account_handle)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_req_account_channel_add_moderator_t*), "set_account_handle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_req_account_channel_add_moderator_t::get_account_handle
// Il2CppName: get_account_handle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::vx_req_account_channel_add_moderator_t::*)()>(&GlobalNamespace::vx_req_account_channel_add_moderator_t::get_account_handle)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_req_account_channel_add_moderator_t*), "get_account_handle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_req_account_channel_add_moderator_t::set_channel_uri
// Il2CppName: set_channel_uri
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_req_account_channel_add_moderator_t::*)(::StringW)>(&GlobalNamespace::vx_req_account_channel_add_moderator_t::set_channel_uri)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_req_account_channel_add_moderator_t*), "set_channel_uri", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_req_account_channel_add_moderator_t::get_channel_uri
// Il2CppName: get_channel_uri
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::vx_req_account_channel_add_moderator_t::*)()>(&GlobalNamespace::vx_req_account_channel_add_moderator_t::get_channel_uri)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_req_account_channel_add_moderator_t*), "get_channel_uri", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_req_account_channel_add_moderator_t::set_channel_name
// Il2CppName: set_channel_name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_req_account_channel_add_moderator_t::*)(::StringW)>(&GlobalNamespace::vx_req_account_channel_add_moderator_t::set_channel_name)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_req_account_channel_add_moderator_t*), "set_channel_name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_req_account_channel_add_moderator_t::get_channel_name
// Il2CppName: get_channel_name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::vx_req_account_channel_add_moderator_t::*)()>(&GlobalNamespace::vx_req_account_channel_add_moderator_t::get_channel_name)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_req_account_channel_add_moderator_t*), "get_channel_name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_req_account_channel_add_moderator_t::set_moderator_uri
// Il2CppName: set_moderator_uri
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_req_account_channel_add_moderator_t::*)(::StringW)>(&GlobalNamespace::vx_req_account_channel_add_moderator_t::set_moderator_uri)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_req_account_channel_add_moderator_t*), "set_moderator_uri", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_req_account_channel_add_moderator_t::get_moderator_uri
// Il2CppName: get_moderator_uri
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::vx_req_account_channel_add_moderator_t::*)()>(&GlobalNamespace::vx_req_account_channel_add_moderator_t::get_moderator_uri)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_req_account_channel_add_moderator_t*), "get_moderator_uri", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_req_account_channel_add_moderator_t::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::vx_req_account_channel_add_moderator_t::Finalize
// Il2CppName: Finalize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_req_account_channel_add_moderator_t::*)()>(&GlobalNamespace::vx_req_account_channel_add_moderator_t::Finalize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_req_account_channel_add_moderator_t*), "Finalize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};