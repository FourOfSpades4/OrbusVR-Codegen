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
// Begin forward declares
// Forward declaring namespace: ExtUI
namespace ExtUI {
  // Forward declaring type: PrivateMessage
  class PrivateMessage;
}
// Completed forward declares
// Type namespace: ExtUI
namespace ExtUI {
  // Forward declaring type: PrivateMessageJson
  class PrivateMessageJson;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::ExtUI::PrivateMessageJson);
DEFINE_IL2CPP_ARG_TYPE(::ExtUI::PrivateMessageJson*, "ExtUI", "PrivateMessageJson");
// Type namespace: ExtUI
namespace ExtUI {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: ExtUI.PrivateMessageJson
  // [TokenAttribute] Offset: FFFFFFFF
  class PrivateMessageJson : public ::Il2CppObject {
    public:
    public:
    // public System.String playerid
    // Size: 0x8
    // Offset: 0x10
    ::StringW playerid;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public ExtUI.PrivateMessage[] messages
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<::ExtUI::PrivateMessage*> messages;
    // Field size check
    static_assert(sizeof(::ArrayW<::ExtUI::PrivateMessage*>) == 0x8);
    public:
    // Get instance field reference: public System.String playerid
    [[deprecated("Use field access instead!")]] ::StringW& dyn_playerid();
    // Get instance field reference: public ExtUI.PrivateMessage[] messages
    [[deprecated("Use field access instead!")]] ::ArrayW<::ExtUI::PrivateMessage*>& dyn_messages();
    // public System.Void .ctor()
    // Offset: 0x28E9100
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PrivateMessageJson* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::ExtUI::PrivateMessageJson::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PrivateMessageJson*, creationType>()));
    }
  }; // ExtUI.PrivateMessageJson
  #pragma pack(pop)
  static check_size<sizeof(PrivateMessageJson), 24 + sizeof(::ArrayW<::ExtUI::PrivateMessage*>)> __ExtUI_PrivateMessageJsonSizeCheck;
  static_assert(sizeof(PrivateMessageJson) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: ExtUI::PrivateMessageJson::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!