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
  // Forward declaring type: vx_stat_thread_t
  class vx_stat_thread_t;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::vx_stat_thread_t);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::vx_stat_thread_t*, "", "vx_stat_thread_t");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x21
  #pragma pack(push, 1)
  // Autogenerated type: vx_stat_thread_t
  // [TokenAttribute] Offset: FFFFFFFF
  class vx_stat_thread_t : public ::Il2CppObject/*, public ::System::IDisposable*/ {
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
    // Offset: 0x281C144
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static vx_stat_thread_t* New_ctor(::System::IntPtr cPtr, bool cMemoryOwn) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::vx_stat_thread_t::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<vx_stat_thread_t*, creationType>(cPtr, cMemoryOwn)));
    }
    // static System.Runtime.InteropServices.HandleRef getCPtr(vx_stat_thread_t obj)
    // Offset: 0x281C1A8
    static ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::vx_stat_thread_t* obj);
    // public System.Void Dispose()
    // Offset: 0x281C298
    void Dispose();
    // public System.Void set_interval(System.Int32 value)
    // Offset: 0x281C408
    void set_interval(int value);
    // public System.Int32 get_interval()
    // Offset: 0x281C488
    int get_interval();
    // public System.Void set_count_poll_lt_1ms(System.Int32 value)
    // Offset: 0x281C4F8
    void set_count_poll_lt_1ms(int value);
    // public System.Int32 get_count_poll_lt_1ms()
    // Offset: 0x281C578
    int get_count_poll_lt_1ms();
    // public System.Void set_count_poll_lt_5ms(System.Int32 value)
    // Offset: 0x281C5E8
    void set_count_poll_lt_5ms(int value);
    // public System.Int32 get_count_poll_lt_5ms()
    // Offset: 0x281C668
    int get_count_poll_lt_5ms();
    // public System.Void set_count_poll_lt_10ms(System.Int32 value)
    // Offset: 0x281C6D8
    void set_count_poll_lt_10ms(int value);
    // public System.Int32 get_count_poll_lt_10ms()
    // Offset: 0x281C758
    int get_count_poll_lt_10ms();
    // public System.Void set_count_poll_lt_16ms(System.Int32 value)
    // Offset: 0x281C7C8
    void set_count_poll_lt_16ms(int value);
    // public System.Int32 get_count_poll_lt_16ms()
    // Offset: 0x281C848
    int get_count_poll_lt_16ms();
    // public System.Void set_count_poll_lt_20ms(System.Int32 value)
    // Offset: 0x281C8B8
    void set_count_poll_lt_20ms(int value);
    // public System.Int32 get_count_poll_lt_20ms()
    // Offset: 0x281C938
    int get_count_poll_lt_20ms();
    // public System.Void set_count_poll_lt_25ms(System.Int32 value)
    // Offset: 0x281C9A8
    void set_count_poll_lt_25ms(int value);
    // public System.Int32 get_count_poll_lt_25ms()
    // Offset: 0x281CA28
    int get_count_poll_lt_25ms();
    // public System.Void set_count_poll_gte_25ms(System.Int32 value)
    // Offset: 0x281CA98
    void set_count_poll_gte_25ms(int value);
    // public System.Int32 get_count_poll_gte_25ms()
    // Offset: 0x281CB18
    int get_count_poll_gte_25ms();
    // public System.Void .ctor()
    // Offset: 0x281CB88
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static vx_stat_thread_t* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::vx_stat_thread_t::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<vx_stat_thread_t*, creationType>()));
    }
    // protected override System.Void Finalize()
    // Offset: 0x281C21C
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
  }; // vx_stat_thread_t
  #pragma pack(pop)
  static check_size<sizeof(vx_stat_thread_t), 32 + sizeof(bool)> __GlobalNamespace_vx_stat_thread_tSizeCheck;
  static_assert(sizeof(vx_stat_thread_t) == 0x21);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::vx_stat_thread_t::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::vx_stat_thread_t::getCPtr
// Il2CppName: getCPtr
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::InteropServices::HandleRef (*)(::GlobalNamespace::vx_stat_thread_t*)>(&GlobalNamespace::vx_stat_thread_t::getCPtr)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("", "vx_stat_thread_t")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_stat_thread_t*), "getCPtr", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_stat_thread_t::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_stat_thread_t::*)()>(&GlobalNamespace::vx_stat_thread_t::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_stat_thread_t*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_stat_thread_t::set_interval
// Il2CppName: set_interval
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_stat_thread_t::*)(int)>(&GlobalNamespace::vx_stat_thread_t::set_interval)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_stat_thread_t*), "set_interval", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_stat_thread_t::get_interval
// Il2CppName: get_interval
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::vx_stat_thread_t::*)()>(&GlobalNamespace::vx_stat_thread_t::get_interval)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_stat_thread_t*), "get_interval", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_stat_thread_t::set_count_poll_lt_1ms
// Il2CppName: set_count_poll_lt_1ms
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_stat_thread_t::*)(int)>(&GlobalNamespace::vx_stat_thread_t::set_count_poll_lt_1ms)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_stat_thread_t*), "set_count_poll_lt_1ms", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_stat_thread_t::get_count_poll_lt_1ms
// Il2CppName: get_count_poll_lt_1ms
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::vx_stat_thread_t::*)()>(&GlobalNamespace::vx_stat_thread_t::get_count_poll_lt_1ms)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_stat_thread_t*), "get_count_poll_lt_1ms", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_stat_thread_t::set_count_poll_lt_5ms
// Il2CppName: set_count_poll_lt_5ms
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_stat_thread_t::*)(int)>(&GlobalNamespace::vx_stat_thread_t::set_count_poll_lt_5ms)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_stat_thread_t*), "set_count_poll_lt_5ms", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_stat_thread_t::get_count_poll_lt_5ms
// Il2CppName: get_count_poll_lt_5ms
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::vx_stat_thread_t::*)()>(&GlobalNamespace::vx_stat_thread_t::get_count_poll_lt_5ms)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_stat_thread_t*), "get_count_poll_lt_5ms", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_stat_thread_t::set_count_poll_lt_10ms
// Il2CppName: set_count_poll_lt_10ms
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_stat_thread_t::*)(int)>(&GlobalNamespace::vx_stat_thread_t::set_count_poll_lt_10ms)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_stat_thread_t*), "set_count_poll_lt_10ms", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_stat_thread_t::get_count_poll_lt_10ms
// Il2CppName: get_count_poll_lt_10ms
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::vx_stat_thread_t::*)()>(&GlobalNamespace::vx_stat_thread_t::get_count_poll_lt_10ms)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_stat_thread_t*), "get_count_poll_lt_10ms", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_stat_thread_t::set_count_poll_lt_16ms
// Il2CppName: set_count_poll_lt_16ms
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_stat_thread_t::*)(int)>(&GlobalNamespace::vx_stat_thread_t::set_count_poll_lt_16ms)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_stat_thread_t*), "set_count_poll_lt_16ms", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_stat_thread_t::get_count_poll_lt_16ms
// Il2CppName: get_count_poll_lt_16ms
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::vx_stat_thread_t::*)()>(&GlobalNamespace::vx_stat_thread_t::get_count_poll_lt_16ms)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_stat_thread_t*), "get_count_poll_lt_16ms", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_stat_thread_t::set_count_poll_lt_20ms
// Il2CppName: set_count_poll_lt_20ms
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_stat_thread_t::*)(int)>(&GlobalNamespace::vx_stat_thread_t::set_count_poll_lt_20ms)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_stat_thread_t*), "set_count_poll_lt_20ms", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_stat_thread_t::get_count_poll_lt_20ms
// Il2CppName: get_count_poll_lt_20ms
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::vx_stat_thread_t::*)()>(&GlobalNamespace::vx_stat_thread_t::get_count_poll_lt_20ms)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_stat_thread_t*), "get_count_poll_lt_20ms", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_stat_thread_t::set_count_poll_lt_25ms
// Il2CppName: set_count_poll_lt_25ms
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_stat_thread_t::*)(int)>(&GlobalNamespace::vx_stat_thread_t::set_count_poll_lt_25ms)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_stat_thread_t*), "set_count_poll_lt_25ms", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_stat_thread_t::get_count_poll_lt_25ms
// Il2CppName: get_count_poll_lt_25ms
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::vx_stat_thread_t::*)()>(&GlobalNamespace::vx_stat_thread_t::get_count_poll_lt_25ms)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_stat_thread_t*), "get_count_poll_lt_25ms", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_stat_thread_t::set_count_poll_gte_25ms
// Il2CppName: set_count_poll_gte_25ms
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_stat_thread_t::*)(int)>(&GlobalNamespace::vx_stat_thread_t::set_count_poll_gte_25ms)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_stat_thread_t*), "set_count_poll_gte_25ms", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_stat_thread_t::get_count_poll_gte_25ms
// Il2CppName: get_count_poll_gte_25ms
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::vx_stat_thread_t::*)()>(&GlobalNamespace::vx_stat_thread_t::get_count_poll_gte_25ms)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_stat_thread_t*), "get_count_poll_gte_25ms", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_stat_thread_t::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::vx_stat_thread_t::Finalize
// Il2CppName: Finalize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_stat_thread_t::*)()>(&GlobalNamespace::vx_stat_thread_t::Finalize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_stat_thread_t*), "Finalize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};