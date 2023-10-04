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
  // Forward declaring type: vx_password_hash_algorithm_t
  struct vx_password_hash_algorithm_t;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: vx_req_session_create_t
  class vx_req_session_create_t;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::vx_req_session_create_t);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::vx_req_session_create_t*, "", "vx_req_session_create_t");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x21
  #pragma pack(push, 1)
  // Autogenerated type: vx_req_session_create_t
  // [TokenAttribute] Offset: FFFFFFFF
  class vx_req_session_create_t : public ::Il2CppObject/*, public ::System::IDisposable*/ {
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
    // Offset: 0x2250840
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static vx_req_session_create_t* New_ctor(::System::IntPtr cPtr, bool cMemoryOwn) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::vx_req_session_create_t::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<vx_req_session_create_t*, creationType>(cPtr, cMemoryOwn)));
    }
    // static System.Runtime.InteropServices.HandleRef getCPtr(vx_req_session_create_t obj)
    // Offset: 0x22508A4
    static ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::vx_req_session_create_t* obj);
    // public System.Void Dispose()
    // Offset: 0x2250994
    void Dispose();
    // public System.Void set_base_(vx_req_base_t value)
    // Offset: 0x2250BDC
    void set_base_(::GlobalNamespace::vx_req_base_t* value);
    // public vx_req_base_t get_base_()
    // Offset: 0x2250B2C
    ::GlobalNamespace::vx_req_base_t* get_base_();
    // public System.Void set_account_handle(System.String value)
    // Offset: 0x2250C70
    void set_account_handle(::StringW value);
    // public System.String get_account_handle()
    // Offset: 0x2250CF0
    ::StringW get_account_handle();
    // public System.Void set_name(System.String value)
    // Offset: 0x2250D60
    void set_name(::StringW value);
    // public System.String get_name()
    // Offset: 0x2250DE0
    ::StringW get_name();
    // public System.Void set_uri(System.String value)
    // Offset: 0x2250E50
    void set_uri(::StringW value);
    // public System.String get_uri()
    // Offset: 0x2250ED0
    ::StringW get_uri();
    // public System.Void set_password(System.String value)
    // Offset: 0x2250F40
    void set_password(::StringW value);
    // public System.String get_password()
    // Offset: 0x2250FC0
    ::StringW get_password();
    // public System.Void set_connect_audio(System.Int32 value)
    // Offset: 0x2251030
    void set_connect_audio(int value);
    // public System.Int32 get_connect_audio()
    // Offset: 0x22510B0
    int get_connect_audio();
    // public System.Void set_join_audio(System.Int32 value)
    // Offset: 0x2251120
    void set_join_audio(int value);
    // public System.Int32 get_join_audio()
    // Offset: 0x22511A0
    int get_join_audio();
    // public System.Void set_join_text(System.Int32 value)
    // Offset: 0x2251210
    void set_join_text(int value);
    // public System.Int32 get_join_text()
    // Offset: 0x2251290
    int get_join_text();
    // public System.Void set_password_hash_algorithm(vx_password_hash_algorithm_t value)
    // Offset: 0x2251300
    void set_password_hash_algorithm(::GlobalNamespace::vx_password_hash_algorithm_t value);
    // public vx_password_hash_algorithm_t get_password_hash_algorithm()
    // Offset: 0x2251380
    ::GlobalNamespace::vx_password_hash_algorithm_t get_password_hash_algorithm();
    // public System.Void set_connect_text(System.Int32 value)
    // Offset: 0x22513F0
    void set_connect_text(int value);
    // public System.Int32 get_connect_text()
    // Offset: 0x2251470
    int get_connect_text();
    // public System.Void set_session_font_id(System.Int32 value)
    // Offset: 0x22514E0
    void set_session_font_id(int value);
    // public System.Int32 get_session_font_id()
    // Offset: 0x2251560
    int get_session_font_id();
    // public System.Void set_jitter_compensation(System.Int32 value)
    // Offset: 0x22515D0
    void set_jitter_compensation(int value);
    // public System.Int32 get_jitter_compensation()
    // Offset: 0x2251650
    int get_jitter_compensation();
    // public System.Void set_alias_username(System.String value)
    // Offset: 0x22516C0
    void set_alias_username(::StringW value);
    // public System.String get_alias_username()
    // Offset: 0x2251740
    ::StringW get_alias_username();
    // public System.Void set_sessiongroup_handle(System.String value)
    // Offset: 0x22517B0
    void set_sessiongroup_handle(::StringW value);
    // public System.String get_sessiongroup_handle()
    // Offset: 0x2251830
    ::StringW get_sessiongroup_handle();
    // public System.Void set_session_handle(System.String value)
    // Offset: 0x22518A0
    void set_session_handle(::StringW value);
    // public System.String get_session_handle()
    // Offset: 0x2251920
    ::StringW get_session_handle();
    // public System.Void set_access_token(System.String value)
    // Offset: 0x2251990
    void set_access_token(::StringW value);
    // public System.String get_access_token()
    // Offset: 0x2251A10
    ::StringW get_access_token();
    // public System.Void .ctor()
    // Offset: 0x2251A80
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static vx_req_session_create_t* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::vx_req_session_create_t::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<vx_req_session_create_t*, creationType>()));
    }
    // protected override System.Void Finalize()
    // Offset: 0x2250918
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
  }; // vx_req_session_create_t
  #pragma pack(pop)
  static check_size<sizeof(vx_req_session_create_t), 32 + sizeof(bool)> __GlobalNamespace_vx_req_session_create_tSizeCheck;
  static_assert(sizeof(vx_req_session_create_t) == 0x21);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::vx_req_session_create_t::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::vx_req_session_create_t::getCPtr
// Il2CppName: getCPtr
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::InteropServices::HandleRef (*)(::GlobalNamespace::vx_req_session_create_t*)>(&GlobalNamespace::vx_req_session_create_t::getCPtr)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("", "vx_req_session_create_t")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_req_session_create_t*), "getCPtr", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_req_session_create_t::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_req_session_create_t::*)()>(&GlobalNamespace::vx_req_session_create_t::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_req_session_create_t*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_req_session_create_t::set_base_
// Il2CppName: set_base_
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_req_session_create_t::*)(::GlobalNamespace::vx_req_base_t*)>(&GlobalNamespace::vx_req_session_create_t::set_base_)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "vx_req_base_t")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_req_session_create_t*), "set_base_", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_req_session_create_t::get_base_
// Il2CppName: get_base_
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::vx_req_base_t* (GlobalNamespace::vx_req_session_create_t::*)()>(&GlobalNamespace::vx_req_session_create_t::get_base_)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_req_session_create_t*), "get_base_", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_req_session_create_t::set_account_handle
// Il2CppName: set_account_handle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_req_session_create_t::*)(::StringW)>(&GlobalNamespace::vx_req_session_create_t::set_account_handle)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_req_session_create_t*), "set_account_handle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_req_session_create_t::get_account_handle
// Il2CppName: get_account_handle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::vx_req_session_create_t::*)()>(&GlobalNamespace::vx_req_session_create_t::get_account_handle)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_req_session_create_t*), "get_account_handle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_req_session_create_t::set_name
// Il2CppName: set_name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_req_session_create_t::*)(::StringW)>(&GlobalNamespace::vx_req_session_create_t::set_name)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_req_session_create_t*), "set_name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_req_session_create_t::get_name
// Il2CppName: get_name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::vx_req_session_create_t::*)()>(&GlobalNamespace::vx_req_session_create_t::get_name)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_req_session_create_t*), "get_name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_req_session_create_t::set_uri
// Il2CppName: set_uri
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_req_session_create_t::*)(::StringW)>(&GlobalNamespace::vx_req_session_create_t::set_uri)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_req_session_create_t*), "set_uri", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_req_session_create_t::get_uri
// Il2CppName: get_uri
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::vx_req_session_create_t::*)()>(&GlobalNamespace::vx_req_session_create_t::get_uri)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_req_session_create_t*), "get_uri", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_req_session_create_t::set_password
// Il2CppName: set_password
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_req_session_create_t::*)(::StringW)>(&GlobalNamespace::vx_req_session_create_t::set_password)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_req_session_create_t*), "set_password", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_req_session_create_t::get_password
// Il2CppName: get_password
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::vx_req_session_create_t::*)()>(&GlobalNamespace::vx_req_session_create_t::get_password)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_req_session_create_t*), "get_password", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_req_session_create_t::set_connect_audio
// Il2CppName: set_connect_audio
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_req_session_create_t::*)(int)>(&GlobalNamespace::vx_req_session_create_t::set_connect_audio)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_req_session_create_t*), "set_connect_audio", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_req_session_create_t::get_connect_audio
// Il2CppName: get_connect_audio
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::vx_req_session_create_t::*)()>(&GlobalNamespace::vx_req_session_create_t::get_connect_audio)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_req_session_create_t*), "get_connect_audio", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_req_session_create_t::set_join_audio
// Il2CppName: set_join_audio
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_req_session_create_t::*)(int)>(&GlobalNamespace::vx_req_session_create_t::set_join_audio)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_req_session_create_t*), "set_join_audio", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_req_session_create_t::get_join_audio
// Il2CppName: get_join_audio
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::vx_req_session_create_t::*)()>(&GlobalNamespace::vx_req_session_create_t::get_join_audio)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_req_session_create_t*), "get_join_audio", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_req_session_create_t::set_join_text
// Il2CppName: set_join_text
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_req_session_create_t::*)(int)>(&GlobalNamespace::vx_req_session_create_t::set_join_text)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_req_session_create_t*), "set_join_text", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_req_session_create_t::get_join_text
// Il2CppName: get_join_text
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::vx_req_session_create_t::*)()>(&GlobalNamespace::vx_req_session_create_t::get_join_text)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_req_session_create_t*), "get_join_text", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_req_session_create_t::set_password_hash_algorithm
// Il2CppName: set_password_hash_algorithm
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_req_session_create_t::*)(::GlobalNamespace::vx_password_hash_algorithm_t)>(&GlobalNamespace::vx_req_session_create_t::set_password_hash_algorithm)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "vx_password_hash_algorithm_t")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_req_session_create_t*), "set_password_hash_algorithm", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_req_session_create_t::get_password_hash_algorithm
// Il2CppName: get_password_hash_algorithm
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::vx_password_hash_algorithm_t (GlobalNamespace::vx_req_session_create_t::*)()>(&GlobalNamespace::vx_req_session_create_t::get_password_hash_algorithm)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_req_session_create_t*), "get_password_hash_algorithm", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_req_session_create_t::set_connect_text
// Il2CppName: set_connect_text
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_req_session_create_t::*)(int)>(&GlobalNamespace::vx_req_session_create_t::set_connect_text)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_req_session_create_t*), "set_connect_text", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_req_session_create_t::get_connect_text
// Il2CppName: get_connect_text
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::vx_req_session_create_t::*)()>(&GlobalNamespace::vx_req_session_create_t::get_connect_text)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_req_session_create_t*), "get_connect_text", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_req_session_create_t::set_session_font_id
// Il2CppName: set_session_font_id
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_req_session_create_t::*)(int)>(&GlobalNamespace::vx_req_session_create_t::set_session_font_id)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_req_session_create_t*), "set_session_font_id", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_req_session_create_t::get_session_font_id
// Il2CppName: get_session_font_id
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::vx_req_session_create_t::*)()>(&GlobalNamespace::vx_req_session_create_t::get_session_font_id)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_req_session_create_t*), "get_session_font_id", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_req_session_create_t::set_jitter_compensation
// Il2CppName: set_jitter_compensation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_req_session_create_t::*)(int)>(&GlobalNamespace::vx_req_session_create_t::set_jitter_compensation)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_req_session_create_t*), "set_jitter_compensation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_req_session_create_t::get_jitter_compensation
// Il2CppName: get_jitter_compensation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::vx_req_session_create_t::*)()>(&GlobalNamespace::vx_req_session_create_t::get_jitter_compensation)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_req_session_create_t*), "get_jitter_compensation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_req_session_create_t::set_alias_username
// Il2CppName: set_alias_username
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_req_session_create_t::*)(::StringW)>(&GlobalNamespace::vx_req_session_create_t::set_alias_username)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_req_session_create_t*), "set_alias_username", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_req_session_create_t::get_alias_username
// Il2CppName: get_alias_username
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::vx_req_session_create_t::*)()>(&GlobalNamespace::vx_req_session_create_t::get_alias_username)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_req_session_create_t*), "get_alias_username", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_req_session_create_t::set_sessiongroup_handle
// Il2CppName: set_sessiongroup_handle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_req_session_create_t::*)(::StringW)>(&GlobalNamespace::vx_req_session_create_t::set_sessiongroup_handle)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_req_session_create_t*), "set_sessiongroup_handle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_req_session_create_t::get_sessiongroup_handle
// Il2CppName: get_sessiongroup_handle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::vx_req_session_create_t::*)()>(&GlobalNamespace::vx_req_session_create_t::get_sessiongroup_handle)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_req_session_create_t*), "get_sessiongroup_handle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_req_session_create_t::set_session_handle
// Il2CppName: set_session_handle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_req_session_create_t::*)(::StringW)>(&GlobalNamespace::vx_req_session_create_t::set_session_handle)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_req_session_create_t*), "set_session_handle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_req_session_create_t::get_session_handle
// Il2CppName: get_session_handle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::vx_req_session_create_t::*)()>(&GlobalNamespace::vx_req_session_create_t::get_session_handle)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_req_session_create_t*), "get_session_handle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_req_session_create_t::set_access_token
// Il2CppName: set_access_token
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_req_session_create_t::*)(::StringW)>(&GlobalNamespace::vx_req_session_create_t::set_access_token)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_req_session_create_t*), "set_access_token", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_req_session_create_t::get_access_token
// Il2CppName: get_access_token
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::vx_req_session_create_t::*)()>(&GlobalNamespace::vx_req_session_create_t::get_access_token)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_req_session_create_t*), "get_access_token", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_req_session_create_t::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::vx_req_session_create_t::Finalize
// Il2CppName: Finalize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_req_session_create_t::*)()>(&GlobalNamespace::vx_req_session_create_t::Finalize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_req_session_create_t*), "Finalize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
