// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: MagicalActual
namespace MagicalActual {
  // Forward declaring type: MiniZoneEntrance
  class MiniZoneEntrance;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::MagicalActual::MiniZoneEntrance);
DEFINE_IL2CPP_ARG_TYPE(::MagicalActual::MiniZoneEntrance*, "MagicalActual", "MiniZoneEntrance");
// Type namespace: MagicalActual
namespace MagicalActual {
  // Size: 0x34
  #pragma pack(push, 1)
  // Autogenerated type: MagicalActual.MiniZoneEntrance
  // [TokenAttribute] Offset: FFFFFFFF
  class MiniZoneEntrance : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private System.String OrbusNetComponent
    // Size: 0x8
    // Offset: 0x18
    ::StringW OrbusNetComponent;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String destinationZone
    // Size: 0x8
    // Offset: 0x20
    ::StringW destinationZone;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private UnityEngine.Vector3 destinationPosition
    // Size: 0xC
    // Offset: 0x28
    ::UnityEngine::Vector3 destinationPosition;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private System.String OrbusNetComponent
    [[deprecated("Use field access instead!")]] ::StringW& dyn_OrbusNetComponent();
    // Get instance field reference: private System.String destinationZone
    [[deprecated("Use field access instead!")]] ::StringW& dyn_destinationZone();
    // Get instance field reference: private UnityEngine.Vector3 destinationPosition
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_destinationPosition();
    // public System.Void .ctor()
    // Offset: 0x13EEF80
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MiniZoneEntrance* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::MagicalActual::MiniZoneEntrance::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MiniZoneEntrance*, creationType>()));
    }
  }; // MagicalActual.MiniZoneEntrance
  #pragma pack(pop)
  static check_size<sizeof(MiniZoneEntrance), 40 + sizeof(::UnityEngine::Vector3)> __MagicalActual_MiniZoneEntranceSizeCheck;
  static_assert(sizeof(MiniZoneEntrance) == 0x34);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: MagicalActual::MiniZoneEntrance::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
