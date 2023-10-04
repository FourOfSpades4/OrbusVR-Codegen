// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Sprite
  class Sprite;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Image
  class Image;
}
// Completed forward declares
// Type namespace: HUDGUIMedieval
namespace HUDGUIMedieval {
  // Forward declaring type: ButtonImageOnClick
  class ButtonImageOnClick;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::HUDGUIMedieval::ButtonImageOnClick);
DEFINE_IL2CPP_ARG_TYPE(::HUDGUIMedieval::ButtonImageOnClick*, "HUDGUIMedieval", "ButtonImageOnClick");
// Type namespace: HUDGUIMedieval
namespace HUDGUIMedieval {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: HUDGUIMedieval.ButtonImageOnClick
  // [TokenAttribute] Offset: FFFFFFFF
  // [RequireComponent] Offset: AD1FFC
  class ButtonImageOnClick : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // public UnityEngine.Sprite SelectedSprite
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::Sprite* SelectedSprite;
    // Field size check
    static_assert(sizeof(::UnityEngine::Sprite*) == 0x8);
    // private UnityEngine.Sprite _normalSprite
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::Sprite* normalSprite;
    // Field size check
    static_assert(sizeof(::UnityEngine::Sprite*) == 0x8);
    // private UnityEngine.UI.Image _image
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::UI::Image* image;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Image*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public UnityEngine.Sprite SelectedSprite
    [[deprecated("Use field access instead!")]] ::UnityEngine::Sprite*& dyn_SelectedSprite();
    // Get instance field reference: private UnityEngine.Sprite _normalSprite
    [[deprecated("Use field access instead!")]] ::UnityEngine::Sprite*& dyn__normalSprite();
    // Get instance field reference: private UnityEngine.UI.Image _image
    [[deprecated("Use field access instead!")]] ::UnityEngine::UI::Image*& dyn__image();
    // private System.Void Awake()
    // Offset: 0x1492BC4
    void Awake();
    // public System.Void OnPointerDown()
    // Offset: 0x1492C38
    void OnPointerDown();
    // public System.Void OnPointerUp()
    // Offset: 0x1492C70
    void OnPointerUp();
    // public System.Void .ctor()
    // Offset: 0x1492CA4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ButtonImageOnClick* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::HUDGUIMedieval::ButtonImageOnClick::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ButtonImageOnClick*, creationType>()));
    }
  }; // HUDGUIMedieval.ButtonImageOnClick
  #pragma pack(pop)
  static check_size<sizeof(ButtonImageOnClick), 40 + sizeof(::UnityEngine::UI::Image*)> __HUDGUIMedieval_ButtonImageOnClickSizeCheck;
  static_assert(sizeof(ButtonImageOnClick) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HUDGUIMedieval::ButtonImageOnClick::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HUDGUIMedieval::ButtonImageOnClick::*)()>(&HUDGUIMedieval::ButtonImageOnClick::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HUDGUIMedieval::ButtonImageOnClick*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HUDGUIMedieval::ButtonImageOnClick::OnPointerDown
// Il2CppName: OnPointerDown
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HUDGUIMedieval::ButtonImageOnClick::*)()>(&HUDGUIMedieval::ButtonImageOnClick::OnPointerDown)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HUDGUIMedieval::ButtonImageOnClick*), "OnPointerDown", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HUDGUIMedieval::ButtonImageOnClick::OnPointerUp
// Il2CppName: OnPointerUp
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HUDGUIMedieval::ButtonImageOnClick::*)()>(&HUDGUIMedieval::ButtonImageOnClick::OnPointerUp)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HUDGUIMedieval::ButtonImageOnClick*), "OnPointerUp", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HUDGUIMedieval::ButtonImageOnClick::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!