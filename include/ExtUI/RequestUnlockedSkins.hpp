// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: ExtUI
namespace ExtUI {
  // Forward declaring type: RequestUnlockedSkins
  class RequestUnlockedSkins;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::ExtUI::RequestUnlockedSkins);
DEFINE_IL2CPP_ARG_TYPE(::ExtUI::RequestUnlockedSkins*, "ExtUI", "RequestUnlockedSkins");
// Type namespace: ExtUI
namespace ExtUI {
  // Size: 0x11
  #pragma pack(push, 1)
  // Autogenerated type: ExtUI.RequestUnlockedSkins
  // [TokenAttribute] Offset: FFFFFFFF
  class RequestUnlockedSkins : public ::Il2CppObject {
    public:
    public:
    // public System.Byte requestType
    // Size: 0x1
    // Offset: 0x10
    uint8_t requestType;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    public:
    // Creating conversion operator: operator uint8_t
    constexpr operator uint8_t() const noexcept {
      return requestType;
    }
    // Get instance field reference: public System.Byte requestType
    [[deprecated("Use field access instead!")]] uint8_t& dyn_requestType();
    // public System.Void .ctor()
    // Offset: 0x28E926C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RequestUnlockedSkins* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::ExtUI::RequestUnlockedSkins::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RequestUnlockedSkins*, creationType>()));
    }
  }; // ExtUI.RequestUnlockedSkins
  #pragma pack(pop)
  static check_size<sizeof(RequestUnlockedSkins), 16 + sizeof(uint8_t)> __ExtUI_RequestUnlockedSkinsSizeCheck;
  static_assert(sizeof(RequestUnlockedSkins) == 0x11);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: ExtUI::RequestUnlockedSkins::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
