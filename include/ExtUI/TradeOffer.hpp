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
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: ExtUI
namespace ExtUI {
  // Forward declaring type: InventoryItemInstance
  class InventoryItemInstance;
}
// Completed forward declares
// Type namespace: ExtUI
namespace ExtUI {
  // Forward declaring type: TradeOffer
  class TradeOffer;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::ExtUI::TradeOffer);
DEFINE_IL2CPP_ARG_TYPE(::ExtUI::TradeOffer*, "ExtUI", "TradeOffer");
// Type namespace: ExtUI
namespace ExtUI {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: ExtUI.TradeOffer
  // [TokenAttribute] Offset: FFFFFFFF
  class TradeOffer : public ::Il2CppObject {
    public:
    public:
    // public System.String myOffer
    // Size: 0x8
    // Offset: 0x10
    ::StringW myOffer;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String theirOffer
    // Size: 0x8
    // Offset: 0x18
    ::StringW theirOffer;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String theirName
    // Size: 0x8
    // Offset: 0x20
    ::StringW theirName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Boolean haveIAccepted
    // Size: 0x1
    // Offset: 0x28
    bool haveIAccepted;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean haveTheyAccepted
    // Size: 0x1
    // Offset: 0x29
    bool haveTheyAccepted;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: haveTheyAccepted and: myCurrencyOffer
    char __padding4[0x2] = {};
    // public System.Int32 myCurrencyOffer
    // Size: 0x4
    // Offset: 0x2C
    int myCurrencyOffer;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 theirCurrencyOffer
    // Size: 0x4
    // Offset: 0x30
    int theirCurrencyOffer;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: theirCurrencyOffer and: myOfferInstance
    char __padding6[0x4] = {};
    // public ExtUI.InventoryItemInstance[] myOfferInstance
    // Size: 0x8
    // Offset: 0x38
    ::ArrayW<::ExtUI::InventoryItemInstance*> myOfferInstance;
    // Field size check
    static_assert(sizeof(::ArrayW<::ExtUI::InventoryItemInstance*>) == 0x8);
    // public ExtUI.InventoryItemInstance[] theirOfferInstance
    // Size: 0x8
    // Offset: 0x40
    ::ArrayW<::ExtUI::InventoryItemInstance*> theirOfferInstance;
    // Field size check
    static_assert(sizeof(::ArrayW<::ExtUI::InventoryItemInstance*>) == 0x8);
    public:
    // Get instance field reference: public System.String myOffer
    [[deprecated("Use field access instead!")]] ::StringW& dyn_myOffer();
    // Get instance field reference: public System.String theirOffer
    [[deprecated("Use field access instead!")]] ::StringW& dyn_theirOffer();
    // Get instance field reference: public System.String theirName
    [[deprecated("Use field access instead!")]] ::StringW& dyn_theirName();
    // Get instance field reference: public System.Boolean haveIAccepted
    [[deprecated("Use field access instead!")]] bool& dyn_haveIAccepted();
    // Get instance field reference: public System.Boolean haveTheyAccepted
    [[deprecated("Use field access instead!")]] bool& dyn_haveTheyAccepted();
    // Get instance field reference: public System.Int32 myCurrencyOffer
    [[deprecated("Use field access instead!")]] int& dyn_myCurrencyOffer();
    // Get instance field reference: public System.Int32 theirCurrencyOffer
    [[deprecated("Use field access instead!")]] int& dyn_theirCurrencyOffer();
    // Get instance field reference: public ExtUI.InventoryItemInstance[] myOfferInstance
    [[deprecated("Use field access instead!")]] ::ArrayW<::ExtUI::InventoryItemInstance*>& dyn_myOfferInstance();
    // Get instance field reference: public ExtUI.InventoryItemInstance[] theirOfferInstance
    [[deprecated("Use field access instead!")]] ::ArrayW<::ExtUI::InventoryItemInstance*>& dyn_theirOfferInstance();
    // public System.Void UpdateItemInstances()
    // Offset: 0x28D5E50
    void UpdateItemInstances();
    // public System.Void .ctor()
    // Offset: 0x28D5DE0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TradeOffer* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::ExtUI::TradeOffer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TradeOffer*, creationType>()));
    }
  }; // ExtUI.TradeOffer
  #pragma pack(pop)
  static check_size<sizeof(TradeOffer), 64 + sizeof(::ArrayW<::ExtUI::InventoryItemInstance*>)> __ExtUI_TradeOfferSizeCheck;
  static_assert(sizeof(TradeOffer) == 0x48);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: ExtUI::TradeOffer::UpdateItemInstances
// Il2CppName: UpdateItemInstances
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (ExtUI::TradeOffer::*)()>(&ExtUI::TradeOffer::UpdateItemInstances)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ExtUI::TradeOffer*), "UpdateItemInstances", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: ExtUI::TradeOffer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
