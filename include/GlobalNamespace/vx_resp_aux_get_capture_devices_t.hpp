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
  // Forward declaring type: SWIGTYPE_p_p_vx_device
  class SWIGTYPE_p_p_vx_device;
  // Forward declaring type: vx_device_t
  class vx_device_t;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: vx_resp_aux_get_capture_devices_t
  class vx_resp_aux_get_capture_devices_t;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::vx_resp_aux_get_capture_devices_t);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::vx_resp_aux_get_capture_devices_t*, "", "vx_resp_aux_get_capture_devices_t");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x21
  #pragma pack(push, 1)
  // Autogenerated type: vx_resp_aux_get_capture_devices_t
  // [TokenAttribute] Offset: FFFFFFFF
  class vx_resp_aux_get_capture_devices_t : public ::Il2CppObject/*, public ::System::IDisposable*/ {
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
    // Offset: 0x228E200
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static vx_resp_aux_get_capture_devices_t* New_ctor(::System::IntPtr cPtr, bool cMemoryOwn) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::vx_resp_aux_get_capture_devices_t::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<vx_resp_aux_get_capture_devices_t*, creationType>(cPtr, cMemoryOwn)));
    }
    // static System.Runtime.InteropServices.HandleRef getCPtr(vx_resp_aux_get_capture_devices_t obj)
    // Offset: 0x228E264
    static ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::vx_resp_aux_get_capture_devices_t* obj);
    // public System.Void Dispose()
    // Offset: 0x228E354
    void Dispose();
    // public System.Void set_base_(vx_resp_base_t value)
    // Offset: 0x228E4C4
    void set_base_(::GlobalNamespace::vx_resp_base_t* value);
    // public vx_resp_base_t get_base_()
    // Offset: 0x228E55C
    ::GlobalNamespace::vx_resp_base_t* get_base_();
    // public System.Void set_count(System.Int32 value)
    // Offset: 0x228E610
    void set_count(int value);
    // public System.Int32 get_count()
    // Offset: 0x228E690
    int get_count();
    // public System.Void set_capture_devices(SWIGTYPE_p_p_vx_device value)
    // Offset: 0x228E700
    void set_capture_devices(::GlobalNamespace::SWIGTYPE_p_p_vx_device* value);
    // public SWIGTYPE_p_p_vx_device get_capture_devices()
    // Offset: 0x228E798
    ::GlobalNamespace::SWIGTYPE_p_p_vx_device* get_capture_devices();
    // public System.Void set_current_capture_device(vx_device_t value)
    // Offset: 0x228E84C
    void set_current_capture_device(::GlobalNamespace::vx_device_t* value);
    // public vx_device_t get_current_capture_device()
    // Offset: 0x228E8E4
    ::GlobalNamespace::vx_device_t* get_current_capture_device();
    // public System.Void set_effective_capture_device(vx_device_t value)
    // Offset: 0x228E998
    void set_effective_capture_device(::GlobalNamespace::vx_device_t* value);
    // public vx_device_t get_effective_capture_device()
    // Offset: 0x228EA30
    ::GlobalNamespace::vx_device_t* get_effective_capture_device();
    // public System.Void set_default_capture_device(vx_device_t value)
    // Offset: 0x228EAE4
    void set_default_capture_device(::GlobalNamespace::vx_device_t* value);
    // public vx_device_t get_default_capture_device()
    // Offset: 0x228EB7C
    ::GlobalNamespace::vx_device_t* get_default_capture_device();
    // public System.Void set_default_communication_capture_device(vx_device_t value)
    // Offset: 0x228EC30
    void set_default_communication_capture_device(::GlobalNamespace::vx_device_t* value);
    // public vx_device_t get_default_communication_capture_device()
    // Offset: 0x228ECC8
    ::GlobalNamespace::vx_device_t* get_default_communication_capture_device();
    // public System.Void .ctor()
    // Offset: 0x228ED7C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static vx_resp_aux_get_capture_devices_t* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::vx_resp_aux_get_capture_devices_t::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<vx_resp_aux_get_capture_devices_t*, creationType>()));
    }
    // protected override System.Void Finalize()
    // Offset: 0x228E2D8
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
  }; // vx_resp_aux_get_capture_devices_t
  #pragma pack(pop)
  static check_size<sizeof(vx_resp_aux_get_capture_devices_t), 32 + sizeof(bool)> __GlobalNamespace_vx_resp_aux_get_capture_devices_tSizeCheck;
  static_assert(sizeof(vx_resp_aux_get_capture_devices_t) == 0x21);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::vx_resp_aux_get_capture_devices_t::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::vx_resp_aux_get_capture_devices_t::getCPtr
// Il2CppName: getCPtr
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::InteropServices::HandleRef (*)(::GlobalNamespace::vx_resp_aux_get_capture_devices_t*)>(&GlobalNamespace::vx_resp_aux_get_capture_devices_t::getCPtr)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("", "vx_resp_aux_get_capture_devices_t")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_resp_aux_get_capture_devices_t*), "getCPtr", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_resp_aux_get_capture_devices_t::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_resp_aux_get_capture_devices_t::*)()>(&GlobalNamespace::vx_resp_aux_get_capture_devices_t::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_resp_aux_get_capture_devices_t*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_resp_aux_get_capture_devices_t::set_base_
// Il2CppName: set_base_
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_resp_aux_get_capture_devices_t::*)(::GlobalNamespace::vx_resp_base_t*)>(&GlobalNamespace::vx_resp_aux_get_capture_devices_t::set_base_)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "vx_resp_base_t")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_resp_aux_get_capture_devices_t*), "set_base_", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_resp_aux_get_capture_devices_t::get_base_
// Il2CppName: get_base_
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::vx_resp_base_t* (GlobalNamespace::vx_resp_aux_get_capture_devices_t::*)()>(&GlobalNamespace::vx_resp_aux_get_capture_devices_t::get_base_)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_resp_aux_get_capture_devices_t*), "get_base_", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_resp_aux_get_capture_devices_t::set_count
// Il2CppName: set_count
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_resp_aux_get_capture_devices_t::*)(int)>(&GlobalNamespace::vx_resp_aux_get_capture_devices_t::set_count)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_resp_aux_get_capture_devices_t*), "set_count", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_resp_aux_get_capture_devices_t::get_count
// Il2CppName: get_count
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::vx_resp_aux_get_capture_devices_t::*)()>(&GlobalNamespace::vx_resp_aux_get_capture_devices_t::get_count)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_resp_aux_get_capture_devices_t*), "get_count", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_resp_aux_get_capture_devices_t::set_capture_devices
// Il2CppName: set_capture_devices
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_resp_aux_get_capture_devices_t::*)(::GlobalNamespace::SWIGTYPE_p_p_vx_device*)>(&GlobalNamespace::vx_resp_aux_get_capture_devices_t::set_capture_devices)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "SWIGTYPE_p_p_vx_device")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_resp_aux_get_capture_devices_t*), "set_capture_devices", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_resp_aux_get_capture_devices_t::get_capture_devices
// Il2CppName: get_capture_devices
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::SWIGTYPE_p_p_vx_device* (GlobalNamespace::vx_resp_aux_get_capture_devices_t::*)()>(&GlobalNamespace::vx_resp_aux_get_capture_devices_t::get_capture_devices)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_resp_aux_get_capture_devices_t*), "get_capture_devices", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_resp_aux_get_capture_devices_t::set_current_capture_device
// Il2CppName: set_current_capture_device
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_resp_aux_get_capture_devices_t::*)(::GlobalNamespace::vx_device_t*)>(&GlobalNamespace::vx_resp_aux_get_capture_devices_t::set_current_capture_device)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "vx_device_t")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_resp_aux_get_capture_devices_t*), "set_current_capture_device", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_resp_aux_get_capture_devices_t::get_current_capture_device
// Il2CppName: get_current_capture_device
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::vx_device_t* (GlobalNamespace::vx_resp_aux_get_capture_devices_t::*)()>(&GlobalNamespace::vx_resp_aux_get_capture_devices_t::get_current_capture_device)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_resp_aux_get_capture_devices_t*), "get_current_capture_device", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_resp_aux_get_capture_devices_t::set_effective_capture_device
// Il2CppName: set_effective_capture_device
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_resp_aux_get_capture_devices_t::*)(::GlobalNamespace::vx_device_t*)>(&GlobalNamespace::vx_resp_aux_get_capture_devices_t::set_effective_capture_device)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "vx_device_t")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_resp_aux_get_capture_devices_t*), "set_effective_capture_device", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_resp_aux_get_capture_devices_t::get_effective_capture_device
// Il2CppName: get_effective_capture_device
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::vx_device_t* (GlobalNamespace::vx_resp_aux_get_capture_devices_t::*)()>(&GlobalNamespace::vx_resp_aux_get_capture_devices_t::get_effective_capture_device)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_resp_aux_get_capture_devices_t*), "get_effective_capture_device", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_resp_aux_get_capture_devices_t::set_default_capture_device
// Il2CppName: set_default_capture_device
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_resp_aux_get_capture_devices_t::*)(::GlobalNamespace::vx_device_t*)>(&GlobalNamespace::vx_resp_aux_get_capture_devices_t::set_default_capture_device)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "vx_device_t")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_resp_aux_get_capture_devices_t*), "set_default_capture_device", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_resp_aux_get_capture_devices_t::get_default_capture_device
// Il2CppName: get_default_capture_device
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::vx_device_t* (GlobalNamespace::vx_resp_aux_get_capture_devices_t::*)()>(&GlobalNamespace::vx_resp_aux_get_capture_devices_t::get_default_capture_device)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_resp_aux_get_capture_devices_t*), "get_default_capture_device", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_resp_aux_get_capture_devices_t::set_default_communication_capture_device
// Il2CppName: set_default_communication_capture_device
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_resp_aux_get_capture_devices_t::*)(::GlobalNamespace::vx_device_t*)>(&GlobalNamespace::vx_resp_aux_get_capture_devices_t::set_default_communication_capture_device)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "vx_device_t")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_resp_aux_get_capture_devices_t*), "set_default_communication_capture_device", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_resp_aux_get_capture_devices_t::get_default_communication_capture_device
// Il2CppName: get_default_communication_capture_device
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::vx_device_t* (GlobalNamespace::vx_resp_aux_get_capture_devices_t::*)()>(&GlobalNamespace::vx_resp_aux_get_capture_devices_t::get_default_communication_capture_device)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_resp_aux_get_capture_devices_t*), "get_default_communication_capture_device", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_resp_aux_get_capture_devices_t::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::vx_resp_aux_get_capture_devices_t::Finalize
// Il2CppName: Finalize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_resp_aux_get_capture_devices_t::*)()>(&GlobalNamespace::vx_resp_aux_get_capture_devices_t::Finalize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_resp_aux_get_capture_devices_t*), "Finalize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
