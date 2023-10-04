// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Experimental.TerrainAPI.TerrainUtility
#include "UnityEngine/Experimental/TerrainAPI/TerrainUtility.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Terrain
  class Terrain;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Experimental::TerrainAPI::TerrainUtility::$CollectTerrains$c__AnonStorey0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::TerrainAPI::TerrainUtility::$CollectTerrains$c__AnonStorey0*, "UnityEngine.Experimental.TerrainAPI", "TerrainUtility/<CollectTerrains>c__AnonStorey0");
// Type namespace: UnityEngine.Experimental.TerrainAPI
namespace UnityEngine::Experimental::TerrainAPI {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Experimental.TerrainAPI.TerrainUtility/<CollectTerrains>c__AnonStorey0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: A8A2EC
  class TerrainUtility::$CollectTerrains$c__AnonStorey0 : public ::Il2CppObject {
    public:
    public:
    // UnityEngine.Terrain t
    // Size: 0x8
    // Offset: 0x10
    ::UnityEngine::Terrain* t;
    // Field size check
    static_assert(sizeof(::UnityEngine::Terrain*) == 0x8);
    // UnityEngine.Experimental.TerrainAPI.TerrainUtility/<CollectTerrains>c__AnonStorey1 <>f__ref$1
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::Experimental::TerrainAPI::TerrainUtility::$CollectTerrains$c__AnonStorey1* $$f__ref$1;
    // Field size check
    static_assert(sizeof(::UnityEngine::Experimental::TerrainAPI::TerrainUtility::$CollectTerrains$c__AnonStorey1*) == 0x8);
    public:
    // Get instance field reference: UnityEngine.Terrain t
    [[deprecated("Use field access instead!")]] ::UnityEngine::Terrain*& dyn_t();
    // Get instance field reference: UnityEngine.Experimental.TerrainAPI.TerrainUtility/<CollectTerrains>c__AnonStorey1 <>f__ref$1
    [[deprecated("Use field access instead!")]] ::UnityEngine::Experimental::TerrainAPI::TerrainUtility::$CollectTerrains$c__AnonStorey1*& dyn_$$f__ref$1();
    // public System.Void .ctor()
    // Offset: 0x288607C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TerrainUtility::$CollectTerrains$c__AnonStorey0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Experimental::TerrainAPI::TerrainUtility::$CollectTerrains$c__AnonStorey0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TerrainUtility::$CollectTerrains$c__AnonStorey0*, creationType>()));
    }
    // System.Boolean <>m__0(UnityEngine.Terrain x)
    // Offset: 0x2886854
    bool $$m__0(::UnityEngine::Terrain* x);
  }; // UnityEngine.Experimental.TerrainAPI.TerrainUtility/<CollectTerrains>c__AnonStorey0
  #pragma pack(pop)
  static check_size<sizeof(TerrainUtility::$CollectTerrains$c__AnonStorey0), 24 + sizeof(::UnityEngine::Experimental::TerrainAPI::TerrainUtility::$CollectTerrains$c__AnonStorey1*)> __UnityEngine_Experimental_TerrainAPI_TerrainUtility_$CollectTerrains$c__AnonStorey0SizeCheck;
  static_assert(sizeof(TerrainUtility::$CollectTerrains$c__AnonStorey0) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Experimental::TerrainAPI::TerrainUtility::$CollectTerrains$c__AnonStorey0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Experimental::TerrainAPI::TerrainUtility::$CollectTerrains$c__AnonStorey0::$$m__0
// Il2CppName: <>m__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Experimental::TerrainAPI::TerrainUtility::$CollectTerrains$c__AnonStorey0::*)(::UnityEngine::Terrain*)>(&UnityEngine::Experimental::TerrainAPI::TerrainUtility::$CollectTerrains$c__AnonStorey0::$$m__0)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("UnityEngine", "Terrain")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Experimental::TerrainAPI::TerrainUtility::$CollectTerrains$c__AnonStorey0*), "<>m__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
