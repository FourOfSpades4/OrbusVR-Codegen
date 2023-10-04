// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Runtime.InteropServices.HandleRef
#include "System/Runtime/InteropServices/HandleRef.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: SWIGTYPE_p_p_vx_req_account_buddy_delete
  class SWIGTYPE_p_p_vx_req_account_buddy_delete;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::SWIGTYPE_p_p_vx_req_account_buddy_delete);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SWIGTYPE_p_p_vx_req_account_buddy_delete*, "", "SWIGTYPE_p_p_vx_req_account_buddy_delete");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: SWIGTYPE_p_p_vx_req_account_buddy_delete
  // [TokenAttribute] Offset: FFFFFFFF
  class SWIGTYPE_p_p_vx_req_account_buddy_delete : public ::Il2CppObject {
    public:
    public:
    // private System.Runtime.InteropServices.HandleRef swigCPtr
    // Size: 0x10
    // Offset: 0x10
    ::System::Runtime::InteropServices::HandleRef swigCPtr;
    // Field size check
    static_assert(sizeof(::System::Runtime::InteropServices::HandleRef) == 0x10);
    public:
    // Creating conversion operator: operator ::System::Runtime::InteropServices::HandleRef
    constexpr operator ::System::Runtime::InteropServices::HandleRef() const noexcept {
      return swigCPtr;
    }
    // Get instance field reference: private System.Runtime.InteropServices.HandleRef swigCPtr
    [[deprecated("Use field access instead!")]] ::System::Runtime::InteropServices::HandleRef& dyn_swigCPtr();
    // System.Void .ctor(System.IntPtr cPtr, System.Boolean futureUse)
    // Offset: 0x16077D4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SWIGTYPE_p_p_vx_req_account_buddy_delete* New_ctor(::System::IntPtr cPtr, bool futureUse) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::SWIGTYPE_p_p_vx_req_account_buddy_delete::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SWIGTYPE_p_p_vx_req_account_buddy_delete*, creationType>(cPtr, futureUse)));
    }
    // protected System.Void .ctor()
    // Offset: 0x1607824
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SWIGTYPE_p_p_vx_req_account_buddy_delete* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::SWIGTYPE_p_p_vx_req_account_buddy_delete::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SWIGTYPE_p_p_vx_req_account_buddy_delete*, creationType>()));
    }
    // static System.Runtime.InteropServices.HandleRef getCPtr(SWIGTYPE_p_p_vx_req_account_buddy_delete obj)
    // Offset: 0x1607898
    static ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::SWIGTYPE_p_p_vx_req_account_buddy_delete* obj);
  }; // SWIGTYPE_p_p_vx_req_account_buddy_delete
  #pragma pack(pop)
  static check_size<sizeof(SWIGTYPE_p_p_vx_req_account_buddy_delete), 16 + sizeof(::System::Runtime::InteropServices::HandleRef)> __GlobalNamespace_SWIGTYPE_p_p_vx_req_account_buddy_deleteSizeCheck;
  static_assert(sizeof(SWIGTYPE_p_p_vx_req_account_buddy_delete) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::SWIGTYPE_p_p_vx_req_account_buddy_delete::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::SWIGTYPE_p_p_vx_req_account_buddy_delete::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::SWIGTYPE_p_p_vx_req_account_buddy_delete::getCPtr
// Il2CppName: getCPtr
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::InteropServices::HandleRef (*)(::GlobalNamespace::SWIGTYPE_p_p_vx_req_account_buddy_delete*)>(&GlobalNamespace::SWIGTYPE_p_p_vx_req_account_buddy_delete::getCPtr)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("", "SWIGTYPE_p_p_vx_req_account_buddy_delete")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SWIGTYPE_p_p_vx_req_account_buddy_delete*), "getCPtr", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
