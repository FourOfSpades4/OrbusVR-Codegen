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
  // Forward declaring type: FriendsListEntry
  class FriendsListEntry;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::ExtUI::FriendsListEntry);
DEFINE_IL2CPP_ARG_TYPE(::ExtUI::FriendsListEntry*, "ExtUI", "FriendsListEntry");
// Type namespace: ExtUI
namespace ExtUI {
  // Size: 0x29
  #pragma pack(push, 1)
  // Autogenerated type: ExtUI.FriendsListEntry
  // [TokenAttribute] Offset: FFFFFFFF
  class FriendsListEntry : public ::Il2CppObject {
    public:
    public:
    // public System.String dbid
    // Size: 0x8
    // Offset: 0x10
    ::StringW dbid;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String name
    // Size: 0x8
    // Offset: 0x18
    ::StringW name;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String lastzone
    // Size: 0x8
    // Offset: 0x20
    ::StringW lastzone;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Boolean isonline
    // Size: 0x1
    // Offset: 0x28
    bool isonline;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: public System.String dbid
    [[deprecated("Use field access instead!")]] ::StringW& dyn_dbid();
    // Get instance field reference: public System.String name
    [[deprecated("Use field access instead!")]] ::StringW& dyn_name();
    // Get instance field reference: public System.String lastzone
    [[deprecated("Use field access instead!")]] ::StringW& dyn_lastzone();
    // Get instance field reference: public System.Boolean isonline
    [[deprecated("Use field access instead!")]] bool& dyn_isonline();
    // public System.Void .ctor()
    // Offset: 0xF4A174
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FriendsListEntry* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::ExtUI::FriendsListEntry::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FriendsListEntry*, creationType>()));
    }
  }; // ExtUI.FriendsListEntry
  #pragma pack(pop)
  static check_size<sizeof(FriendsListEntry), 40 + sizeof(bool)> __ExtUI_FriendsListEntrySizeCheck;
  static_assert(sizeof(FriendsListEntry) == 0x29);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: ExtUI::FriendsListEntry::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!