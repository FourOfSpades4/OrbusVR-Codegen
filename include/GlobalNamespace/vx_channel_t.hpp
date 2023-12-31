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
  // Forward declaring type: vx_channel_mode
  struct vx_channel_mode;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: vx_channel_t
  class vx_channel_t;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::vx_channel_t);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::vx_channel_t*, "", "vx_channel_t");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x21
  #pragma pack(push, 1)
  // Autogenerated type: vx_channel_t
  // [TokenAttribute] Offset: FFFFFFFF
  class vx_channel_t : public ::Il2CppObject/*, public ::System::IDisposable*/ {
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
    // Offset: 0x12E41A4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static vx_channel_t* New_ctor(::System::IntPtr cPtr, bool cMemoryOwn) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::vx_channel_t::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<vx_channel_t*, creationType>(cPtr, cMemoryOwn)));
    }
    // static System.Runtime.InteropServices.HandleRef getCPtr(vx_channel_t obj)
    // Offset: 0x12E4208
    static ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::vx_channel_t* obj);
    // public System.Void Dispose()
    // Offset: 0x12E42F8
    void Dispose();
    // public System.Void set_channel_name(System.String value)
    // Offset: 0x12E4468
    void set_channel_name(::StringW value);
    // public System.String get_channel_name()
    // Offset: 0x12E44E8
    ::StringW get_channel_name();
    // public System.Void set_channel_desc(System.String value)
    // Offset: 0x12E4558
    void set_channel_desc(::StringW value);
    // public System.String get_channel_desc()
    // Offset: 0x12E45D8
    ::StringW get_channel_desc();
    // public System.Void set_host(System.String value)
    // Offset: 0x12E4648
    void set_host(::StringW value);
    // public System.String get_host()
    // Offset: 0x12E46C8
    ::StringW get_host();
    // public System.Void set_channel_id(System.Int32 value)
    // Offset: 0x12E4738
    void set_channel_id(int value);
    // public System.Int32 get_channel_id()
    // Offset: 0x12E47B8
    int get_channel_id();
    // public System.Void set_limit(System.Int32 value)
    // Offset: 0x12E4828
    void set_limit(int value);
    // public System.Int32 get_limit()
    // Offset: 0x12E48A8
    int get_limit();
    // public System.Void set_capacity(System.Int32 value)
    // Offset: 0x12E4918
    void set_capacity(int value);
    // public System.Int32 get_capacity()
    // Offset: 0x12E4998
    int get_capacity();
    // public System.Void set_modified(System.String value)
    // Offset: 0x12E4A08
    void set_modified(::StringW value);
    // public System.String get_modified()
    // Offset: 0x12E4A88
    ::StringW get_modified();
    // public System.Void set_owner(System.String value)
    // Offset: 0x12E4AF8
    void set_owner(::StringW value);
    // public System.String get_owner()
    // Offset: 0x12E4B78
    ::StringW get_owner();
    // public System.Void set_owner_user_name(System.String value)
    // Offset: 0x12E4BE8
    void set_owner_user_name(::StringW value);
    // public System.String get_owner_user_name()
    // Offset: 0x12E4C68
    ::StringW get_owner_user_name();
    // public System.Void set_is_persistent(System.Int32 value)
    // Offset: 0x12E4CD8
    void set_is_persistent(int value);
    // public System.Int32 get_is_persistent()
    // Offset: 0x12E4D58
    int get_is_persistent();
    // public System.Void set_is_protected(System.Int32 value)
    // Offset: 0x12E4DC8
    void set_is_protected(int value);
    // public System.Int32 get_is_protected()
    // Offset: 0x12E4E48
    int get_is_protected();
    // public System.Void set_size(System.Int32 value)
    // Offset: 0x12E4EB8
    void set_size(int value);
    // public System.Int32 get_size()
    // Offset: 0x12E4F38
    int get_size();
    // public System.Void set_type(System.Int32 value)
    // Offset: 0x12E4FA8
    void set_type(int value);
    // public System.Int32 get_type()
    // Offset: 0x12E5028
    int get_type();
    // public System.Void set_mode(vx_channel_mode value)
    // Offset: 0x12E5098
    void set_mode(::GlobalNamespace::vx_channel_mode value);
    // public vx_channel_mode get_mode()
    // Offset: 0x12E5118
    ::GlobalNamespace::vx_channel_mode get_mode();
    // public System.Void set_channel_uri(System.String value)
    // Offset: 0x12E5188
    void set_channel_uri(::StringW value);
    // public System.String get_channel_uri()
    // Offset: 0x12E5208
    ::StringW get_channel_uri();
    // public System.Void set_max_range(System.Int32 value)
    // Offset: 0x12E5278
    void set_max_range(int value);
    // public System.Int32 get_max_range()
    // Offset: 0x12E52F8
    int get_max_range();
    // public System.Void set_clamping_dist(System.Int32 value)
    // Offset: 0x12E5368
    void set_clamping_dist(int value);
    // public System.Int32 get_clamping_dist()
    // Offset: 0x12E53E8
    int get_clamping_dist();
    // public System.Void set_roll_off(System.Double value)
    // Offset: 0x12E5458
    void set_roll_off(double value);
    // public System.Double get_roll_off()
    // Offset: 0x12E54D8
    double get_roll_off();
    // public System.Void set_max_gain(System.Double value)
    // Offset: 0x12E5548
    void set_max_gain(double value);
    // public System.Double get_max_gain()
    // Offset: 0x12E55C8
    double get_max_gain();
    // public System.Void set_dist_model(System.Int32 value)
    // Offset: 0x12E5638
    void set_dist_model(int value);
    // public System.Int32 get_dist_model()
    // Offset: 0x12E56B8
    int get_dist_model();
    // public System.Void set_encrypt_audio(System.Int32 value)
    // Offset: 0x12E5728
    void set_encrypt_audio(int value);
    // public System.Int32 get_encrypt_audio()
    // Offset: 0x12E57A8
    int get_encrypt_audio();
    // public System.Void set_owner_display_name(System.String value)
    // Offset: 0x12E5818
    void set_owner_display_name(::StringW value);
    // public System.String get_owner_display_name()
    // Offset: 0x12E5898
    ::StringW get_owner_display_name();
    // public System.Void set_active_participants(System.Int32 value)
    // Offset: 0x12E5908
    void set_active_participants(int value);
    // public System.Int32 get_active_participants()
    // Offset: 0x12E5988
    int get_active_participants();
    // public System.Void .ctor()
    // Offset: 0x12E59F8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static vx_channel_t* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::vx_channel_t::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<vx_channel_t*, creationType>()));
    }
    // protected override System.Void Finalize()
    // Offset: 0x12E427C
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
  }; // vx_channel_t
  #pragma pack(pop)
  static check_size<sizeof(vx_channel_t), 32 + sizeof(bool)> __GlobalNamespace_vx_channel_tSizeCheck;
  static_assert(sizeof(vx_channel_t) == 0x21);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::vx_channel_t::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::vx_channel_t::getCPtr
// Il2CppName: getCPtr
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::InteropServices::HandleRef (*)(::GlobalNamespace::vx_channel_t*)>(&GlobalNamespace::vx_channel_t::getCPtr)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("", "vx_channel_t")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_channel_t*), "getCPtr", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_channel_t::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_channel_t::*)()>(&GlobalNamespace::vx_channel_t::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_channel_t*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_channel_t::set_channel_name
// Il2CppName: set_channel_name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_channel_t::*)(::StringW)>(&GlobalNamespace::vx_channel_t::set_channel_name)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_channel_t*), "set_channel_name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_channel_t::get_channel_name
// Il2CppName: get_channel_name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::vx_channel_t::*)()>(&GlobalNamespace::vx_channel_t::get_channel_name)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_channel_t*), "get_channel_name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_channel_t::set_channel_desc
// Il2CppName: set_channel_desc
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_channel_t::*)(::StringW)>(&GlobalNamespace::vx_channel_t::set_channel_desc)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_channel_t*), "set_channel_desc", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_channel_t::get_channel_desc
// Il2CppName: get_channel_desc
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::vx_channel_t::*)()>(&GlobalNamespace::vx_channel_t::get_channel_desc)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_channel_t*), "get_channel_desc", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_channel_t::set_host
// Il2CppName: set_host
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_channel_t::*)(::StringW)>(&GlobalNamespace::vx_channel_t::set_host)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_channel_t*), "set_host", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_channel_t::get_host
// Il2CppName: get_host
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::vx_channel_t::*)()>(&GlobalNamespace::vx_channel_t::get_host)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_channel_t*), "get_host", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_channel_t::set_channel_id
// Il2CppName: set_channel_id
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_channel_t::*)(int)>(&GlobalNamespace::vx_channel_t::set_channel_id)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_channel_t*), "set_channel_id", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_channel_t::get_channel_id
// Il2CppName: get_channel_id
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::vx_channel_t::*)()>(&GlobalNamespace::vx_channel_t::get_channel_id)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_channel_t*), "get_channel_id", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_channel_t::set_limit
// Il2CppName: set_limit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_channel_t::*)(int)>(&GlobalNamespace::vx_channel_t::set_limit)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_channel_t*), "set_limit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_channel_t::get_limit
// Il2CppName: get_limit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::vx_channel_t::*)()>(&GlobalNamespace::vx_channel_t::get_limit)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_channel_t*), "get_limit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_channel_t::set_capacity
// Il2CppName: set_capacity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_channel_t::*)(int)>(&GlobalNamespace::vx_channel_t::set_capacity)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_channel_t*), "set_capacity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_channel_t::get_capacity
// Il2CppName: get_capacity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::vx_channel_t::*)()>(&GlobalNamespace::vx_channel_t::get_capacity)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_channel_t*), "get_capacity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_channel_t::set_modified
// Il2CppName: set_modified
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_channel_t::*)(::StringW)>(&GlobalNamespace::vx_channel_t::set_modified)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_channel_t*), "set_modified", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_channel_t::get_modified
// Il2CppName: get_modified
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::vx_channel_t::*)()>(&GlobalNamespace::vx_channel_t::get_modified)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_channel_t*), "get_modified", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_channel_t::set_owner
// Il2CppName: set_owner
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_channel_t::*)(::StringW)>(&GlobalNamespace::vx_channel_t::set_owner)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_channel_t*), "set_owner", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_channel_t::get_owner
// Il2CppName: get_owner
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::vx_channel_t::*)()>(&GlobalNamespace::vx_channel_t::get_owner)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_channel_t*), "get_owner", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_channel_t::set_owner_user_name
// Il2CppName: set_owner_user_name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_channel_t::*)(::StringW)>(&GlobalNamespace::vx_channel_t::set_owner_user_name)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_channel_t*), "set_owner_user_name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_channel_t::get_owner_user_name
// Il2CppName: get_owner_user_name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::vx_channel_t::*)()>(&GlobalNamespace::vx_channel_t::get_owner_user_name)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_channel_t*), "get_owner_user_name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_channel_t::set_is_persistent
// Il2CppName: set_is_persistent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_channel_t::*)(int)>(&GlobalNamespace::vx_channel_t::set_is_persistent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_channel_t*), "set_is_persistent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_channel_t::get_is_persistent
// Il2CppName: get_is_persistent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::vx_channel_t::*)()>(&GlobalNamespace::vx_channel_t::get_is_persistent)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_channel_t*), "get_is_persistent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_channel_t::set_is_protected
// Il2CppName: set_is_protected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_channel_t::*)(int)>(&GlobalNamespace::vx_channel_t::set_is_protected)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_channel_t*), "set_is_protected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_channel_t::get_is_protected
// Il2CppName: get_is_protected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::vx_channel_t::*)()>(&GlobalNamespace::vx_channel_t::get_is_protected)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_channel_t*), "get_is_protected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_channel_t::set_size
// Il2CppName: set_size
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_channel_t::*)(int)>(&GlobalNamespace::vx_channel_t::set_size)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_channel_t*), "set_size", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_channel_t::get_size
// Il2CppName: get_size
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::vx_channel_t::*)()>(&GlobalNamespace::vx_channel_t::get_size)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_channel_t*), "get_size", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_channel_t::set_type
// Il2CppName: set_type
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_channel_t::*)(int)>(&GlobalNamespace::vx_channel_t::set_type)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_channel_t*), "set_type", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_channel_t::get_type
// Il2CppName: get_type
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::vx_channel_t::*)()>(&GlobalNamespace::vx_channel_t::get_type)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_channel_t*), "get_type", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_channel_t::set_mode
// Il2CppName: set_mode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_channel_t::*)(::GlobalNamespace::vx_channel_mode)>(&GlobalNamespace::vx_channel_t::set_mode)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "vx_channel_mode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_channel_t*), "set_mode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_channel_t::get_mode
// Il2CppName: get_mode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::vx_channel_mode (GlobalNamespace::vx_channel_t::*)()>(&GlobalNamespace::vx_channel_t::get_mode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_channel_t*), "get_mode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_channel_t::set_channel_uri
// Il2CppName: set_channel_uri
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_channel_t::*)(::StringW)>(&GlobalNamespace::vx_channel_t::set_channel_uri)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_channel_t*), "set_channel_uri", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_channel_t::get_channel_uri
// Il2CppName: get_channel_uri
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::vx_channel_t::*)()>(&GlobalNamespace::vx_channel_t::get_channel_uri)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_channel_t*), "get_channel_uri", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_channel_t::set_max_range
// Il2CppName: set_max_range
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_channel_t::*)(int)>(&GlobalNamespace::vx_channel_t::set_max_range)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_channel_t*), "set_max_range", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_channel_t::get_max_range
// Il2CppName: get_max_range
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::vx_channel_t::*)()>(&GlobalNamespace::vx_channel_t::get_max_range)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_channel_t*), "get_max_range", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_channel_t::set_clamping_dist
// Il2CppName: set_clamping_dist
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_channel_t::*)(int)>(&GlobalNamespace::vx_channel_t::set_clamping_dist)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_channel_t*), "set_clamping_dist", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_channel_t::get_clamping_dist
// Il2CppName: get_clamping_dist
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::vx_channel_t::*)()>(&GlobalNamespace::vx_channel_t::get_clamping_dist)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_channel_t*), "get_clamping_dist", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_channel_t::set_roll_off
// Il2CppName: set_roll_off
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_channel_t::*)(double)>(&GlobalNamespace::vx_channel_t::set_roll_off)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_channel_t*), "set_roll_off", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_channel_t::get_roll_off
// Il2CppName: get_roll_off
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double (GlobalNamespace::vx_channel_t::*)()>(&GlobalNamespace::vx_channel_t::get_roll_off)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_channel_t*), "get_roll_off", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_channel_t::set_max_gain
// Il2CppName: set_max_gain
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_channel_t::*)(double)>(&GlobalNamespace::vx_channel_t::set_max_gain)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_channel_t*), "set_max_gain", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_channel_t::get_max_gain
// Il2CppName: get_max_gain
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double (GlobalNamespace::vx_channel_t::*)()>(&GlobalNamespace::vx_channel_t::get_max_gain)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_channel_t*), "get_max_gain", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_channel_t::set_dist_model
// Il2CppName: set_dist_model
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_channel_t::*)(int)>(&GlobalNamespace::vx_channel_t::set_dist_model)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_channel_t*), "set_dist_model", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_channel_t::get_dist_model
// Il2CppName: get_dist_model
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::vx_channel_t::*)()>(&GlobalNamespace::vx_channel_t::get_dist_model)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_channel_t*), "get_dist_model", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_channel_t::set_encrypt_audio
// Il2CppName: set_encrypt_audio
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_channel_t::*)(int)>(&GlobalNamespace::vx_channel_t::set_encrypt_audio)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_channel_t*), "set_encrypt_audio", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_channel_t::get_encrypt_audio
// Il2CppName: get_encrypt_audio
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::vx_channel_t::*)()>(&GlobalNamespace::vx_channel_t::get_encrypt_audio)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_channel_t*), "get_encrypt_audio", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_channel_t::set_owner_display_name
// Il2CppName: set_owner_display_name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_channel_t::*)(::StringW)>(&GlobalNamespace::vx_channel_t::set_owner_display_name)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_channel_t*), "set_owner_display_name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_channel_t::get_owner_display_name
// Il2CppName: get_owner_display_name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::vx_channel_t::*)()>(&GlobalNamespace::vx_channel_t::get_owner_display_name)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_channel_t*), "get_owner_display_name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_channel_t::set_active_participants
// Il2CppName: set_active_participants
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_channel_t::*)(int)>(&GlobalNamespace::vx_channel_t::set_active_participants)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_channel_t*), "set_active_participants", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_channel_t::get_active_participants
// Il2CppName: get_active_participants
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::vx_channel_t::*)()>(&GlobalNamespace::vx_channel_t::get_active_participants)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_channel_t*), "get_active_participants", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_channel_t::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::vx_channel_t::Finalize
// Il2CppName: Finalize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_channel_t::*)()>(&GlobalNamespace::vx_channel_t::Finalize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_channel_t*), "Finalize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
