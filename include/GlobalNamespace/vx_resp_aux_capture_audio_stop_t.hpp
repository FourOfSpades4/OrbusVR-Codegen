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
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: vx_resp_base_t
  class vx_resp_base_t;
  // Forward declaring type: SWIGTYPE_p_void
  class SWIGTYPE_p_void;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: vx_resp_aux_capture_audio_stop_t
  class vx_resp_aux_capture_audio_stop_t;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::vx_resp_aux_capture_audio_stop_t);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::vx_resp_aux_capture_audio_stop_t*, "", "vx_resp_aux_capture_audio_stop_t");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x21
  #pragma pack(push, 1)
  // Autogenerated type: vx_resp_aux_capture_audio_stop_t
  // [TokenAttribute] Offset: FFFFFFFF
  class vx_resp_aux_capture_audio_stop_t : public ::Il2CppObject/*, public ::System::IDisposable*/ {
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
    // Offset: 0x228B808
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static vx_resp_aux_capture_audio_stop_t* New_ctor(::System::IntPtr cPtr, bool cMemoryOwn) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::vx_resp_aux_capture_audio_stop_t::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<vx_resp_aux_capture_audio_stop_t*, creationType>(cPtr, cMemoryOwn)));
    }
    // static System.Runtime.InteropServices.HandleRef getCPtr(vx_resp_aux_capture_audio_stop_t obj)
    // Offset: 0x228B86C
    static ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::vx_resp_aux_capture_audio_stop_t* obj);
    // public System.Void Dispose()
    // Offset: 0x228B95C
    void Dispose();
    // public System.Void set_base_(vx_resp_base_t value)
    // Offset: 0x228BACC
    void set_base_(::GlobalNamespace::vx_resp_base_t* value);
    // public vx_resp_base_t get_base_()
    // Offset: 0x228BB64
    ::GlobalNamespace::vx_resp_base_t* get_base_();
    // public System.Void set_audioBufferPtr(SWIGTYPE_p_void value)
    // Offset: 0x228BC18
    void set_audioBufferPtr(::GlobalNamespace::SWIGTYPE_p_void* value);
    // public SWIGTYPE_p_void get_audioBufferPtr()
    // Offset: 0x228BCB0
    ::GlobalNamespace::SWIGTYPE_p_void* get_audioBufferPtr();
    // public System.Void .ctor()
    // Offset: 0x228BD64
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static vx_resp_aux_capture_audio_stop_t* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::vx_resp_aux_capture_audio_stop_t::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<vx_resp_aux_capture_audio_stop_t*, creationType>()));
    }
    // protected override System.Void Finalize()
    // Offset: 0x228B8E0
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
  }; // vx_resp_aux_capture_audio_stop_t
  #pragma pack(pop)
  static check_size<sizeof(vx_resp_aux_capture_audio_stop_t), 32 + sizeof(bool)> __GlobalNamespace_vx_resp_aux_capture_audio_stop_tSizeCheck;
  static_assert(sizeof(vx_resp_aux_capture_audio_stop_t) == 0x21);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::vx_resp_aux_capture_audio_stop_t::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::vx_resp_aux_capture_audio_stop_t::getCPtr
// Il2CppName: getCPtr
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::InteropServices::HandleRef (*)(::GlobalNamespace::vx_resp_aux_capture_audio_stop_t*)>(&GlobalNamespace::vx_resp_aux_capture_audio_stop_t::getCPtr)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("", "vx_resp_aux_capture_audio_stop_t")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_resp_aux_capture_audio_stop_t*), "getCPtr", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_resp_aux_capture_audio_stop_t::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_resp_aux_capture_audio_stop_t::*)()>(&GlobalNamespace::vx_resp_aux_capture_audio_stop_t::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_resp_aux_capture_audio_stop_t*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_resp_aux_capture_audio_stop_t::set_base_
// Il2CppName: set_base_
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_resp_aux_capture_audio_stop_t::*)(::GlobalNamespace::vx_resp_base_t*)>(&GlobalNamespace::vx_resp_aux_capture_audio_stop_t::set_base_)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "vx_resp_base_t")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_resp_aux_capture_audio_stop_t*), "set_base_", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_resp_aux_capture_audio_stop_t::get_base_
// Il2CppName: get_base_
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::vx_resp_base_t* (GlobalNamespace::vx_resp_aux_capture_audio_stop_t::*)()>(&GlobalNamespace::vx_resp_aux_capture_audio_stop_t::get_base_)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_resp_aux_capture_audio_stop_t*), "get_base_", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_resp_aux_capture_audio_stop_t::set_audioBufferPtr
// Il2CppName: set_audioBufferPtr
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_resp_aux_capture_audio_stop_t::*)(::GlobalNamespace::SWIGTYPE_p_void*)>(&GlobalNamespace::vx_resp_aux_capture_audio_stop_t::set_audioBufferPtr)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "SWIGTYPE_p_void")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_resp_aux_capture_audio_stop_t*), "set_audioBufferPtr", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_resp_aux_capture_audio_stop_t::get_audioBufferPtr
// Il2CppName: get_audioBufferPtr
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::SWIGTYPE_p_void* (GlobalNamespace::vx_resp_aux_capture_audio_stop_t::*)()>(&GlobalNamespace::vx_resp_aux_capture_audio_stop_t::get_audioBufferPtr)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_resp_aux_capture_audio_stop_t*), "get_audioBufferPtr", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_resp_aux_capture_audio_stop_t::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::vx_resp_aux_capture_audio_stop_t::Finalize
// Il2CppName: Finalize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_resp_aux_capture_audio_stop_t::*)()>(&GlobalNamespace::vx_resp_aux_capture_audio_stop_t::Finalize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_resp_aux_capture_audio_stop_t*), "Finalize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
