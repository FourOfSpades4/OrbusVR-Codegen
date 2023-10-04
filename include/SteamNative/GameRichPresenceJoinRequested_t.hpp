// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include <stdint.h>
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: SteamNative
namespace SteamNative {
  // Forward declaring type: GameRichPresenceJoinRequested_t
  struct GameRichPresenceJoinRequested_t;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::SteamNative::GameRichPresenceJoinRequested_t, "SteamNative", "GameRichPresenceJoinRequested_t");
// Type namespace: SteamNative
namespace SteamNative {
  // Size: 0x10
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: SteamNative.GameRichPresenceJoinRequested_t
  // [TokenAttribute] Offset: FFFFFFFF
  struct GameRichPresenceJoinRequested_t/*, public ::System::ValueType*/ {
    public:
    public:
    // System.UInt64 SteamIDFriend
    // Size: 0x8
    // Offset: 0x0
    uint64_t SteamIDFriend;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // System.String Connect
    // Size: 0x8
    // Offset: 0x8
    ::StringW Connect;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Creating value type constructor for type: GameRichPresenceJoinRequested_t
    constexpr GameRichPresenceJoinRequested_t(uint64_t SteamIDFriend_ = {}, ::StringW Connect_ = {}) noexcept : SteamIDFriend{SteamIDFriend_}, Connect{Connect_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: System.UInt64 SteamIDFriend
    [[deprecated("Use field access instead!")]] uint64_t& dyn_SteamIDFriend();
    // Get instance field reference: System.String Connect
    [[deprecated("Use field access instead!")]] ::StringW& dyn_Connect();
  }; // SteamNative.GameRichPresenceJoinRequested_t
  #pragma pack(pop)
  static check_size<sizeof(GameRichPresenceJoinRequested_t), 8 + sizeof(::StringW)> __SteamNative_GameRichPresenceJoinRequested_tSizeCheck;
  static_assert(sizeof(GameRichPresenceJoinRequested_t) == 0x10);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"