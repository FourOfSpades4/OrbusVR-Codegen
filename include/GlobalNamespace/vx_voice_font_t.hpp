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
  // Forward declaring type: vx_font_type
  struct vx_font_type;
  // Forward declaring type: vx_font_status
  struct vx_font_status;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: vx_voice_font_t
  class vx_voice_font_t;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::vx_voice_font_t);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::vx_voice_font_t*, "", "vx_voice_font_t");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x21
  #pragma pack(push, 1)
  // Autogenerated type: vx_voice_font_t
  // [TokenAttribute] Offset: FFFFFFFF
  class vx_voice_font_t : public ::Il2CppObject/*, public ::System::IDisposable*/ {
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
    // Offset: 0x2826114
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static vx_voice_font_t* New_ctor(::System::IntPtr cPtr, bool cMemoryOwn) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::vx_voice_font_t::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<vx_voice_font_t*, creationType>(cPtr, cMemoryOwn)));
    }
    // static System.Runtime.InteropServices.HandleRef getCPtr(vx_voice_font_t obj)
    // Offset: 0x2826178
    static ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::vx_voice_font_t* obj);
    // public System.Void Dispose()
    // Offset: 0x2826268
    void Dispose();
    // public System.Void set_id(System.Int32 value)
    // Offset: 0x28263D8
    void set_id(int value);
    // public System.Int32 get_id()
    // Offset: 0x2826458
    int get_id();
    // public System.Void set_parent_id(System.Int32 value)
    // Offset: 0x28264C8
    void set_parent_id(int value);
    // public System.Int32 get_parent_id()
    // Offset: 0x2826548
    int get_parent_id();
    // public System.Void set_type(vx_font_type value)
    // Offset: 0x28265B8
    void set_type(::GlobalNamespace::vx_font_type value);
    // public vx_font_type get_type()
    // Offset: 0x2826638
    ::GlobalNamespace::vx_font_type get_type();
    // public System.Void set_name(System.String value)
    // Offset: 0x28266A8
    void set_name(::StringW value);
    // public System.String get_name()
    // Offset: 0x2826728
    ::StringW get_name();
    // public System.Void set_description(System.String value)
    // Offset: 0x2826798
    void set_description(::StringW value);
    // public System.String get_description()
    // Offset: 0x2826818
    ::StringW get_description();
    // public System.Void set_expiration_date(System.String value)
    // Offset: 0x2826888
    void set_expiration_date(::StringW value);
    // public System.String get_expiration_date()
    // Offset: 0x2826908
    ::StringW get_expiration_date();
    // public System.Void set_expired(System.Int32 value)
    // Offset: 0x2826978
    void set_expired(int value);
    // public System.Int32 get_expired()
    // Offset: 0x28269F8
    int get_expired();
    // public System.Void set_font_delta(System.String value)
    // Offset: 0x2826A68
    void set_font_delta(::StringW value);
    // public System.String get_font_delta()
    // Offset: 0x2826AE8
    ::StringW get_font_delta();
    // public System.Void set_font_rules(System.String value)
    // Offset: 0x2826B58
    void set_font_rules(::StringW value);
    // public System.String get_font_rules()
    // Offset: 0x2826BD8
    ::StringW get_font_rules();
    // public System.Void set_status(vx_font_status value)
    // Offset: 0x2826C48
    void set_status(::GlobalNamespace::vx_font_status value);
    // public vx_font_status get_status()
    // Offset: 0x2826CC8
    ::GlobalNamespace::vx_font_status get_status();
    // public System.Void .ctor()
    // Offset: 0x2826D38
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static vx_voice_font_t* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::vx_voice_font_t::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<vx_voice_font_t*, creationType>()));
    }
    // protected override System.Void Finalize()
    // Offset: 0x28261EC
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
  }; // vx_voice_font_t
  #pragma pack(pop)
  static check_size<sizeof(vx_voice_font_t), 32 + sizeof(bool)> __GlobalNamespace_vx_voice_font_tSizeCheck;
  static_assert(sizeof(vx_voice_font_t) == 0x21);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::vx_voice_font_t::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::vx_voice_font_t::getCPtr
// Il2CppName: getCPtr
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::InteropServices::HandleRef (*)(::GlobalNamespace::vx_voice_font_t*)>(&GlobalNamespace::vx_voice_font_t::getCPtr)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("", "vx_voice_font_t")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_voice_font_t*), "getCPtr", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_voice_font_t::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_voice_font_t::*)()>(&GlobalNamespace::vx_voice_font_t::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_voice_font_t*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_voice_font_t::set_id
// Il2CppName: set_id
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_voice_font_t::*)(int)>(&GlobalNamespace::vx_voice_font_t::set_id)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_voice_font_t*), "set_id", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_voice_font_t::get_id
// Il2CppName: get_id
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::vx_voice_font_t::*)()>(&GlobalNamespace::vx_voice_font_t::get_id)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_voice_font_t*), "get_id", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_voice_font_t::set_parent_id
// Il2CppName: set_parent_id
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_voice_font_t::*)(int)>(&GlobalNamespace::vx_voice_font_t::set_parent_id)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_voice_font_t*), "set_parent_id", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_voice_font_t::get_parent_id
// Il2CppName: get_parent_id
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::vx_voice_font_t::*)()>(&GlobalNamespace::vx_voice_font_t::get_parent_id)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_voice_font_t*), "get_parent_id", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_voice_font_t::set_type
// Il2CppName: set_type
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_voice_font_t::*)(::GlobalNamespace::vx_font_type)>(&GlobalNamespace::vx_voice_font_t::set_type)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "vx_font_type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_voice_font_t*), "set_type", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_voice_font_t::get_type
// Il2CppName: get_type
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::vx_font_type (GlobalNamespace::vx_voice_font_t::*)()>(&GlobalNamespace::vx_voice_font_t::get_type)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_voice_font_t*), "get_type", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_voice_font_t::set_name
// Il2CppName: set_name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_voice_font_t::*)(::StringW)>(&GlobalNamespace::vx_voice_font_t::set_name)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_voice_font_t*), "set_name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_voice_font_t::get_name
// Il2CppName: get_name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::vx_voice_font_t::*)()>(&GlobalNamespace::vx_voice_font_t::get_name)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_voice_font_t*), "get_name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_voice_font_t::set_description
// Il2CppName: set_description
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_voice_font_t::*)(::StringW)>(&GlobalNamespace::vx_voice_font_t::set_description)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_voice_font_t*), "set_description", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_voice_font_t::get_description
// Il2CppName: get_description
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::vx_voice_font_t::*)()>(&GlobalNamespace::vx_voice_font_t::get_description)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_voice_font_t*), "get_description", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_voice_font_t::set_expiration_date
// Il2CppName: set_expiration_date
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_voice_font_t::*)(::StringW)>(&GlobalNamespace::vx_voice_font_t::set_expiration_date)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_voice_font_t*), "set_expiration_date", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_voice_font_t::get_expiration_date
// Il2CppName: get_expiration_date
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::vx_voice_font_t::*)()>(&GlobalNamespace::vx_voice_font_t::get_expiration_date)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_voice_font_t*), "get_expiration_date", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_voice_font_t::set_expired
// Il2CppName: set_expired
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_voice_font_t::*)(int)>(&GlobalNamespace::vx_voice_font_t::set_expired)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_voice_font_t*), "set_expired", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_voice_font_t::get_expired
// Il2CppName: get_expired
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::vx_voice_font_t::*)()>(&GlobalNamespace::vx_voice_font_t::get_expired)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_voice_font_t*), "get_expired", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_voice_font_t::set_font_delta
// Il2CppName: set_font_delta
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_voice_font_t::*)(::StringW)>(&GlobalNamespace::vx_voice_font_t::set_font_delta)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_voice_font_t*), "set_font_delta", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_voice_font_t::get_font_delta
// Il2CppName: get_font_delta
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::vx_voice_font_t::*)()>(&GlobalNamespace::vx_voice_font_t::get_font_delta)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_voice_font_t*), "get_font_delta", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_voice_font_t::set_font_rules
// Il2CppName: set_font_rules
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_voice_font_t::*)(::StringW)>(&GlobalNamespace::vx_voice_font_t::set_font_rules)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_voice_font_t*), "set_font_rules", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_voice_font_t::get_font_rules
// Il2CppName: get_font_rules
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::vx_voice_font_t::*)()>(&GlobalNamespace::vx_voice_font_t::get_font_rules)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_voice_font_t*), "get_font_rules", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_voice_font_t::set_status
// Il2CppName: set_status
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_voice_font_t::*)(::GlobalNamespace::vx_font_status)>(&GlobalNamespace::vx_voice_font_t::set_status)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "vx_font_status")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_voice_font_t*), "set_status", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_voice_font_t::get_status
// Il2CppName: get_status
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::vx_font_status (GlobalNamespace::vx_voice_font_t::*)()>(&GlobalNamespace::vx_voice_font_t::get_status)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_voice_font_t*), "get_status", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::vx_voice_font_t::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::vx_voice_font_t::Finalize
// Il2CppName: Finalize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::vx_voice_font_t::*)()>(&GlobalNamespace::vx_voice_font_t::Finalize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::vx_voice_font_t*), "Finalize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};