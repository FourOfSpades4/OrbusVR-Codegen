// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Attribute
#include "System/Attribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GUITargetAttribute
  class GUITargetAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::GUITargetAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::GUITargetAttribute*, "UnityEngine", "GUITargetAttribute");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x14
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.GUITargetAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: A99198
  class GUITargetAttribute : public ::System::Attribute {
    public:
    public:
    // System.Int32 displayMask
    // Size: 0x4
    // Offset: 0x10
    int displayMask;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return displayMask;
    }
    // Get instance field reference: System.Int32 displayMask
    [[deprecated("Use field access instead!")]] int& dyn_displayMask();
    // static private System.Int32 GetGUITargetAttrValue(System.Type klass, System.String methodName)
    // Offset: 0x210232C
    static int GetGUITargetAttrValue(::System::Type* klass, ::StringW methodName);
  }; // UnityEngine.GUITargetAttribute
  #pragma pack(pop)
  static check_size<sizeof(GUITargetAttribute), 16 + sizeof(int)> __UnityEngine_GUITargetAttributeSizeCheck;
  static_assert(sizeof(GUITargetAttribute) == 0x14);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::GUITargetAttribute::GetGUITargetAttrValue
// Il2CppName: GetGUITargetAttrValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::System::Type*, ::StringW)>(&UnityEngine::GUITargetAttribute::GetGUITargetAttrValue)> {
  static const MethodInfo* get() {
    static auto* klass = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* methodName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUITargetAttribute*), "GetGUITargetAttrValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{klass, methodName});
  }
};
