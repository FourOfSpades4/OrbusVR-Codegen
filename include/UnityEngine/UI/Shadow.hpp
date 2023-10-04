// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.UI.BaseMeshEffect
#include "UnityEngine/UI/BaseMeshEffect.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
// Including type: UnityEngine.UIVertex
#include "UnityEngine/UIVertex.hpp"
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
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Color32 because it is already included!
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: VertexHelper
  class VertexHelper;
}
// Completed forward declares
// Type namespace: UnityEngine.UI
namespace UnityEngine::UI {
  // Forward declaring type: Shadow
  class Shadow;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::UI::Shadow);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::Shadow*, "UnityEngine.UI", "Shadow");
// Type namespace: UnityEngine.UI
namespace UnityEngine::UI {
  // Size: 0x39
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UI.Shadow
  // [TokenAttribute] Offset: FFFFFFFF
  // [AddComponentMenu] Offset: AAF374
  class Shadow : public ::UnityEngine::UI::BaseMeshEffect {
    public:
    public:
    // private UnityEngine.Color m_EffectColor
    // Size: 0x10
    // Offset: 0x20
    ::UnityEngine::Color m_EffectColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // private UnityEngine.Vector2 m_EffectDistance
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::Vector2 m_EffectDistance;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector2) == 0x8);
    // private System.Boolean m_UseGraphicAlpha
    // Size: 0x1
    // Offset: 0x38
    bool m_UseGraphicAlpha;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // static field const value: static private System.Single kMaxEffectDistance
    static constexpr const float kMaxEffectDistance = 600;
    // Get static field: static private System.Single kMaxEffectDistance
    static float _get_kMaxEffectDistance();
    // Set static field: static private System.Single kMaxEffectDistance
    static void _set_kMaxEffectDistance(float value);
    // Get instance field reference: private UnityEngine.Color m_EffectColor
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color& dyn_m_EffectColor();
    // Get instance field reference: private UnityEngine.Vector2 m_EffectDistance
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector2& dyn_m_EffectDistance();
    // Get instance field reference: private System.Boolean m_UseGraphicAlpha
    [[deprecated("Use field access instead!")]] bool& dyn_m_UseGraphicAlpha();
    // public UnityEngine.Color get_effectColor()
    // Offset: 0x1E0A6EC
    ::UnityEngine::Color get_effectColor();
    // public System.Void set_effectColor(UnityEngine.Color value)
    // Offset: 0x1E18C14
    void set_effectColor(::UnityEngine::Color value);
    // public UnityEngine.Vector2 get_effectDistance()
    // Offset: 0x1E0A6F8
    ::UnityEngine::Vector2 get_effectDistance();
    // public System.Void set_effectDistance(UnityEngine.Vector2 value)
    // Offset: 0x1E18D00
    void set_effectDistance(::UnityEngine::Vector2 value);
    // public System.Boolean get_useGraphicAlpha()
    // Offset: 0x1E18E48
    bool get_useGraphicAlpha();
    // public System.Void set_useGraphicAlpha(System.Boolean value)
    // Offset: 0x1E18E50
    void set_useGraphicAlpha(bool value);
    // protected System.Void ApplyShadowZeroAlloc(System.Collections.Generic.List`1<UnityEngine.UIVertex> verts, UnityEngine.Color32 color, System.Int32 start, System.Int32 end, System.Single x, System.Single y)
    // Offset: 0x1E0A700
    void ApplyShadowZeroAlloc(::System::Collections::Generic::List_1<::UnityEngine::UIVertex>* verts, ::UnityEngine::Color32 color, int start, int end, float x, float y);
    // protected System.Void ApplyShadow(System.Collections.Generic.List`1<UnityEngine.UIVertex> verts, UnityEngine.Color32 color, System.Int32 start, System.Int32 end, System.Single x, System.Single y)
    // Offset: 0x1E18F24
    void ApplyShadow(::System::Collections::Generic::List_1<::UnityEngine::UIVertex>* verts, ::UnityEngine::Color32 color, int start, int end, float x, float y);
    // protected System.Void .ctor()
    // Offset: 0x1E0A294
    // Implemented from: UnityEngine.UI.BaseMeshEffect
    // Base method: System.Void BaseMeshEffect::.ctor()
    // Base method: System.Void UIBehaviour::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Shadow* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UI::Shadow::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Shadow*, creationType>()));
    }
    // public override System.Void ModifyMesh(UnityEngine.UI.VertexHelper vh)
    // Offset: 0x1E18F2C
    // Implemented from: UnityEngine.UI.BaseMeshEffect
    // Base method: System.Void BaseMeshEffect::ModifyMesh(UnityEngine.UI.VertexHelper vh)
    void ModifyMesh(::UnityEngine::UI::VertexHelper* vh);
  }; // UnityEngine.UI.Shadow
  #pragma pack(pop)
  static check_size<sizeof(Shadow), 56 + sizeof(bool)> __UnityEngine_UI_ShadowSizeCheck;
  static_assert(sizeof(Shadow) == 0x39);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UI::Shadow::get_effectColor
// Il2CppName: get_effectColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (UnityEngine::UI::Shadow::*)()>(&UnityEngine::UI::Shadow::get_effectColor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::Shadow*), "get_effectColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::Shadow::set_effectColor
// Il2CppName: set_effectColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::Shadow::*)(::UnityEngine::Color)>(&UnityEngine::UI::Shadow::set_effectColor)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::Shadow*), "set_effectColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::Shadow::get_effectDistance
// Il2CppName: get_effectDistance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (UnityEngine::UI::Shadow::*)()>(&UnityEngine::UI::Shadow::get_effectDistance)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::Shadow*), "get_effectDistance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::Shadow::set_effectDistance
// Il2CppName: set_effectDistance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::Shadow::*)(::UnityEngine::Vector2)>(&UnityEngine::UI::Shadow::set_effectDistance)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::Shadow*), "set_effectDistance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::Shadow::get_useGraphicAlpha
// Il2CppName: get_useGraphicAlpha
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UI::Shadow::*)()>(&UnityEngine::UI::Shadow::get_useGraphicAlpha)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::Shadow*), "get_useGraphicAlpha", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::Shadow::set_useGraphicAlpha
// Il2CppName: set_useGraphicAlpha
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::Shadow::*)(bool)>(&UnityEngine::UI::Shadow::set_useGraphicAlpha)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::Shadow*), "set_useGraphicAlpha", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::Shadow::ApplyShadowZeroAlloc
// Il2CppName: ApplyShadowZeroAlloc
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::Shadow::*)(::System::Collections::Generic::List_1<::UnityEngine::UIVertex>*, ::UnityEngine::Color32, int, int, float, float)>(&UnityEngine::UI::Shadow::ApplyShadowZeroAlloc)> {
  static const MethodInfo* get() {
    static auto* verts = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "UIVertex")})->byval_arg;
    static auto* color = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color32")->byval_arg;
    static auto* start = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* end = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* y = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::Shadow*), "ApplyShadowZeroAlloc", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{verts, color, start, end, x, y});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::Shadow::ApplyShadow
// Il2CppName: ApplyShadow
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::Shadow::*)(::System::Collections::Generic::List_1<::UnityEngine::UIVertex>*, ::UnityEngine::Color32, int, int, float, float)>(&UnityEngine::UI::Shadow::ApplyShadow)> {
  static const MethodInfo* get() {
    static auto* verts = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "UIVertex")})->byval_arg;
    static auto* color = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color32")->byval_arg;
    static auto* start = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* end = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* y = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::Shadow*), "ApplyShadow", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{verts, color, start, end, x, y});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::Shadow::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::UI::Shadow::ModifyMesh
// Il2CppName: ModifyMesh
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::Shadow::*)(::UnityEngine::UI::VertexHelper*)>(&UnityEngine::UI::Shadow::ModifyMesh)> {
  static const MethodInfo* get() {
    static auto* vh = &::il2cpp_utils::GetClassFromName("UnityEngine.UI", "VertexHelper")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::Shadow*), "ModifyMesh", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{vh});
  }
};
