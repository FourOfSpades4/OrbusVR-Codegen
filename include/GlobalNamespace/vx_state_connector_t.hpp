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
  // Forward declaring type: SWIGTYPE_p_p_vx_state_account
  class SWIGTYPE_p_p_vx_state_account;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: vx_state_connector_t
  class vx_state_connector_t;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::vx_state_connector_t);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::vx_state_connector_t*, "", "vx_state_connector_t");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x21
  #pragma pack(push, 1)
  // Autogenerated type: vx_state_connector_t
  // [TokenAttribute] Offset: FFFFFFFF
  class vx_state_connector_t : public ::Il2CppObject/*, public ::System::IDisposable*/ {
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
    // Offset: 0x281F39C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static vx_state_connector_t* New_ctor(::System::IntPtr cPtr, bool cMemoryOwn) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::vx_state_connector_t::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<vx_state_connector_t*, creationType>(cPtr, cMemoryOwn)));
    }
    // static System.Runtime.InteropServices.HandleRef getCPtr(vx_state_connector_t obj)
    // Offset: 0x281F400
    static ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::vx_state_connector_t* obj);
    // public System.Void Dispose()
    // Offset: 0x281F4F0
    void Dispose();
    // public System.Void set_connector_handle(System.String value)
    // Offset: 0x281F660
    void set_connector_handle(::StringW value);
    // public System.String get_connector_handle()
    // Offset: 0x281F6E0
    ::StringW get_connector_handle();
    // public System.Void set_state_accounts_count(System.Int32 value)
    // Offset: 0x281F750
    void set_state_accounts_count(int value);
    // public System.Int32 get_state_accounts_count()
    // Offset: 0x281F7D0
    int get_state_accounts_count();
    // public System.Void set_state_accounts(SWIGTYPE_p_p_vx_state_account value)
    // Offset: 0x281F840
    void set_state_accounts(::GlobalNamespace::SWIGTYPE_p_p_vx_state_account* value);
    // public SWIGTYPE_p_p_vx_state_account get_state_accounts()
    // Offset: 0x281F8D8
    ::GlobalNamespace::SWIGTYPE_p_p_vx_state_account* get_state_accounts();
    // public System.Void set_mic_vol(System.Int32 value)
    // Offset: 0x281F98C
    void set_mic_vol(int value);
    // public System.Int32 get_mic_vol()
    // Offset: 0x281FA0C
    int get_mic_vol();
    // public System.Void set_mic_mute(System.Int32 value)
    // Offset: 0x281FA7C
    void set_mic_mute(int value);
    // public System.Int32 get_mic_mute()
    // Offset: 0x281FAFC
    int get_mic_mute();
    // public System.Void set_speaker_vol(System.Int32 value)
    // Offset: 0x281FB6C
    void set_speaker_vol(int value);
    // public System.Int32 get_speaker_vol()
    // Offset: 0x281FBEC
    int get_speaker_vol();
    // public System.Void set_speaker_mute(System.Int32 value)
    // Offset: 0x281FC5C
    void set_speaker_mute(int value);
    // public System.Int32 get_speaker_mute()
    // Offset: 0x281FCDC
    int get_speaker_mute();
    // public System.Void .ctor()
    // Offset: 0x281FD4C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static vx_state_connector_t* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::vx_state_connector_t::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<vx_state_connector_t*, creationType>()));
    }
    // protected override System.Void Finalize()
    // Offset: 0x281F474
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
  }; // vx_state_connector_t
  #pragma pack(pop)
  static check_size<sizeof(vx_state_connector_t), 32 + sizeof(bool)> __GlobalNamespace_vx_state_connector_tSizeCheck;
  static_assert(sizeof(vx_state_connector_t) == 0x21);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::vx_state_connector_t::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::vx_state_connector_t::getCPtr
// Il2CppName: getCPtr
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::InteropServices::HandleRef (*)(::GlobalNamespace::vx_state_connector_t*)>(&GlobalNamespace::vx_state_connector_t::getCPtr)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("", "vx_state_connector_t")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_state_connector_t*), "getCPtr", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_state_connector_t::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_state_connector_t::*)()>(&GlobalNamespace::vx_state_connector_t::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_state_connector_t*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_state_connector_t::set_connector_handle
// Il2CppName: set_connector_handle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_state_connector_t::*)(::StringW)>(&GlobalNamespace::vx_state_connector_t::set_connector_handle)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_state_connector_t*), "set_connector_handle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_state_connector_t::get_connector_handle
// Il2CppName: get_connector_handle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::vx_state_connector_t::*)()>(&GlobalNamespace::vx_state_connector_t::get_connector_handle)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_state_connector_t*), "get_connector_handle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_state_connector_t::set_state_accounts_count
// Il2CppName: set_state_accounts_count
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_state_connector_t::*)(int)>(&GlobalNamespace::vx_state_connector_t::set_state_accounts_count)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_state_connector_t*), "set_state_accounts_count", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_state_connector_t::get_state_accounts_count
// Il2CppName: get_state_accounts_count
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::vx_state_connector_t::*)()>(&GlobalNamespace::vx_state_connector_t::get_state_accounts_count)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_state_connector_t*), "get_state_accounts_count", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_state_connector_t::set_state_accounts
// Il2CppName: set_state_accounts
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_state_connector_t::*)(::GlobalNamespace::SWIGTYPE_p_p_vx_state_account*)>(&GlobalNamespace::vx_state_connector_t::set_state_accounts)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "SWIGTYPE_p_p_vx_state_account")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_state_connector_t*), "set_state_accounts", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_state_connector_t::get_state_accounts
// Il2CppName: get_state_accounts
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::SWIGTYPE_p_p_vx_state_account* (GlobalNamespace::vx_state_connector_t::*)()>(&GlobalNamespace::vx_state_connector_t::get_state_accounts)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_state_connector_t*), "get_state_accounts", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_state_connector_t::set_mic_vol
// Il2CppName: set_mic_vol
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_state_connector_t::*)(int)>(&GlobalNamespace::vx_state_connector_t::set_mic_vol)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_state_connector_t*), "set_mic_vol", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_state_connector_t::get_mic_vol
// Il2CppName: get_mic_vol
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::vx_state_connector_t::*)()>(&GlobalNamespace::vx_state_connector_t::get_mic_vol)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_state_connector_t*), "get_mic_vol", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_state_connector_t::set_mic_mute
// Il2CppName: set_mic_mute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_state_connector_t::*)(int)>(&GlobalNamespace::vx_state_connector_t::set_mic_mute)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_state_connector_t*), "set_mic_mute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_state_connector_t::get_mic_mute
// Il2CppName: get_mic_mute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::vx_state_connector_t::*)()>(&GlobalNamespace::vx_state_connector_t::get_mic_mute)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_state_connector_t*), "get_mic_mute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_state_connector_t::set_speaker_vol
// Il2CppName: set_speaker_vol
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_state_connector_t::*)(int)>(&GlobalNamespace::vx_state_connector_t::set_speaker_vol)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_state_connector_t*), "set_speaker_vol", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_state_connector_t::get_speaker_vol
// Il2CppName: get_speaker_vol
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::vx_state_connector_t::*)()>(&GlobalNamespace::vx_state_connector_t::get_speaker_vol)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_state_connector_t*), "get_speaker_vol", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_state_connector_t::set_speaker_mute
// Il2CppName: set_speaker_mute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_state_connector_t::*)(int)>(&GlobalNamespace::vx_state_connector_t::set_speaker_mute)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_state_connector_t*), "set_speaker_mute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_state_connector_t::get_speaker_mute
// Il2CppName: get_speaker_mute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::vx_state_connector_t::*)()>(&GlobalNamespace::vx_state_connector_t::get_speaker_mute)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_state_connector_t*), "get_speaker_mute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_state_connector_t::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::vx_state_connector_t::Finalize
// Il2CppName: Finalize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_state_connector_t::*)()>(&GlobalNamespace::vx_state_connector_t::Finalize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_state_connector_t*), "Finalize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
