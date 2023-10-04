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
  // Forward declaring type: HorizontalLayoutGroup
  class HorizontalLayoutGroup;
  // Forward declaring type: Image
  class Image;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: HUDGUIMedieval
namespace HUDGUIMedieval {
  // Forward declaring type: GathererLayout
  class GathererLayout;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::HUDGUIMedieval::GathererLayout);
DEFINE_IL2CPP_ARG_TYPE(::HUDGUIMedieval::GathererLayout*, "HUDGUIMedieval", "GathererLayout");
// Type namespace: HUDGUIMedieval
namespace HUDGUIMedieval {
  // Size: 0x44
  #pragma pack(push, 1)
  // Autogenerated type: HUDGUIMedieval.GathererLayout
  // [TokenAttribute] Offset: FFFFFFFF
  // [RequireComponent] Offset: AD2138
  class GathererLayout : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // [HeaderAttribute] Offset: 0xAE138C
    // public System.Int32 TotalElements
    // Size: 0x4
    // Offset: 0x18
    int TotalElements;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 CurrentQuantity
    // Size: 0x4
    // Offset: 0x1C
    int CurrentQuantity;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // [HeaderAttribute] Offset: 0xAE13C4
    // public UnityEngine.Sprite EnabledSprite
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::Sprite* EnabledSprite;
    // Field size check
    static_assert(sizeof(::UnityEngine::Sprite*) == 0x8);
    // public UnityEngine.Sprite DisabledSprite
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::Sprite* DisabledSprite;
    // Field size check
    static_assert(sizeof(::UnityEngine::Sprite*) == 0x8);
    // private UnityEngine.UI.HorizontalLayoutGroup _layout
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::UI::HorizontalLayoutGroup* layout;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::HorizontalLayoutGroup*) == 0x8);
    // private System.Collections.Generic.List`1<UnityEngine.UI.Image> _elements
    // Size: 0x8
    // Offset: 0x38
    ::System::Collections::Generic::List_1<::UnityEngine::UI::Image*>* elements;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::UnityEngine::UI::Image*>*) == 0x8);
    // private System.Single _imageWidth
    // Size: 0x4
    // Offset: 0x40
    float imageWidth;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public System.Int32 TotalElements
    [[deprecated("Use field access instead!")]] int& dyn_TotalElements();
    // Get instance field reference: public System.Int32 CurrentQuantity
    [[deprecated("Use field access instead!")]] int& dyn_CurrentQuantity();
    // Get instance field reference: public UnityEngine.Sprite EnabledSprite
    [[deprecated("Use field access instead!")]] ::UnityEngine::Sprite*& dyn_EnabledSprite();
    // Get instance field reference: public UnityEngine.Sprite DisabledSprite
    [[deprecated("Use field access instead!")]] ::UnityEngine::Sprite*& dyn_DisabledSprite();
    // Get instance field reference: private UnityEngine.UI.HorizontalLayoutGroup _layout
    [[deprecated("Use field access instead!")]] ::UnityEngine::UI::HorizontalLayoutGroup*& dyn__layout();
    // Get instance field reference: private System.Collections.Generic.List`1<UnityEngine.UI.Image> _elements
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::UnityEngine::UI::Image*>*& dyn__elements();
    // Get instance field reference: private System.Single _imageWidth
    [[deprecated("Use field access instead!")]] float& dyn__imageWidth();
    // private System.Void Awake()
    // Offset: 0x1493158
    void Awake();
    // private System.Void Start()
    // Offset: 0x14931D8
    void Start();
    // public System.Void SetTotalElements(System.Int32 newValue)
    // Offset: 0x14935A8
    void SetTotalElements(int newValue);
    // public System.Void SetCurrentQuantity(System.Int32 newValue)
    // Offset: 0x14935B0
    void SetCurrentQuantity(int newValue);
    // private System.Void Recalculate()
    // Offset: 0x1493278
    void Recalculate();
    // private System.Void CreateNewElements()
    // Offset: 0x14936E4
    void CreateNewElements();
    // private System.Void RemoveElements()
    // Offset: 0x1493870
    void RemoveElements();
    // private System.Void ReFill()
    // Offset: 0x14935B8
    void ReFill();
    // public System.Void .ctor()
    // Offset: 0x14939D0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GathererLayout* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::HUDGUIMedieval::GathererLayout::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GathererLayout*, creationType>()));
    }
  }; // HUDGUIMedieval.GathererLayout
  #pragma pack(pop)
  static check_size<sizeof(GathererLayout), 64 + sizeof(float)> __HUDGUIMedieval_GathererLayoutSizeCheck;
  static_assert(sizeof(GathererLayout) == 0x44);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HUDGUIMedieval::GathererLayout::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HUDGUIMedieval::GathererLayout::*)()>(&HUDGUIMedieval::GathererLayout::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HUDGUIMedieval::GathererLayout*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HUDGUIMedieval::GathererLayout::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HUDGUIMedieval::GathererLayout::*)()>(&HUDGUIMedieval::GathererLayout::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HUDGUIMedieval::GathererLayout*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HUDGUIMedieval::GathererLayout::SetTotalElements
// Il2CppName: SetTotalElements
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HUDGUIMedieval::GathererLayout::*)(int)>(&HUDGUIMedieval::GathererLayout::SetTotalElements)> {
  static const MethodInfo* get() {
    static auto* newValue = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HUDGUIMedieval::GathererLayout*), "SetTotalElements", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{newValue});
  }
};
// Writing MetadataGetter for method: HUDGUIMedieval::GathererLayout::SetCurrentQuantity
// Il2CppName: SetCurrentQuantity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HUDGUIMedieval::GathererLayout::*)(int)>(&HUDGUIMedieval::GathererLayout::SetCurrentQuantity)> {
  static const MethodInfo* get() {
    static auto* newValue = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HUDGUIMedieval::GathererLayout*), "SetCurrentQuantity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{newValue});
  }
};
// Writing MetadataGetter for method: HUDGUIMedieval::GathererLayout::Recalculate
// Il2CppName: Recalculate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HUDGUIMedieval::GathererLayout::*)()>(&HUDGUIMedieval::GathererLayout::Recalculate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HUDGUIMedieval::GathererLayout*), "Recalculate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HUDGUIMedieval::GathererLayout::CreateNewElements
// Il2CppName: CreateNewElements
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HUDGUIMedieval::GathererLayout::*)()>(&HUDGUIMedieval::GathererLayout::CreateNewElements)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HUDGUIMedieval::GathererLayout*), "CreateNewElements", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HUDGUIMedieval::GathererLayout::RemoveElements
// Il2CppName: RemoveElements
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HUDGUIMedieval::GathererLayout::*)()>(&HUDGUIMedieval::GathererLayout::RemoveElements)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HUDGUIMedieval::GathererLayout*), "RemoveElements", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HUDGUIMedieval::GathererLayout::ReFill
// Il2CppName: ReFill
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HUDGUIMedieval::GathererLayout::*)()>(&HUDGUIMedieval::GathererLayout::ReFill)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HUDGUIMedieval::GathererLayout*), "ReFill", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HUDGUIMedieval::GathererLayout::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
