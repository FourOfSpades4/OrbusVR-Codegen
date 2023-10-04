// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.EventSystems.IEventSystemHandler
#include "UnityEngine/EventSystems/IEventSystemHandler.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::EventSystems
namespace UnityEngine::EventSystems {
  // Forward declaring type: PointerEventData
  class PointerEventData;
}
// Completed forward declares
// Type namespace: UnityEngine.EventSystems
namespace UnityEngine::EventSystems {
  // Forward declaring type: IPointerClickHandler
  class IPointerClickHandler;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::EventSystems::IPointerClickHandler);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::EventSystems::IPointerClickHandler*, "UnityEngine.EventSystems", "IPointerClickHandler");
// Type namespace: UnityEngine.EventSystems
namespace UnityEngine::EventSystems {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.EventSystems.IPointerClickHandler
  // [TokenAttribute] Offset: FFFFFFFF
  class IPointerClickHandler/*, public ::UnityEngine::EventSystems::IEventSystemHandler*/ {
    public:
    // Creating interface conversion operator: operator ::UnityEngine::EventSystems::IEventSystemHandler
    operator ::UnityEngine::EventSystems::IEventSystemHandler() noexcept {
      return *reinterpret_cast<::UnityEngine::EventSystems::IEventSystemHandler*>(this);
    }
    // public System.Void OnPointerClick(UnityEngine.EventSystems.PointerEventData eventData)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void OnPointerClick(::UnityEngine::EventSystems::PointerEventData* eventData);
  }; // UnityEngine.EventSystems.IPointerClickHandler
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::EventSystems::IPointerClickHandler::OnPointerClick
// Il2CppName: OnPointerClick
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::EventSystems::IPointerClickHandler::*)(::UnityEngine::EventSystems::PointerEventData*)>(&UnityEngine::EventSystems::IPointerClickHandler::OnPointerClick)> {
  static const MethodInfo* get() {
    static auto* eventData = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "PointerEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::IPointerClickHandler*), "OnPointerClick", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eventData});
  }
};
