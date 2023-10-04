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
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: vxa_capture_device_stats_t
  class vxa_capture_device_stats_t;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::vxa_capture_device_stats_t);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::vxa_capture_device_stats_t*, "", "vxa_capture_device_stats_t");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x21
  #pragma pack(push, 1)
  // Autogenerated type: vxa_capture_device_stats_t
  // [TokenAttribute] Offset: FFFFFFFF
  class vxa_capture_device_stats_t : public ::Il2CppObject/*, public ::System::IDisposable*/ {
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
    // Offset: 0x2828E88
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static vxa_capture_device_stats_t* New_ctor(::System::IntPtr cPtr, bool cMemoryOwn) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::vxa_capture_device_stats_t::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<vxa_capture_device_stats_t*, creationType>(cPtr, cMemoryOwn)));
    }
    // static System.Runtime.InteropServices.HandleRef getCPtr(vxa_capture_device_stats_t obj)
    // Offset: 0x2828EEC
    static ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::vxa_capture_device_stats_t* obj);
    // public System.Void Dispose()
    // Offset: 0x2828FDC
    void Dispose();
    // public System.Void set_buffer_underrun_count(System.Int32 value)
    // Offset: 0x282914C
    void set_buffer_underrun_count(int value);
    // public System.Int32 get_buffer_underrun_count()
    // Offset: 0x28291CC
    int get_buffer_underrun_count();
    // public System.Void set_buffer_overrun_count(System.Int32 value)
    // Offset: 0x282923C
    void set_buffer_overrun_count(int value);
    // public System.Int32 get_buffer_overrun_count()
    // Offset: 0x28292BC
    int get_buffer_overrun_count();
    // public System.Void set_other_error_count(System.Int32 value)
    // Offset: 0x282932C
    void set_other_error_count(int value);
    // public System.Int32 get_other_error_count()
    // Offset: 0x28293AC
    int get_other_error_count();
    // public System.Void set_audio_queue_read_count(System.Int32 value)
    // Offset: 0x282941C
    void set_audio_queue_read_count(int value);
    // public System.Int32 get_audio_queue_read_count()
    // Offset: 0x282949C
    int get_audio_queue_read_count();
    // public System.Void set_audio_queue_write_count(System.Int32 value)
    // Offset: 0x282950C
    void set_audio_queue_write_count(int value);
    // public System.Int32 get_audio_queue_write_count()
    // Offset: 0x282958C
    int get_audio_queue_write_count();
    // public System.Void .ctor()
    // Offset: 0x28295FC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static vxa_capture_device_stats_t* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::vxa_capture_device_stats_t::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<vxa_capture_device_stats_t*, creationType>()));
    }
    // protected override System.Void Finalize()
    // Offset: 0x2828F60
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
  }; // vxa_capture_device_stats_t
  #pragma pack(pop)
  static check_size<sizeof(vxa_capture_device_stats_t), 32 + sizeof(bool)> __GlobalNamespace_vxa_capture_device_stats_tSizeCheck;
  static_assert(sizeof(vxa_capture_device_stats_t) == 0x21);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::vxa_capture_device_stats_t::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::vxa_capture_device_stats_t::getCPtr
// Il2CppName: getCPtr
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::InteropServices::HandleRef (*)(::GlobalNamespace::vxa_capture_device_stats_t*)>(&GlobalNamespace::vxa_capture_device_stats_t::getCPtr)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("", "vxa_capture_device_stats_t")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vxa_capture_device_stats_t*), "getCPtr", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vxa_capture_device_stats_t::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vxa_capture_device_stats_t::*)()>(&GlobalNamespace::vxa_capture_device_stats_t::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vxa_capture_device_stats_t*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vxa_capture_device_stats_t::set_buffer_underrun_count
// Il2CppName: set_buffer_underrun_count
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vxa_capture_device_stats_t::*)(int)>(&GlobalNamespace::vxa_capture_device_stats_t::set_buffer_underrun_count)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vxa_capture_device_stats_t*), "set_buffer_underrun_count", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vxa_capture_device_stats_t::get_buffer_underrun_count
// Il2CppName: get_buffer_underrun_count
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::vxa_capture_device_stats_t::*)()>(&GlobalNamespace::vxa_capture_device_stats_t::get_buffer_underrun_count)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vxa_capture_device_stats_t*), "get_buffer_underrun_count", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vxa_capture_device_stats_t::set_buffer_overrun_count
// Il2CppName: set_buffer_overrun_count
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vxa_capture_device_stats_t::*)(int)>(&GlobalNamespace::vxa_capture_device_stats_t::set_buffer_overrun_count)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vxa_capture_device_stats_t*), "set_buffer_overrun_count", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vxa_capture_device_stats_t::get_buffer_overrun_count
// Il2CppName: get_buffer_overrun_count
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::vxa_capture_device_stats_t::*)()>(&GlobalNamespace::vxa_capture_device_stats_t::get_buffer_overrun_count)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vxa_capture_device_stats_t*), "get_buffer_overrun_count", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vxa_capture_device_stats_t::set_other_error_count
// Il2CppName: set_other_error_count
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vxa_capture_device_stats_t::*)(int)>(&GlobalNamespace::vxa_capture_device_stats_t::set_other_error_count)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vxa_capture_device_stats_t*), "set_other_error_count", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vxa_capture_device_stats_t::get_other_error_count
// Il2CppName: get_other_error_count
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::vxa_capture_device_stats_t::*)()>(&GlobalNamespace::vxa_capture_device_stats_t::get_other_error_count)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vxa_capture_device_stats_t*), "get_other_error_count", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vxa_capture_device_stats_t::set_audio_queue_read_count
// Il2CppName: set_audio_queue_read_count
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vxa_capture_device_stats_t::*)(int)>(&GlobalNamespace::vxa_capture_device_stats_t::set_audio_queue_read_count)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vxa_capture_device_stats_t*), "set_audio_queue_read_count", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vxa_capture_device_stats_t::get_audio_queue_read_count
// Il2CppName: get_audio_queue_read_count
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::vxa_capture_device_stats_t::*)()>(&GlobalNamespace::vxa_capture_device_stats_t::get_audio_queue_read_count)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vxa_capture_device_stats_t*), "get_audio_queue_read_count", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vxa_capture_device_stats_t::set_audio_queue_write_count
// Il2CppName: set_audio_queue_write_count
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vxa_capture_device_stats_t::*)(int)>(&GlobalNamespace::vxa_capture_device_stats_t::set_audio_queue_write_count)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vxa_capture_device_stats_t*), "set_audio_queue_write_count", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vxa_capture_device_stats_t::get_audio_queue_write_count
// Il2CppName: get_audio_queue_write_count
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::vxa_capture_device_stats_t::*)()>(&GlobalNamespace::vxa_capture_device_stats_t::get_audio_queue_write_count)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vxa_capture_device_stats_t*), "get_audio_queue_write_count", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vxa_capture_device_stats_t::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::vxa_capture_device_stats_t::Finalize
// Il2CppName: Finalize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vxa_capture_device_stats_t::*)()>(&GlobalNamespace::vxa_capture_device_stats_t::Finalize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vxa_capture_device_stats_t*), "Finalize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
