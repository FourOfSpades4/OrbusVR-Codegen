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
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: vx_req_base_t
  class vx_req_base_t;
  // Forward declaring type: SWIGTYPE_p_double
  class SWIGTYPE_p_double;
  // Forward declaring type: orientation_type
  struct orientation_type;
  // Forward declaring type: req_disposition_type_t
  struct req_disposition_type_t;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: vx_req_session_set_3d_position_t
  class vx_req_session_set_3d_position_t;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::vx_req_session_set_3d_position_t);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::vx_req_session_set_3d_position_t*, "", "vx_req_session_set_3d_position_t");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x21
  #pragma pack(push, 1)
  // Autogenerated type: vx_req_session_set_3d_position_t
  // [TokenAttribute] Offset: FFFFFFFF
  class vx_req_session_set_3d_position_t : public ::Il2CppObject/*, public ::System::IDisposable*/ {
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
    // Offset: 0x2254E3C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static vx_req_session_set_3d_position_t* New_ctor(::System::IntPtr cPtr, bool cMemoryOwn) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::vx_req_session_set_3d_position_t::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<vx_req_session_set_3d_position_t*, creationType>(cPtr, cMemoryOwn)));
    }
    // static System.Runtime.InteropServices.HandleRef getCPtr(vx_req_session_set_3d_position_t obj)
    // Offset: 0x2254EA0
    static ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::vx_req_session_set_3d_position_t* obj);
    // public System.Void Dispose()
    // Offset: 0x2254F90
    void Dispose();
    // public System.Void set_base_(vx_req_base_t value)
    // Offset: 0x22551D8
    void set_base_(::GlobalNamespace::vx_req_base_t* value);
    // public vx_req_base_t get_base_()
    // Offset: 0x2255128
    ::GlobalNamespace::vx_req_base_t* get_base_();
    // public System.Void set_session_handle(System.String value)
    // Offset: 0x225526C
    void set_session_handle(::StringW value);
    // public System.String get_session_handle()
    // Offset: 0x22552EC
    ::StringW get_session_handle();
    // public System.Void set_speaker_position(SWIGTYPE_p_double value)
    // Offset: 0x225535C
    void set_speaker_position(::GlobalNamespace::SWIGTYPE_p_double* value);
    // public SWIGTYPE_p_double get_speaker_position()
    // Offset: 0x22553F4
    ::GlobalNamespace::SWIGTYPE_p_double* get_speaker_position();
    // public System.Void set_speaker_velocity(SWIGTYPE_p_double value)
    // Offset: 0x22554A8
    void set_speaker_velocity(::GlobalNamespace::SWIGTYPE_p_double* value);
    // public SWIGTYPE_p_double get_speaker_velocity()
    // Offset: 0x2255540
    ::GlobalNamespace::SWIGTYPE_p_double* get_speaker_velocity();
    // public System.Void set_speaker_at_orientation(SWIGTYPE_p_double value)
    // Offset: 0x22555F4
    void set_speaker_at_orientation(::GlobalNamespace::SWIGTYPE_p_double* value);
    // public SWIGTYPE_p_double get_speaker_at_orientation()
    // Offset: 0x225568C
    ::GlobalNamespace::SWIGTYPE_p_double* get_speaker_at_orientation();
    // public System.Void set_speaker_up_orientation(SWIGTYPE_p_double value)
    // Offset: 0x2255740
    void set_speaker_up_orientation(::GlobalNamespace::SWIGTYPE_p_double* value);
    // public SWIGTYPE_p_double get_speaker_up_orientation()
    // Offset: 0x22557D8
    ::GlobalNamespace::SWIGTYPE_p_double* get_speaker_up_orientation();
    // public System.Void set_speaker_left_orientation(SWIGTYPE_p_double value)
    // Offset: 0x225588C
    void set_speaker_left_orientation(::GlobalNamespace::SWIGTYPE_p_double* value);
    // public SWIGTYPE_p_double get_speaker_left_orientation()
    // Offset: 0x2255924
    ::GlobalNamespace::SWIGTYPE_p_double* get_speaker_left_orientation();
    // public System.Void set_listener_position(SWIGTYPE_p_double value)
    // Offset: 0x22559D8
    void set_listener_position(::GlobalNamespace::SWIGTYPE_p_double* value);
    // public SWIGTYPE_p_double get_listener_position()
    // Offset: 0x2255A70
    ::GlobalNamespace::SWIGTYPE_p_double* get_listener_position();
    // public System.Void set_listener_velocity(SWIGTYPE_p_double value)
    // Offset: 0x2255B24
    void set_listener_velocity(::GlobalNamespace::SWIGTYPE_p_double* value);
    // public SWIGTYPE_p_double get_listener_velocity()
    // Offset: 0x2255BBC
    ::GlobalNamespace::SWIGTYPE_p_double* get_listener_velocity();
    // public System.Void set_listener_at_orientation(SWIGTYPE_p_double value)
    // Offset: 0x2255C70
    void set_listener_at_orientation(::GlobalNamespace::SWIGTYPE_p_double* value);
    // public SWIGTYPE_p_double get_listener_at_orientation()
    // Offset: 0x2255D08
    ::GlobalNamespace::SWIGTYPE_p_double* get_listener_at_orientation();
    // public System.Void set_listener_up_orientation(SWIGTYPE_p_double value)
    // Offset: 0x2255DBC
    void set_listener_up_orientation(::GlobalNamespace::SWIGTYPE_p_double* value);
    // public SWIGTYPE_p_double get_listener_up_orientation()
    // Offset: 0x2255E54
    ::GlobalNamespace::SWIGTYPE_p_double* get_listener_up_orientation();
    // public System.Void set_listener_left_orientation(SWIGTYPE_p_double value)
    // Offset: 0x2255F08
    void set_listener_left_orientation(::GlobalNamespace::SWIGTYPE_p_double* value);
    // public SWIGTYPE_p_double get_listener_left_orientation()
    // Offset: 0x2255FA0
    ::GlobalNamespace::SWIGTYPE_p_double* get_listener_left_orientation();
    // public System.Void set_type(orientation_type value)
    // Offset: 0x2256054
    void set_type(::GlobalNamespace::orientation_type value);
    // public orientation_type get_type()
    // Offset: 0x22560D4
    ::GlobalNamespace::orientation_type get_type();
    // public System.Void set_req_disposition_type(req_disposition_type_t value)
    // Offset: 0x2256144
    void set_req_disposition_type(::GlobalNamespace::req_disposition_type_t value);
    // public req_disposition_type_t get_req_disposition_type()
    // Offset: 0x22561C4
    ::GlobalNamespace::req_disposition_type_t get_req_disposition_type();
    // public System.Void .ctor()
    // Offset: 0x2256234
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static vx_req_session_set_3d_position_t* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::vx_req_session_set_3d_position_t::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<vx_req_session_set_3d_position_t*, creationType>()));
    }
    // public System.Void Set3DPosition(System.Single[] speakerPos, System.Single[] listenerPos, System.Single[] listenerAtOrient, System.Single[] listenerUpOrient)
    // Offset: 0x22562A8
    void Set3DPosition(::ArrayW<float> speakerPos, ::ArrayW<float> listenerPos, ::ArrayW<float> listenerAtOrient, ::ArrayW<float> listenerUpOrient);
    // protected override System.Void Finalize()
    // Offset: 0x2254F14
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
  }; // vx_req_session_set_3d_position_t
  #pragma pack(pop)
  static check_size<sizeof(vx_req_session_set_3d_position_t), 32 + sizeof(bool)> __GlobalNamespace_vx_req_session_set_3d_position_tSizeCheck;
  static_assert(sizeof(vx_req_session_set_3d_position_t) == 0x21);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::vx_req_session_set_3d_position_t::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::vx_req_session_set_3d_position_t::getCPtr
// Il2CppName: getCPtr
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::InteropServices::HandleRef (*)(::GlobalNamespace::vx_req_session_set_3d_position_t*)>(&GlobalNamespace::vx_req_session_set_3d_position_t::getCPtr)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("", "vx_req_session_set_3d_position_t")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_req_session_set_3d_position_t*), "getCPtr", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_req_session_set_3d_position_t::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_req_session_set_3d_position_t::*)()>(&GlobalNamespace::vx_req_session_set_3d_position_t::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_req_session_set_3d_position_t*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_req_session_set_3d_position_t::set_base_
// Il2CppName: set_base_
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_req_session_set_3d_position_t::*)(::GlobalNamespace::vx_req_base_t*)>(&GlobalNamespace::vx_req_session_set_3d_position_t::set_base_)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "vx_req_base_t")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_req_session_set_3d_position_t*), "set_base_", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_req_session_set_3d_position_t::get_base_
// Il2CppName: get_base_
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::vx_req_base_t* (GlobalNamespace::vx_req_session_set_3d_position_t::*)()>(&GlobalNamespace::vx_req_session_set_3d_position_t::get_base_)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_req_session_set_3d_position_t*), "get_base_", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_req_session_set_3d_position_t::set_session_handle
// Il2CppName: set_session_handle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_req_session_set_3d_position_t::*)(::StringW)>(&GlobalNamespace::vx_req_session_set_3d_position_t::set_session_handle)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_req_session_set_3d_position_t*), "set_session_handle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_req_session_set_3d_position_t::get_session_handle
// Il2CppName: get_session_handle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::vx_req_session_set_3d_position_t::*)()>(&GlobalNamespace::vx_req_session_set_3d_position_t::get_session_handle)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_req_session_set_3d_position_t*), "get_session_handle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_req_session_set_3d_position_t::set_speaker_position
// Il2CppName: set_speaker_position
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_req_session_set_3d_position_t::*)(::GlobalNamespace::SWIGTYPE_p_double*)>(&GlobalNamespace::vx_req_session_set_3d_position_t::set_speaker_position)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "SWIGTYPE_p_double")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_req_session_set_3d_position_t*), "set_speaker_position", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_req_session_set_3d_position_t::get_speaker_position
// Il2CppName: get_speaker_position
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::SWIGTYPE_p_double* (GlobalNamespace::vx_req_session_set_3d_position_t::*)()>(&GlobalNamespace::vx_req_session_set_3d_position_t::get_speaker_position)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_req_session_set_3d_position_t*), "get_speaker_position", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_req_session_set_3d_position_t::set_speaker_velocity
// Il2CppName: set_speaker_velocity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_req_session_set_3d_position_t::*)(::GlobalNamespace::SWIGTYPE_p_double*)>(&GlobalNamespace::vx_req_session_set_3d_position_t::set_speaker_velocity)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "SWIGTYPE_p_double")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_req_session_set_3d_position_t*), "set_speaker_velocity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_req_session_set_3d_position_t::get_speaker_velocity
// Il2CppName: get_speaker_velocity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::SWIGTYPE_p_double* (GlobalNamespace::vx_req_session_set_3d_position_t::*)()>(&GlobalNamespace::vx_req_session_set_3d_position_t::get_speaker_velocity)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_req_session_set_3d_position_t*), "get_speaker_velocity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_req_session_set_3d_position_t::set_speaker_at_orientation
// Il2CppName: set_speaker_at_orientation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_req_session_set_3d_position_t::*)(::GlobalNamespace::SWIGTYPE_p_double*)>(&GlobalNamespace::vx_req_session_set_3d_position_t::set_speaker_at_orientation)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "SWIGTYPE_p_double")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_req_session_set_3d_position_t*), "set_speaker_at_orientation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_req_session_set_3d_position_t::get_speaker_at_orientation
// Il2CppName: get_speaker_at_orientation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::SWIGTYPE_p_double* (GlobalNamespace::vx_req_session_set_3d_position_t::*)()>(&GlobalNamespace::vx_req_session_set_3d_position_t::get_speaker_at_orientation)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_req_session_set_3d_position_t*), "get_speaker_at_orientation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_req_session_set_3d_position_t::set_speaker_up_orientation
// Il2CppName: set_speaker_up_orientation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_req_session_set_3d_position_t::*)(::GlobalNamespace::SWIGTYPE_p_double*)>(&GlobalNamespace::vx_req_session_set_3d_position_t::set_speaker_up_orientation)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "SWIGTYPE_p_double")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_req_session_set_3d_position_t*), "set_speaker_up_orientation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_req_session_set_3d_position_t::get_speaker_up_orientation
// Il2CppName: get_speaker_up_orientation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::SWIGTYPE_p_double* (GlobalNamespace::vx_req_session_set_3d_position_t::*)()>(&GlobalNamespace::vx_req_session_set_3d_position_t::get_speaker_up_orientation)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_req_session_set_3d_position_t*), "get_speaker_up_orientation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_req_session_set_3d_position_t::set_speaker_left_orientation
// Il2CppName: set_speaker_left_orientation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_req_session_set_3d_position_t::*)(::GlobalNamespace::SWIGTYPE_p_double*)>(&GlobalNamespace::vx_req_session_set_3d_position_t::set_speaker_left_orientation)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "SWIGTYPE_p_double")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_req_session_set_3d_position_t*), "set_speaker_left_orientation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_req_session_set_3d_position_t::get_speaker_left_orientation
// Il2CppName: get_speaker_left_orientation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::SWIGTYPE_p_double* (GlobalNamespace::vx_req_session_set_3d_position_t::*)()>(&GlobalNamespace::vx_req_session_set_3d_position_t::get_speaker_left_orientation)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_req_session_set_3d_position_t*), "get_speaker_left_orientation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_req_session_set_3d_position_t::set_listener_position
// Il2CppName: set_listener_position
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_req_session_set_3d_position_t::*)(::GlobalNamespace::SWIGTYPE_p_double*)>(&GlobalNamespace::vx_req_session_set_3d_position_t::set_listener_position)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "SWIGTYPE_p_double")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_req_session_set_3d_position_t*), "set_listener_position", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_req_session_set_3d_position_t::get_listener_position
// Il2CppName: get_listener_position
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::SWIGTYPE_p_double* (GlobalNamespace::vx_req_session_set_3d_position_t::*)()>(&GlobalNamespace::vx_req_session_set_3d_position_t::get_listener_position)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_req_session_set_3d_position_t*), "get_listener_position", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_req_session_set_3d_position_t::set_listener_velocity
// Il2CppName: set_listener_velocity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_req_session_set_3d_position_t::*)(::GlobalNamespace::SWIGTYPE_p_double*)>(&GlobalNamespace::vx_req_session_set_3d_position_t::set_listener_velocity)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "SWIGTYPE_p_double")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_req_session_set_3d_position_t*), "set_listener_velocity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_req_session_set_3d_position_t::get_listener_velocity
// Il2CppName: get_listener_velocity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::SWIGTYPE_p_double* (GlobalNamespace::vx_req_session_set_3d_position_t::*)()>(&GlobalNamespace::vx_req_session_set_3d_position_t::get_listener_velocity)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_req_session_set_3d_position_t*), "get_listener_velocity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_req_session_set_3d_position_t::set_listener_at_orientation
// Il2CppName: set_listener_at_orientation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_req_session_set_3d_position_t::*)(::GlobalNamespace::SWIGTYPE_p_double*)>(&GlobalNamespace::vx_req_session_set_3d_position_t::set_listener_at_orientation)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "SWIGTYPE_p_double")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_req_session_set_3d_position_t*), "set_listener_at_orientation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_req_session_set_3d_position_t::get_listener_at_orientation
// Il2CppName: get_listener_at_orientation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::SWIGTYPE_p_double* (GlobalNamespace::vx_req_session_set_3d_position_t::*)()>(&GlobalNamespace::vx_req_session_set_3d_position_t::get_listener_at_orientation)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_req_session_set_3d_position_t*), "get_listener_at_orientation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_req_session_set_3d_position_t::set_listener_up_orientation
// Il2CppName: set_listener_up_orientation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_req_session_set_3d_position_t::*)(::GlobalNamespace::SWIGTYPE_p_double*)>(&GlobalNamespace::vx_req_session_set_3d_position_t::set_listener_up_orientation)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "SWIGTYPE_p_double")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_req_session_set_3d_position_t*), "set_listener_up_orientation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_req_session_set_3d_position_t::get_listener_up_orientation
// Il2CppName: get_listener_up_orientation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::SWIGTYPE_p_double* (GlobalNamespace::vx_req_session_set_3d_position_t::*)()>(&GlobalNamespace::vx_req_session_set_3d_position_t::get_listener_up_orientation)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_req_session_set_3d_position_t*), "get_listener_up_orientation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_req_session_set_3d_position_t::set_listener_left_orientation
// Il2CppName: set_listener_left_orientation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_req_session_set_3d_position_t::*)(::GlobalNamespace::SWIGTYPE_p_double*)>(&GlobalNamespace::vx_req_session_set_3d_position_t::set_listener_left_orientation)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "SWIGTYPE_p_double")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_req_session_set_3d_position_t*), "set_listener_left_orientation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_req_session_set_3d_position_t::get_listener_left_orientation
// Il2CppName: get_listener_left_orientation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::SWIGTYPE_p_double* (GlobalNamespace::vx_req_session_set_3d_position_t::*)()>(&GlobalNamespace::vx_req_session_set_3d_position_t::get_listener_left_orientation)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_req_session_set_3d_position_t*), "get_listener_left_orientation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_req_session_set_3d_position_t::set_type
// Il2CppName: set_type
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_req_session_set_3d_position_t::*)(::GlobalNamespace::orientation_type)>(&GlobalNamespace::vx_req_session_set_3d_position_t::set_type)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "orientation_type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_req_session_set_3d_position_t*), "set_type", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_req_session_set_3d_position_t::get_type
// Il2CppName: get_type
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::orientation_type (GlobalNamespace::vx_req_session_set_3d_position_t::*)()>(&GlobalNamespace::vx_req_session_set_3d_position_t::get_type)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_req_session_set_3d_position_t*), "get_type", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_req_session_set_3d_position_t::set_req_disposition_type
// Il2CppName: set_req_disposition_type
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_req_session_set_3d_position_t::*)(::GlobalNamespace::req_disposition_type_t)>(&GlobalNamespace::vx_req_session_set_3d_position_t::set_req_disposition_type)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "req_disposition_type_t")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_req_session_set_3d_position_t*), "set_req_disposition_type", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_req_session_set_3d_position_t::get_req_disposition_type
// Il2CppName: get_req_disposition_type
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::req_disposition_type_t (GlobalNamespace::vx_req_session_set_3d_position_t::*)()>(&GlobalNamespace::vx_req_session_set_3d_position_t::get_req_disposition_type)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_req_session_set_3d_position_t*), "get_req_disposition_type", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_req_session_set_3d_position_t::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::vx_req_session_set_3d_position_t::Set3DPosition
// Il2CppName: Set3DPosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_req_session_set_3d_position_t::*)(::ArrayW<float>, ::ArrayW<float>, ::ArrayW<float>, ::ArrayW<float>)>(&GlobalNamespace::vx_req_session_set_3d_position_t::Set3DPosition)> {
  static const MethodInfo* get() {
    static auto* speakerPos = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Single"), 1)->byval_arg;
    static auto* listenerPos = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Single"), 1)->byval_arg;
    static auto* listenerAtOrient = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Single"), 1)->byval_arg;
    static auto* listenerUpOrient = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Single"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_req_session_set_3d_position_t*), "Set3DPosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{speakerPos, listenerPos, listenerAtOrient, listenerUpOrient});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_req_session_set_3d_position_t::Finalize
// Il2CppName: Finalize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_req_session_set_3d_position_t::*)()>(&GlobalNamespace::vx_req_session_set_3d_position_t::Finalize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_req_session_set_3d_position_t*), "Finalize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
