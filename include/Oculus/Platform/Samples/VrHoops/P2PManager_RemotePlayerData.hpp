// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Oculus.Platform.Samples.VrHoops.P2PManager
#include "Oculus/Platform/Samples/VrHoops/P2PManager.hpp"
// Including type: Oculus.Platform.PeerConnectionState
#include "Oculus/Platform/PeerConnectionState.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Platform::Samples::VrHoops
namespace Oculus::Platform::Samples::VrHoops {
  // Forward declaring type: RemotePlayer
  class RemotePlayer;
  // Forward declaring type: P2PNetworkBall
  class P2PNetworkBall;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Platform::Samples::VrHoops::P2PManager::RemotePlayerData);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Samples::VrHoops::P2PManager::RemotePlayerData*, "Oculus.Platform.Samples.VrHoops", "P2PManager/RemotePlayerData");
// Type namespace: Oculus.Platform.Samples.VrHoops
namespace Oculus::Platform::Samples::VrHoops {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.Samples.VrHoops.P2PManager/RemotePlayerData
  // [TokenAttribute] Offset: FFFFFFFF
  class P2PManager::RemotePlayerData : public ::Il2CppObject {
    public:
    public:
    // public Oculus.Platform.PeerConnectionState state
    // Size: 0x4
    // Offset: 0x10
    ::Oculus::Platform::PeerConnectionState state;
    // Field size check
    static_assert(sizeof(::Oculus::Platform::PeerConnectionState) == 0x4);
    // Padding between fields: state and: player
    char __padding0[0x4] = {};
    // public Oculus.Platform.Samples.VrHoops.RemotePlayer player
    // Size: 0x8
    // Offset: 0x18
    ::Oculus::Platform::Samples::VrHoops::RemotePlayer* player;
    // Field size check
    static_assert(sizeof(::Oculus::Platform::Samples::VrHoops::RemotePlayer*) == 0x8);
    // public System.Single remoteTimeOffset
    // Size: 0x4
    // Offset: 0x20
    float remoteTimeOffset;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single lastReceivedBallsTime
    // Size: 0x4
    // Offset: 0x24
    float lastReceivedBallsTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public readonly System.Collections.Generic.Dictionary`2<System.Int32,Oculus.Platform.Samples.VrHoops.P2PNetworkBall> activeBalls
    // Size: 0x8
    // Offset: 0x28
    ::System::Collections::Generic::Dictionary_2<int, ::Oculus::Platform::Samples::VrHoops::P2PNetworkBall*>* activeBalls;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Dictionary_2<int, ::Oculus::Platform::Samples::VrHoops::P2PNetworkBall*>*) == 0x8);
    public:
    // Get instance field reference: public Oculus.Platform.PeerConnectionState state
    [[deprecated("Use field access instead!")]] ::Oculus::Platform::PeerConnectionState& dyn_state();
    // Get instance field reference: public Oculus.Platform.Samples.VrHoops.RemotePlayer player
    [[deprecated("Use field access instead!")]] ::Oculus::Platform::Samples::VrHoops::RemotePlayer*& dyn_player();
    // Get instance field reference: public System.Single remoteTimeOffset
    [[deprecated("Use field access instead!")]] float& dyn_remoteTimeOffset();
    // Get instance field reference: public System.Single lastReceivedBallsTime
    [[deprecated("Use field access instead!")]] float& dyn_lastReceivedBallsTime();
    // Get instance field reference: public readonly System.Collections.Generic.Dictionary`2<System.Int32,Oculus.Platform.Samples.VrHoops.P2PNetworkBall> activeBalls
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Dictionary_2<int, ::Oculus::Platform::Samples::VrHoops::P2PNetworkBall*>*& dyn_activeBalls();
    // public System.Void .ctor()
    // Offset: 0x153DE20
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static P2PManager::RemotePlayerData* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Platform::Samples::VrHoops::P2PManager::RemotePlayerData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<P2PManager::RemotePlayerData*, creationType>()));
    }
  }; // Oculus.Platform.Samples.VrHoops.P2PManager/RemotePlayerData
  #pragma pack(pop)
  static check_size<sizeof(P2PManager::RemotePlayerData), 40 + sizeof(::System::Collections::Generic::Dictionary_2<int, ::Oculus::Platform::Samples::VrHoops::P2PNetworkBall*>*)> __Oculus_Platform_Samples_VrHoops_P2PManager_RemotePlayerDataSizeCheck;
  static_assert(sizeof(P2PManager::RemotePlayerData) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::Samples::VrHoops::P2PManager::RemotePlayerData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
