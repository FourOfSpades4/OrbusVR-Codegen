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
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Completed forward declares
// Type namespace: MagicalActual
namespace MagicalActual {
  // Forward declaring type: TerrainDistanceChanger
  class TerrainDistanceChanger;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::MagicalActual::TerrainDistanceChanger);
DEFINE_IL2CPP_ARG_TYPE(::MagicalActual::TerrainDistanceChanger*, "MagicalActual", "TerrainDistanceChanger");
// Type namespace: MagicalActual
namespace MagicalActual {
  // Size: 0x29
  #pragma pack(push, 1)
  // Autogenerated type: MagicalActual.TerrainDistanceChanger
  // [TokenAttribute] Offset: FFFFFFFF
  class TerrainDistanceChanger : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // public UnityEngine.GameObject[] nearObjects
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<::UnityEngine::GameObject*> nearObjects;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::GameObject*>) == 0x8);
    // public UnityEngine.GameObject[] farObjects
    // Size: 0x8
    // Offset: 0x20
    ::ArrayW<::UnityEngine::GameObject*> farObjects;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::GameObject*>) == 0x8);
    // private System.Boolean BIOEDBMEMPF
    // Size: 0x1
    // Offset: 0x28
    bool BIOEDBMEMPF;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public UnityEngine.GameObject[] nearObjects
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::GameObject*>& dyn_nearObjects();
    // Get instance field reference: public UnityEngine.GameObject[] farObjects
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::GameObject*>& dyn_farObjects();
    // Get instance field reference: private System.Boolean BIOEDBMEMPF
    [[deprecated("Use field access instead!")]] bool& dyn_BIOEDBMEMPF();
    // public System.Void .ctor()
    // Offset: 0x13A777C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TerrainDistanceChanger* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::MagicalActual::TerrainDistanceChanger::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TerrainDistanceChanger*, creationType>()));
    }
  }; // MagicalActual.TerrainDistanceChanger
  #pragma pack(pop)
  static check_size<sizeof(TerrainDistanceChanger), 40 + sizeof(bool)> __MagicalActual_TerrainDistanceChangerSizeCheck;
  static_assert(sizeof(TerrainDistanceChanger) == 0x29);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: MagicalActual::TerrainDistanceChanger::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
