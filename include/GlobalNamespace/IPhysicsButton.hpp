// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: IPhysicsButton
  class IPhysicsButton;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::IPhysicsButton);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IPhysicsButton*, "", "IPhysicsButton");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: IPhysicsButton
  // [TokenAttribute] Offset: FFFFFFFF
  class IPhysicsButton {
    public:
    // public System.Void ClickButton()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void ClickButton();
  }; // IPhysicsButton
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::IPhysicsButton::ClickButton
// Il2CppName: ClickButton
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IPhysicsButton::*)()>(&GlobalNamespace::IPhysicsButton::ClickButton)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IPhysicsButton*), "ClickButton", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};