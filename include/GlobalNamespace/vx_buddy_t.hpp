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
  // Forward declaring type: vx_buddy_t
  class vx_buddy_t;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::vx_buddy_t);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::vx_buddy_t*, "", "vx_buddy_t");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x21
  #pragma pack(push, 1)
  // Autogenerated type: vx_buddy_t
  // [TokenAttribute] Offset: FFFFFFFF
  class vx_buddy_t : public ::Il2CppObject/*, public ::System::IDisposable*/ {
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
    // Offset: 0x12DF868
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static vx_buddy_t* New_ctor(::System::IntPtr cPtr, bool cMemoryOwn) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::vx_buddy_t::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<vx_buddy_t*, creationType>(cPtr, cMemoryOwn)));
    }
    // static System.Runtime.InteropServices.HandleRef getCPtr(vx_buddy_t obj)
    // Offset: 0x12DF8CC
    static ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::vx_buddy_t* obj);
    // public System.Void Dispose()
    // Offset: 0x12DF9BC
    void Dispose();
    // public System.Void set_buddy_uri(System.String value)
    // Offset: 0x12DFB2C
    void set_buddy_uri(::StringW value);
    // public System.String get_buddy_uri()
    // Offset: 0x12DFBAC
    ::StringW get_buddy_uri();
    // public System.Void set_display_name(System.String value)
    // Offset: 0x12DFC1C
    void set_display_name(::StringW value);
    // public System.String get_display_name()
    // Offset: 0x12DFC9C
    ::StringW get_display_name();
    // public System.Void set_parent_group_id(System.Int32 value)
    // Offset: 0x12DFD0C
    void set_parent_group_id(int value);
    // public System.Int32 get_parent_group_id()
    // Offset: 0x12DFD8C
    int get_parent_group_id();
    // public System.Void set_buddy_data(System.String value)
    // Offset: 0x12DFDFC
    void set_buddy_data(::StringW value);
    // public System.String get_buddy_data()
    // Offset: 0x12DFE7C
    ::StringW get_buddy_data();
    // public System.Void set_account_id(System.Int32 value)
    // Offset: 0x12DFEEC
    void set_account_id(int value);
    // public System.Int32 get_account_id()
    // Offset: 0x12DFF6C
    int get_account_id();
    // public System.Void set_account_name(System.String value)
    // Offset: 0x12DFFDC
    void set_account_name(::StringW value);
    // public System.String get_account_name()
    // Offset: 0x12E005C
    ::StringW get_account_name();
    // public System.Void .ctor()
    // Offset: 0x12E00CC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static vx_buddy_t* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::vx_buddy_t::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<vx_buddy_t*, creationType>()));
    }
    // protected override System.Void Finalize()
    // Offset: 0x12DF940
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
  }; // vx_buddy_t
  #pragma pack(pop)
  static check_size<sizeof(vx_buddy_t), 32 + sizeof(bool)> __GlobalNamespace_vx_buddy_tSizeCheck;
  static_assert(sizeof(vx_buddy_t) == 0x21);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::vx_buddy_t::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::vx_buddy_t::getCPtr
// Il2CppName: getCPtr
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::InteropServices::HandleRef (*)(::GlobalNamespace::vx_buddy_t*)>(&GlobalNamespace::vx_buddy_t::getCPtr)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("", "vx_buddy_t")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_buddy_t*), "getCPtr", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_buddy_t::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_buddy_t::*)()>(&GlobalNamespace::vx_buddy_t::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_buddy_t*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_buddy_t::set_buddy_uri
// Il2CppName: set_buddy_uri
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_buddy_t::*)(::StringW)>(&GlobalNamespace::vx_buddy_t::set_buddy_uri)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_buddy_t*), "set_buddy_uri", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_buddy_t::get_buddy_uri
// Il2CppName: get_buddy_uri
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::vx_buddy_t::*)()>(&GlobalNamespace::vx_buddy_t::get_buddy_uri)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_buddy_t*), "get_buddy_uri", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_buddy_t::set_display_name
// Il2CppName: set_display_name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_buddy_t::*)(::StringW)>(&GlobalNamespace::vx_buddy_t::set_display_name)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_buddy_t*), "set_display_name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_buddy_t::get_display_name
// Il2CppName: get_display_name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::vx_buddy_t::*)()>(&GlobalNamespace::vx_buddy_t::get_display_name)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_buddy_t*), "get_display_name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_buddy_t::set_parent_group_id
// Il2CppName: set_parent_group_id
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_buddy_t::*)(int)>(&GlobalNamespace::vx_buddy_t::set_parent_group_id)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_buddy_t*), "set_parent_group_id", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_buddy_t::get_parent_group_id
// Il2CppName: get_parent_group_id
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::vx_buddy_t::*)()>(&GlobalNamespace::vx_buddy_t::get_parent_group_id)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_buddy_t*), "get_parent_group_id", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_buddy_t::set_buddy_data
// Il2CppName: set_buddy_data
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_buddy_t::*)(::StringW)>(&GlobalNamespace::vx_buddy_t::set_buddy_data)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_buddy_t*), "set_buddy_data", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_buddy_t::get_buddy_data
// Il2CppName: get_buddy_data
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::vx_buddy_t::*)()>(&GlobalNamespace::vx_buddy_t::get_buddy_data)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_buddy_t*), "get_buddy_data", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_buddy_t::set_account_id
// Il2CppName: set_account_id
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_buddy_t::*)(int)>(&GlobalNamespace::vx_buddy_t::set_account_id)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_buddy_t*), "set_account_id", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_buddy_t::get_account_id
// Il2CppName: get_account_id
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::vx_buddy_t::*)()>(&GlobalNamespace::vx_buddy_t::get_account_id)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_buddy_t*), "get_account_id", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_buddy_t::set_account_name
// Il2CppName: set_account_name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_buddy_t::*)(::StringW)>(&GlobalNamespace::vx_buddy_t::set_account_name)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_buddy_t*), "set_account_name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_buddy_t::get_account_name
// Il2CppName: get_account_name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::vx_buddy_t::*)()>(&GlobalNamespace::vx_buddy_t::get_account_name)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_buddy_t*), "get_account_name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_buddy_t::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::vx_buddy_t::Finalize
// Il2CppName: Finalize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_buddy_t::*)()>(&GlobalNamespace::vx_buddy_t::Finalize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_buddy_t*), "Finalize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
