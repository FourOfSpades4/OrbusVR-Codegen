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
  // Forward declaring type: LfgPost
  class LfgPost;
}
// Completed forward declares
// Type namespace: ExtUI
namespace ExtUI {
  // Forward declaring type: LfgPostJson
  class LfgPostJson;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::ExtUI::LfgPostJson);
DEFINE_IL2CPP_ARG_TYPE(::ExtUI::LfgPostJson*, "ExtUI", "LfgPostJson");
// Type namespace: ExtUI
namespace ExtUI {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: ExtUI.LfgPostJson
  // [TokenAttribute] Offset: FFFFFFFF
  class LfgPostJson : public ::Il2CppObject {
    public:
    public:
    // public System.String timestamp
    // Size: 0x8
    // Offset: 0x10
    ::StringW timestamp;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public ExtUI.LfgPost[] posts
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<::ExtUI::LfgPost*> posts;
    // Field size check
    static_assert(sizeof(::ArrayW<::ExtUI::LfgPost*>) == 0x8);
    public:
    // Get instance field reference: public System.String timestamp
    [[deprecated("Use field access instead!")]] ::StringW& dyn_timestamp();
    // Get instance field reference: public ExtUI.LfgPost[] posts
    [[deprecated("Use field access instead!")]] ::ArrayW<::ExtUI::LfgPost*>& dyn_posts();
    // public System.Void .ctor()
    // Offset: 0x28E7538
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LfgPostJson* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::ExtUI::LfgPostJson::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LfgPostJson*, creationType>()));
    }
  }; // ExtUI.LfgPostJson
  #pragma pack(pop)
  static check_size<sizeof(LfgPostJson), 24 + sizeof(::ArrayW<::ExtUI::LfgPost*>)> __ExtUI_LfgPostJsonSizeCheck;
  static_assert(sizeof(LfgPostJson) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: ExtUI::LfgPostJson::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
