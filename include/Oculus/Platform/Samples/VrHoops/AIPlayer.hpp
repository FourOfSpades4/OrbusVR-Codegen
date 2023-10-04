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
  // Forward declaring type: AIPlayer
  class AIPlayer;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Platform::Samples::VrHoops::AIPlayer);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Samples::VrHoops::AIPlayer*, "Oculus.Platform.Samples.VrHoops", "AIPlayer");
// Type namespace: Oculus.Platform.Samples.VrHoops
namespace Oculus::Platform::Samples::VrHoops {
  // Size: 0x4C
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.Samples.VrHoops.AIPlayer
  // [TokenAttribute] Offset: FFFFFFFF
  class AIPlayer : public ::Oculus::Platform::Samples::VrHoops::Player {
    public:
    // private System.Void FixedUpdate()
    // Offset: 0x1534EE8
    void FixedUpdate();
    // public System.Void .ctor()
    // Offset: 0x1535250
    // Implemented from: Oculus.Platform.Samples.VrHoops.Player
    // Base method: System.Void Player::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AIPlayer* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Platform::Samples::VrHoops::AIPlayer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AIPlayer*, creationType>()));
    }
  }; // Oculus.Platform.Samples.VrHoops.AIPlayer
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::Samples::VrHoops::AIPlayer::FixedUpdate
// Il2CppName: FixedUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::Samples::VrHoops::AIPlayer::*)()>(&Oculus::Platform::Samples::VrHoops::AIPlayer::FixedUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Samples::VrHoops::AIPlayer*), "FixedUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Samples::VrHoops::AIPlayer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
