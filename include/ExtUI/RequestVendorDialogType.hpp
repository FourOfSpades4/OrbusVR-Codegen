// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: ExtUI
namespace ExtUI {
  // Forward declaring type: RequestVendorDialogType
  class RequestVendorDialogType;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::ExtUI::RequestVendorDialogType);
DEFINE_IL2CPP_ARG_TYPE(::ExtUI::RequestVendorDialogType*, "ExtUI", "RequestVendorDialogType");
// Type namespace: ExtUI
namespace ExtUI {
  // Size: 0x14
  #pragma pack(push, 1)
  // Autogenerated type: ExtUI.RequestVendorDialogType
  // [TokenAttribute] Offset: FFFFFFFF
  class RequestVendorDialogType : public ::Il2CppObject {
    public:
    public:
    // public System.Byte requestType
    // Size: 0x1
    // Offset: 0x10
    uint8_t requestType;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // Padding between fields: requestType and: vendorGuid
    char __padding0[0x1] = {};
    // public System.UInt16 vendorGuid
    // Size: 0x2
    // Offset: 0x12
    uint16_t vendorGuid;
    // Field size check
    static_assert(sizeof(uint16_t) == 0x2);
    public:
    // Get instance field reference: public System.Byte requestType
    [[deprecated("Use field access instead!")]] uint8_t& dyn_requestType();
    // Get instance field reference: public System.UInt16 vendorGuid
    [[deprecated("Use field access instead!")]] uint16_t& dyn_vendorGuid();
    // public System.Void .ctor()
    // Offset: 0x28E927C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RequestVendorDialogType* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::ExtUI::RequestVendorDialogType::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RequestVendorDialogType*, creationType>()));
    }
  }; // ExtUI.RequestVendorDialogType
  #pragma pack(pop)
  static check_size<sizeof(RequestVendorDialogType), 18 + sizeof(uint16_t)> __ExtUI_RequestVendorDialogTypeSizeCheck;
  static_assert(sizeof(RequestVendorDialogType) == 0x14);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: ExtUI::RequestVendorDialogType::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!