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
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: vx_channel_favorite_t
  class vx_channel_favorite_t;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::vx_channel_favorite_t);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::vx_channel_favorite_t*, "", "vx_channel_favorite_t");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x21
  #pragma pack(push, 1)
  // Autogenerated type: vx_channel_favorite_t
  // [TokenAttribute] Offset: FFFFFFFF
  class vx_channel_favorite_t : public ::Il2CppObject/*, public ::System::IDisposable*/ {
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
    // Offset: 0x12E2F6C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static vx_channel_favorite_t* New_ctor(::System::IntPtr cPtr, bool cMemoryOwn) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::vx_channel_favorite_t::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<vx_channel_favorite_t*, creationType>(cPtr, cMemoryOwn)));
    }
    // static System.Runtime.InteropServices.HandleRef getCPtr(vx_channel_favorite_t obj)
    // Offset: 0x12E2FD0
    static ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::vx_channel_favorite_t* obj);
    // public System.Void Dispose()
    // Offset: 0x12E30C0
    void Dispose();
    // public System.Void set_favorite_id(System.Int32 value)
    // Offset: 0x12E3230
    void set_favorite_id(int value);
    // public System.Int32 get_favorite_id()
    // Offset: 0x12E32B0
    int get_favorite_id();
    // public System.Void set_favorite_group_id(System.Int32 value)
    // Offset: 0x12E3320
    void set_favorite_group_id(int value);
    // public System.Int32 get_favorite_group_id()
    // Offset: 0x12E33A0
    int get_favorite_group_id();
    // public System.Void set_favorite_display_name(System.String value)
    // Offset: 0x12E3410
    void set_favorite_display_name(::StringW value);
    // public System.String get_favorite_display_name()
    // Offset: 0x12E3490
    ::StringW get_favorite_display_name();
    // public System.Void set_favorite_data(System.String value)
    // Offset: 0x12E3500
    void set_favorite_data(::StringW value);
    // public System.String get_favorite_data()
    // Offset: 0x12E3580
    ::StringW get_favorite_data();
    // public System.Void set_channel_uri(System.String value)
    // Offset: 0x12E35F0
    void set_channel_uri(::StringW value);
    // public System.String get_channel_uri()
    // Offset: 0x12E3670
    ::StringW get_channel_uri();
    // public System.Void set_channel_description(System.String value)
    // Offset: 0x12E36E0
    void set_channel_description(::StringW value);
    // public System.String get_channel_description()
    // Offset: 0x12E3760
    ::StringW get_channel_description();
    // public System.Void set_channel_limit(System.Int32 value)
    // Offset: 0x12E37D0
    void set_channel_limit(int value);
    // public System.Int32 get_channel_limit()
    // Offset: 0x12E3850
    int get_channel_limit();
    // public System.Void set_channel_capacity(System.Int32 value)
    // Offset: 0x12E38C0
    void set_channel_capacity(int value);
    // public System.Int32 get_channel_capacity()
    // Offset: 0x12E3940
    int get_channel_capacity();
    // public System.Void set_channel_modified(System.String value)
    // Offset: 0x12E39B0
    void set_channel_modified(::StringW value);
    // public System.String get_channel_modified()
    // Offset: 0x12E3A30
    ::StringW get_channel_modified();
    // public System.Void set_channel_owner_user_name(System.String value)
    // Offset: 0x12E3AA0
    void set_channel_owner_user_name(::StringW value);
    // public System.String get_channel_owner_user_name()
    // Offset: 0x12E3B20
    ::StringW get_channel_owner_user_name();
    // public System.Void set_channel_is_persistent(System.Int32 value)
    // Offset: 0x12E3B90
    void set_channel_is_persistent(int value);
    // public System.Int32 get_channel_is_persistent()
    // Offset: 0x12E3C10
    int get_channel_is_persistent();
    // public System.Void set_channel_is_protected(System.Int32 value)
    // Offset: 0x12E3C80
    void set_channel_is_protected(int value);
    // public System.Int32 get_channel_is_protected()
    // Offset: 0x12E3D00
    int get_channel_is_protected();
    // public System.Void set_channel_size(System.Int32 value)
    // Offset: 0x12E3D70
    void set_channel_size(int value);
    // public System.Int32 get_channel_size()
    // Offset: 0x12E3DF0
    int get_channel_size();
    // public System.Void set_channel_owner(System.String value)
    // Offset: 0x12E3E60
    void set_channel_owner(::StringW value);
    // public System.String get_channel_owner()
    // Offset: 0x12E3EE0
    ::StringW get_channel_owner();
    // public System.Void set_channel_owner_display_name(System.String value)
    // Offset: 0x12E3F50
    void set_channel_owner_display_name(::StringW value);
    // public System.String get_channel_owner_display_name()
    // Offset: 0x12E3FD0
    ::StringW get_channel_owner_display_name();
    // public System.Void set_channel_active_participants(System.Int32 value)
    // Offset: 0x12E4040
    void set_channel_active_participants(int value);
    // public System.Int32 get_channel_active_participants()
    // Offset: 0x12E40C0
    int get_channel_active_participants();
    // public System.Void .ctor()
    // Offset: 0x12E4130
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static vx_channel_favorite_t* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::vx_channel_favorite_t::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<vx_channel_favorite_t*, creationType>()));
    }
    // protected override System.Void Finalize()
    // Offset: 0x12E3044
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
  }; // vx_channel_favorite_t
  #pragma pack(pop)
  static check_size<sizeof(vx_channel_favorite_t), 32 + sizeof(bool)> __GlobalNamespace_vx_channel_favorite_tSizeCheck;
  static_assert(sizeof(vx_channel_favorite_t) == 0x21);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::vx_channel_favorite_t::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::vx_channel_favorite_t::getCPtr
// Il2CppName: getCPtr
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::InteropServices::HandleRef (*)(::GlobalNamespace::vx_channel_favorite_t*)>(&GlobalNamespace::vx_channel_favorite_t::getCPtr)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("", "vx_channel_favorite_t")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_channel_favorite_t*), "getCPtr", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_channel_favorite_t::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_channel_favorite_t::*)()>(&GlobalNamespace::vx_channel_favorite_t::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_channel_favorite_t*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_channel_favorite_t::set_favorite_id
// Il2CppName: set_favorite_id
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_channel_favorite_t::*)(int)>(&GlobalNamespace::vx_channel_favorite_t::set_favorite_id)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_channel_favorite_t*), "set_favorite_id", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_channel_favorite_t::get_favorite_id
// Il2CppName: get_favorite_id
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::vx_channel_favorite_t::*)()>(&GlobalNamespace::vx_channel_favorite_t::get_favorite_id)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_channel_favorite_t*), "get_favorite_id", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_channel_favorite_t::set_favorite_group_id
// Il2CppName: set_favorite_group_id
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_channel_favorite_t::*)(int)>(&GlobalNamespace::vx_channel_favorite_t::set_favorite_group_id)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_channel_favorite_t*), "set_favorite_group_id", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_channel_favorite_t::get_favorite_group_id
// Il2CppName: get_favorite_group_id
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::vx_channel_favorite_t::*)()>(&GlobalNamespace::vx_channel_favorite_t::get_favorite_group_id)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_channel_favorite_t*), "get_favorite_group_id", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_channel_favorite_t::set_favorite_display_name
// Il2CppName: set_favorite_display_name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_channel_favorite_t::*)(::StringW)>(&GlobalNamespace::vx_channel_favorite_t::set_favorite_display_name)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_channel_favorite_t*), "set_favorite_display_name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_channel_favorite_t::get_favorite_display_name
// Il2CppName: get_favorite_display_name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::vx_channel_favorite_t::*)()>(&GlobalNamespace::vx_channel_favorite_t::get_favorite_display_name)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_channel_favorite_t*), "get_favorite_display_name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_channel_favorite_t::set_favorite_data
// Il2CppName: set_favorite_data
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_channel_favorite_t::*)(::StringW)>(&GlobalNamespace::vx_channel_favorite_t::set_favorite_data)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_channel_favorite_t*), "set_favorite_data", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_channel_favorite_t::get_favorite_data
// Il2CppName: get_favorite_data
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::vx_channel_favorite_t::*)()>(&GlobalNamespace::vx_channel_favorite_t::get_favorite_data)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_channel_favorite_t*), "get_favorite_data", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_channel_favorite_t::set_channel_uri
// Il2CppName: set_channel_uri
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_channel_favorite_t::*)(::StringW)>(&GlobalNamespace::vx_channel_favorite_t::set_channel_uri)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_channel_favorite_t*), "set_channel_uri", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_channel_favorite_t::get_channel_uri
// Il2CppName: get_channel_uri
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::vx_channel_favorite_t::*)()>(&GlobalNamespace::vx_channel_favorite_t::get_channel_uri)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_channel_favorite_t*), "get_channel_uri", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_channel_favorite_t::set_channel_description
// Il2CppName: set_channel_description
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_channel_favorite_t::*)(::StringW)>(&GlobalNamespace::vx_channel_favorite_t::set_channel_description)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_channel_favorite_t*), "set_channel_description", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_channel_favorite_t::get_channel_description
// Il2CppName: get_channel_description
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::vx_channel_favorite_t::*)()>(&GlobalNamespace::vx_channel_favorite_t::get_channel_description)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_channel_favorite_t*), "get_channel_description", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_channel_favorite_t::set_channel_limit
// Il2CppName: set_channel_limit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_channel_favorite_t::*)(int)>(&GlobalNamespace::vx_channel_favorite_t::set_channel_limit)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_channel_favorite_t*), "set_channel_limit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_channel_favorite_t::get_channel_limit
// Il2CppName: get_channel_limit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::vx_channel_favorite_t::*)()>(&GlobalNamespace::vx_channel_favorite_t::get_channel_limit)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_channel_favorite_t*), "get_channel_limit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_channel_favorite_t::set_channel_capacity
// Il2CppName: set_channel_capacity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_channel_favorite_t::*)(int)>(&GlobalNamespace::vx_channel_favorite_t::set_channel_capacity)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_channel_favorite_t*), "set_channel_capacity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_channel_favorite_t::get_channel_capacity
// Il2CppName: get_channel_capacity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::vx_channel_favorite_t::*)()>(&GlobalNamespace::vx_channel_favorite_t::get_channel_capacity)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_channel_favorite_t*), "get_channel_capacity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_channel_favorite_t::set_channel_modified
// Il2CppName: set_channel_modified
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_channel_favorite_t::*)(::StringW)>(&GlobalNamespace::vx_channel_favorite_t::set_channel_modified)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_channel_favorite_t*), "set_channel_modified", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_channel_favorite_t::get_channel_modified
// Il2CppName: get_channel_modified
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::vx_channel_favorite_t::*)()>(&GlobalNamespace::vx_channel_favorite_t::get_channel_modified)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_channel_favorite_t*), "get_channel_modified", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_channel_favorite_t::set_channel_owner_user_name
// Il2CppName: set_channel_owner_user_name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_channel_favorite_t::*)(::StringW)>(&GlobalNamespace::vx_channel_favorite_t::set_channel_owner_user_name)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_channel_favorite_t*), "set_channel_owner_user_name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_channel_favorite_t::get_channel_owner_user_name
// Il2CppName: get_channel_owner_user_name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::vx_channel_favorite_t::*)()>(&GlobalNamespace::vx_channel_favorite_t::get_channel_owner_user_name)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_channel_favorite_t*), "get_channel_owner_user_name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_channel_favorite_t::set_channel_is_persistent
// Il2CppName: set_channel_is_persistent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_channel_favorite_t::*)(int)>(&GlobalNamespace::vx_channel_favorite_t::set_channel_is_persistent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_channel_favorite_t*), "set_channel_is_persistent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_channel_favorite_t::get_channel_is_persistent
// Il2CppName: get_channel_is_persistent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::vx_channel_favorite_t::*)()>(&GlobalNamespace::vx_channel_favorite_t::get_channel_is_persistent)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_channel_favorite_t*), "get_channel_is_persistent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_channel_favorite_t::set_channel_is_protected
// Il2CppName: set_channel_is_protected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_channel_favorite_t::*)(int)>(&GlobalNamespace::vx_channel_favorite_t::set_channel_is_protected)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_channel_favorite_t*), "set_channel_is_protected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_channel_favorite_t::get_channel_is_protected
// Il2CppName: get_channel_is_protected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::vx_channel_favorite_t::*)()>(&GlobalNamespace::vx_channel_favorite_t::get_channel_is_protected)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_channel_favorite_t*), "get_channel_is_protected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_channel_favorite_t::set_channel_size
// Il2CppName: set_channel_size
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_channel_favorite_t::*)(int)>(&GlobalNamespace::vx_channel_favorite_t::set_channel_size)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_channel_favorite_t*), "set_channel_size", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_channel_favorite_t::get_channel_size
// Il2CppName: get_channel_size
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::vx_channel_favorite_t::*)()>(&GlobalNamespace::vx_channel_favorite_t::get_channel_size)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_channel_favorite_t*), "get_channel_size", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_channel_favorite_t::set_channel_owner
// Il2CppName: set_channel_owner
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_channel_favorite_t::*)(::StringW)>(&GlobalNamespace::vx_channel_favorite_t::set_channel_owner)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_channel_favorite_t*), "set_channel_owner", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_channel_favorite_t::get_channel_owner
// Il2CppName: get_channel_owner
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::vx_channel_favorite_t::*)()>(&GlobalNamespace::vx_channel_favorite_t::get_channel_owner)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_channel_favorite_t*), "get_channel_owner", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_channel_favorite_t::set_channel_owner_display_name
// Il2CppName: set_channel_owner_display_name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_channel_favorite_t::*)(::StringW)>(&GlobalNamespace::vx_channel_favorite_t::set_channel_owner_display_name)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_channel_favorite_t*), "set_channel_owner_display_name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_channel_favorite_t::get_channel_owner_display_name
// Il2CppName: get_channel_owner_display_name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::vx_channel_favorite_t::*)()>(&GlobalNamespace::vx_channel_favorite_t::get_channel_owner_display_name)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_channel_favorite_t*), "get_channel_owner_display_name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_channel_favorite_t::set_channel_active_participants
// Il2CppName: set_channel_active_participants
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_channel_favorite_t::*)(int)>(&GlobalNamespace::vx_channel_favorite_t::set_channel_active_participants)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_channel_favorite_t*), "set_channel_active_participants", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_channel_favorite_t::get_channel_active_participants
// Il2CppName: get_channel_active_participants
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::vx_channel_favorite_t::*)()>(&GlobalNamespace::vx_channel_favorite_t::get_channel_active_participants)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_channel_favorite_t*), "get_channel_active_participants", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_channel_favorite_t::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::vx_channel_favorite_t::Finalize
// Il2CppName: Finalize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_channel_favorite_t::*)()>(&GlobalNamespace::vx_channel_favorite_t::Finalize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_channel_favorite_t*), "Finalize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};