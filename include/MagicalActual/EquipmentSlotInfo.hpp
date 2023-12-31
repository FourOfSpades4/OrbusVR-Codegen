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
// Begin forward declares
// Forward declaring namespace: MagicalActual
namespace MagicalActual {
  // Forward declaring type: InventoryIcon
  class InventoryIcon;
}
// Completed forward declares
// Type namespace: MagicalActual
namespace MagicalActual {
  // Forward declaring type: EquipmentSlotInfo
  class EquipmentSlotInfo;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::MagicalActual::EquipmentSlotInfo);
DEFINE_IL2CPP_ARG_TYPE(::MagicalActual::EquipmentSlotInfo*, "MagicalActual", "EquipmentSlotInfo");
// Type namespace: MagicalActual
namespace MagicalActual {
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: MagicalActual.EquipmentSlotInfo
  // [TokenAttribute] Offset: FFFFFFFF
  class EquipmentSlotInfo : public ::Il2CppObject {
    public:
    public:
    // public MagicalActual.InventoryIcon slot
    // Size: 0x8
    // Offset: 0x10
    ::MagicalActual::InventoryIcon* slot;
    // Field size check
    static_assert(sizeof(::MagicalActual::InventoryIcon*) == 0x8);
    // public System.Int32 inventoryIndex
    // Size: 0x4
    // Offset: 0x18
    int inventoryIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: public MagicalActual.InventoryIcon slot
    [[deprecated("Use field access instead!")]] ::MagicalActual::InventoryIcon*& dyn_slot();
    // Get instance field reference: public System.Int32 inventoryIndex
    [[deprecated("Use field access instead!")]] int& dyn_inventoryIndex();
    // public System.Void .ctor()
    // Offset: 0x10FF880
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EquipmentSlotInfo* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::MagicalActual::EquipmentSlotInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EquipmentSlotInfo*, creationType>()));
    }
  }; // MagicalActual.EquipmentSlotInfo
  #pragma pack(pop)
  static check_size<sizeof(EquipmentSlotInfo), 24 + sizeof(int)> __MagicalActual_EquipmentSlotInfoSizeCheck;
  static_assert(sizeof(EquipmentSlotInfo) == 0x1C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: MagicalActual::EquipmentSlotInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
