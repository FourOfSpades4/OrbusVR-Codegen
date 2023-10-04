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
  // Forward declaring type: vx_evt_session_archive_query_end_t
  class vx_evt_session_archive_query_end_t;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::vx_evt_session_archive_query_end_t);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::vx_evt_session_archive_query_end_t*, "", "vx_evt_session_archive_query_end_t");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x21
  #pragma pack(push, 1)
  // Autogenerated type: vx_evt_session_archive_query_end_t
  // [TokenAttribute] Offset: FFFFFFFF
  class vx_evt_session_archive_query_end_t : public ::Il2CppObject/*, public ::System::IDisposable*/ {
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
    // Offset: 0x2178550
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static vx_evt_session_archive_query_end_t* New_ctor(::System::IntPtr cPtr, bool cMemoryOwn) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::vx_evt_session_archive_query_end_t::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<vx_evt_session_archive_query_end_t*, creationType>(cPtr, cMemoryOwn)));
    }
    // static System.Runtime.InteropServices.HandleRef getCPtr(vx_evt_session_archive_query_end_t obj)
    // Offset: 0x21785B4
    static ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::vx_evt_session_archive_query_end_t* obj);
    // public System.Void Dispose()
    // Offset: 0x21786A4
    void Dispose();
    // public System.Void set_base_(vx_evt_base_t value)
    // Offset: 0x2178814
    void set_base_(::GlobalNamespace::vx_evt_base_t* value);
    // public vx_evt_base_t get_base_()
    // Offset: 0x21788AC
    ::GlobalNamespace::vx_evt_base_t* get_base_();
    // public System.Void set_sessiongroup_handle(System.String value)
    // Offset: 0x2178960
    void set_sessiongroup_handle(::StringW value);
    // public System.String get_sessiongroup_handle()
    // Offset: 0x21789E0
    ::StringW get_sessiongroup_handle();
    // public System.Void set_session_handle(System.String value)
    // Offset: 0x2178A50
    void set_session_handle(::StringW value);
    // public System.String get_session_handle()
    // Offset: 0x2178AD0
    ::StringW get_session_handle();
    // public System.Void set_query_id(System.String value)
    // Offset: 0x2178B40
    void set_query_id(::StringW value);
    // public System.String get_query_id()
    // Offset: 0x2178BC0
    ::StringW get_query_id();
    // public System.Void set_return_code(System.Int32 value)
    // Offset: 0x2178C30
    void set_return_code(int value);
    // public System.Int32 get_return_code()
    // Offset: 0x2178CB0
    int get_return_code();
    // public System.Void set_status_code(System.Int32 value)
    // Offset: 0x2178D20
    void set_status_code(int value);
    // public System.Int32 get_status_code()
    // Offset: 0x2178DA0
    int get_status_code();
    // public System.Void set_first_id(System.String value)
    // Offset: 0x2178E10
    void set_first_id(::StringW value);
    // public System.String get_first_id()
    // Offset: 0x2178E90
    ::StringW get_first_id();
    // public System.Void set_last_id(System.String value)
    // Offset: 0x2178F00
    void set_last_id(::StringW value);
    // public System.String get_last_id()
    // Offset: 0x2178F80
    ::StringW get_last_id();
    // public System.Void set_first_index(System.UInt32 value)
    // Offset: 0x2178FF0
    void set_first_index(uint value);
    // public System.UInt32 get_first_index()
    // Offset: 0x2179070
    uint get_first_index();
    // public System.Void set_count(System.UInt32 value)
    // Offset: 0x21790E0
    void set_count(uint value);
    // public System.UInt32 get_count()
    // Offset: 0x2179160
    uint get_count();
    // public System.Void .ctor()
    // Offset: 0x21791D0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static vx_evt_session_archive_query_end_t* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::vx_evt_session_archive_query_end_t::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<vx_evt_session_archive_query_end_t*, creationType>()));
    }
    // protected override System.Void Finalize()
    // Offset: 0x2178628
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
  }; // vx_evt_session_archive_query_end_t
  #pragma pack(pop)
  static check_size<sizeof(vx_evt_session_archive_query_end_t), 32 + sizeof(bool)> __GlobalNamespace_vx_evt_session_archive_query_end_tSizeCheck;
  static_assert(sizeof(vx_evt_session_archive_query_end_t) == 0x21);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::vx_evt_session_archive_query_end_t::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::vx_evt_session_archive_query_end_t::getCPtr
// Il2CppName: getCPtr
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::InteropServices::HandleRef (*)(::GlobalNamespace::vx_evt_session_archive_query_end_t*)>(&GlobalNamespace::vx_evt_session_archive_query_end_t::getCPtr)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("", "vx_evt_session_archive_query_end_t")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_evt_session_archive_query_end_t*), "getCPtr", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_evt_session_archive_query_end_t::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_evt_session_archive_query_end_t::*)()>(&GlobalNamespace::vx_evt_session_archive_query_end_t::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_evt_session_archive_query_end_t*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_evt_session_archive_query_end_t::set_base_
// Il2CppName: set_base_
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_evt_session_archive_query_end_t::*)(::GlobalNamespace::vx_evt_base_t*)>(&GlobalNamespace::vx_evt_session_archive_query_end_t::set_base_)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "vx_evt_base_t")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_evt_session_archive_query_end_t*), "set_base_", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_evt_session_archive_query_end_t::get_base_
// Il2CppName: get_base_
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::vx_evt_base_t* (GlobalNamespace::vx_evt_session_archive_query_end_t::*)()>(&GlobalNamespace::vx_evt_session_archive_query_end_t::get_base_)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_evt_session_archive_query_end_t*), "get_base_", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_evt_session_archive_query_end_t::set_sessiongroup_handle
// Il2CppName: set_sessiongroup_handle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_evt_session_archive_query_end_t::*)(::StringW)>(&GlobalNamespace::vx_evt_session_archive_query_end_t::set_sessiongroup_handle)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_evt_session_archive_query_end_t*), "set_sessiongroup_handle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_evt_session_archive_query_end_t::get_sessiongroup_handle
// Il2CppName: get_sessiongroup_handle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::vx_evt_session_archive_query_end_t::*)()>(&GlobalNamespace::vx_evt_session_archive_query_end_t::get_sessiongroup_handle)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_evt_session_archive_query_end_t*), "get_sessiongroup_handle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_evt_session_archive_query_end_t::set_session_handle
// Il2CppName: set_session_handle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_evt_session_archive_query_end_t::*)(::StringW)>(&GlobalNamespace::vx_evt_session_archive_query_end_t::set_session_handle)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_evt_session_archive_query_end_t*), "set_session_handle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_evt_session_archive_query_end_t::get_session_handle
// Il2CppName: get_session_handle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::vx_evt_session_archive_query_end_t::*)()>(&GlobalNamespace::vx_evt_session_archive_query_end_t::get_session_handle)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_evt_session_archive_query_end_t*), "get_session_handle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_evt_session_archive_query_end_t::set_query_id
// Il2CppName: set_query_id
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_evt_session_archive_query_end_t::*)(::StringW)>(&GlobalNamespace::vx_evt_session_archive_query_end_t::set_query_id)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_evt_session_archive_query_end_t*), "set_query_id", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_evt_session_archive_query_end_t::get_query_id
// Il2CppName: get_query_id
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::vx_evt_session_archive_query_end_t::*)()>(&GlobalNamespace::vx_evt_session_archive_query_end_t::get_query_id)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_evt_session_archive_query_end_t*), "get_query_id", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_evt_session_archive_query_end_t::set_return_code
// Il2CppName: set_return_code
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_evt_session_archive_query_end_t::*)(int)>(&GlobalNamespace::vx_evt_session_archive_query_end_t::set_return_code)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_evt_session_archive_query_end_t*), "set_return_code", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_evt_session_archive_query_end_t::get_return_code
// Il2CppName: get_return_code
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::vx_evt_session_archive_query_end_t::*)()>(&GlobalNamespace::vx_evt_session_archive_query_end_t::get_return_code)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_evt_session_archive_query_end_t*), "get_return_code", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_evt_session_archive_query_end_t::set_status_code
// Il2CppName: set_status_code
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_evt_session_archive_query_end_t::*)(int)>(&GlobalNamespace::vx_evt_session_archive_query_end_t::set_status_code)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_evt_session_archive_query_end_t*), "set_status_code", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_evt_session_archive_query_end_t::get_status_code
// Il2CppName: get_status_code
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::vx_evt_session_archive_query_end_t::*)()>(&GlobalNamespace::vx_evt_session_archive_query_end_t::get_status_code)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_evt_session_archive_query_end_t*), "get_status_code", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_evt_session_archive_query_end_t::set_first_id
// Il2CppName: set_first_id
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_evt_session_archive_query_end_t::*)(::StringW)>(&GlobalNamespace::vx_evt_session_archive_query_end_t::set_first_id)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_evt_session_archive_query_end_t*), "set_first_id", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_evt_session_archive_query_end_t::get_first_id
// Il2CppName: get_first_id
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::vx_evt_session_archive_query_end_t::*)()>(&GlobalNamespace::vx_evt_session_archive_query_end_t::get_first_id)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_evt_session_archive_query_end_t*), "get_first_id", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_evt_session_archive_query_end_t::set_last_id
// Il2CppName: set_last_id
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_evt_session_archive_query_end_t::*)(::StringW)>(&GlobalNamespace::vx_evt_session_archive_query_end_t::set_last_id)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_evt_session_archive_query_end_t*), "set_last_id", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_evt_session_archive_query_end_t::get_last_id
// Il2CppName: get_last_id
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::vx_evt_session_archive_query_end_t::*)()>(&GlobalNamespace::vx_evt_session_archive_query_end_t::get_last_id)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_evt_session_archive_query_end_t*), "get_last_id", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_evt_session_archive_query_end_t::set_first_index
// Il2CppName: set_first_index
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_evt_session_archive_query_end_t::*)(uint)>(&GlobalNamespace::vx_evt_session_archive_query_end_t::set_first_index)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_evt_session_archive_query_end_t*), "set_first_index", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_evt_session_archive_query_end_t::get_first_index
// Il2CppName: get_first_index
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (GlobalNamespace::vx_evt_session_archive_query_end_t::*)()>(&GlobalNamespace::vx_evt_session_archive_query_end_t::get_first_index)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_evt_session_archive_query_end_t*), "get_first_index", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_evt_session_archive_query_end_t::set_count
// Il2CppName: set_count
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_evt_session_archive_query_end_t::*)(uint)>(&GlobalNamespace::vx_evt_session_archive_query_end_t::set_count)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_evt_session_archive_query_end_t*), "set_count", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_evt_session_archive_query_end_t::get_count
// Il2CppName: get_count
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (GlobalNamespace::vx_evt_session_archive_query_end_t::*)()>(&GlobalNamespace::vx_evt_session_archive_query_end_t::get_count)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_evt_session_archive_query_end_t*), "get_count", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_evt_session_archive_query_end_t::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::vx_evt_session_archive_query_end_t::Finalize
// Il2CppName: Finalize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_evt_session_archive_query_end_t::*)()>(&GlobalNamespace::vx_evt_session_archive_query_end_t::Finalize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_evt_session_archive_query_end_t*), "Finalize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};