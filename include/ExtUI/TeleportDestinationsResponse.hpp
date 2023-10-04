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
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: ExtUI
namespace ExtUI {
  // Forward declaring type: TeleportDestinationsResponse
  class TeleportDestinationsResponse;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::ExtUI::TeleportDestinationsResponse);
DEFINE_IL2CPP_ARG_TYPE(::ExtUI::TeleportDestinationsResponse*, "ExtUI", "TeleportDestinationsResponse");
// Type namespace: ExtUI
namespace ExtUI {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: ExtUI.TeleportDestinationsResponse
  // [TokenAttribute] Offset: FFFFFFFF
  class TeleportDestinationsResponse : public ::Il2CppObject {
    public:
    public:
    // public System.String[] destinations
    // Size: 0x8
    // Offset: 0x10
    ::ArrayW<::StringW> destinations;
    // Field size check
    static_assert(sizeof(::ArrayW<::StringW>) == 0x8);
    public:
    // Creating conversion operator: operator ::ArrayW<::StringW>
    constexpr operator ::ArrayW<::StringW>() const noexcept {
      return destinations;
    }
    // Get instance field reference: public System.String[] destinations
    [[deprecated("Use field access instead!")]] ::ArrayW<::StringW>& dyn_destinations();
    // public System.Void .ctor()
    // Offset: 0x28E9440
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TeleportDestinationsResponse* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::ExtUI::TeleportDestinationsResponse::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TeleportDestinationsResponse*, creationType>()));
    }
  }; // ExtUI.TeleportDestinationsResponse
  #pragma pack(pop)
  static check_size<sizeof(TeleportDestinationsResponse), 16 + sizeof(::ArrayW<::StringW>)> __ExtUI_TeleportDestinationsResponseSizeCheck;
  static_assert(sizeof(TeleportDestinationsResponse) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: ExtUI::TeleportDestinationsResponse::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!