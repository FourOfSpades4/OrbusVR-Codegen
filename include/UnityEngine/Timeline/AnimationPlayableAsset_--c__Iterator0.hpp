// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Timeline.AnimationPlayableAsset
#include "UnityEngine/Timeline/AnimationPlayableAsset.hpp"
// Including type: System.Collections.Generic.IEnumerable`1
#include "System/Collections/Generic/IEnumerable_1.hpp"
// Including type: UnityEngine.Playables.PlayableBinding
#include "UnityEngine/Playables/PlayableBinding.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Skipping declaration: IEnumerator because it is already included!
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Timeline::AnimationPlayableAsset::$$c__Iterator0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::AnimationPlayableAsset::$$c__Iterator0*, "UnityEngine.Timeline", "AnimationPlayableAsset/<>c__Iterator0");
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Timeline.AnimationPlayableAsset/<>c__Iterator0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: AACE60
  class AnimationPlayableAsset::$$c__Iterator0 : public ::Il2CppObject/*, public ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Playables::PlayableBinding>, public ::System::Collections::Generic::IEnumerator_1<::UnityEngine::Playables::PlayableBinding>*/ {
    public:
    public:
    // UnityEngine.Timeline.AnimationPlayableAsset $this
    // Size: 0x8
    // Offset: 0x10
    ::UnityEngine::Timeline::AnimationPlayableAsset* $this;
    // Field size check
    static_assert(sizeof(::UnityEngine::Timeline::AnimationPlayableAsset*) == 0x8);
    // UnityEngine.Playables.PlayableBinding $current
    // Size: 0x20
    // Offset: 0x18
    ::UnityEngine::Playables::PlayableBinding $current;
    // Field size check
    static_assert(sizeof(::UnityEngine::Playables::PlayableBinding) == 0x20);
    // System.Boolean $disposing
    // Size: 0x1
    // Offset: 0x38
    bool $disposing;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: $disposing and: $PC
    char __padding2[0x3] = {};
    // System.Int32 $PC
    // Size: 0x4
    // Offset: 0x3C
    int $PC;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating interface conversion operator: operator ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Playables::PlayableBinding>
    operator ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Playables::PlayableBinding>() noexcept {
      return *reinterpret_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Playables::PlayableBinding>*>(this);
    }
    // Creating interface conversion operator: operator ::System::Collections::Generic::IEnumerator_1<::UnityEngine::Playables::PlayableBinding>
    operator ::System::Collections::Generic::IEnumerator_1<::UnityEngine::Playables::PlayableBinding>() noexcept {
      return *reinterpret_cast<::System::Collections::Generic::IEnumerator_1<::UnityEngine::Playables::PlayableBinding>*>(this);
    }
    // Get instance field reference: UnityEngine.Timeline.AnimationPlayableAsset $this
    [[deprecated("Use field access instead!")]] ::UnityEngine::Timeline::AnimationPlayableAsset*& dyn_$this();
    // Get instance field reference: UnityEngine.Playables.PlayableBinding $current
    [[deprecated("Use field access instead!")]] ::UnityEngine::Playables::PlayableBinding& dyn_$current();
    // Get instance field reference: System.Boolean $disposing
    [[deprecated("Use field access instead!")]] bool& dyn_$disposing();
    // Get instance field reference: System.Int32 $PC
    [[deprecated("Use field access instead!")]] int& dyn_$PC();
    // public System.Void .ctor()
    // Offset: 0x1D8C3F0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AnimationPlayableAsset::$$c__Iterator0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Timeline::AnimationPlayableAsset::$$c__Iterator0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AnimationPlayableAsset::$$c__Iterator0*, creationType>()));
    }
    // public System.Boolean MoveNext()
    // Offset: 0x1D8CE24
    bool MoveNext();
    // private UnityEngine.Playables.PlayableBinding System.Collections.Generic.IEnumerator<UnityEngine.Playables.PlayableBinding>.get_Current()
    // Offset: 0x1D8CEDC
    ::UnityEngine::Playables::PlayableBinding System_Collections_Generic_IEnumerator$UnityEngine_Playables_PlayableBinding$_get_Current();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x1D8CEF0
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
    // public System.Void Dispose()
    // Offset: 0x1D8CF5C
    void Dispose();
    // public System.Void Reset()
    // Offset: 0x1D8CF70
    void Reset();
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0x1D8CFD8
    ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
    // private System.Collections.Generic.IEnumerator`1<UnityEngine.Playables.PlayableBinding> System.Collections.Generic.IEnumerable<UnityEngine.Playables.PlayableBinding>.GetEnumerator()
    // Offset: 0x1D8CFDC
    ::System::Collections::Generic::IEnumerator_1<::UnityEngine::Playables::PlayableBinding>* System_Collections_Generic_IEnumerable$UnityEngine_Playables_PlayableBinding$_GetEnumerator();
  }; // UnityEngine.Timeline.AnimationPlayableAsset/<>c__Iterator0
  #pragma pack(pop)
  static check_size<sizeof(AnimationPlayableAsset::$$c__Iterator0), 60 + sizeof(int)> __UnityEngine_Timeline_AnimationPlayableAsset_$$c__Iterator0SizeCheck;
  static_assert(sizeof(AnimationPlayableAsset::$$c__Iterator0) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Timeline::AnimationPlayableAsset::$$c__Iterator0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Timeline::AnimationPlayableAsset::$$c__Iterator0::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Timeline::AnimationPlayableAsset::$$c__Iterator0::*)()>(&UnityEngine::Timeline::AnimationPlayableAsset::$$c__Iterator0::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::AnimationPlayableAsset::$$c__Iterator0*), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::AnimationPlayableAsset::$$c__Iterator0::System_Collections_Generic_IEnumerator$UnityEngine_Playables_PlayableBinding$_get_Current
// Il2CppName: System.Collections.Generic.IEnumerator<UnityEngine.Playables.PlayableBinding>.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Playables::PlayableBinding (UnityEngine::Timeline::AnimationPlayableAsset::$$c__Iterator0::*)()>(&UnityEngine::Timeline::AnimationPlayableAsset::$$c__Iterator0::System_Collections_Generic_IEnumerator$UnityEngine_Playables_PlayableBinding$_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::AnimationPlayableAsset::$$c__Iterator0*), "System.Collections.Generic.IEnumerator<UnityEngine.Playables.PlayableBinding>.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::AnimationPlayableAsset::$$c__Iterator0::System_Collections_IEnumerator_get_Current
// Il2CppName: System.Collections.IEnumerator.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (UnityEngine::Timeline::AnimationPlayableAsset::$$c__Iterator0::*)()>(&UnityEngine::Timeline::AnimationPlayableAsset::$$c__Iterator0::System_Collections_IEnumerator_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::AnimationPlayableAsset::$$c__Iterator0*), "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::AnimationPlayableAsset::$$c__Iterator0::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::AnimationPlayableAsset::$$c__Iterator0::*)()>(&UnityEngine::Timeline::AnimationPlayableAsset::$$c__Iterator0::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::AnimationPlayableAsset::$$c__Iterator0*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::AnimationPlayableAsset::$$c__Iterator0::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::AnimationPlayableAsset::$$c__Iterator0::*)()>(&UnityEngine::Timeline::AnimationPlayableAsset::$$c__Iterator0::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::AnimationPlayableAsset::$$c__Iterator0*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::AnimationPlayableAsset::$$c__Iterator0::System_Collections_IEnumerable_GetEnumerator
// Il2CppName: System.Collections.IEnumerable.GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (UnityEngine::Timeline::AnimationPlayableAsset::$$c__Iterator0::*)()>(&UnityEngine::Timeline::AnimationPlayableAsset::$$c__Iterator0::System_Collections_IEnumerable_GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::AnimationPlayableAsset::$$c__Iterator0*), "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::AnimationPlayableAsset::$$c__Iterator0::System_Collections_Generic_IEnumerable$UnityEngine_Playables_PlayableBinding$_GetEnumerator
// Il2CppName: System.Collections.Generic.IEnumerable<UnityEngine.Playables.PlayableBinding>.GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerator_1<::UnityEngine::Playables::PlayableBinding>* (UnityEngine::Timeline::AnimationPlayableAsset::$$c__Iterator0::*)()>(&UnityEngine::Timeline::AnimationPlayableAsset::$$c__Iterator0::System_Collections_Generic_IEnumerable$UnityEngine_Playables_PlayableBinding$_GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::AnimationPlayableAsset::$$c__Iterator0*), "System.Collections.Generic.IEnumerable<UnityEngine.Playables.PlayableBinding>.GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
