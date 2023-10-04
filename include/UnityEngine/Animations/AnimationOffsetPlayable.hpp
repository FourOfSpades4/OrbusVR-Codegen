// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.Playables.IPlayable
#include "UnityEngine/Playables/IPlayable.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Including type: UnityEngine.Playables.PlayableHandle
#include "UnityEngine/Playables/PlayableHandle.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Playables
namespace UnityEngine::Playables {
  // Forward declaring type: PlayableGraph
  struct PlayableGraph;
  // Forward declaring type: Playable
  struct Playable;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Vector3
  struct Vector3;
  // Forward declaring type: Quaternion
  struct Quaternion;
}
// Completed forward declares
// Type namespace: UnityEngine.Animations
namespace UnityEngine::Animations {
  // Forward declaring type: AnimationOffsetPlayable
  struct AnimationOffsetPlayable;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Animations::AnimationOffsetPlayable, "UnityEngine.Animations", "AnimationOffsetPlayable");
// Type namespace: UnityEngine.Animations
namespace UnityEngine::Animations {
  // Size: 0xC
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.Animations.AnimationOffsetPlayable
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: A9278C
  // [NativeHeaderAttribute] Offset: A9278C
  // [NativeHeaderAttribute] Offset: A9278C
  // [StaticAccessorAttribute] Offset: A9278C
  // [RequiredByNativeCodeAttribute] Offset: A9278C
  struct AnimationOffsetPlayable/*, public ::System::ValueType, public ::UnityEngine::Playables::IPlayable, public ::System::IEquatable_1<::UnityEngine::Animations::AnimationOffsetPlayable>*/ {
    public:
    public:
    // private UnityEngine.Playables.PlayableHandle m_Handle
    // Size: 0xC
    // Offset: 0x0
    ::UnityEngine::Playables::PlayableHandle m_Handle;
    // Field size check
    static_assert(sizeof(::UnityEngine::Playables::PlayableHandle) == 0xC);
    public:
    // Creating value type constructor for type: AnimationOffsetPlayable
    constexpr AnimationOffsetPlayable(::UnityEngine::Playables::PlayableHandle m_Handle_ = {}) noexcept : m_Handle{m_Handle_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::UnityEngine::Playables::IPlayable
    operator ::UnityEngine::Playables::IPlayable() noexcept {
      return *reinterpret_cast<::UnityEngine::Playables::IPlayable*>(this);
    }
    // Creating interface conversion operator: operator ::System::IEquatable_1<::UnityEngine::Animations::AnimationOffsetPlayable>
    operator ::System::IEquatable_1<::UnityEngine::Animations::AnimationOffsetPlayable>() noexcept {
      return *reinterpret_cast<::System::IEquatable_1<::UnityEngine::Animations::AnimationOffsetPlayable>*>(this);
    }
    // Creating conversion operator: operator ::UnityEngine::Playables::PlayableHandle
    constexpr operator ::UnityEngine::Playables::PlayableHandle() const noexcept {
      return m_Handle;
    }
    // Get static field: static private readonly UnityEngine.Animations.AnimationOffsetPlayable m_NullPlayable
    static ::UnityEngine::Animations::AnimationOffsetPlayable _get_m_NullPlayable();
    // Set static field: static private readonly UnityEngine.Animations.AnimationOffsetPlayable m_NullPlayable
    static void _set_m_NullPlayable(::UnityEngine::Animations::AnimationOffsetPlayable value);
    // Get instance field reference: private UnityEngine.Playables.PlayableHandle m_Handle
    [[deprecated("Use field access instead!")]] ::UnityEngine::Playables::PlayableHandle& dyn_m_Handle();
    // System.Void .ctor(UnityEngine.Playables.PlayableHandle handle)
    // Offset: 0xBD1C84
    // ABORTED: conflicts with another method.  AnimationOffsetPlayable(::UnityEngine::Playables::PlayableHandle handle);
    // static public UnityEngine.Animations.AnimationOffsetPlayable Create(UnityEngine.Playables.PlayableGraph graph, UnityEngine.Vector3 position, UnityEngine.Quaternion rotation, System.Int32 inputCount)
    // Offset: 0x2861520
    static ::UnityEngine::Animations::AnimationOffsetPlayable Create(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, int inputCount);
    // static private UnityEngine.Playables.PlayableHandle CreateHandle(UnityEngine.Playables.PlayableGraph graph, UnityEngine.Vector3 position, UnityEngine.Quaternion rotation, System.Int32 inputCount)
    // Offset: 0x2861620
    static ::UnityEngine::Playables::PlayableHandle CreateHandle(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, int inputCount);
    // public UnityEngine.Playables.PlayableHandle GetHandle()
    // Offset: 0xBD1C8C
    ::UnityEngine::Playables::PlayableHandle GetHandle();
    // public System.Boolean Equals(UnityEngine.Animations.AnimationOffsetPlayable other)
    // Offset: 0xBD1C98
    bool Equals(::UnityEngine::Animations::AnimationOffsetPlayable other);
    // public UnityEngine.Vector3 GetPosition()
    // Offset: 0xBD1CA0
    ::UnityEngine::Vector3 GetPosition();
    // public UnityEngine.Quaternion GetRotation()
    // Offset: 0xBD1CA8
    ::UnityEngine::Quaternion GetRotation();
    // static private System.Boolean CreateHandleInternal(UnityEngine.Playables.PlayableGraph graph, UnityEngine.Vector3 position, UnityEngine.Quaternion rotation, ref UnityEngine.Playables.PlayableHandle handle)
    // Offset: 0x2861770
    static bool CreateHandleInternal(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, ByRef<::UnityEngine::Playables::PlayableHandle> handle);
    // static private UnityEngine.Vector3 GetPositionInternal(ref UnityEngine.Playables.PlayableHandle handle)
    // Offset: 0x2861980
    static ::UnityEngine::Vector3 GetPositionInternal(ByRef<::UnityEngine::Playables::PlayableHandle> handle);
    // static private UnityEngine.Quaternion GetRotationInternal(ref UnityEngine.Playables.PlayableHandle handle)
    // Offset: 0x2861A68
    static ::UnityEngine::Quaternion GetRotationInternal(ByRef<::UnityEngine::Playables::PlayableHandle> handle);
    // static private System.Void .cctor()
    // Offset: 0x2861C5C
    static void _cctor();
    // static private System.Boolean CreateHandleInternal_Injected(ref UnityEngine.Playables.PlayableGraph graph, ref UnityEngine.Vector3 position, ref UnityEngine.Quaternion rotation, ref UnityEngine.Playables.PlayableHandle handle)
    // Offset: 0x2861AE8
    static bool CreateHandleInternal_Injected(ByRef<::UnityEngine::Playables::PlayableGraph> graph, ByRef<::UnityEngine::Vector3> position, ByRef<::UnityEngine::Quaternion> rotation, ByRef<::UnityEngine::Playables::PlayableHandle> handle);
    // static private System.Void GetPositionInternal_Injected(ref UnityEngine.Playables.PlayableHandle handle, out UnityEngine.Vector3 ret)
    // Offset: 0x2861B74
    static void GetPositionInternal_Injected(ByRef<::UnityEngine::Playables::PlayableHandle> handle, ByRef<::UnityEngine::Vector3> ret);
    // static private System.Void GetRotationInternal_Injected(ref UnityEngine.Playables.PlayableHandle handle, out UnityEngine.Quaternion ret)
    // Offset: 0x2861BE8
    static void GetRotationInternal_Injected(ByRef<::UnityEngine::Playables::PlayableHandle> handle, ByRef<::UnityEngine::Quaternion> ret);
  }; // UnityEngine.Animations.AnimationOffsetPlayable
  #pragma pack(pop)
  static check_size<sizeof(AnimationOffsetPlayable), 0 + sizeof(::UnityEngine::Playables::PlayableHandle)> __UnityEngine_Animations_AnimationOffsetPlayableSizeCheck;
  static_assert(sizeof(AnimationOffsetPlayable) == 0xC);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Animations::AnimationOffsetPlayable::AnimationOffsetPlayable
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Animations::AnimationOffsetPlayable::Create
// Il2CppName: Create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Animations::AnimationOffsetPlayable (*)(::UnityEngine::Playables::PlayableGraph, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, int)>(&UnityEngine::Animations::AnimationOffsetPlayable::Create)> {
  static const MethodInfo* get() {
    static auto* graph = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "PlayableGraph")->byval_arg;
    static auto* position = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* rotation = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    static auto* inputCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::AnimationOffsetPlayable), "Create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{graph, position, rotation, inputCount});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::AnimationOffsetPlayable::CreateHandle
// Il2CppName: CreateHandle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Playables::PlayableHandle (*)(::UnityEngine::Playables::PlayableGraph, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, int)>(&UnityEngine::Animations::AnimationOffsetPlayable::CreateHandle)> {
  static const MethodInfo* get() {
    static auto* graph = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "PlayableGraph")->byval_arg;
    static auto* position = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* rotation = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    static auto* inputCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::AnimationOffsetPlayable), "CreateHandle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{graph, position, rotation, inputCount});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::AnimationOffsetPlayable::GetHandle
// Il2CppName: GetHandle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Playables::PlayableHandle (UnityEngine::Animations::AnimationOffsetPlayable::*)()>(&UnityEngine::Animations::AnimationOffsetPlayable::GetHandle)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::AnimationOffsetPlayable), "GetHandle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::AnimationOffsetPlayable::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Animations::AnimationOffsetPlayable::*)(::UnityEngine::Animations::AnimationOffsetPlayable)>(&UnityEngine::Animations::AnimationOffsetPlayable::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("UnityEngine.Animations", "AnimationOffsetPlayable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::AnimationOffsetPlayable), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::AnimationOffsetPlayable::GetPosition
// Il2CppName: GetPosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (UnityEngine::Animations::AnimationOffsetPlayable::*)()>(&UnityEngine::Animations::AnimationOffsetPlayable::GetPosition)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::AnimationOffsetPlayable), "GetPosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::AnimationOffsetPlayable::GetRotation
// Il2CppName: GetRotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Quaternion (UnityEngine::Animations::AnimationOffsetPlayable::*)()>(&UnityEngine::Animations::AnimationOffsetPlayable::GetRotation)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::AnimationOffsetPlayable), "GetRotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::AnimationOffsetPlayable::CreateHandleInternal
// Il2CppName: CreateHandleInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::Playables::PlayableGraph, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ByRef<::UnityEngine::Playables::PlayableHandle>)>(&UnityEngine::Animations::AnimationOffsetPlayable::CreateHandleInternal)> {
  static const MethodInfo* get() {
    static auto* graph = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "PlayableGraph")->byval_arg;
    static auto* position = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* rotation = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    static auto* handle = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "PlayableHandle")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::AnimationOffsetPlayable), "CreateHandleInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{graph, position, rotation, handle});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::AnimationOffsetPlayable::GetPositionInternal
// Il2CppName: GetPositionInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (*)(ByRef<::UnityEngine::Playables::PlayableHandle>)>(&UnityEngine::Animations::AnimationOffsetPlayable::GetPositionInternal)> {
  static const MethodInfo* get() {
    static auto* handle = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "PlayableHandle")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::AnimationOffsetPlayable), "GetPositionInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{handle});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::AnimationOffsetPlayable::GetRotationInternal
// Il2CppName: GetRotationInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Quaternion (*)(ByRef<::UnityEngine::Playables::PlayableHandle>)>(&UnityEngine::Animations::AnimationOffsetPlayable::GetRotationInternal)> {
  static const MethodInfo* get() {
    static auto* handle = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "PlayableHandle")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::AnimationOffsetPlayable), "GetRotationInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{handle});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::AnimationOffsetPlayable::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::Animations::AnimationOffsetPlayable::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::AnimationOffsetPlayable), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::AnimationOffsetPlayable::CreateHandleInternal_Injected
// Il2CppName: CreateHandleInternal_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<::UnityEngine::Playables::PlayableGraph>, ByRef<::UnityEngine::Vector3>, ByRef<::UnityEngine::Quaternion>, ByRef<::UnityEngine::Playables::PlayableHandle>)>(&UnityEngine::Animations::AnimationOffsetPlayable::CreateHandleInternal_Injected)> {
  static const MethodInfo* get() {
    static auto* graph = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "PlayableGraph")->this_arg;
    static auto* position = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    static auto* rotation = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->this_arg;
    static auto* handle = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "PlayableHandle")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::AnimationOffsetPlayable), "CreateHandleInternal_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{graph, position, rotation, handle});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::AnimationOffsetPlayable::GetPositionInternal_Injected
// Il2CppName: GetPositionInternal_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::UnityEngine::Playables::PlayableHandle>, ByRef<::UnityEngine::Vector3>)>(&UnityEngine::Animations::AnimationOffsetPlayable::GetPositionInternal_Injected)> {
  static const MethodInfo* get() {
    static auto* handle = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "PlayableHandle")->this_arg;
    static auto* ret = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::AnimationOffsetPlayable), "GetPositionInternal_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{handle, ret});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::AnimationOffsetPlayable::GetRotationInternal_Injected
// Il2CppName: GetRotationInternal_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::UnityEngine::Playables::PlayableHandle>, ByRef<::UnityEngine::Quaternion>)>(&UnityEngine::Animations::AnimationOffsetPlayable::GetRotationInternal_Injected)> {
  static const MethodInfo* get() {
    static auto* handle = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "PlayableHandle")->this_arg;
    static auto* ret = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::AnimationOffsetPlayable), "GetRotationInternal_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{handle, ret});
  }
};
