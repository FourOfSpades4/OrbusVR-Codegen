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
  // Forward declaring type: vx_channel_favorite_group_t
  class vx_channel_favorite_group_t;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::vx_channel_favorite_group_t);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::vx_channel_favorite_group_t*, "", "vx_channel_favorite_group_t");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x21
  #pragma pack(push, 1)
  // Autogenerated type: vx_channel_favorite_group_t
  // [TokenAttribute] Offset: FFFFFFFF
  class vx_channel_favorite_group_t : public ::Il2CppObject/*, public ::System::IDisposable*/ {
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
    // Offset: 0x12E2874
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static vx_channel_favorite_group_t* New_ctor(::System::IntPtr cPtr, bool cMemoryOwn) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::vx_channel_favorite_group_t::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<vx_channel_favorite_group_t*, creationType>(cPtr, cMemoryOwn)));
    }
    // static System.Runtime.InteropServices.HandleRef getCPtr(vx_channel_favorite_group_t obj)
    // Offset: 0x12E28D8
    static ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::vx_channel_favorite_group_t* obj);
    // public System.Void Dispose()
    // Offset: 0x12E29C8
    void Dispose();
    // public System.Void set_favorite_group_id(System.Int32 value)
    // Offset: 0x12E2B38
    void set_favorite_group_id(int value);
    // public System.Int32 get_favorite_group_id()
    // Offset: 0x12E2BB8
    int get_favorite_group_id();
    // public System.Void set_favorite_group_name(System.String value)
    // Offset: 0x12E2C28
    void set_favorite_group_name(::StringW value);
    // public System.String get_favorite_group_name()
    // Offset: 0x12E2CA8
    ::StringW get_favorite_group_name();
    // public System.Void set_favorite_group_data(System.String value)
    // Offset: 0x12E2D18
    void set_favorite_group_data(::StringW value);
    // public System.String get_favorite_group_data()
    // Offset: 0x12E2D98
    ::StringW get_favorite_group_data();
    // public System.Void set_favorite_group_modified(System.String value)
    // Offset: 0x12E2E08
    void set_favorite_group_modified(::StringW value);
    // public System.String get_favorite_group_modified()
    // Offset: 0x12E2E88
    ::StringW get_favorite_group_modified();
    // public System.Void .ctor()
    // Offset: 0x12E2EF8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static vx_channel_favorite_group_t* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::vx_channel_favorite_group_t::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<vx_channel_favorite_group_t*, creationType>()));
    }
    // protected override System.Void Finalize()
    // Offset: 0x12E294C
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
  }; // vx_channel_favorite_group_t
  #pragma pack(pop)
  static check_size<sizeof(vx_channel_favorite_group_t), 32 + sizeof(bool)> __GlobalNamespace_vx_channel_favorite_group_tSizeCheck;
  static_assert(sizeof(vx_channel_favorite_group_t) == 0x21);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::vx_channel_favorite_group_t::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::vx_channel_favorite_group_t::getCPtr
// Il2CppName: getCPtr
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::InteropServices::HandleRef (*)(::GlobalNamespace::vx_channel_favorite_group_t*)>(&GlobalNamespace::vx_channel_favorite_group_t::getCPtr)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("", "vx_channel_favorite_group_t")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_channel_favorite_group_t*), "getCPtr", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_channel_favorite_group_t::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_channel_favorite_group_t::*)()>(&GlobalNamespace::vx_channel_favorite_group_t::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_channel_favorite_group_t*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_channel_favorite_group_t::set_favorite_group_id
// Il2CppName: set_favorite_group_id
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_channel_favorite_group_t::*)(int)>(&GlobalNamespace::vx_channel_favorite_group_t::set_favorite_group_id)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_channel_favorite_group_t*), "set_favorite_group_id", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_channel_favorite_group_t::get_favorite_group_id
// Il2CppName: get_favorite_group_id
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::vx_channel_favorite_group_t::*)()>(&GlobalNamespace::vx_channel_favorite_group_t::get_favorite_group_id)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_channel_favorite_group_t*), "get_favorite_group_id", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_channel_favorite_group_t::set_favorite_group_name
// Il2CppName: set_favorite_group_name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_channel_favorite_group_t::*)(::StringW)>(&GlobalNamespace::vx_channel_favorite_group_t::set_favorite_group_name)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_channel_favorite_group_t*), "set_favorite_group_name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_channel_favorite_group_t::get_favorite_group_name
// Il2CppName: get_favorite_group_name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::vx_channel_favorite_group_t::*)()>(&GlobalNamespace::vx_channel_favorite_group_t::get_favorite_group_name)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_channel_favorite_group_t*), "get_favorite_group_name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_channel_favorite_group_t::set_favorite_group_data
// Il2CppName: set_favorite_group_data
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_channel_favorite_group_t::*)(::StringW)>(&GlobalNamespace::vx_channel_favorite_group_t::set_favorite_group_data)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_channel_favorite_group_t*), "set_favorite_group_data", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_channel_favorite_group_t::get_favorite_group_data
// Il2CppName: get_favorite_group_data
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::vx_channel_favorite_group_t::*)()>(&GlobalNamespace::vx_channel_favorite_group_t::get_favorite_group_data)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_channel_favorite_group_t*), "get_favorite_group_data", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_channel_favorite_group_t::set_favorite_group_modified
// Il2CppName: set_favorite_group_modified
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_channel_favorite_group_t::*)(::StringW)>(&GlobalNamespace::vx_channel_favorite_group_t::set_favorite_group_modified)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_channel_favorite_group_t*), "set_favorite_group_modified", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_channel_favorite_group_t::get_favorite_group_modified
// Il2CppName: get_favorite_group_modified
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::vx_channel_favorite_group_t::*)()>(&GlobalNamespace::vx_channel_favorite_group_t::get_favorite_group_modified)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_channel_favorite_group_t*), "get_favorite_group_modified", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_channel_favorite_group_t::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::vx_channel_favorite_group_t::Finalize
// Il2CppName: Finalize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_channel_favorite_group_t::*)()>(&GlobalNamespace::vx_channel_favorite_group_t::Finalize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_channel_favorite_group_t*), "Finalize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
