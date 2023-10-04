// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: TutorialTip
#include "GlobalNamespace/TutorialTip.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: TutorialTips
  class TutorialTips;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::TutorialTips);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TutorialTips*, "", "TutorialTips");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: TutorialTips
  // [TokenAttribute] Offset: FFFFFFFF
  class TutorialTips : public ::Il2CppObject {
    public:
    public:
    // public System.Collections.Generic.List`1<TutorialTip> tutorialTips
    // Size: 0x8
    // Offset: 0x10
    ::System::Collections::Generic::List_1<::GlobalNamespace::TutorialTip>* tutorialTips;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::GlobalNamespace::TutorialTip>*) == 0x8);
    // public System.Int32 currentTutorialTip
    // Size: 0x4
    // Offset: 0x18
    int currentTutorialTip;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: public System.Collections.Generic.List`1<TutorialTip> tutorialTips
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::GlobalNamespace::TutorialTip>*& dyn_tutorialTips();
    // Get instance field reference: public System.Int32 currentTutorialTip
    [[deprecated("Use field access instead!")]] int& dyn_currentTutorialTip();
    // public System.Void .ctor()
    // Offset: 0xFE28D8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TutorialTips* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::TutorialTips::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TutorialTips*, creationType>()));
    }
    // public System.Void InitTutorialTips()
    // Offset: 0xFE2AA0
    void InitTutorialTips();
  }; // TutorialTips
  #pragma pack(pop)
  static check_size<sizeof(TutorialTips), 24 + sizeof(int)> __GlobalNamespace_TutorialTipsSizeCheck;
  static_assert(sizeof(TutorialTips) == 0x1C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::TutorialTips::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::TutorialTips::InitTutorialTips
// Il2CppName: InitTutorialTips
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TutorialTips::*)()>(&GlobalNamespace::TutorialTips::InitTutorialTips)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TutorialTips*), "InitTutorialTips", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};