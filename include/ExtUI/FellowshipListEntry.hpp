// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: ExtUI.FriendsListEntry
#include "ExtUI/FriendsListEntry.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: ExtUI
namespace ExtUI {
  // Forward declaring type: FellowshipListEntry
  class FellowshipListEntry;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::ExtUI::FellowshipListEntry);
DEFINE_IL2CPP_ARG_TYPE(::ExtUI::FellowshipListEntry*, "ExtUI", "FellowshipListEntry");
// Type namespace: ExtUI
namespace ExtUI {
  // Size: 0x32
  #pragma pack(push, 1)
  // Autogenerated type: ExtUI.FellowshipListEntry
  // [TokenAttribute] Offset: FFFFFFFF
  class FellowshipListEntry : public ::ExtUI::FriendsListEntry {
    public:
    // Writing base type padding for base size: 0x29 to desired offset: 0x2C
    char ___base_padding[0x3] = {};
    public:
    // public System.Int32 lastseen
    // Size: 0x4
    // Offset: 0x2C
    int lastseen;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Boolean isOfficer
    // Size: 0x1
    // Offset: 0x30
    bool isOfficer;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean hasChestAccess
    // Size: 0x1
    // Offset: 0x31
    bool hasChestAccess;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: public System.Int32 lastseen
    [[deprecated("Use field access instead!")]] int& dyn_lastseen();
    // Get instance field reference: public System.Boolean isOfficer
    [[deprecated("Use field access instead!")]] bool& dyn_isOfficer();
    // Get instance field reference: public System.Boolean hasChestAccess
    [[deprecated("Use field access instead!")]] bool& dyn_hasChestAccess();
    // public System.Void .ctor()
    // Offset: 0xF4A16C
    // Implemented from: ExtUI.FriendsListEntry
    // Base method: System.Void FriendsListEntry::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FellowshipListEntry* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::ExtUI::FellowshipListEntry::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FellowshipListEntry*, creationType>()));
    }
  }; // ExtUI.FellowshipListEntry
  #pragma pack(pop)
  static check_size<sizeof(FellowshipListEntry), 49 + sizeof(bool)> __ExtUI_FellowshipListEntrySizeCheck;
  static_assert(sizeof(FellowshipListEntry) == 0x32);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: ExtUI::FellowshipListEntry::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
