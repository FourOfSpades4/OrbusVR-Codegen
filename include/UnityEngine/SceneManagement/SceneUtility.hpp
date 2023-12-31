// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: UnityEngine.SceneManagement
namespace UnityEngine::SceneManagement {
  // Forward declaring type: SceneUtility
  class SceneUtility;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::SceneManagement::SceneUtility);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::SceneManagement::SceneUtility*, "UnityEngine.SceneManagement", "SceneUtility");
// Type namespace: UnityEngine.SceneManagement
namespace UnityEngine::SceneManagement {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.SceneManagement.SceneUtility
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: A71F90
  class SceneUtility : public ::Il2CppObject {
    public:
    // static public System.String GetScenePathByBuildIndex(System.Int32 buildIndex)
    // Offset: 0x1F97A90
    static ::StringW GetScenePathByBuildIndex(int buildIndex);
  }; // UnityEngine.SceneManagement.SceneUtility
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::SceneManagement::SceneUtility::GetScenePathByBuildIndex
// Il2CppName: GetScenePathByBuildIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(int)>(&UnityEngine::SceneManagement::SceneUtility::GetScenePathByBuildIndex)> {
  static const MethodInfo* get() {
    static auto* buildIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SceneManagement::SceneUtility*), "GetScenePathByBuildIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buildIndex});
  }
};
