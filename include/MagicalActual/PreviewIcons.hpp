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
  // Forward declaring type: PreviewIcons
  class PreviewIcons;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::MagicalActual::PreviewIcons);
DEFINE_IL2CPP_ARG_TYPE(::MagicalActual::PreviewIcons*, "MagicalActual", "PreviewIcons");
// Type namespace: MagicalActual
namespace MagicalActual {
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: MagicalActual.PreviewIcons
  // [TokenAttribute] Offset: FFFFFFFF
  class PreviewIcons : public ::Il2CppObject {
    public:
    public:
    // public MagicalActual.InventoryIcon NEOALINPDNP
    // Size: 0x8
    // Offset: 0x10
    ::MagicalActual::InventoryIcon* NEOALINPDNP;
    // Field size check
    static_assert(sizeof(::MagicalActual::InventoryIcon*) == 0x8);
    // public System.Int32 MNFJFKNNOAI
    // Size: 0x4
    // Offset: 0x18
    int MNFJFKNNOAI;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: public MagicalActual.InventoryIcon NEOALINPDNP
    [[deprecated("Use field access instead!")]] ::MagicalActual::InventoryIcon*& dyn_NEOALINPDNP();
    // Get instance field reference: public System.Int32 MNFJFKNNOAI
    [[deprecated("Use field access instead!")]] int& dyn_MNFJFKNNOAI();
    // public System.Void .ctor()
    // Offset: 0x1B12480
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PreviewIcons* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::MagicalActual::PreviewIcons::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PreviewIcons*, creationType>()));
    }
  }; // MagicalActual.PreviewIcons
  #pragma pack(pop)
  static check_size<sizeof(PreviewIcons), 24 + sizeof(int)> __MagicalActual_PreviewIconsSizeCheck;
  static_assert(sizeof(PreviewIcons) == 0x1C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: MagicalActual::PreviewIcons::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!