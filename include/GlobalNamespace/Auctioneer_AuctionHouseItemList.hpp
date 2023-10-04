// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Auctioneer
#include "GlobalNamespace/Auctioneer.hpp"
// Including type: AuctionHouseMenu
#include "GlobalNamespace/AuctionHouseMenu.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::Auctioneer::AuctionHouseItemList);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::Auctioneer::AuctionHouseItemList*, "", "Auctioneer/AuctionHouseItemList");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Auctioneer/AuctionHouseItemList
  // [TokenAttribute] Offset: FFFFFFFF
  class Auctioneer::AuctionHouseItemList : public ::Il2CppObject {
    public:
    public:
    // public AuctionHouseMenu/AuctionHouseItem[] items
    // Size: 0x8
    // Offset: 0x10
    ::ArrayW<::GlobalNamespace::AuctionHouseMenu::AuctionHouseItem*> items;
    // Field size check
    static_assert(sizeof(::ArrayW<::GlobalNamespace::AuctionHouseMenu::AuctionHouseItem*>) == 0x8);
    public:
    // Creating conversion operator: operator ::ArrayW<::GlobalNamespace::AuctionHouseMenu::AuctionHouseItem*>
    constexpr operator ::ArrayW<::GlobalNamespace::AuctionHouseMenu::AuctionHouseItem*>() const noexcept {
      return items;
    }
    // Get instance field reference: public AuctionHouseMenu/AuctionHouseItem[] items
    [[deprecated("Use field access instead!")]] ::ArrayW<::GlobalNamespace::AuctionHouseMenu::AuctionHouseItem*>& dyn_items();
    // public System.Void .ctor()
    // Offset: 0x12B1E5C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Auctioneer::AuctionHouseItemList* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::Auctioneer::AuctionHouseItemList::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Auctioneer::AuctionHouseItemList*, creationType>()));
    }
  }; // Auctioneer/AuctionHouseItemList
  #pragma pack(pop)
  static check_size<sizeof(Auctioneer::AuctionHouseItemList), 16 + sizeof(::ArrayW<::GlobalNamespace::AuctionHouseMenu::AuctionHouseItem*>)> __GlobalNamespace_Auctioneer_AuctionHouseItemListSizeCheck;
  static_assert(sizeof(Auctioneer::AuctionHouseItemList) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::Auctioneer::AuctionHouseItemList::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
