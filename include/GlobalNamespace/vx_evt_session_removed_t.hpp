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
  // Forward declaring type: vx_evt_session_removed_t
  class vx_evt_session_removed_t;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::vx_evt_session_removed_t);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::vx_evt_session_removed_t*, "", "vx_evt_session_removed_t");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x21
  #pragma pack(push, 1)
  // Autogenerated type: vx_evt_session_removed_t
  // [TokenAttribute] Offset: FFFFFFFF
  class vx_evt_session_removed_t : public ::Il2CppObject/*, public ::System::IDisposable*/ {
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
    // Offset: 0x2179C68
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static vx_evt_session_removed_t* New_ctor(::System::IntPtr cPtr, bool cMemoryOwn) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::vx_evt_session_removed_t::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<vx_evt_session_removed_t*, creationType>(cPtr, cMemoryOwn)));
    }
    // static System.Runtime.InteropServices.HandleRef getCPtr(vx_evt_session_removed_t obj)
    // Offset: 0x2179CCC
    static ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::vx_evt_session_removed_t* obj);
    // public System.Void Dispose()
    // Offset: 0x2179DBC
    void Dispose();
    // public System.Void set_base_(vx_evt_base_t value)
    // Offset: 0x2179F2C
    void set_base_(::GlobalNamespace::vx_evt_base_t* value);
    // public vx_evt_base_t get_base_()
    // Offset: 0x2179FC4
    ::GlobalNamespace::vx_evt_base_t* get_base_();
    // public System.Void set_sessiongroup_handle(System.String value)
    // Offset: 0x217A078
    void set_sessiongroup_handle(::StringW value);
    // public System.String get_sessiongroup_handle()
    // Offset: 0x217A0F8
    ::StringW get_sessiongroup_handle();
    // public System.Void set_session_handle(System.String value)
    // Offset: 0x217A168
    void set_session_handle(::StringW value);
    // public System.String get_session_handle()
    // Offset: 0x217A1E8
    ::StringW get_session_handle();
    // public System.Void set_uri(System.String value)
    // Offset: 0x217A258
    void set_uri(::StringW value);
    // public System.String get_uri()
    // Offset: 0x217A2D8
    ::StringW get_uri();
    // public System.Void .ctor()
    // Offset: 0x217A348
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static vx_evt_session_removed_t* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::vx_evt_session_removed_t::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<vx_evt_session_removed_t*, creationType>()));
    }
    // protected override System.Void Finalize()
    // Offset: 0x2179D40
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
  }; // vx_evt_session_removed_t
  #pragma pack(pop)
  static check_size<sizeof(vx_evt_session_removed_t), 32 + sizeof(bool)> __GlobalNamespace_vx_evt_session_removed_tSizeCheck;
  static_assert(sizeof(vx_evt_session_removed_t) == 0x21);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::vx_evt_session_removed_t::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::vx_evt_session_removed_t::getCPtr
// Il2CppName: getCPtr
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::InteropServices::HandleRef (*)(::GlobalNamespace::vx_evt_session_removed_t*)>(&GlobalNamespace::vx_evt_session_removed_t::getCPtr)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("", "vx_evt_session_removed_t")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_evt_session_removed_t*), "getCPtr", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_evt_session_removed_t::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_evt_session_removed_t::*)()>(&GlobalNamespace::vx_evt_session_removed_t::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_evt_session_removed_t*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_evt_session_removed_t::set_base_
// Il2CppName: set_base_
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_evt_session_removed_t::*)(::GlobalNamespace::vx_evt_base_t*)>(&GlobalNamespace::vx_evt_session_removed_t::set_base_)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "vx_evt_base_t")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_evt_session_removed_t*), "set_base_", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_evt_session_removed_t::get_base_
// Il2CppName: get_base_
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::vx_evt_base_t* (GlobalNamespace::vx_evt_session_removed_t::*)()>(&GlobalNamespace::vx_evt_session_removed_t::get_base_)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_evt_session_removed_t*), "get_base_", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_evt_session_removed_t::set_sessiongroup_handle
// Il2CppName: set_sessiongroup_handle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_evt_session_removed_t::*)(::StringW)>(&GlobalNamespace::vx_evt_session_removed_t::set_sessiongroup_handle)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_evt_session_removed_t*), "set_sessiongroup_handle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_evt_session_removed_t::get_sessiongroup_handle
// Il2CppName: get_sessiongroup_handle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::vx_evt_session_removed_t::*)()>(&GlobalNamespace::vx_evt_session_removed_t::get_sessiongroup_handle)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_evt_session_removed_t*), "get_sessiongroup_handle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_evt_session_removed_t::set_session_handle
// Il2CppName: set_session_handle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_evt_session_removed_t::*)(::StringW)>(&GlobalNamespace::vx_evt_session_removed_t::set_session_handle)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_evt_session_removed_t*), "set_session_handle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_evt_session_removed_t::get_session_handle
// Il2CppName: get_session_handle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::vx_evt_session_removed_t::*)()>(&GlobalNamespace::vx_evt_session_removed_t::get_session_handle)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_evt_session_removed_t*), "get_session_handle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_evt_session_removed_t::set_uri
// Il2CppName: set_uri
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_evt_session_removed_t::*)(::StringW)>(&GlobalNamespace::vx_evt_session_removed_t::set_uri)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_evt_session_removed_t*), "set_uri", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_evt_session_removed_t::get_uri
// Il2CppName: get_uri
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::vx_evt_session_removed_t::*)()>(&GlobalNamespace::vx_evt_session_removed_t::get_uri)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_evt_session_removed_t*), "get_uri", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_evt_session_removed_t::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::vx_evt_session_removed_t::Finalize
// Il2CppName: Finalize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_evt_session_removed_t::*)()>(&GlobalNamespace::vx_evt_session_removed_t::Finalize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_evt_session_removed_t*), "Finalize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
