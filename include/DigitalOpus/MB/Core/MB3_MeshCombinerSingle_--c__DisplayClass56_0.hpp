// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: DigitalOpus.MB.Core.MB3_MeshCombinerSingle
#include "DigitalOpus/MB/Core/MB3_MeshCombinerSingle.hpp"
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
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::$$c__DisplayClass56_0);
DEFINE_IL2CPP_ARG_TYPE(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::$$c__DisplayClass56_0*, "DigitalOpus.MB.Core", "MB3_MeshCombinerSingle/<>c__DisplayClass56_0");
// Type namespace: DigitalOpus.MB.Core
namespace DigitalOpus::MB::Core {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: DigitalOpus.MB.Core.MB3_MeshCombinerSingle/<>c__DisplayClass56_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: AD1848
  class MB3_MeshCombinerSingle::$$c__DisplayClass56_0 : public ::Il2CppObject {
    public:
    public:
    // public UnityEngine.GameObject[] _goToAdd
    // Size: 0x8
    // Offset: 0x10
    ::ArrayW<::UnityEngine::GameObject*> goToAdd;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::GameObject*>) == 0x8);
    public:
    // Creating conversion operator: operator ::ArrayW<::UnityEngine::GameObject*>
    constexpr operator ::ArrayW<::UnityEngine::GameObject*>() const noexcept {
      return goToAdd;
    }
    // Get instance field reference: public UnityEngine.GameObject[] _goToAdd
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::GameObject*>& dyn__goToAdd();
    // public System.Void .ctor()
    // Offset: 0x18DBF0C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MB3_MeshCombinerSingle::$$c__DisplayClass56_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::$$c__DisplayClass56_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MB3_MeshCombinerSingle::$$c__DisplayClass56_0*, creationType>()));
    }
  }; // DigitalOpus.MB.Core.MB3_MeshCombinerSingle/<>c__DisplayClass56_0
  #pragma pack(pop)
  static check_size<sizeof(MB3_MeshCombinerSingle::$$c__DisplayClass56_0), 16 + sizeof(::ArrayW<::UnityEngine::GameObject*>)> __DigitalOpus_MB_Core_MB3_MeshCombinerSingle_$$c__DisplayClass56_0SizeCheck;
  static_assert(sizeof(MB3_MeshCombinerSingle::$$c__DisplayClass56_0) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MB3_MeshCombinerSingle::$$c__DisplayClass56_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
