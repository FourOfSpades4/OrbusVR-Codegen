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
// Completed includes
// Begin forward declares
// Forward declaring namespace: ExtUI
namespace ExtUI {
  // Forward declaring type: ScoreboardEntry
  class ScoreboardEntry;
}
// Completed forward declares
// Type namespace: ExtUI
namespace ExtUI {
  // Forward declaring type: ScoreboardList
  class ScoreboardList;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::ExtUI::ScoreboardList);
DEFINE_IL2CPP_ARG_TYPE(::ExtUI::ScoreboardList*, "ExtUI", "ScoreboardList");
// Type namespace: ExtUI
namespace ExtUI {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: ExtUI.ScoreboardList
  // [TokenAttribute] Offset: FFFFFFFF
  class ScoreboardList : public ::Il2CppObject {
    public:
    public:
    // public ExtUI.ScoreboardEntry[] scores
    // Size: 0x8
    // Offset: 0x10
    ::ArrayW<::ExtUI::ScoreboardEntry*> scores;
    // Field size check
    static_assert(sizeof(::ArrayW<::ExtUI::ScoreboardEntry*>) == 0x8);
    public:
    // Creating conversion operator: operator ::ArrayW<::ExtUI::ScoreboardEntry*>
    constexpr operator ::ArrayW<::ExtUI::ScoreboardEntry*>() const noexcept {
      return scores;
    }
    // Get instance field reference: public ExtUI.ScoreboardEntry[] scores
    [[deprecated("Use field access instead!")]] ::ArrayW<::ExtUI::ScoreboardEntry*>& dyn_scores();
    // public System.Void .ctor()
    // Offset: 0x28E92A4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ScoreboardList* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::ExtUI::ScoreboardList::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ScoreboardList*, creationType>()));
    }
  }; // ExtUI.ScoreboardList
  #pragma pack(pop)
  static check_size<sizeof(ScoreboardList), 16 + sizeof(::ArrayW<::ExtUI::ScoreboardEntry*>)> __ExtUI_ScoreboardListSizeCheck;
  static_assert(sizeof(ScoreboardList) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: ExtUI::ScoreboardList::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
