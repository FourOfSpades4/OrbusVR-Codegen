// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.CustomYieldInstruction
#include "UnityEngine/CustomYieldInstruction.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: ExtUI
namespace ExtUI {
  // Forward declaring type: DataRequest
  class DataRequest;
}
// Completed forward declares
// Type namespace: ExtUI
namespace ExtUI {
  // Forward declaring type: WaitforRequestResponse
  class WaitforRequestResponse;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::ExtUI::WaitforRequestResponse);
DEFINE_IL2CPP_ARG_TYPE(::ExtUI::WaitforRequestResponse*, "ExtUI", "WaitforRequestResponse");
// Type namespace: ExtUI
namespace ExtUI {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: ExtUI.WaitforRequestResponse
  // [TokenAttribute] Offset: FFFFFFFF
  class WaitforRequestResponse : public ::UnityEngine::CustomYieldInstruction {
    public:
    public:
    // private ExtUI.DataRequest request
    // Size: 0x8
    // Offset: 0x10
    ::ExtUI::DataRequest* request;
    // Field size check
    static_assert(sizeof(::ExtUI::DataRequest*) == 0x8);
    public:
    // Creating conversion operator: operator ::ExtUI::DataRequest*
    constexpr operator ::ExtUI::DataRequest*() const noexcept {
      return request;
    }
    // Get instance field reference: private ExtUI.DataRequest request
    [[deprecated("Use field access instead!")]] ::ExtUI::DataRequest*& dyn_request();
    // public System.Void .ctor(ExtUI.DataRequest request)
    // Offset: 0x28E947C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WaitforRequestResponse* New_ctor(::ExtUI::DataRequest* request) {
      static auto ___internal__logger = ::Logger::get().WithContext("::ExtUI::WaitforRequestResponse::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WaitforRequestResponse*, creationType>(request)));
    }
    // public override System.Boolean get_keepWaiting()
    // Offset: 0x28E9448
    // Implemented from: UnityEngine.CustomYieldInstruction
    // Base method: System.Boolean CustomYieldInstruction::get_keepWaiting()
    bool get_keepWaiting();
  }; // ExtUI.WaitforRequestResponse
  #pragma pack(pop)
  static check_size<sizeof(WaitforRequestResponse), 16 + sizeof(::ExtUI::DataRequest*)> __ExtUI_WaitforRequestResponseSizeCheck;
  static_assert(sizeof(WaitforRequestResponse) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: ExtUI::WaitforRequestResponse::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: ExtUI::WaitforRequestResponse::get_keepWaiting
// Il2CppName: get_keepWaiting
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (ExtUI::WaitforRequestResponse::*)()>(&ExtUI::WaitforRequestResponse::get_keepWaiting)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ExtUI::WaitforRequestResponse*), "get_keepWaiting", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};