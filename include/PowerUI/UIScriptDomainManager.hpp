// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Nitro.NitroDomainManager
#include "Nitro/NitroDomainManager.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: PowerUI
namespace PowerUI {
  // Forward declaring type: UIScriptDomainManager
  class UIScriptDomainManager;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PowerUI::UIScriptDomainManager);
DEFINE_IL2CPP_ARG_TYPE(::PowerUI::UIScriptDomainManager*, "PowerUI", "UIScriptDomainManager");
// Type namespace: PowerUI
namespace PowerUI {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: PowerUI.UIScriptDomainManager
  // [TokenAttribute] Offset: FFFFFFFF
  class UIScriptDomainManager : public ::Nitro::NitroDomainManager {
    public:
    // public System.Void .ctor()
    // Offset: 0xE19128
    // Implemented from: Nitro.NitroDomainManager
    // Base method: System.Void NitroDomainManager::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UIScriptDomainManager* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::PowerUI::UIScriptDomainManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UIScriptDomainManager*, creationType>()));
    }
  }; // PowerUI.UIScriptDomainManager
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PowerUI::UIScriptDomainManager::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
