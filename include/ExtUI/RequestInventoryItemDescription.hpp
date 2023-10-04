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
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: ExtUI
namespace ExtUI {
  // Forward declaring type: RequestInventoryItemDescription
  class RequestInventoryItemDescription;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::ExtUI::RequestInventoryItemDescription);
DEFINE_IL2CPP_ARG_TYPE(::ExtUI::RequestInventoryItemDescription*, "ExtUI", "RequestInventoryItemDescription");
// Type namespace: ExtUI
namespace ExtUI {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: ExtUI.RequestInventoryItemDescription
  // [TokenAttribute] Offset: FFFFFFFF
  class RequestInventoryItemDescription : public ::Il2CppObject {
    public:
    public:
    // public System.Byte requestType
    // Size: 0x1
    // Offset: 0x10
    uint8_t requestType;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // Padding between fields: requestType and: itemid
    char __padding0[0x7] = {};
    // public System.String itemid
    // Size: 0x8
    // Offset: 0x18
    ::StringW itemid;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Get instance field reference: public System.Byte requestType
    [[deprecated("Use field access instead!")]] uint8_t& dyn_requestType();
    // Get instance field reference: public System.String itemid
    [[deprecated("Use field access instead!")]] ::StringW& dyn_itemid();
    // public System.Void .ctor()
    // Offset: 0x28E4270
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RequestInventoryItemDescription* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::ExtUI::RequestInventoryItemDescription::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RequestInventoryItemDescription*, creationType>()));
    }
  }; // ExtUI.RequestInventoryItemDescription
  #pragma pack(pop)
  static check_size<sizeof(RequestInventoryItemDescription), 24 + sizeof(::StringW)> __ExtUI_RequestInventoryItemDescriptionSizeCheck;
  static_assert(sizeof(RequestInventoryItemDescription) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: ExtUI::RequestInventoryItemDescription::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!