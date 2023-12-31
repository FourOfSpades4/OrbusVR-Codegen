// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Behaviour
#include "UnityEngine/Behaviour.hpp"
// Including type: System.Collections.IEnumerable
#include "System/Collections/IEnumerable.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AnimationClip
  class AnimationClip;
  // Forward declaring type: AnimationState
  class AnimationState;
  // Forward declaring type: PlayMode
  struct PlayMode;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Animation
  class Animation;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Animation);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Animation*, "UnityEngine", "Animation");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Animation
  // [TokenAttribute] Offset: FFFFFFFF
  // [DefaultMemberAttribute] Offset: A9337C
  class Animation : public ::UnityEngine::Behaviour/*, public ::System::Collections::IEnumerable*/ {
    public:
    // Nested type: ::UnityEngine::Animation::Enumerator
    class Enumerator;
    // Creating interface conversion operator: operator ::System::Collections::IEnumerable
    operator ::System::Collections::IEnumerable() noexcept {
      return *reinterpret_cast<::System::Collections::IEnumerable*>(this);
    }
    // public UnityEngine.AnimationClip get_clip()
    // Offset: 0x285E920
    ::UnityEngine::AnimationClip* get_clip();
    // public System.Void set_clip(UnityEngine.AnimationClip value)
    // Offset: 0x285E98C
    void set_clip(::UnityEngine::AnimationClip* value);
    // public System.Void set_playAutomatically(System.Boolean value)
    // Offset: 0x285EA00
    void set_playAutomatically(bool value);
    // public System.Void Stop()
    // Offset: 0x285EA74
    void Stop();
    // static private System.Void INTERNAL_CALL_Stop(UnityEngine.Animation self)
    // Offset: 0x285EA78
    static void INTERNAL_CALL_Stop(::UnityEngine::Animation* self);
    // public System.Void Rewind()
    // Offset: 0x285EAE4
    void Rewind();
    // static private System.Void INTERNAL_CALL_Rewind(UnityEngine.Animation self)
    // Offset: 0x285EAE8
    static void INTERNAL_CALL_Rewind(::UnityEngine::Animation* self);
    // public System.Void Sample()
    // Offset: 0x285EB54
    void Sample();
    // static private System.Void INTERNAL_CALL_Sample(UnityEngine.Animation self)
    // Offset: 0x285EB58
    static void INTERNAL_CALL_Sample(::UnityEngine::Animation* self);
    // public System.Boolean get_isPlaying()
    // Offset: 0x285EBC4
    bool get_isPlaying();
    // public UnityEngine.AnimationState get_Item(System.String name)
    // Offset: 0x285EC30
    ::UnityEngine::AnimationState* get_Item(::StringW name);
    // public System.Boolean Play()
    // Offset: 0x285ECA8
    bool Play();
    // public System.Boolean Play(UnityEngine.PlayMode mode)
    // Offset: 0x285ECB0
    bool Play(::UnityEngine::PlayMode mode);
    // public System.Boolean Play(System.String animation, UnityEngine.PlayMode mode)
    // Offset: 0x285ED28
    bool Play(::StringW animation, ::UnityEngine::PlayMode mode);
    // public System.Boolean Play(System.String animation)
    // Offset: 0x285EDAC
    bool Play(::StringW animation);
    // public System.Void CrossFade(System.String animation, System.Single fadeLength, UnityEngine.PlayMode mode)
    // Offset: 0x285EDB4
    void CrossFade(::StringW animation, float fadeLength, ::UnityEngine::PlayMode mode);
    // public System.Void CrossFade(System.String animation, System.Single fadeLength)
    // Offset: 0x285EE40
    void CrossFade(::StringW animation, float fadeLength);
    // public System.Void Blend(System.String animation, System.Single targetWeight, System.Single fadeLength)
    // Offset: 0x285EE48
    void Blend(::StringW animation, float targetWeight, float fadeLength);
    // public System.Void AddClip(UnityEngine.AnimationClip clip, System.String newName)
    // Offset: 0x285EED4
    void AddClip(::UnityEngine::AnimationClip* clip, ::StringW newName);
    // public System.Void AddClip(UnityEngine.AnimationClip clip, System.String newName, System.Int32 firstFrame, System.Int32 lastFrame, System.Boolean addLoopFrame)
    // Offset: 0x285EEEC
    void AddClip(::UnityEngine::AnimationClip* clip, ::StringW newName, int firstFrame, int lastFrame, bool addLoopFrame);
    // public System.Void AddClip(UnityEngine.AnimationClip clip, System.String newName, System.Int32 firstFrame, System.Int32 lastFrame)
    // Offset: 0x285EEE4
    void AddClip(::UnityEngine::AnimationClip* clip, ::StringW newName, int firstFrame, int lastFrame);
    // private System.Boolean PlayDefaultAnimation(UnityEngine.PlayMode mode)
    // Offset: 0x285ECB4
    bool PlayDefaultAnimation(::UnityEngine::PlayMode mode);
    // public System.Collections.IEnumerator GetEnumerator()
    // Offset: 0x285EF90
    ::System::Collections::IEnumerator* GetEnumerator();
    // UnityEngine.AnimationState GetState(System.String name)
    // Offset: 0x285EC34
    ::UnityEngine::AnimationState* GetState(::StringW name);
    // UnityEngine.AnimationState GetStateAtIndex(System.Int32 index)
    // Offset: 0x285F030
    ::UnityEngine::AnimationState* GetStateAtIndex(int index);
    // System.Int32 GetStateCount()
    // Offset: 0x285F0A4
    int GetStateCount();
    // public UnityEngine.AnimationClip GetClip(System.String name)
    // Offset: 0x285F110
    ::UnityEngine::AnimationClip* GetClip(::StringW name);
    // public System.Boolean get_animatePhysics()
    // Offset: 0x285F1C8
    bool get_animatePhysics();
  }; // UnityEngine.Animation
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Animation::get_clip
// Il2CppName: get_clip
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AnimationClip* (UnityEngine::Animation::*)()>(&UnityEngine::Animation::get_clip)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animation*), "get_clip", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animation::set_clip
// Il2CppName: set_clip
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Animation::*)(::UnityEngine::AnimationClip*)>(&UnityEngine::Animation::set_clip)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "AnimationClip")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animation*), "set_clip", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animation::set_playAutomatically
// Il2CppName: set_playAutomatically
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Animation::*)(bool)>(&UnityEngine::Animation::set_playAutomatically)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animation*), "set_playAutomatically", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animation::Stop
// Il2CppName: Stop
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Animation::*)()>(&UnityEngine::Animation::Stop)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animation*), "Stop", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animation::INTERNAL_CALL_Stop
// Il2CppName: INTERNAL_CALL_Stop
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Animation*)>(&UnityEngine::Animation::INTERNAL_CALL_Stop)> {
  static const MethodInfo* get() {
    static auto* self = &::il2cpp_utils::GetClassFromName("UnityEngine", "Animation")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animation*), "INTERNAL_CALL_Stop", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{self});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animation::Rewind
// Il2CppName: Rewind
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Animation::*)()>(&UnityEngine::Animation::Rewind)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animation*), "Rewind", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animation::INTERNAL_CALL_Rewind
// Il2CppName: INTERNAL_CALL_Rewind
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Animation*)>(&UnityEngine::Animation::INTERNAL_CALL_Rewind)> {
  static const MethodInfo* get() {
    static auto* self = &::il2cpp_utils::GetClassFromName("UnityEngine", "Animation")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animation*), "INTERNAL_CALL_Rewind", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{self});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animation::Sample
// Il2CppName: Sample
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Animation::*)()>(&UnityEngine::Animation::Sample)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animation*), "Sample", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animation::INTERNAL_CALL_Sample
// Il2CppName: INTERNAL_CALL_Sample
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Animation*)>(&UnityEngine::Animation::INTERNAL_CALL_Sample)> {
  static const MethodInfo* get() {
    static auto* self = &::il2cpp_utils::GetClassFromName("UnityEngine", "Animation")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animation*), "INTERNAL_CALL_Sample", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{self});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animation::get_isPlaying
// Il2CppName: get_isPlaying
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Animation::*)()>(&UnityEngine::Animation::get_isPlaying)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animation*), "get_isPlaying", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animation::get_Item
// Il2CppName: get_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AnimationState* (UnityEngine::Animation::*)(::StringW)>(&UnityEngine::Animation::get_Item)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animation*), "get_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animation::Play
// Il2CppName: Play
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Animation::*)()>(&UnityEngine::Animation::Play)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animation*), "Play", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animation::Play
// Il2CppName: Play
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Animation::*)(::UnityEngine::PlayMode)>(&UnityEngine::Animation::Play)> {
  static const MethodInfo* get() {
    static auto* mode = &::il2cpp_utils::GetClassFromName("UnityEngine", "PlayMode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animation*), "Play", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mode});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animation::Play
// Il2CppName: Play
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Animation::*)(::StringW, ::UnityEngine::PlayMode)>(&UnityEngine::Animation::Play)> {
  static const MethodInfo* get() {
    static auto* animation = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* mode = &::il2cpp_utils::GetClassFromName("UnityEngine", "PlayMode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animation*), "Play", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{animation, mode});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animation::Play
// Il2CppName: Play
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Animation::*)(::StringW)>(&UnityEngine::Animation::Play)> {
  static const MethodInfo* get() {
    static auto* animation = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animation*), "Play", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{animation});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animation::CrossFade
// Il2CppName: CrossFade
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Animation::*)(::StringW, float, ::UnityEngine::PlayMode)>(&UnityEngine::Animation::CrossFade)> {
  static const MethodInfo* get() {
    static auto* animation = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* fadeLength = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* mode = &::il2cpp_utils::GetClassFromName("UnityEngine", "PlayMode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animation*), "CrossFade", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{animation, fadeLength, mode});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animation::CrossFade
// Il2CppName: CrossFade
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Animation::*)(::StringW, float)>(&UnityEngine::Animation::CrossFade)> {
  static const MethodInfo* get() {
    static auto* animation = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* fadeLength = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animation*), "CrossFade", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{animation, fadeLength});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animation::Blend
// Il2CppName: Blend
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Animation::*)(::StringW, float, float)>(&UnityEngine::Animation::Blend)> {
  static const MethodInfo* get() {
    static auto* animation = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* targetWeight = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* fadeLength = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animation*), "Blend", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{animation, targetWeight, fadeLength});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animation::AddClip
// Il2CppName: AddClip
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Animation::*)(::UnityEngine::AnimationClip*, ::StringW)>(&UnityEngine::Animation::AddClip)> {
  static const MethodInfo* get() {
    static auto* clip = &::il2cpp_utils::GetClassFromName("UnityEngine", "AnimationClip")->byval_arg;
    static auto* newName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animation*), "AddClip", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{clip, newName});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animation::AddClip
// Il2CppName: AddClip
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Animation::*)(::UnityEngine::AnimationClip*, ::StringW, int, int, bool)>(&UnityEngine::Animation::AddClip)> {
  static const MethodInfo* get() {
    static auto* clip = &::il2cpp_utils::GetClassFromName("UnityEngine", "AnimationClip")->byval_arg;
    static auto* newName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* firstFrame = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* lastFrame = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* addLoopFrame = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animation*), "AddClip", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{clip, newName, firstFrame, lastFrame, addLoopFrame});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animation::AddClip
// Il2CppName: AddClip
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Animation::*)(::UnityEngine::AnimationClip*, ::StringW, int, int)>(&UnityEngine::Animation::AddClip)> {
  static const MethodInfo* get() {
    static auto* clip = &::il2cpp_utils::GetClassFromName("UnityEngine", "AnimationClip")->byval_arg;
    static auto* newName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* firstFrame = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* lastFrame = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animation*), "AddClip", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{clip, newName, firstFrame, lastFrame});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animation::PlayDefaultAnimation
// Il2CppName: PlayDefaultAnimation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Animation::*)(::UnityEngine::PlayMode)>(&UnityEngine::Animation::PlayDefaultAnimation)> {
  static const MethodInfo* get() {
    static auto* mode = &::il2cpp_utils::GetClassFromName("UnityEngine", "PlayMode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animation*), "PlayDefaultAnimation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mode});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animation::GetEnumerator
// Il2CppName: GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (UnityEngine::Animation::*)()>(&UnityEngine::Animation::GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animation*), "GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animation::GetState
// Il2CppName: GetState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AnimationState* (UnityEngine::Animation::*)(::StringW)>(&UnityEngine::Animation::GetState)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animation*), "GetState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animation::GetStateAtIndex
// Il2CppName: GetStateAtIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AnimationState* (UnityEngine::Animation::*)(int)>(&UnityEngine::Animation::GetStateAtIndex)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animation*), "GetStateAtIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animation::GetStateCount
// Il2CppName: GetStateCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::Animation::*)()>(&UnityEngine::Animation::GetStateCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animation*), "GetStateCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animation::GetClip
// Il2CppName: GetClip
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AnimationClip* (UnityEngine::Animation::*)(::StringW)>(&UnityEngine::Animation::GetClip)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animation*), "GetClip", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animation::get_animatePhysics
// Il2CppName: get_animatePhysics
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Animation::*)()>(&UnityEngine::Animation::get_animatePhysics)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animation*), "get_animatePhysics", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
