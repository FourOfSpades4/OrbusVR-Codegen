// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Oculus.Platform.Samples.VrHoops.Player
#include "Oculus/Platform/Samples/VrHoops/Player.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Oculus.Platform.Samples.VrHoops
namespace Oculus::Platform::Samples::VrHoops {
  // Forward declaring type: LocalPlayer
  class LocalPlayer;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Platform::Samples::VrHoops::LocalPlayer);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Samples::VrHoops::LocalPlayer*, "Oculus.Platform.Samples.VrHoops", "LocalPlayer");
// Type namespace: Oculus.Platform.Samples.VrHoops
namespace Oculus::Platform::Samples::VrHoops {
  // Size: 0x4C
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.Samples.VrHoops.LocalPlayer
  // [TokenAttribute] Offset: FFFFFFFF
  class LocalPlayer : public ::Oculus::Platform::Samples::VrHoops::Player {
    public:
    // private System.Void Update()
    // Offset: 0x15383DC
    void Update();
    // public override System.Void set_Score(System.UInt32 value)
    // Offset: 0x1538074
    // Implemented from: Oculus.Platform.Samples.VrHoops.Player
    // Base method: System.Void Player::set_Score(System.UInt32 value)
    void set_Score(uint value);
    // public System.Void .ctor()
    // Offset: 0x1538590
    // Implemented from: Oculus.Platform.Samples.VrHoops.Player
    // Base method: System.Void Player::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LocalPlayer* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Platform::Samples::VrHoops::LocalPlayer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LocalPlayer*, creationType>()));
    }
  }; // Oculus.Platform.Samples.VrHoops.LocalPlayer
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::Samples::VrHoops::LocalPlayer::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::Samples::VrHoops::LocalPlayer::*)()>(&Oculus::Platform::Samples::VrHoops::LocalPlayer::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Samples::VrHoops::LocalPlayer*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Samples::VrHoops::LocalPlayer::set_Score
// Il2CppName: set_Score
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::Samples::VrHoops::LocalPlayer::*)(uint)>(&Oculus::Platform::Samples::VrHoops::LocalPlayer::set_Score)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Samples::VrHoops::LocalPlayer*), "set_Score", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Samples::VrHoops::LocalPlayer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
