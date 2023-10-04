// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Material
  class Material;
}
// Completed forward declares
// Type namespace: HighlightingSystem
namespace HighlightingSystem {
  // Forward declaring type: MaterialExtensions
  class MaterialExtensions;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::HighlightingSystem::MaterialExtensions);
DEFINE_IL2CPP_ARG_TYPE(::HighlightingSystem::MaterialExtensions*, "HighlightingSystem", "MaterialExtensions");
// Type namespace: HighlightingSystem
namespace HighlightingSystem {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: HighlightingSystem.MaterialExtensions
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExtensionAttribute] Offset: FFFFFFFF
  // [ExcludeFromDocsAttribute] Offset: FFFFFFFF
  class MaterialExtensions : public ::Il2CppObject {
    public:
    // static public System.Void SetKeyword(UnityEngine.Material material, System.String keyword, System.Boolean state)
    // Offset: 0x1AB6E34
    static void SetKeyword(::UnityEngine::Material* material, ::StringW keyword, bool state);
  }; // HighlightingSystem.MaterialExtensions
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HighlightingSystem::MaterialExtensions::SetKeyword
// Il2CppName: SetKeyword
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Material*, ::StringW, bool)>(&HighlightingSystem::MaterialExtensions::SetKeyword)> {
  static const MethodInfo* get() {
    static auto* material = &::il2cpp_utils::GetClassFromName("UnityEngine", "Material")->byval_arg;
    static auto* keyword = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* state = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HighlightingSystem::MaterialExtensions*), "SetKeyword", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{material, keyword, state});
  }
};