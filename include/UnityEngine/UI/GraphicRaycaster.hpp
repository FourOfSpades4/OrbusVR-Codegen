// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.EventSystems.BaseRaycaster
#include "UnityEngine/EventSystems/BaseRaycaster.hpp"
// Including type: UnityEngine.LayerMask
#include "UnityEngine/LayerMask.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Canvas
  class Canvas;
  // Forward declaring type: Camera
  class Camera;
  // Skipping declaration: Vector2 because it is already included!
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: IList`1<T>
  template<typename T>
  class IList_1;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Graphic
  class Graphic;
  // Skipping declaration: BlockingObjects because it is already included!
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Comparison`1<T>
  template<typename T>
  class Comparison_1;
}
// Forward declaring namespace: UnityEngine::EventSystems
namespace UnityEngine::EventSystems {
  // Forward declaring type: PointerEventData
  class PointerEventData;
}
// Completed forward declares
// Type namespace: UnityEngine.UI
namespace UnityEngine::UI {
  // Forward declaring type: GraphicRaycaster
  class GraphicRaycaster;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::UI::GraphicRaycaster);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::GraphicRaycaster*, "UnityEngine.UI", "GraphicRaycaster");
// Type namespace: UnityEngine.UI
namespace UnityEngine::UI {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UI.GraphicRaycaster
  // [TokenAttribute] Offset: FFFFFFFF
  // [AddComponentMenu] Offset: AAE7D0
  // [RequireComponent] Offset: AAE7D0
  class GraphicRaycaster : public ::UnityEngine::EventSystems::BaseRaycaster {
    public:
    // Nested type: ::UnityEngine::UI::GraphicRaycaster::BlockingObjects
    struct BlockingObjects;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: UnityEngine.UI.GraphicRaycaster/BlockingObjects
    // [TokenAttribute] Offset: FFFFFFFF
    struct BlockingObjects/*, public ::System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: BlockingObjects
      constexpr BlockingObjects(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public UnityEngine.UI.GraphicRaycaster/BlockingObjects None
      static constexpr const int None = 0;
      // Get static field: static public UnityEngine.UI.GraphicRaycaster/BlockingObjects None
      static ::UnityEngine::UI::GraphicRaycaster::BlockingObjects _get_None();
      // Set static field: static public UnityEngine.UI.GraphicRaycaster/BlockingObjects None
      static void _set_None(::UnityEngine::UI::GraphicRaycaster::BlockingObjects value);
      // static field const value: static public UnityEngine.UI.GraphicRaycaster/BlockingObjects TwoD
      static constexpr const int TwoD = 1;
      // Get static field: static public UnityEngine.UI.GraphicRaycaster/BlockingObjects TwoD
      static ::UnityEngine::UI::GraphicRaycaster::BlockingObjects _get_TwoD();
      // Set static field: static public UnityEngine.UI.GraphicRaycaster/BlockingObjects TwoD
      static void _set_TwoD(::UnityEngine::UI::GraphicRaycaster::BlockingObjects value);
      // static field const value: static public UnityEngine.UI.GraphicRaycaster/BlockingObjects ThreeD
      static constexpr const int ThreeD = 2;
      // Get static field: static public UnityEngine.UI.GraphicRaycaster/BlockingObjects ThreeD
      static ::UnityEngine::UI::GraphicRaycaster::BlockingObjects _get_ThreeD();
      // Set static field: static public UnityEngine.UI.GraphicRaycaster/BlockingObjects ThreeD
      static void _set_ThreeD(::UnityEngine::UI::GraphicRaycaster::BlockingObjects value);
      // static field const value: static public UnityEngine.UI.GraphicRaycaster/BlockingObjects All
      static constexpr const int All = 3;
      // Get static field: static public UnityEngine.UI.GraphicRaycaster/BlockingObjects All
      static ::UnityEngine::UI::GraphicRaycaster::BlockingObjects _get_All();
      // Set static field: static public UnityEngine.UI.GraphicRaycaster/BlockingObjects All
      static void _set_All(::UnityEngine::UI::GraphicRaycaster::BlockingObjects value);
      // Get instance field reference: public System.Int32 value__
      [[deprecated("Use field access instead!")]] int& dyn_value__();
    }; // UnityEngine.UI.GraphicRaycaster/BlockingObjects
    #pragma pack(pop)
    static check_size<sizeof(GraphicRaycaster::BlockingObjects), 0 + sizeof(int)> __UnityEngine_UI_GraphicRaycaster_BlockingObjectsSizeCheck;
    static_assert(sizeof(GraphicRaycaster::BlockingObjects) == 0x4);
    public:
    // [FormerlySerializedAsAttribute] Offset: 0xAB0454
    // private System.Boolean m_IgnoreReversedGraphics
    // Size: 0x1
    // Offset: 0x18
    bool m_IgnoreReversedGraphics;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: m_IgnoreReversedGraphics and: m_BlockingObjects
    char __padding0[0x3] = {};
    // [FormerlySerializedAsAttribute] Offset: 0xAB04A0
    // private UnityEngine.UI.GraphicRaycaster/BlockingObjects m_BlockingObjects
    // Size: 0x4
    // Offset: 0x1C
    ::UnityEngine::UI::GraphicRaycaster::BlockingObjects m_BlockingObjects;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::GraphicRaycaster::BlockingObjects) == 0x4);
    // protected UnityEngine.LayerMask m_BlockingMask
    // Size: 0x4
    // Offset: 0x20
    ::UnityEngine::LayerMask m_BlockingMask;
    // Field size check
    static_assert(sizeof(::UnityEngine::LayerMask) == 0x4);
    // Padding between fields: m_BlockingMask and: m_Canvas
    char __padding2[0x4] = {};
    // private UnityEngine.Canvas m_Canvas
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::Canvas* m_Canvas;
    // Field size check
    static_assert(sizeof(::UnityEngine::Canvas*) == 0x8);
    // private System.Collections.Generic.List`1<UnityEngine.UI.Graphic> m_RaycastResults
    // Size: 0x8
    // Offset: 0x30
    ::System::Collections::Generic::List_1<::UnityEngine::UI::Graphic*>* m_RaycastResults;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::UnityEngine::UI::Graphic*>*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // static field const value: static protected System.Int32 kNoEventMaskSet
    static constexpr const int kNoEventMaskSet = -1;
    // Get static field: static protected System.Int32 kNoEventMaskSet
    static int _get_kNoEventMaskSet();
    // Set static field: static protected System.Int32 kNoEventMaskSet
    static void _set_kNoEventMaskSet(int value);
    // Get static field: static private readonly System.Collections.Generic.List`1<UnityEngine.UI.Graphic> s_SortedGraphics
    static ::System::Collections::Generic::List_1<::UnityEngine::UI::Graphic*>* _get_s_SortedGraphics();
    // Set static field: static private readonly System.Collections.Generic.List`1<UnityEngine.UI.Graphic> s_SortedGraphics
    static void _set_s_SortedGraphics(::System::Collections::Generic::List_1<::UnityEngine::UI::Graphic*>* value);
    // [CompilerGeneratedAttribute] Offset: 0xAB04FC
    // Get static field: static private System.Comparison`1<UnityEngine.UI.Graphic> <>f__am$cache0
    static ::System::Comparison_1<::UnityEngine::UI::Graphic*>* _get_$$f__am$cache0();
    // Set static field: static private System.Comparison`1<UnityEngine.UI.Graphic> <>f__am$cache0
    static void _set_$$f__am$cache0(::System::Comparison_1<::UnityEngine::UI::Graphic*>* value);
    // Get instance field reference: private System.Boolean m_IgnoreReversedGraphics
    [[deprecated("Use field access instead!")]] bool& dyn_m_IgnoreReversedGraphics();
    // Get instance field reference: private UnityEngine.UI.GraphicRaycaster/BlockingObjects m_BlockingObjects
    [[deprecated("Use field access instead!")]] ::UnityEngine::UI::GraphicRaycaster::BlockingObjects& dyn_m_BlockingObjects();
    // Get instance field reference: protected UnityEngine.LayerMask m_BlockingMask
    [[deprecated("Use field access instead!")]] ::UnityEngine::LayerMask& dyn_m_BlockingMask();
    // Get instance field reference: private UnityEngine.Canvas m_Canvas
    [[deprecated("Use field access instead!")]] ::UnityEngine::Canvas*& dyn_m_Canvas();
    // Get instance field reference: private System.Collections.Generic.List`1<UnityEngine.UI.Graphic> m_RaycastResults
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::UnityEngine::UI::Graphic*>*& dyn_m_RaycastResults();
    // public System.Boolean get_ignoreReversedGraphics()
    // Offset: 0x1C46680
    bool get_ignoreReversedGraphics();
    // public System.Void set_ignoreReversedGraphics(System.Boolean value)
    // Offset: 0x1C46688
    void set_ignoreReversedGraphics(bool value);
    // public UnityEngine.UI.GraphicRaycaster/BlockingObjects get_blockingObjects()
    // Offset: 0x1C46694
    ::UnityEngine::UI::GraphicRaycaster::BlockingObjects get_blockingObjects();
    // public System.Void set_blockingObjects(UnityEngine.UI.GraphicRaycaster/BlockingObjects value)
    // Offset: 0x1C4669C
    void set_blockingObjects(::UnityEngine::UI::GraphicRaycaster::BlockingObjects value);
    // private UnityEngine.Canvas get_canvas()
    // Offset: 0x1C46564
    ::UnityEngine::Canvas* get_canvas();
    // static private System.Void Raycast(UnityEngine.Canvas canvas, UnityEngine.Camera eventCamera, UnityEngine.Vector2 pointerPosition, System.Collections.Generic.IList`1<UnityEngine.UI.Graphic> foundGraphics, System.Collections.Generic.List`1<UnityEngine.UI.Graphic> results)
    // Offset: 0x1C47718
    static void Raycast(::UnityEngine::Canvas* canvas, ::UnityEngine::Camera* eventCamera, ::UnityEngine::Vector2 pointerPosition, ::System::Collections::Generic::IList_1<::UnityEngine::UI::Graphic*>* foundGraphics, ::System::Collections::Generic::List_1<::UnityEngine::UI::Graphic*>* results);
    // static private System.Void .cctor()
    // Offset: 0x1C47DD0
    static void _cctor();
    // static private System.Int32 <Raycast>m__0(UnityEngine.UI.Graphic g1, UnityEngine.UI.Graphic g2)
    // Offset: 0x1C47E44
    static int $Raycast$m__0(::UnityEngine::UI::Graphic* g1, ::UnityEngine::UI::Graphic* g2);
    // protected System.Void .ctor()
    // Offset: 0x1C4646C
    // Implemented from: UnityEngine.EventSystems.BaseRaycaster
    // Base method: System.Void BaseRaycaster::.ctor()
    // Base method: System.Void UIBehaviour::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GraphicRaycaster* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UI::GraphicRaycaster::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GraphicRaycaster*, creationType>()));
    }
    // public override System.Int32 get_sortOrderPriority()
    // Offset: 0x1C464F8
    // Implemented from: UnityEngine.EventSystems.BaseRaycaster
    // Base method: System.Int32 BaseRaycaster::get_sortOrderPriority()
    int get_sortOrderPriority();
    // public override System.Int32 get_renderOrderPriority()
    // Offset: 0x1C465FC
    // Implemented from: UnityEngine.EventSystems.BaseRaycaster
    // Base method: System.Int32 BaseRaycaster::get_renderOrderPriority()
    int get_renderOrderPriority();
    // public override System.Void Raycast(UnityEngine.EventSystems.PointerEventData eventData, System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult> resultAppendList)
    // Offset: 0x1C466A4
    // Implemented from: UnityEngine.EventSystems.BaseRaycaster
    // Base method: System.Void BaseRaycaster::Raycast(UnityEngine.EventSystems.PointerEventData eventData, System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult> resultAppendList)
    void Raycast(::UnityEngine::EventSystems::PointerEventData* eventData, ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>* resultAppendList);
    // public override UnityEngine.Camera get_eventCamera()
    // Offset: 0x1C47C50
    // Implemented from: UnityEngine.EventSystems.BaseRaycaster
    // Base method: UnityEngine.Camera BaseRaycaster::get_eventCamera()
    ::UnityEngine::Camera* get_eventCamera();
  }; // UnityEngine.UI.GraphicRaycaster
  #pragma pack(pop)
  static check_size<sizeof(GraphicRaycaster), 48 + sizeof(::System::Collections::Generic::List_1<::UnityEngine::UI::Graphic*>*)> __UnityEngine_UI_GraphicRaycasterSizeCheck;
  static_assert(sizeof(GraphicRaycaster) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::GraphicRaycaster::BlockingObjects, "UnityEngine.UI", "GraphicRaycaster/BlockingObjects");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UI::GraphicRaycaster::get_ignoreReversedGraphics
// Il2CppName: get_ignoreReversedGraphics
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UI::GraphicRaycaster::*)()>(&UnityEngine::UI::GraphicRaycaster::get_ignoreReversedGraphics)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::GraphicRaycaster*), "get_ignoreReversedGraphics", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::GraphicRaycaster::set_ignoreReversedGraphics
// Il2CppName: set_ignoreReversedGraphics
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::GraphicRaycaster::*)(bool)>(&UnityEngine::UI::GraphicRaycaster::set_ignoreReversedGraphics)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::GraphicRaycaster*), "set_ignoreReversedGraphics", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::GraphicRaycaster::get_blockingObjects
// Il2CppName: get_blockingObjects
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UI::GraphicRaycaster::BlockingObjects (UnityEngine::UI::GraphicRaycaster::*)()>(&UnityEngine::UI::GraphicRaycaster::get_blockingObjects)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::GraphicRaycaster*), "get_blockingObjects", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::GraphicRaycaster::set_blockingObjects
// Il2CppName: set_blockingObjects
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::GraphicRaycaster::*)(::UnityEngine::UI::GraphicRaycaster::BlockingObjects)>(&UnityEngine::UI::GraphicRaycaster::set_blockingObjects)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.UI", "GraphicRaycaster/BlockingObjects")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::GraphicRaycaster*), "set_blockingObjects", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::GraphicRaycaster::get_canvas
// Il2CppName: get_canvas
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Canvas* (UnityEngine::UI::GraphicRaycaster::*)()>(&UnityEngine::UI::GraphicRaycaster::get_canvas)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::GraphicRaycaster*), "get_canvas", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::GraphicRaycaster::Raycast
// Il2CppName: Raycast
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Canvas*, ::UnityEngine::Camera*, ::UnityEngine::Vector2, ::System::Collections::Generic::IList_1<::UnityEngine::UI::Graphic*>*, ::System::Collections::Generic::List_1<::UnityEngine::UI::Graphic*>*)>(&UnityEngine::UI::GraphicRaycaster::Raycast)> {
  static const MethodInfo* get() {
    static auto* canvas = &::il2cpp_utils::GetClassFromName("UnityEngine", "Canvas")->byval_arg;
    static auto* eventCamera = &::il2cpp_utils::GetClassFromName("UnityEngine", "Camera")->byval_arg;
    static auto* pointerPosition = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    static auto* foundGraphics = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IList`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.UI", "Graphic")})->byval_arg;
    static auto* results = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.UI", "Graphic")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::GraphicRaycaster*), "Raycast", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{canvas, eventCamera, pointerPosition, foundGraphics, results});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::GraphicRaycaster::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::UI::GraphicRaycaster::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::GraphicRaycaster*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::GraphicRaycaster::$Raycast$m__0
// Il2CppName: <Raycast>m__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::UnityEngine::UI::Graphic*, ::UnityEngine::UI::Graphic*)>(&UnityEngine::UI::GraphicRaycaster::$Raycast$m__0)> {
  static const MethodInfo* get() {
    static auto* g1 = &::il2cpp_utils::GetClassFromName("UnityEngine.UI", "Graphic")->byval_arg;
    static auto* g2 = &::il2cpp_utils::GetClassFromName("UnityEngine.UI", "Graphic")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::GraphicRaycaster*), "<Raycast>m__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{g1, g2});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::GraphicRaycaster::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::UI::GraphicRaycaster::get_sortOrderPriority
// Il2CppName: get_sortOrderPriority
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::UI::GraphicRaycaster::*)()>(&UnityEngine::UI::GraphicRaycaster::get_sortOrderPriority)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::GraphicRaycaster*), "get_sortOrderPriority", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::GraphicRaycaster::get_renderOrderPriority
// Il2CppName: get_renderOrderPriority
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::UI::GraphicRaycaster::*)()>(&UnityEngine::UI::GraphicRaycaster::get_renderOrderPriority)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::GraphicRaycaster*), "get_renderOrderPriority", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::GraphicRaycaster::Raycast
// Il2CppName: Raycast
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::GraphicRaycaster::*)(::UnityEngine::EventSystems::PointerEventData*, ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>*)>(&UnityEngine::UI::GraphicRaycaster::Raycast)> {
  static const MethodInfo* get() {
    static auto* eventData = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "PointerEventData")->byval_arg;
    static auto* resultAppendList = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "RaycastResult")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::GraphicRaycaster*), "Raycast", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eventData, resultAppendList});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::GraphicRaycaster::get_eventCamera
// Il2CppName: get_eventCamera
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Camera* (UnityEngine::UI::GraphicRaycaster::*)()>(&UnityEngine::UI::GraphicRaycaster::get_eventCamera)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::GraphicRaycaster*), "get_eventCamera", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
