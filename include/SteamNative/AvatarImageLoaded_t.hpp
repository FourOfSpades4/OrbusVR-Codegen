// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include <stdint.h>
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Type namespace: SteamNative
namespace SteamNative {
  // Forward declaring type: AvatarImageLoaded_t
  struct AvatarImageLoaded_t;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::SteamNative::AvatarImageLoaded_t, "SteamNative", "AvatarImageLoaded_t");
// Type namespace: SteamNative
namespace SteamNative {
  // Size: 0x14
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: SteamNative.AvatarImageLoaded_t
  // [TokenAttribute] Offset: FFFFFFFF
  struct AvatarImageLoaded_t/*, public ::System::ValueType*/ {
    public:
    public:
    // System.UInt64 SteamID
    // Size: 0x8
    // Offset: 0x0
    uint64_t SteamID;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // System.Int32 Image
    // Size: 0x4
    // Offset: 0x8
    int Image;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Int32 Wide
    // Size: 0x4
    // Offset: 0xC
    int Wide;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Int32 Tall
    // Size: 0x4
    // Offset: 0x10
    int Tall;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: AvatarImageLoaded_t
    constexpr AvatarImageLoaded_t(uint64_t SteamID_ = {}, int Image_ = {}, int Wide_ = {}, int Tall_ = {}) noexcept : SteamID{SteamID_}, Image{Image_}, Wide{Wide_}, Tall{Tall_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: System.UInt64 SteamID
    [[deprecated("Use field access instead!")]] uint64_t& dyn_SteamID();
    // Get instance field reference: System.Int32 Image
    [[deprecated("Use field access instead!")]] int& dyn_Image();
    // Get instance field reference: System.Int32 Wide
    [[deprecated("Use field access instead!")]] int& dyn_Wide();
    // Get instance field reference: System.Int32 Tall
    [[deprecated("Use field access instead!")]] int& dyn_Tall();
  }; // SteamNative.AvatarImageLoaded_t
  #pragma pack(pop)
  static check_size<sizeof(AvatarImageLoaded_t), 16 + sizeof(int)> __SteamNative_AvatarImageLoaded_tSizeCheck;
  static_assert(sizeof(AvatarImageLoaded_t) == 0x14);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
