// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: MagicalActual.PlayerCharacter
#include "MagicalActual/PlayerCharacter.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: MagicalActual
namespace MagicalActual {
  // Forward declaring type: PlayerAvatar
  class PlayerAvatar;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::MagicalActual::PlayerCharacter::$$c__DisplayClass315_0);
DEFINE_IL2CPP_ARG_TYPE(::MagicalActual::PlayerCharacter::$$c__DisplayClass315_0*, "MagicalActual", "PlayerCharacter/<>c__DisplayClass315_0");
// Type namespace: MagicalActual
namespace MagicalActual {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: MagicalActual.PlayerCharacter/<>c__DisplayClass315_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: AD38D8
  class PlayerCharacter::$$c__DisplayClass315_0 : public ::Il2CppObject {
    public:
    public:
    // public MagicalActual.PlayerAvatar JODGAPLOOOA
    // Size: 0x8
    // Offset: 0x10
    ::MagicalActual::PlayerAvatar* JODGAPLOOOA;
    // Field size check
    static_assert(sizeof(::MagicalActual::PlayerAvatar*) == 0x8);
    public:
    // Creating conversion operator: operator ::MagicalActual::PlayerAvatar*
    constexpr operator ::MagicalActual::PlayerAvatar*() const noexcept {
      return JODGAPLOOOA;
    }
    // Get instance field reference: public MagicalActual.PlayerAvatar JODGAPLOOOA
    [[deprecated("Use field access instead!")]] ::MagicalActual::PlayerAvatar*& dyn_JODGAPLOOOA();
    // public System.Void .ctor()
    // Offset: 0x1E52460
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlayerCharacter::$$c__DisplayClass315_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::MagicalActual::PlayerCharacter::$$c__DisplayClass315_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlayerCharacter::$$c__DisplayClass315_0*, creationType>()));
    }
  }; // MagicalActual.PlayerCharacter/<>c__DisplayClass315_0
  #pragma pack(pop)
  static check_size<sizeof(PlayerCharacter::$$c__DisplayClass315_0), 16 + sizeof(::MagicalActual::PlayerAvatar*)> __MagicalActual_PlayerCharacter_$$c__DisplayClass315_0SizeCheck;
  static_assert(sizeof(PlayerCharacter::$$c__DisplayClass315_0) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: MagicalActual::PlayerCharacter::$$c__DisplayClass315_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
