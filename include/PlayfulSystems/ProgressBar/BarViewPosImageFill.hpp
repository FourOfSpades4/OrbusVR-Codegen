// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: PlayfulSystems.ProgressBar.ProgressBarProView
#include "PlayfulSystems/ProgressBar/ProgressBarProView.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: RectTransform
  class RectTransform;
  // Forward declaring type: Vector2
  struct Vector2;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Image
  class Image;
}
// Completed forward declares
// Type namespace: PlayfulSystems.ProgressBar
namespace PlayfulSystems::ProgressBar {
  // Forward declaring type: BarViewPosImageFill
  class BarViewPosImageFill;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PlayfulSystems::ProgressBar::BarViewPosImageFill);
DEFINE_IL2CPP_ARG_TYPE(::PlayfulSystems::ProgressBar::BarViewPosImageFill*, "PlayfulSystems.ProgressBar", "BarViewPosImageFill");
// Type namespace: PlayfulSystems.ProgressBar
namespace PlayfulSystems::ProgressBar {
  // Size: 0x2C
  #pragma pack(push, 1)
  // Autogenerated type: PlayfulSystems.ProgressBar.BarViewPosImageFill
  // [TokenAttribute] Offset: FFFFFFFF
  // [RequireComponent] Offset: AD0F3C
  class BarViewPosImageFill : public ::PlayfulSystems::ProgressBar::ProgressBarProView {
    public:
    public:
    // private UnityEngine.RectTransform rectTrans
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::RectTransform* rectTrans;
    // Field size check
    static_assert(sizeof(::UnityEngine::RectTransform*) == 0x8);
    // private UnityEngine.UI.Image referenceImage
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::UI::Image* referenceImage;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Image*) == 0x8);
    // [RangeAttribute] Offset: 0xADEB34
    // private System.Single offset
    // Size: 0x4
    // Offset: 0x28
    float offset;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private UnityEngine.RectTransform rectTrans
    [[deprecated("Use field access instead!")]] ::UnityEngine::RectTransform*& dyn_rectTrans();
    // Get instance field reference: private UnityEngine.UI.Image referenceImage
    [[deprecated("Use field access instead!")]] ::UnityEngine::UI::Image*& dyn_referenceImage();
    // Get instance field reference: private System.Single offset
    [[deprecated("Use field access instead!")]] float& dyn_offset();
    // private UnityEngine.Vector2 GetAnchor(System.Single currentDisplay)
    // Offset: 0xEB415C
    ::UnityEngine::Vector2 GetAnchor(float currentDisplay);
    // private UnityEngine.Vector2 GetAnchorHorizontal(System.Single fillAmount, System.Int32 fillOrigin)
    // Offset: 0xEB436C
    ::UnityEngine::Vector2 GetAnchorHorizontal(float fillAmount, int fillOrigin);
    // private UnityEngine.Vector2 GetAnchorVertical(System.Single fillAmount, System.Int32 fillOrigin)
    // Offset: 0xEB43B8
    ::UnityEngine::Vector2 GetAnchorVertical(float fillAmount, int fillOrigin);
    // private UnityEngine.Vector2 GetAnchorRadial360(System.Single fillAmount, System.Int32 fillOrigin, System.Boolean fillClockwise)
    // Offset: 0xEB4404
    ::UnityEngine::Vector2 GetAnchorRadial360(float fillAmount, int fillOrigin, bool fillClockwise);
    // private UnityEngine.Vector2 GetPointOnCircle(System.Single degrees)
    // Offset: 0xEB4478
    ::UnityEngine::Vector2 GetPointOnCircle(float degrees);
    // public override System.Void UpdateView(System.Single currentValue, System.Single targetValue)
    // Offset: 0xEB40C8
    // Implemented from: PlayfulSystems.ProgressBar.ProgressBarProView
    // Base method: System.Void ProgressBarProView::UpdateView(System.Single currentValue, System.Single targetValue)
    void UpdateView(float currentValue, float targetValue);
    // public System.Void .ctor()
    // Offset: 0xEB4544
    // Implemented from: PlayfulSystems.ProgressBar.ProgressBarProView
    // Base method: System.Void ProgressBarProView::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BarViewPosImageFill* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::PlayfulSystems::ProgressBar::BarViewPosImageFill::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BarViewPosImageFill*, creationType>()));
    }
  }; // PlayfulSystems.ProgressBar.BarViewPosImageFill
  #pragma pack(pop)
  static check_size<sizeof(BarViewPosImageFill), 40 + sizeof(float)> __PlayfulSystems_ProgressBar_BarViewPosImageFillSizeCheck;
  static_assert(sizeof(BarViewPosImageFill) == 0x2C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PlayfulSystems::ProgressBar::BarViewPosImageFill::GetAnchor
// Il2CppName: GetAnchor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (PlayfulSystems::ProgressBar::BarViewPosImageFill::*)(float)>(&PlayfulSystems::ProgressBar::BarViewPosImageFill::GetAnchor)> {
  static const MethodInfo* get() {
    static auto* currentDisplay = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PlayfulSystems::ProgressBar::BarViewPosImageFill*), "GetAnchor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{currentDisplay});
  }
};
// Writing MetadataGetter for method: PlayfulSystems::ProgressBar::BarViewPosImageFill::GetAnchorHorizontal
// Il2CppName: GetAnchorHorizontal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (PlayfulSystems::ProgressBar::BarViewPosImageFill::*)(float, int)>(&PlayfulSystems::ProgressBar::BarViewPosImageFill::GetAnchorHorizontal)> {
  static const MethodInfo* get() {
    static auto* fillAmount = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* fillOrigin = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PlayfulSystems::ProgressBar::BarViewPosImageFill*), "GetAnchorHorizontal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{fillAmount, fillOrigin});
  }
};
// Writing MetadataGetter for method: PlayfulSystems::ProgressBar::BarViewPosImageFill::GetAnchorVertical
// Il2CppName: GetAnchorVertical
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (PlayfulSystems::ProgressBar::BarViewPosImageFill::*)(float, int)>(&PlayfulSystems::ProgressBar::BarViewPosImageFill::GetAnchorVertical)> {
  static const MethodInfo* get() {
    static auto* fillAmount = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* fillOrigin = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PlayfulSystems::ProgressBar::BarViewPosImageFill*), "GetAnchorVertical", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{fillAmount, fillOrigin});
  }
};
// Writing MetadataGetter for method: PlayfulSystems::ProgressBar::BarViewPosImageFill::GetAnchorRadial360
// Il2CppName: GetAnchorRadial360
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (PlayfulSystems::ProgressBar::BarViewPosImageFill::*)(float, int, bool)>(&PlayfulSystems::ProgressBar::BarViewPosImageFill::GetAnchorRadial360)> {
  static const MethodInfo* get() {
    static auto* fillAmount = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* fillOrigin = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* fillClockwise = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PlayfulSystems::ProgressBar::BarViewPosImageFill*), "GetAnchorRadial360", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{fillAmount, fillOrigin, fillClockwise});
  }
};
// Writing MetadataGetter for method: PlayfulSystems::ProgressBar::BarViewPosImageFill::GetPointOnCircle
// Il2CppName: GetPointOnCircle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (PlayfulSystems::ProgressBar::BarViewPosImageFill::*)(float)>(&PlayfulSystems::ProgressBar::BarViewPosImageFill::GetPointOnCircle)> {
  static const MethodInfo* get() {
    static auto* degrees = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PlayfulSystems::ProgressBar::BarViewPosImageFill*), "GetPointOnCircle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{degrees});
  }
};
// Writing MetadataGetter for method: PlayfulSystems::ProgressBar::BarViewPosImageFill::UpdateView
// Il2CppName: UpdateView
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (PlayfulSystems::ProgressBar::BarViewPosImageFill::*)(float, float)>(&PlayfulSystems::ProgressBar::BarViewPosImageFill::UpdateView)> {
  static const MethodInfo* get() {
    static auto* currentValue = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* targetValue = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PlayfulSystems::ProgressBar::BarViewPosImageFill*), "UpdateView", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{currentValue, targetValue});
  }
};
// Writing MetadataGetter for method: PlayfulSystems::ProgressBar::BarViewPosImageFill::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
