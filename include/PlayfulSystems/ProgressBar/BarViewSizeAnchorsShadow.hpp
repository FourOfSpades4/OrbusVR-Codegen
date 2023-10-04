// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: PlayfulSystems.ProgressBar.BarViewSizeAnchors
#include "PlayfulSystems/ProgressBar/BarViewSizeAnchors.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: PlayfulSystems.ProgressBar
namespace PlayfulSystems::ProgressBar {
  // Forward declaring type: BarViewSizeAnchorsShadow
  class BarViewSizeAnchorsShadow;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PlayfulSystems::ProgressBar::BarViewSizeAnchorsShadow);
DEFINE_IL2CPP_ARG_TYPE(::PlayfulSystems::ProgressBar::BarViewSizeAnchorsShadow*, "PlayfulSystems.ProgressBar", "BarViewSizeAnchorsShadow");
// Type namespace: PlayfulSystems.ProgressBar
namespace PlayfulSystems::ProgressBar {
  // Size: 0x34
  #pragma pack(push, 1)
  // Autogenerated type: PlayfulSystems.ProgressBar.BarViewSizeAnchorsShadow
  // [TokenAttribute] Offset: FFFFFFFF
  // [RequireComponent] Offset: AD1004
  class BarViewSizeAnchorsShadow : public ::PlayfulSystems::ProgressBar::BarViewSizeAnchors {
    public:
    // Writing base type padding for base size: 0x2E to desired offset: 0x30
    char ___base_padding[0x2] = {};
    // Nested type: ::PlayfulSystems::ProgressBar::BarViewSizeAnchorsShadow::ShadowType
    struct ShadowType;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: PlayfulSystems.ProgressBar.BarViewSizeAnchorsShadow/ShadowType
    // [TokenAttribute] Offset: FFFFFFFF
    struct ShadowType/*, public ::System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: ShadowType
      constexpr ShadowType(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public PlayfulSystems.ProgressBar.BarViewSizeAnchorsShadow/ShadowType Gaining
      static constexpr const int Gaining = 0;
      // Get static field: static public PlayfulSystems.ProgressBar.BarViewSizeAnchorsShadow/ShadowType Gaining
      static ::PlayfulSystems::ProgressBar::BarViewSizeAnchorsShadow::ShadowType _get_Gaining();
      // Set static field: static public PlayfulSystems.ProgressBar.BarViewSizeAnchorsShadow/ShadowType Gaining
      static void _set_Gaining(::PlayfulSystems::ProgressBar::BarViewSizeAnchorsShadow::ShadowType value);
      // static field const value: static public PlayfulSystems.ProgressBar.BarViewSizeAnchorsShadow/ShadowType Losing
      static constexpr const int Losing = 1;
      // Get static field: static public PlayfulSystems.ProgressBar.BarViewSizeAnchorsShadow/ShadowType Losing
      static ::PlayfulSystems::ProgressBar::BarViewSizeAnchorsShadow::ShadowType _get_Losing();
      // Set static field: static public PlayfulSystems.ProgressBar.BarViewSizeAnchorsShadow/ShadowType Losing
      static void _set_Losing(::PlayfulSystems::ProgressBar::BarViewSizeAnchorsShadow::ShadowType value);
      // Get instance field reference: public System.Int32 value__
      [[deprecated("Use field access instead!")]] int& dyn_value__();
    }; // PlayfulSystems.ProgressBar.BarViewSizeAnchorsShadow/ShadowType
    #pragma pack(pop)
    static check_size<sizeof(BarViewSizeAnchorsShadow::ShadowType), 0 + sizeof(int)> __PlayfulSystems_ProgressBar_BarViewSizeAnchorsShadow_ShadowTypeSizeCheck;
    static_assert(sizeof(BarViewSizeAnchorsShadow::ShadowType) == 0x4);
    public:
    // private PlayfulSystems.ProgressBar.BarViewSizeAnchorsShadow/ShadowType shadowType
    // Size: 0x4
    // Offset: 0x30
    ::PlayfulSystems::ProgressBar::BarViewSizeAnchorsShadow::ShadowType shadowType;
    // Field size check
    static_assert(sizeof(::PlayfulSystems::ProgressBar::BarViewSizeAnchorsShadow::ShadowType) == 0x4);
    public:
    // Get instance field reference: private PlayfulSystems.ProgressBar.BarViewSizeAnchorsShadow/ShadowType shadowType
    [[deprecated("Use field access instead!")]] ::PlayfulSystems::ProgressBar::BarViewSizeAnchorsShadow::ShadowType& dyn_shadowType();
    // public override System.Void UpdateView(System.Single currentValue, System.Single targetValue)
    // Offset: 0xEB4694
    // Implemented from: PlayfulSystems.ProgressBar.BarViewSizeAnchors
    // Base method: System.Void BarViewSizeAnchors::UpdateView(System.Single currentValue, System.Single targetValue)
    void UpdateView(float currentValue, float targetValue);
    // public System.Void .ctor()
    // Offset: 0xEB47E8
    // Implemented from: PlayfulSystems.ProgressBar.BarViewSizeAnchors
    // Base method: System.Void BarViewSizeAnchors::.ctor()
    // Base method: System.Void ProgressBarProView::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BarViewSizeAnchorsShadow* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::PlayfulSystems::ProgressBar::BarViewSizeAnchorsShadow::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BarViewSizeAnchorsShadow*, creationType>()));
    }
  }; // PlayfulSystems.ProgressBar.BarViewSizeAnchorsShadow
  #pragma pack(pop)
  static check_size<sizeof(BarViewSizeAnchorsShadow), 48 + sizeof(::PlayfulSystems::ProgressBar::BarViewSizeAnchorsShadow::ShadowType)> __PlayfulSystems_ProgressBar_BarViewSizeAnchorsShadowSizeCheck;
  static_assert(sizeof(BarViewSizeAnchorsShadow) == 0x34);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::PlayfulSystems::ProgressBar::BarViewSizeAnchorsShadow::ShadowType, "PlayfulSystems.ProgressBar", "BarViewSizeAnchorsShadow/ShadowType");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PlayfulSystems::ProgressBar::BarViewSizeAnchorsShadow::UpdateView
// Il2CppName: UpdateView
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (PlayfulSystems::ProgressBar::BarViewSizeAnchorsShadow::*)(float, float)>(&PlayfulSystems::ProgressBar::BarViewSizeAnchorsShadow::UpdateView)> {
  static const MethodInfo* get() {
    static auto* currentValue = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* targetValue = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PlayfulSystems::ProgressBar::BarViewSizeAnchorsShadow*), "UpdateView", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{currentValue, targetValue});
  }
};
// Writing MetadataGetter for method: PlayfulSystems::ProgressBar::BarViewSizeAnchorsShadow::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!