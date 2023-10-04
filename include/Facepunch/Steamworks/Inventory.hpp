// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Facepunch::Steamworks
namespace Facepunch::Steamworks {
}
// Forward declaring namespace: SteamNative
namespace SteamNative {
  // Forward declaring type: SteamInventory
  class SteamInventory;
}
// Completed forward declares
// Type namespace: Facepunch.Steamworks
namespace Facepunch::Steamworks {
  // Forward declaring type: Inventory
  class Inventory;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Facepunch::Steamworks::Inventory);
DEFINE_IL2CPP_ARG_TYPE(::Facepunch::Steamworks::Inventory*, "Facepunch.Steamworks", "Inventory");
// Type namespace: Facepunch.Steamworks
namespace Facepunch::Steamworks {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: Facepunch.Steamworks.Inventory
  // [TokenAttribute] Offset: FFFFFFFF
  class Inventory : public ::Il2CppObject/*, public ::System::IDisposable*/ {
    public:
    // Nested type: ::Facepunch::Steamworks::Inventory::Item
    class Item;
    // Nested type: ::Facepunch::Steamworks::Inventory::Result
    class Result;
    public:
    // public Facepunch.Steamworks.Inventory/Item[] Items
    // Size: 0x8
    // Offset: 0x10
    ::ArrayW<::Facepunch::Steamworks::Inventory::Item*> Items;
    // Field size check
    static_assert(sizeof(::ArrayW<::Facepunch::Steamworks::Inventory::Item*>) == 0x8);
    // public System.Byte[] SerializedItems
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<uint8_t> SerializedItems;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // SteamNative.SteamInventory inventory
    // Size: 0x8
    // Offset: 0x20
    ::SteamNative::SteamInventory* inventory;
    // Field size check
    static_assert(sizeof(::SteamNative::SteamInventory*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::IDisposable
    operator ::System::IDisposable() noexcept {
      return *reinterpret_cast<::System::IDisposable*>(this);
    }
    // Get instance field reference: public Facepunch.Steamworks.Inventory/Item[] Items
    [[deprecated("Use field access instead!")]] ::ArrayW<::Facepunch::Steamworks::Inventory::Item*>& dyn_Items();
    // Get instance field reference: public System.Byte[] SerializedItems
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn_SerializedItems();
    // Get instance field reference: SteamNative.SteamInventory inventory
    [[deprecated("Use field access instead!")]] ::SteamNative::SteamInventory*& dyn_inventory();
    // public System.Void Dispose()
    // Offset: 0x2840F28
    void Dispose();
  }; // Facepunch.Steamworks.Inventory
  #pragma pack(pop)
  static check_size<sizeof(Inventory), 32 + sizeof(::SteamNative::SteamInventory*)> __Facepunch_Steamworks_InventorySizeCheck;
  static_assert(sizeof(Inventory) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Facepunch::Steamworks::Inventory::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Facepunch::Steamworks::Inventory::*)()>(&Facepunch::Steamworks::Inventory::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Facepunch::Steamworks::Inventory*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
