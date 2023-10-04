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
  // Forward declaring type: vx_evt_base_t
  class vx_evt_base_t;
  // Forward declaring type: vx_tts_destination
  struct vx_tts_destination;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: vx_evt_tts_injection_ended_t
  class vx_evt_tts_injection_ended_t;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::vx_evt_tts_injection_ended_t);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::vx_evt_tts_injection_ended_t*, "", "vx_evt_tts_injection_ended_t");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x21
  #pragma pack(push, 1)
  // Autogenerated type: vx_evt_tts_injection_ended_t
  // [TokenAttribute] Offset: FFFFFFFF
  class vx_evt_tts_injection_ended_t : public ::Il2CppObject/*, public ::System::IDisposable*/ {
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
    // Offset: 0x217F9E8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static vx_evt_tts_injection_ended_t* New_ctor(::System::IntPtr cPtr, bool cMemoryOwn) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::vx_evt_tts_injection_ended_t::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<vx_evt_tts_injection_ended_t*, creationType>(cPtr, cMemoryOwn)));
    }
    // static System.Runtime.InteropServices.HandleRef getCPtr(vx_evt_tts_injection_ended_t obj)
    // Offset: 0x217FA4C
    static ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::vx_evt_tts_injection_ended_t* obj);
    // public System.Void Dispose()
    // Offset: 0x217FB3C
    void Dispose();
    // public System.Void set_base_(vx_evt_base_t value)
    // Offset: 0x217FCAC
    void set_base_(::GlobalNamespace::vx_evt_base_t* value);
    // public vx_evt_base_t get_base_()
    // Offset: 0x217FD44
    ::GlobalNamespace::vx_evt_base_t* get_base_();
    // public System.Void set_num_consumers(System.UInt32 value)
    // Offset: 0x217FDF8
    void set_num_consumers(uint value);
    // public System.UInt32 get_num_consumers()
    // Offset: 0x217FE78
    uint get_num_consumers();
    // public System.Void set_utterance_id(System.UInt32 value)
    // Offset: 0x217FEE8
    void set_utterance_id(uint value);
    // public System.UInt32 get_utterance_id()
    // Offset: 0x217FF68
    uint get_utterance_id();
    // public System.Void set_tts_destination(vx_tts_destination value)
    // Offset: 0x217FFD8
    void set_tts_destination(::GlobalNamespace::vx_tts_destination value);
    // public vx_tts_destination get_tts_destination()
    // Offset: 0x2180058
    ::GlobalNamespace::vx_tts_destination get_tts_destination();
    // public System.Void .ctor()
    // Offset: 0x21800C8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static vx_evt_tts_injection_ended_t* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::vx_evt_tts_injection_ended_t::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<vx_evt_tts_injection_ended_t*, creationType>()));
    }
    // protected override System.Void Finalize()
    // Offset: 0x217FAC0
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
  }; // vx_evt_tts_injection_ended_t
  #pragma pack(pop)
  static check_size<sizeof(vx_evt_tts_injection_ended_t), 32 + sizeof(bool)> __GlobalNamespace_vx_evt_tts_injection_ended_tSizeCheck;
  static_assert(sizeof(vx_evt_tts_injection_ended_t) == 0x21);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::vx_evt_tts_injection_ended_t::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::vx_evt_tts_injection_ended_t::getCPtr
// Il2CppName: getCPtr
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::InteropServices::HandleRef (*)(::GlobalNamespace::vx_evt_tts_injection_ended_t*)>(&GlobalNamespace::vx_evt_tts_injection_ended_t::getCPtr)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("", "vx_evt_tts_injection_ended_t")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_evt_tts_injection_ended_t*), "getCPtr", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_evt_tts_injection_ended_t::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_evt_tts_injection_ended_t::*)()>(&GlobalNamespace::vx_evt_tts_injection_ended_t::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_evt_tts_injection_ended_t*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_evt_tts_injection_ended_t::set_base_
// Il2CppName: set_base_
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_evt_tts_injection_ended_t::*)(::GlobalNamespace::vx_evt_base_t*)>(&GlobalNamespace::vx_evt_tts_injection_ended_t::set_base_)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "vx_evt_base_t")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_evt_tts_injection_ended_t*), "set_base_", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_evt_tts_injection_ended_t::get_base_
// Il2CppName: get_base_
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::vx_evt_base_t* (GlobalNamespace::vx_evt_tts_injection_ended_t::*)()>(&GlobalNamespace::vx_evt_tts_injection_ended_t::get_base_)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_evt_tts_injection_ended_t*), "get_base_", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_evt_tts_injection_ended_t::set_num_consumers
// Il2CppName: set_num_consumers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_evt_tts_injection_ended_t::*)(uint)>(&GlobalNamespace::vx_evt_tts_injection_ended_t::set_num_consumers)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_evt_tts_injection_ended_t*), "set_num_consumers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_evt_tts_injection_ended_t::get_num_consumers
// Il2CppName: get_num_consumers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (GlobalNamespace::vx_evt_tts_injection_ended_t::*)()>(&GlobalNamespace::vx_evt_tts_injection_ended_t::get_num_consumers)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_evt_tts_injection_ended_t*), "get_num_consumers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_evt_tts_injection_ended_t::set_utterance_id
// Il2CppName: set_utterance_id
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_evt_tts_injection_ended_t::*)(uint)>(&GlobalNamespace::vx_evt_tts_injection_ended_t::set_utterance_id)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_evt_tts_injection_ended_t*), "set_utterance_id", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_evt_tts_injection_ended_t::get_utterance_id
// Il2CppName: get_utterance_id
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (GlobalNamespace::vx_evt_tts_injection_ended_t::*)()>(&GlobalNamespace::vx_evt_tts_injection_ended_t::get_utterance_id)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_evt_tts_injection_ended_t*), "get_utterance_id", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_evt_tts_injection_ended_t::set_tts_destination
// Il2CppName: set_tts_destination
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_evt_tts_injection_ended_t::*)(::GlobalNamespace::vx_tts_destination)>(&GlobalNamespace::vx_evt_tts_injection_ended_t::set_tts_destination)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "vx_tts_destination")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_evt_tts_injection_ended_t*), "set_tts_destination", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_evt_tts_injection_ended_t::get_tts_destination
// Il2CppName: get_tts_destination
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::vx_tts_destination (GlobalNamespace::vx_evt_tts_injection_ended_t::*)()>(&GlobalNamespace::vx_evt_tts_injection_ended_t::get_tts_destination)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_evt_tts_injection_ended_t*), "get_tts_destination", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_evt_tts_injection_ended_t::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::vx_evt_tts_injection_ended_t::Finalize
// Il2CppName: Finalize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_evt_tts_injection_ended_t::*)()>(&GlobalNamespace::vx_evt_tts_injection_ended_t::Finalize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_evt_tts_injection_ended_t*), "Finalize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
