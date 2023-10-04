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
  // Forward declaring type: SWIGTYPE_p_p_p_vx_connectivity_test_result
  class SWIGTYPE_p_p_p_vx_connectivity_test_result;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::SWIGTYPE_p_p_p_vx_connectivity_test_result);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SWIGTYPE_p_p_p_vx_connectivity_test_result*, "", "SWIGTYPE_p_p_p_vx_connectivity_test_result");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: SWIGTYPE_p_p_p_vx_connectivity_test_result
  // [TokenAttribute] Offset: FFFFFFFF
  class SWIGTYPE_p_p_p_vx_connectivity_test_result : public ::Il2CppObject {
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
    // Offset: 0x1604F9C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SWIGTYPE_p_p_p_vx_connectivity_test_result* New_ctor(::System::IntPtr cPtr, bool futureUse) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::SWIGTYPE_p_p_p_vx_connectivity_test_result::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SWIGTYPE_p_p_p_vx_connectivity_test_result*, creationType>(cPtr, futureUse)));
    }
    // protected System.Void .ctor()
    // Offset: 0x1604FEC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SWIGTYPE_p_p_p_vx_connectivity_test_result* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::SWIGTYPE_p_p_p_vx_connectivity_test_result::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SWIGTYPE_p_p_p_vx_connectivity_test_result*, creationType>()));
    }
    // static System.Runtime.InteropServices.HandleRef getCPtr(SWIGTYPE_p_p_p_vx_connectivity_test_result obj)
    // Offset: 0x1605060
    static ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::SWIGTYPE_p_p_p_vx_connectivity_test_result* obj);
  }; // SWIGTYPE_p_p_p_vx_connectivity_test_result
  #pragma pack(pop)
  static check_size<sizeof(SWIGTYPE_p_p_p_vx_connectivity_test_result), 16 + sizeof(::System::Runtime::InteropServices::HandleRef)> __GlobalNamespace_SWIGTYPE_p_p_p_vx_connectivity_test_resultSizeCheck;
  static_assert(sizeof(SWIGTYPE_p_p_p_vx_connectivity_test_result) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::SWIGTYPE_p_p_p_vx_connectivity_test_result::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::SWIGTYPE_p_p_p_vx_connectivity_test_result::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::SWIGTYPE_p_p_p_vx_connectivity_test_result::getCPtr
// Il2CppName: getCPtr
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::InteropServices::HandleRef (*)(::GlobalNamespace::SWIGTYPE_p_p_p_vx_connectivity_test_result*)>(&GlobalNamespace::SWIGTYPE_p_p_p_vx_connectivity_test_result::getCPtr)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("", "SWIGTYPE_p_p_p_vx_connectivity_test_result")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SWIGTYPE_p_p_p_vx_connectivity_test_result*), "getCPtr", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};