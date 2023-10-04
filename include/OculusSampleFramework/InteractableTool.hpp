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
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
  // Forward declaring type: KeyValuePair`2<TKey, TValue>
  template<typename TKey, typename TValue>
  struct KeyValuePair_2;
}
// Forward declaring namespace: OculusSampleFramework
namespace OculusSampleFramework {
  // Forward declaring type: InteractableCollisionInfo
  class InteractableCollisionInfo;
  // Forward declaring type: Interactable
  class Interactable;
  // Forward declaring type: InteractableToolTags
  struct InteractableToolTags;
  // Forward declaring type: ToolInputState
  struct ToolInputState;
  // Forward declaring type: ColliderZone
  class ColliderZone;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: OculusSampleFramework
namespace OculusSampleFramework {
  // Forward declaring type: InteractableTool
  class InteractableTool;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::OculusSampleFramework::InteractableTool);
DEFINE_IL2CPP_ARG_TYPE(::OculusSampleFramework::InteractableTool*, "OculusSampleFramework", "InteractableTool");
// Type namespace: OculusSampleFramework
namespace OculusSampleFramework {
  // Size: 0x68
  #pragma pack(push, 1)
  // Autogenerated type: OculusSampleFramework.InteractableTool
  // [TokenAttribute] Offset: FFFFFFFF
  class InteractableTool : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // [CompilerGeneratedAttribute] Offset: 0xADFD80
    // private System.Boolean <IsRightHandedTool>k__BackingField
    // Size: 0x1
    // Offset: 0x18
    bool IsRightHandedTool;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: IsRightHandedTool and: Velocity
    char __padding0[0x3] = {};
    // [CompilerGeneratedAttribute] Offset: 0xADFD90
    // private UnityEngine.Vector3 <Velocity>k__BackingField
    // Size: 0xC
    // Offset: 0x1C
    ::UnityEngine::Vector3 Velocity;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // [CompilerGeneratedAttribute] Offset: 0xADFDA0
    // private UnityEngine.Vector3 <InteractionPosition>k__BackingField
    // Size: 0xC
    // Offset: 0x28
    ::UnityEngine::Vector3 InteractionPosition;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // Padding between fields: InteractionPosition and: currentIntersectingObjects
    char __padding2[0x4] = {};
    // protected System.Collections.Generic.List`1<OculusSampleFramework.InteractableCollisionInfo> _currentIntersectingObjects
    // Size: 0x8
    // Offset: 0x38
    ::System::Collections::Generic::List_1<::OculusSampleFramework::InteractableCollisionInfo*>* currentIntersectingObjects;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::OculusSampleFramework::InteractableCollisionInfo*>*) == 0x8);
    // private System.Collections.Generic.List`1<OculusSampleFramework.Interactable> _addedInteractables
    // Size: 0x8
    // Offset: 0x40
    ::System::Collections::Generic::List_1<::OculusSampleFramework::Interactable*>* addedInteractables;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::OculusSampleFramework::Interactable*>*) == 0x8);
    // private System.Collections.Generic.List`1<OculusSampleFramework.Interactable> _removedInteractables
    // Size: 0x8
    // Offset: 0x48
    ::System::Collections::Generic::List_1<::OculusSampleFramework::Interactable*>* removedInteractables;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::OculusSampleFramework::Interactable*>*) == 0x8);
    // private System.Collections.Generic.List`1<OculusSampleFramework.Interactable> _remainingInteractables
    // Size: 0x8
    // Offset: 0x50
    ::System::Collections::Generic::List_1<::OculusSampleFramework::Interactable*>* remainingInteractables;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::OculusSampleFramework::Interactable*>*) == 0x8);
    // private System.Collections.Generic.Dictionary`2<OculusSampleFramework.Interactable,OculusSampleFramework.InteractableCollisionInfo> _currInteractableToCollisionInfos
    // Size: 0x8
    // Offset: 0x58
    ::System::Collections::Generic::Dictionary_2<::OculusSampleFramework::Interactable*, ::OculusSampleFramework::InteractableCollisionInfo*>* currInteractableToCollisionInfos;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Dictionary_2<::OculusSampleFramework::Interactable*, ::OculusSampleFramework::InteractableCollisionInfo*>*) == 0x8);
    // private System.Collections.Generic.Dictionary`2<OculusSampleFramework.Interactable,OculusSampleFramework.InteractableCollisionInfo> _prevInteractableToCollisionInfos
    // Size: 0x8
    // Offset: 0x60
    ::System::Collections::Generic::Dictionary_2<::OculusSampleFramework::Interactable*, ::OculusSampleFramework::InteractableCollisionInfo*>* prevInteractableToCollisionInfos;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Dictionary_2<::OculusSampleFramework::Interactable*, ::OculusSampleFramework::InteractableCollisionInfo*>*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private System.Boolean <IsRightHandedTool>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$IsRightHandedTool$k__BackingField();
    // Get instance field reference: private UnityEngine.Vector3 <Velocity>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_$Velocity$k__BackingField();
    // Get instance field reference: private UnityEngine.Vector3 <InteractionPosition>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_$InteractionPosition$k__BackingField();
    // Get instance field reference: protected System.Collections.Generic.List`1<OculusSampleFramework.InteractableCollisionInfo> _currentIntersectingObjects
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::OculusSampleFramework::InteractableCollisionInfo*>*& dyn__currentIntersectingObjects();
    // Get instance field reference: private System.Collections.Generic.List`1<OculusSampleFramework.Interactable> _addedInteractables
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::OculusSampleFramework::Interactable*>*& dyn__addedInteractables();
    // Get instance field reference: private System.Collections.Generic.List`1<OculusSampleFramework.Interactable> _removedInteractables
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::OculusSampleFramework::Interactable*>*& dyn__removedInteractables();
    // Get instance field reference: private System.Collections.Generic.List`1<OculusSampleFramework.Interactable> _remainingInteractables
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::OculusSampleFramework::Interactable*>*& dyn__remainingInteractables();
    // Get instance field reference: private System.Collections.Generic.Dictionary`2<OculusSampleFramework.Interactable,OculusSampleFramework.InteractableCollisionInfo> _currInteractableToCollisionInfos
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Dictionary_2<::OculusSampleFramework::Interactable*, ::OculusSampleFramework::InteractableCollisionInfo*>*& dyn__currInteractableToCollisionInfos();
    // Get instance field reference: private System.Collections.Generic.Dictionary`2<OculusSampleFramework.Interactable,OculusSampleFramework.InteractableCollisionInfo> _prevInteractableToCollisionInfos
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Dictionary_2<::OculusSampleFramework::Interactable*, ::OculusSampleFramework::InteractableCollisionInfo*>*& dyn__prevInteractableToCollisionInfos();
    // public UnityEngine.Transform get_ToolTransform()
    // Offset: 0xD7696C
    ::UnityEngine::Transform* get_ToolTransform();
    // public System.Boolean get_IsRightHandedTool()
    // Offset: 0xD7388C
    bool get_IsRightHandedTool();
    // public System.Void set_IsRightHandedTool(System.Boolean value)
    // Offset: 0xD76974
    void set_IsRightHandedTool(bool value);
    // public OculusSampleFramework.InteractableToolTags get_ToolTags()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::OculusSampleFramework::InteractableToolTags get_ToolTags();
    // public OculusSampleFramework.ToolInputState get_ToolInputState()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::OculusSampleFramework::ToolInputState get_ToolInputState();
    // public System.Boolean get_IsFarFieldTool()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool get_IsFarFieldTool();
    // public UnityEngine.Vector3 get_Velocity()
    // Offset: 0xD73D64
    ::UnityEngine::Vector3 get_Velocity();
    // protected System.Void set_Velocity(UnityEngine.Vector3 value)
    // Offset: 0xD73D58
    void set_Velocity(::UnityEngine::Vector3 value);
    // public UnityEngine.Vector3 get_InteractionPosition()
    // Offset: 0xD76980
    ::UnityEngine::Vector3 get_InteractionPosition();
    // protected System.Void set_InteractionPosition(UnityEngine.Vector3 value)
    // Offset: 0xD73928
    void set_InteractionPosition(::UnityEngine::Vector3 value);
    // public System.Collections.Generic.List`1<OculusSampleFramework.InteractableCollisionInfo> GetCurrentIntersectingObjects()
    // Offset: 0xD7698C
    ::System::Collections::Generic::List_1<::OculusSampleFramework::InteractableCollisionInfo*>* GetCurrentIntersectingObjects();
    // public System.Collections.Generic.List`1<OculusSampleFramework.InteractableCollisionInfo> GetNextIntersectingObjects()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Collections::Generic::List_1<::OculusSampleFramework::InteractableCollisionInfo*>* GetNextIntersectingObjects();
    // public System.Void FocusOnInteractable(OculusSampleFramework.Interactable focusedInteractable, OculusSampleFramework.ColliderZone colliderZone)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void FocusOnInteractable(::OculusSampleFramework::Interactable* focusedInteractable, ::OculusSampleFramework::ColliderZone* colliderZone);
    // public System.Void DeFocus()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void DeFocus();
    // public System.Boolean get_EnableState()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool get_EnableState();
    // public System.Void set_EnableState(System.Boolean value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void set_EnableState(bool value);
    // public System.Void Initialize()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Initialize();
    // public System.Collections.Generic.KeyValuePair`2<OculusSampleFramework.Interactable,OculusSampleFramework.InteractableCollisionInfo> GetFirstCurrentCollisionInfo()
    // Offset: 0xD76994
    ::System::Collections::Generic::KeyValuePair_2<::OculusSampleFramework::Interactable*, ::OculusSampleFramework::InteractableCollisionInfo*> GetFirstCurrentCollisionInfo();
    // public System.Void ClearAllCurrentCollisionInfos()
    // Offset: 0xD769E4
    void ClearAllCurrentCollisionInfos();
    // public System.Void UpdateCurrentCollisionsBasedOnDepth()
    // Offset: 0xD76A44
    void UpdateCurrentCollisionsBasedOnDepth();
    // public System.Void UpdateLatestCollisionData()
    // Offset: 0xD76D10
    void UpdateLatestCollisionData();
    // protected System.Void .ctor()
    // Offset: 0xD74060
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InteractableTool* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::OculusSampleFramework::InteractableTool::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InteractableTool*, creationType>()));
    }
  }; // OculusSampleFramework.InteractableTool
  #pragma pack(pop)
  static check_size<sizeof(InteractableTool), 96 + sizeof(::System::Collections::Generic::Dictionary_2<::OculusSampleFramework::Interactable*, ::OculusSampleFramework::InteractableCollisionInfo*>*)> __OculusSampleFramework_InteractableToolSizeCheck;
  static_assert(sizeof(InteractableTool) == 0x68);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: OculusSampleFramework::InteractableTool::get_ToolTransform
// Il2CppName: get_ToolTransform
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Transform* (OculusSampleFramework::InteractableTool::*)()>(&OculusSampleFramework::InteractableTool::get_ToolTransform)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OculusSampleFramework::InteractableTool*), "get_ToolTransform", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OculusSampleFramework::InteractableTool::get_IsRightHandedTool
// Il2CppName: get_IsRightHandedTool
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (OculusSampleFramework::InteractableTool::*)()>(&OculusSampleFramework::InteractableTool::get_IsRightHandedTool)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OculusSampleFramework::InteractableTool*), "get_IsRightHandedTool", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OculusSampleFramework::InteractableTool::set_IsRightHandedTool
// Il2CppName: set_IsRightHandedTool
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OculusSampleFramework::InteractableTool::*)(bool)>(&OculusSampleFramework::InteractableTool::set_IsRightHandedTool)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OculusSampleFramework::InteractableTool*), "set_IsRightHandedTool", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: OculusSampleFramework::InteractableTool::get_ToolTags
// Il2CppName: get_ToolTags
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OculusSampleFramework::InteractableToolTags (OculusSampleFramework::InteractableTool::*)()>(&OculusSampleFramework::InteractableTool::get_ToolTags)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OculusSampleFramework::InteractableTool*), "get_ToolTags", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OculusSampleFramework::InteractableTool::get_ToolInputState
// Il2CppName: get_ToolInputState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OculusSampleFramework::ToolInputState (OculusSampleFramework::InteractableTool::*)()>(&OculusSampleFramework::InteractableTool::get_ToolInputState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OculusSampleFramework::InteractableTool*), "get_ToolInputState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OculusSampleFramework::InteractableTool::get_IsFarFieldTool
// Il2CppName: get_IsFarFieldTool
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (OculusSampleFramework::InteractableTool::*)()>(&OculusSampleFramework::InteractableTool::get_IsFarFieldTool)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OculusSampleFramework::InteractableTool*), "get_IsFarFieldTool", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OculusSampleFramework::InteractableTool::get_Velocity
// Il2CppName: get_Velocity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (OculusSampleFramework::InteractableTool::*)()>(&OculusSampleFramework::InteractableTool::get_Velocity)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OculusSampleFramework::InteractableTool*), "get_Velocity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OculusSampleFramework::InteractableTool::set_Velocity
// Il2CppName: set_Velocity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OculusSampleFramework::InteractableTool::*)(::UnityEngine::Vector3)>(&OculusSampleFramework::InteractableTool::set_Velocity)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OculusSampleFramework::InteractableTool*), "set_Velocity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: OculusSampleFramework::InteractableTool::get_InteractionPosition
// Il2CppName: get_InteractionPosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (OculusSampleFramework::InteractableTool::*)()>(&OculusSampleFramework::InteractableTool::get_InteractionPosition)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OculusSampleFramework::InteractableTool*), "get_InteractionPosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OculusSampleFramework::InteractableTool::set_InteractionPosition
// Il2CppName: set_InteractionPosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OculusSampleFramework::InteractableTool::*)(::UnityEngine::Vector3)>(&OculusSampleFramework::InteractableTool::set_InteractionPosition)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OculusSampleFramework::InteractableTool*), "set_InteractionPosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: OculusSampleFramework::InteractableTool::GetCurrentIntersectingObjects
// Il2CppName: GetCurrentIntersectingObjects
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::OculusSampleFramework::InteractableCollisionInfo*>* (OculusSampleFramework::InteractableTool::*)()>(&OculusSampleFramework::InteractableTool::GetCurrentIntersectingObjects)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OculusSampleFramework::InteractableTool*), "GetCurrentIntersectingObjects", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OculusSampleFramework::InteractableTool::GetNextIntersectingObjects
// Il2CppName: GetNextIntersectingObjects
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::OculusSampleFramework::InteractableCollisionInfo*>* (OculusSampleFramework::InteractableTool::*)()>(&OculusSampleFramework::InteractableTool::GetNextIntersectingObjects)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OculusSampleFramework::InteractableTool*), "GetNextIntersectingObjects", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OculusSampleFramework::InteractableTool::FocusOnInteractable
// Il2CppName: FocusOnInteractable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OculusSampleFramework::InteractableTool::*)(::OculusSampleFramework::Interactable*, ::OculusSampleFramework::ColliderZone*)>(&OculusSampleFramework::InteractableTool::FocusOnInteractable)> {
  static const MethodInfo* get() {
    static auto* focusedInteractable = &::il2cpp_utils::GetClassFromName("OculusSampleFramework", "Interactable")->byval_arg;
    static auto* colliderZone = &::il2cpp_utils::GetClassFromName("OculusSampleFramework", "ColliderZone")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OculusSampleFramework::InteractableTool*), "FocusOnInteractable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{focusedInteractable, colliderZone});
  }
};
// Writing MetadataGetter for method: OculusSampleFramework::InteractableTool::DeFocus
// Il2CppName: DeFocus
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OculusSampleFramework::InteractableTool::*)()>(&OculusSampleFramework::InteractableTool::DeFocus)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OculusSampleFramework::InteractableTool*), "DeFocus", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OculusSampleFramework::InteractableTool::get_EnableState
// Il2CppName: get_EnableState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (OculusSampleFramework::InteractableTool::*)()>(&OculusSampleFramework::InteractableTool::get_EnableState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OculusSampleFramework::InteractableTool*), "get_EnableState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OculusSampleFramework::InteractableTool::set_EnableState
// Il2CppName: set_EnableState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OculusSampleFramework::InteractableTool::*)(bool)>(&OculusSampleFramework::InteractableTool::set_EnableState)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OculusSampleFramework::InteractableTool*), "set_EnableState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: OculusSampleFramework::InteractableTool::Initialize
// Il2CppName: Initialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OculusSampleFramework::InteractableTool::*)()>(&OculusSampleFramework::InteractableTool::Initialize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OculusSampleFramework::InteractableTool*), "Initialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OculusSampleFramework::InteractableTool::GetFirstCurrentCollisionInfo
// Il2CppName: GetFirstCurrentCollisionInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::KeyValuePair_2<::OculusSampleFramework::Interactable*, ::OculusSampleFramework::InteractableCollisionInfo*> (OculusSampleFramework::InteractableTool::*)()>(&OculusSampleFramework::InteractableTool::GetFirstCurrentCollisionInfo)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OculusSampleFramework::InteractableTool*), "GetFirstCurrentCollisionInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OculusSampleFramework::InteractableTool::ClearAllCurrentCollisionInfos
// Il2CppName: ClearAllCurrentCollisionInfos
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OculusSampleFramework::InteractableTool::*)()>(&OculusSampleFramework::InteractableTool::ClearAllCurrentCollisionInfos)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OculusSampleFramework::InteractableTool*), "ClearAllCurrentCollisionInfos", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OculusSampleFramework::InteractableTool::UpdateCurrentCollisionsBasedOnDepth
// Il2CppName: UpdateCurrentCollisionsBasedOnDepth
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OculusSampleFramework::InteractableTool::*)()>(&OculusSampleFramework::InteractableTool::UpdateCurrentCollisionsBasedOnDepth)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OculusSampleFramework::InteractableTool*), "UpdateCurrentCollisionsBasedOnDepth", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OculusSampleFramework::InteractableTool::UpdateLatestCollisionData
// Il2CppName: UpdateLatestCollisionData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OculusSampleFramework::InteractableTool::*)()>(&OculusSampleFramework::InteractableTool::UpdateLatestCollisionData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OculusSampleFramework::InteractableTool*), "UpdateLatestCollisionData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OculusSampleFramework::InteractableTool::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
