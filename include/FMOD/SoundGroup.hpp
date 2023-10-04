// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: FMOD
namespace FMOD {
  // Forward declaring type: RESULT
  struct RESULT;
  // Forward declaring type: System
  struct System;
  // Forward declaring type: SOUNDGROUP_BEHAVIOR
  struct SOUNDGROUP_BEHAVIOR;
  // Forward declaring type: Sound
  struct Sound;
}
// Completed forward declares
// Type namespace: FMOD
namespace FMOD {
  // Forward declaring type: SoundGroup
  struct SoundGroup;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::FMOD::SoundGroup, "FMOD", "SoundGroup");
// Type namespace: FMOD
namespace FMOD {
  // Size: 0x8
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: FMOD.SoundGroup
  // [TokenAttribute] Offset: FFFFFFFF
  struct SoundGroup/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.IntPtr handle
    // Size: 0x8
    // Offset: 0x0
    ::System::IntPtr handle;
    // Field size check
    static_assert(sizeof(::System::IntPtr) == 0x8);
    public:
    // Creating value type constructor for type: SoundGroup
    constexpr SoundGroup(::System::IntPtr handle_ = {}) noexcept : handle{handle_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept {
      return handle;
    }
    // Get instance field reference: public System.IntPtr handle
    [[deprecated("Use field access instead!")]] ::System::IntPtr& dyn_handle();
    // public FMOD.RESULT release()
    // Offset: 0xBBDB28
    ::FMOD::RESULT release();
    // public FMOD.RESULT getSystemObject(out FMOD.System system)
    // Offset: 0xBBDB30
    ::FMOD::RESULT getSystemObject(ByRef<::FMOD::System> system);
    // public FMOD.RESULT setMaxAudible(System.Int32 maxaudible)
    // Offset: 0xBBDB38
    ::FMOD::RESULT setMaxAudible(int maxaudible);
    // public FMOD.RESULT getMaxAudible(out System.Int32 maxaudible)
    // Offset: 0xBBDB40
    ::FMOD::RESULT getMaxAudible(ByRef<int> maxaudible);
    // public FMOD.RESULT setMaxAudibleBehavior(FMOD.SOUNDGROUP_BEHAVIOR behavior)
    // Offset: 0xBBDB48
    ::FMOD::RESULT setMaxAudibleBehavior(::FMOD::SOUNDGROUP_BEHAVIOR behavior);
    // public FMOD.RESULT getMaxAudibleBehavior(out FMOD.SOUNDGROUP_BEHAVIOR behavior)
    // Offset: 0xBBDB50
    ::FMOD::RESULT getMaxAudibleBehavior(ByRef<::FMOD::SOUNDGROUP_BEHAVIOR> behavior);
    // public FMOD.RESULT setMuteFadeSpeed(System.Single speed)
    // Offset: 0xBBDB58
    ::FMOD::RESULT setMuteFadeSpeed(float speed);
    // public FMOD.RESULT getMuteFadeSpeed(out System.Single speed)
    // Offset: 0xBBDB60
    ::FMOD::RESULT getMuteFadeSpeed(ByRef<float> speed);
    // public FMOD.RESULT setVolume(System.Single volume)
    // Offset: 0xBBDB68
    ::FMOD::RESULT setVolume(float volume);
    // public FMOD.RESULT getVolume(out System.Single volume)
    // Offset: 0xBBDB70
    ::FMOD::RESULT getVolume(ByRef<float> volume);
    // public FMOD.RESULT stop()
    // Offset: 0xBBDB78
    ::FMOD::RESULT stop();
    // public FMOD.RESULT getName(out System.String name, System.Int32 namelen)
    // Offset: 0xBBDB80
    ::FMOD::RESULT getName(ByRef<::StringW> name, int namelen);
    // public FMOD.RESULT getNumSounds(out System.Int32 numsounds)
    // Offset: 0xBBDB88
    ::FMOD::RESULT getNumSounds(ByRef<int> numsounds);
    // public FMOD.RESULT getSound(System.Int32 index, out FMOD.Sound sound)
    // Offset: 0xBBDB90
    ::FMOD::RESULT getSound(int index, ByRef<::FMOD::Sound> sound);
    // public FMOD.RESULT getNumPlaying(out System.Int32 numplaying)
    // Offset: 0xBBDB98
    ::FMOD::RESULT getNumPlaying(ByRef<int> numplaying);
    // public FMOD.RESULT setUserData(System.IntPtr userdata)
    // Offset: 0xBBDBA0
    ::FMOD::RESULT setUserData(::System::IntPtr userdata);
    // public FMOD.RESULT getUserData(out System.IntPtr userdata)
    // Offset: 0xBBDBA8
    ::FMOD::RESULT getUserData(ByRef<::System::IntPtr> userdata);
    // static private FMOD.RESULT FMOD5_SoundGroup_Release(System.IntPtr soundgroup)
    // Offset: 0x22E3C4C
    static ::FMOD::RESULT FMOD5_SoundGroup_Release(::System::IntPtr soundgroup);
    // static private FMOD.RESULT FMOD5_SoundGroup_GetSystemObject(System.IntPtr soundgroup, out System.IntPtr system)
    // Offset: 0x22E3CF0
    static ::FMOD::RESULT FMOD5_SoundGroup_GetSystemObject(::System::IntPtr soundgroup, ByRef<::System::IntPtr> system);
    // static private FMOD.RESULT FMOD5_SoundGroup_SetMaxAudible(System.IntPtr soundgroup, System.Int32 maxaudible)
    // Offset: 0x22E3DA4
    static ::FMOD::RESULT FMOD5_SoundGroup_SetMaxAudible(::System::IntPtr soundgroup, int maxaudible);
    // static private FMOD.RESULT FMOD5_SoundGroup_GetMaxAudible(System.IntPtr soundgroup, out System.Int32 maxaudible)
    // Offset: 0x22E3E58
    static ::FMOD::RESULT FMOD5_SoundGroup_GetMaxAudible(::System::IntPtr soundgroup, ByRef<int> maxaudible);
    // static private FMOD.RESULT FMOD5_SoundGroup_SetMaxAudibleBehavior(System.IntPtr soundgroup, FMOD.SOUNDGROUP_BEHAVIOR behavior)
    // Offset: 0x22E3F0C
    static ::FMOD::RESULT FMOD5_SoundGroup_SetMaxAudibleBehavior(::System::IntPtr soundgroup, ::FMOD::SOUNDGROUP_BEHAVIOR behavior);
    // static private FMOD.RESULT FMOD5_SoundGroup_GetMaxAudibleBehavior(System.IntPtr soundgroup, out FMOD.SOUNDGROUP_BEHAVIOR behavior)
    // Offset: 0x22E3FC0
    static ::FMOD::RESULT FMOD5_SoundGroup_GetMaxAudibleBehavior(::System::IntPtr soundgroup, ByRef<::FMOD::SOUNDGROUP_BEHAVIOR> behavior);
    // static private FMOD.RESULT FMOD5_SoundGroup_SetMuteFadeSpeed(System.IntPtr soundgroup, System.Single speed)
    // Offset: 0x22E4074
    static ::FMOD::RESULT FMOD5_SoundGroup_SetMuteFadeSpeed(::System::IntPtr soundgroup, float speed);
    // static private FMOD.RESULT FMOD5_SoundGroup_GetMuteFadeSpeed(System.IntPtr soundgroup, out System.Single speed)
    // Offset: 0x22E4128
    static ::FMOD::RESULT FMOD5_SoundGroup_GetMuteFadeSpeed(::System::IntPtr soundgroup, ByRef<float> speed);
    // static private FMOD.RESULT FMOD5_SoundGroup_SetVolume(System.IntPtr soundgroup, System.Single volume)
    // Offset: 0x22E41DC
    static ::FMOD::RESULT FMOD5_SoundGroup_SetVolume(::System::IntPtr soundgroup, float volume);
    // static private FMOD.RESULT FMOD5_SoundGroup_GetVolume(System.IntPtr soundgroup, out System.Single volume)
    // Offset: 0x22E4290
    static ::FMOD::RESULT FMOD5_SoundGroup_GetVolume(::System::IntPtr soundgroup, ByRef<float> volume);
    // static private FMOD.RESULT FMOD5_SoundGroup_Stop(System.IntPtr soundgroup)
    // Offset: 0x22E4344
    static ::FMOD::RESULT FMOD5_SoundGroup_Stop(::System::IntPtr soundgroup);
    // static private FMOD.RESULT FMOD5_SoundGroup_GetName(System.IntPtr soundgroup, System.IntPtr name, System.Int32 namelen)
    // Offset: 0x22E4590
    static ::FMOD::RESULT FMOD5_SoundGroup_GetName(::System::IntPtr soundgroup, ::System::IntPtr name, int namelen);
    // static private FMOD.RESULT FMOD5_SoundGroup_GetNumSounds(System.IntPtr soundgroup, out System.Int32 numsounds)
    // Offset: 0x22E464C
    static ::FMOD::RESULT FMOD5_SoundGroup_GetNumSounds(::System::IntPtr soundgroup, ByRef<int> numsounds);
    // static private FMOD.RESULT FMOD5_SoundGroup_GetSound(System.IntPtr soundgroup, System.Int32 index, out System.IntPtr sound)
    // Offset: 0x22E4700
    static ::FMOD::RESULT FMOD5_SoundGroup_GetSound(::System::IntPtr soundgroup, int index, ByRef<::System::IntPtr> sound);
    // static private FMOD.RESULT FMOD5_SoundGroup_GetNumPlaying(System.IntPtr soundgroup, out System.Int32 numplaying)
    // Offset: 0x22E47BC
    static ::FMOD::RESULT FMOD5_SoundGroup_GetNumPlaying(::System::IntPtr soundgroup, ByRef<int> numplaying);
    // static private FMOD.RESULT FMOD5_SoundGroup_SetUserData(System.IntPtr soundgroup, System.IntPtr userdata)
    // Offset: 0x22E4870
    static ::FMOD::RESULT FMOD5_SoundGroup_SetUserData(::System::IntPtr soundgroup, ::System::IntPtr userdata);
    // static private FMOD.RESULT FMOD5_SoundGroup_GetUserData(System.IntPtr soundgroup, out System.IntPtr userdata)
    // Offset: 0x22E4924
    static ::FMOD::RESULT FMOD5_SoundGroup_GetUserData(::System::IntPtr soundgroup, ByRef<::System::IntPtr> userdata);
    // public System.Boolean hasHandle()
    // Offset: 0xBBDBB0
    bool hasHandle();
    // public System.Void clearHandle()
    // Offset: 0xBBDBB8
    void clearHandle();
  }; // FMOD.SoundGroup
  #pragma pack(pop)
  static check_size<sizeof(SoundGroup), 0 + sizeof(::System::IntPtr)> __FMOD_SoundGroupSizeCheck;
  static_assert(sizeof(SoundGroup) == 0x8);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: FMOD::SoundGroup::release
// Il2CppName: release
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::FMOD::RESULT (FMOD::SoundGroup::*)()>(&FMOD::SoundGroup::release)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(FMOD::SoundGroup), "release", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: FMOD::SoundGroup::getSystemObject
// Il2CppName: getSystemObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::FMOD::RESULT (FMOD::SoundGroup::*)(ByRef<::FMOD::System>)>(&FMOD::SoundGroup::getSystemObject)> {
  static const MethodInfo* get() {
    static auto* system = &::il2cpp_utils::GetClassFromName("FMOD", "System")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(FMOD::SoundGroup), "getSystemObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{system});
  }
};
// Writing MetadataGetter for method: FMOD::SoundGroup::setMaxAudible
// Il2CppName: setMaxAudible
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::FMOD::RESULT (FMOD::SoundGroup::*)(int)>(&FMOD::SoundGroup::setMaxAudible)> {
  static const MethodInfo* get() {
    static auto* maxaudible = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(FMOD::SoundGroup), "setMaxAudible", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{maxaudible});
  }
};
// Writing MetadataGetter for method: FMOD::SoundGroup::getMaxAudible
// Il2CppName: getMaxAudible
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::FMOD::RESULT (FMOD::SoundGroup::*)(ByRef<int>)>(&FMOD::SoundGroup::getMaxAudible)> {
  static const MethodInfo* get() {
    static auto* maxaudible = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(FMOD::SoundGroup), "getMaxAudible", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{maxaudible});
  }
};
// Writing MetadataGetter for method: FMOD::SoundGroup::setMaxAudibleBehavior
// Il2CppName: setMaxAudibleBehavior
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::FMOD::RESULT (FMOD::SoundGroup::*)(::FMOD::SOUNDGROUP_BEHAVIOR)>(&FMOD::SoundGroup::setMaxAudibleBehavior)> {
  static const MethodInfo* get() {
    static auto* behavior = &::il2cpp_utils::GetClassFromName("FMOD", "SOUNDGROUP_BEHAVIOR")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(FMOD::SoundGroup), "setMaxAudibleBehavior", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{behavior});
  }
};
// Writing MetadataGetter for method: FMOD::SoundGroup::getMaxAudibleBehavior
// Il2CppName: getMaxAudibleBehavior
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::FMOD::RESULT (FMOD::SoundGroup::*)(ByRef<::FMOD::SOUNDGROUP_BEHAVIOR>)>(&FMOD::SoundGroup::getMaxAudibleBehavior)> {
  static const MethodInfo* get() {
    static auto* behavior = &::il2cpp_utils::GetClassFromName("FMOD", "SOUNDGROUP_BEHAVIOR")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(FMOD::SoundGroup), "getMaxAudibleBehavior", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{behavior});
  }
};
// Writing MetadataGetter for method: FMOD::SoundGroup::setMuteFadeSpeed
// Il2CppName: setMuteFadeSpeed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::FMOD::RESULT (FMOD::SoundGroup::*)(float)>(&FMOD::SoundGroup::setMuteFadeSpeed)> {
  static const MethodInfo* get() {
    static auto* speed = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(FMOD::SoundGroup), "setMuteFadeSpeed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{speed});
  }
};
// Writing MetadataGetter for method: FMOD::SoundGroup::getMuteFadeSpeed
// Il2CppName: getMuteFadeSpeed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::FMOD::RESULT (FMOD::SoundGroup::*)(ByRef<float>)>(&FMOD::SoundGroup::getMuteFadeSpeed)> {
  static const MethodInfo* get() {
    static auto* speed = &::il2cpp_utils::GetClassFromName("System", "Single")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(FMOD::SoundGroup), "getMuteFadeSpeed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{speed});
  }
};
// Writing MetadataGetter for method: FMOD::SoundGroup::setVolume
// Il2CppName: setVolume
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::FMOD::RESULT (FMOD::SoundGroup::*)(float)>(&FMOD::SoundGroup::setVolume)> {
  static const MethodInfo* get() {
    static auto* volume = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(FMOD::SoundGroup), "setVolume", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{volume});
  }
};
// Writing MetadataGetter for method: FMOD::SoundGroup::getVolume
// Il2CppName: getVolume
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::FMOD::RESULT (FMOD::SoundGroup::*)(ByRef<float>)>(&FMOD::SoundGroup::getVolume)> {
  static const MethodInfo* get() {
    static auto* volume = &::il2cpp_utils::GetClassFromName("System", "Single")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(FMOD::SoundGroup), "getVolume", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{volume});
  }
};
// Writing MetadataGetter for method: FMOD::SoundGroup::stop
// Il2CppName: stop
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::FMOD::RESULT (FMOD::SoundGroup::*)()>(&FMOD::SoundGroup::stop)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(FMOD::SoundGroup), "stop", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: FMOD::SoundGroup::getName
// Il2CppName: getName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::FMOD::RESULT (FMOD::SoundGroup::*)(ByRef<::StringW>, int)>(&FMOD::SoundGroup::getName)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->this_arg;
    static auto* namelen = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(FMOD::SoundGroup), "getName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, namelen});
  }
};
// Writing MetadataGetter for method: FMOD::SoundGroup::getNumSounds
// Il2CppName: getNumSounds
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::FMOD::RESULT (FMOD::SoundGroup::*)(ByRef<int>)>(&FMOD::SoundGroup::getNumSounds)> {
  static const MethodInfo* get() {
    static auto* numsounds = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(FMOD::SoundGroup), "getNumSounds", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{numsounds});
  }
};
// Writing MetadataGetter for method: FMOD::SoundGroup::getSound
// Il2CppName: getSound
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::FMOD::RESULT (FMOD::SoundGroup::*)(int, ByRef<::FMOD::Sound>)>(&FMOD::SoundGroup::getSound)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* sound = &::il2cpp_utils::GetClassFromName("FMOD", "Sound")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(FMOD::SoundGroup), "getSound", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index, sound});
  }
};
// Writing MetadataGetter for method: FMOD::SoundGroup::getNumPlaying
// Il2CppName: getNumPlaying
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::FMOD::RESULT (FMOD::SoundGroup::*)(ByRef<int>)>(&FMOD::SoundGroup::getNumPlaying)> {
  static const MethodInfo* get() {
    static auto* numplaying = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(FMOD::SoundGroup), "getNumPlaying", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{numplaying});
  }
};
// Writing MetadataGetter for method: FMOD::SoundGroup::setUserData
// Il2CppName: setUserData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::FMOD::RESULT (FMOD::SoundGroup::*)(::System::IntPtr)>(&FMOD::SoundGroup::setUserData)> {
  static const MethodInfo* get() {
    static auto* userdata = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(FMOD::SoundGroup), "setUserData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{userdata});
  }
};
// Writing MetadataGetter for method: FMOD::SoundGroup::getUserData
// Il2CppName: getUserData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::FMOD::RESULT (FMOD::SoundGroup::*)(ByRef<::System::IntPtr>)>(&FMOD::SoundGroup::getUserData)> {
  static const MethodInfo* get() {
    static auto* userdata = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(FMOD::SoundGroup), "getUserData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{userdata});
  }
};
// Writing MetadataGetter for method: FMOD::SoundGroup::FMOD5_SoundGroup_Release
// Il2CppName: FMOD5_SoundGroup_Release
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::FMOD::RESULT (*)(::System::IntPtr)>(&FMOD::SoundGroup::FMOD5_SoundGroup_Release)> {
  static const MethodInfo* get() {
    static auto* soundgroup = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(FMOD::SoundGroup), "FMOD5_SoundGroup_Release", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{soundgroup});
  }
};
// Writing MetadataGetter for method: FMOD::SoundGroup::FMOD5_SoundGroup_GetSystemObject
// Il2CppName: FMOD5_SoundGroup_GetSystemObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::FMOD::RESULT (*)(::System::IntPtr, ByRef<::System::IntPtr>)>(&FMOD::SoundGroup::FMOD5_SoundGroup_GetSystemObject)> {
  static const MethodInfo* get() {
    static auto* soundgroup = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* system = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(FMOD::SoundGroup), "FMOD5_SoundGroup_GetSystemObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{soundgroup, system});
  }
};
// Writing MetadataGetter for method: FMOD::SoundGroup::FMOD5_SoundGroup_SetMaxAudible
// Il2CppName: FMOD5_SoundGroup_SetMaxAudible
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::FMOD::RESULT (*)(::System::IntPtr, int)>(&FMOD::SoundGroup::FMOD5_SoundGroup_SetMaxAudible)> {
  static const MethodInfo* get() {
    static auto* soundgroup = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* maxaudible = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(FMOD::SoundGroup), "FMOD5_SoundGroup_SetMaxAudible", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{soundgroup, maxaudible});
  }
};
// Writing MetadataGetter for method: FMOD::SoundGroup::FMOD5_SoundGroup_GetMaxAudible
// Il2CppName: FMOD5_SoundGroup_GetMaxAudible
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::FMOD::RESULT (*)(::System::IntPtr, ByRef<int>)>(&FMOD::SoundGroup::FMOD5_SoundGroup_GetMaxAudible)> {
  static const MethodInfo* get() {
    static auto* soundgroup = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* maxaudible = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(FMOD::SoundGroup), "FMOD5_SoundGroup_GetMaxAudible", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{soundgroup, maxaudible});
  }
};
// Writing MetadataGetter for method: FMOD::SoundGroup::FMOD5_SoundGroup_SetMaxAudibleBehavior
// Il2CppName: FMOD5_SoundGroup_SetMaxAudibleBehavior
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::FMOD::RESULT (*)(::System::IntPtr, ::FMOD::SOUNDGROUP_BEHAVIOR)>(&FMOD::SoundGroup::FMOD5_SoundGroup_SetMaxAudibleBehavior)> {
  static const MethodInfo* get() {
    static auto* soundgroup = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* behavior = &::il2cpp_utils::GetClassFromName("FMOD", "SOUNDGROUP_BEHAVIOR")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(FMOD::SoundGroup), "FMOD5_SoundGroup_SetMaxAudibleBehavior", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{soundgroup, behavior});
  }
};
// Writing MetadataGetter for method: FMOD::SoundGroup::FMOD5_SoundGroup_GetMaxAudibleBehavior
// Il2CppName: FMOD5_SoundGroup_GetMaxAudibleBehavior
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::FMOD::RESULT (*)(::System::IntPtr, ByRef<::FMOD::SOUNDGROUP_BEHAVIOR>)>(&FMOD::SoundGroup::FMOD5_SoundGroup_GetMaxAudibleBehavior)> {
  static const MethodInfo* get() {
    static auto* soundgroup = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* behavior = &::il2cpp_utils::GetClassFromName("FMOD", "SOUNDGROUP_BEHAVIOR")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(FMOD::SoundGroup), "FMOD5_SoundGroup_GetMaxAudibleBehavior", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{soundgroup, behavior});
  }
};
// Writing MetadataGetter for method: FMOD::SoundGroup::FMOD5_SoundGroup_SetMuteFadeSpeed
// Il2CppName: FMOD5_SoundGroup_SetMuteFadeSpeed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::FMOD::RESULT (*)(::System::IntPtr, float)>(&FMOD::SoundGroup::FMOD5_SoundGroup_SetMuteFadeSpeed)> {
  static const MethodInfo* get() {
    static auto* soundgroup = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* speed = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(FMOD::SoundGroup), "FMOD5_SoundGroup_SetMuteFadeSpeed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{soundgroup, speed});
  }
};
// Writing MetadataGetter for method: FMOD::SoundGroup::FMOD5_SoundGroup_GetMuteFadeSpeed
// Il2CppName: FMOD5_SoundGroup_GetMuteFadeSpeed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::FMOD::RESULT (*)(::System::IntPtr, ByRef<float>)>(&FMOD::SoundGroup::FMOD5_SoundGroup_GetMuteFadeSpeed)> {
  static const MethodInfo* get() {
    static auto* soundgroup = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* speed = &::il2cpp_utils::GetClassFromName("System", "Single")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(FMOD::SoundGroup), "FMOD5_SoundGroup_GetMuteFadeSpeed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{soundgroup, speed});
  }
};
// Writing MetadataGetter for method: FMOD::SoundGroup::FMOD5_SoundGroup_SetVolume
// Il2CppName: FMOD5_SoundGroup_SetVolume
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::FMOD::RESULT (*)(::System::IntPtr, float)>(&FMOD::SoundGroup::FMOD5_SoundGroup_SetVolume)> {
  static const MethodInfo* get() {
    static auto* soundgroup = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* volume = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(FMOD::SoundGroup), "FMOD5_SoundGroup_SetVolume", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{soundgroup, volume});
  }
};
// Writing MetadataGetter for method: FMOD::SoundGroup::FMOD5_SoundGroup_GetVolume
// Il2CppName: FMOD5_SoundGroup_GetVolume
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::FMOD::RESULT (*)(::System::IntPtr, ByRef<float>)>(&FMOD::SoundGroup::FMOD5_SoundGroup_GetVolume)> {
  static const MethodInfo* get() {
    static auto* soundgroup = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* volume = &::il2cpp_utils::GetClassFromName("System", "Single")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(FMOD::SoundGroup), "FMOD5_SoundGroup_GetVolume", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{soundgroup, volume});
  }
};
// Writing MetadataGetter for method: FMOD::SoundGroup::FMOD5_SoundGroup_Stop
// Il2CppName: FMOD5_SoundGroup_Stop
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::FMOD::RESULT (*)(::System::IntPtr)>(&FMOD::SoundGroup::FMOD5_SoundGroup_Stop)> {
  static const MethodInfo* get() {
    static auto* soundgroup = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(FMOD::SoundGroup), "FMOD5_SoundGroup_Stop", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{soundgroup});
  }
};
// Writing MetadataGetter for method: FMOD::SoundGroup::FMOD5_SoundGroup_GetName
// Il2CppName: FMOD5_SoundGroup_GetName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::FMOD::RESULT (*)(::System::IntPtr, ::System::IntPtr, int)>(&FMOD::SoundGroup::FMOD5_SoundGroup_GetName)> {
  static const MethodInfo* get() {
    static auto* soundgroup = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* namelen = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(FMOD::SoundGroup), "FMOD5_SoundGroup_GetName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{soundgroup, name, namelen});
  }
};
// Writing MetadataGetter for method: FMOD::SoundGroup::FMOD5_SoundGroup_GetNumSounds
// Il2CppName: FMOD5_SoundGroup_GetNumSounds
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::FMOD::RESULT (*)(::System::IntPtr, ByRef<int>)>(&FMOD::SoundGroup::FMOD5_SoundGroup_GetNumSounds)> {
  static const MethodInfo* get() {
    static auto* soundgroup = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* numsounds = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(FMOD::SoundGroup), "FMOD5_SoundGroup_GetNumSounds", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{soundgroup, numsounds});
  }
};
// Writing MetadataGetter for method: FMOD::SoundGroup::FMOD5_SoundGroup_GetSound
// Il2CppName: FMOD5_SoundGroup_GetSound
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::FMOD::RESULT (*)(::System::IntPtr, int, ByRef<::System::IntPtr>)>(&FMOD::SoundGroup::FMOD5_SoundGroup_GetSound)> {
  static const MethodInfo* get() {
    static auto* soundgroup = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* sound = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(FMOD::SoundGroup), "FMOD5_SoundGroup_GetSound", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{soundgroup, index, sound});
  }
};
// Writing MetadataGetter for method: FMOD::SoundGroup::FMOD5_SoundGroup_GetNumPlaying
// Il2CppName: FMOD5_SoundGroup_GetNumPlaying
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::FMOD::RESULT (*)(::System::IntPtr, ByRef<int>)>(&FMOD::SoundGroup::FMOD5_SoundGroup_GetNumPlaying)> {
  static const MethodInfo* get() {
    static auto* soundgroup = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* numplaying = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(FMOD::SoundGroup), "FMOD5_SoundGroup_GetNumPlaying", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{soundgroup, numplaying});
  }
};
// Writing MetadataGetter for method: FMOD::SoundGroup::FMOD5_SoundGroup_SetUserData
// Il2CppName: FMOD5_SoundGroup_SetUserData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::FMOD::RESULT (*)(::System::IntPtr, ::System::IntPtr)>(&FMOD::SoundGroup::FMOD5_SoundGroup_SetUserData)> {
  static const MethodInfo* get() {
    static auto* soundgroup = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* userdata = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(FMOD::SoundGroup), "FMOD5_SoundGroup_SetUserData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{soundgroup, userdata});
  }
};
// Writing MetadataGetter for method: FMOD::SoundGroup::FMOD5_SoundGroup_GetUserData
// Il2CppName: FMOD5_SoundGroup_GetUserData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::FMOD::RESULT (*)(::System::IntPtr, ByRef<::System::IntPtr>)>(&FMOD::SoundGroup::FMOD5_SoundGroup_GetUserData)> {
  static const MethodInfo* get() {
    static auto* soundgroup = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* userdata = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(FMOD::SoundGroup), "FMOD5_SoundGroup_GetUserData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{soundgroup, userdata});
  }
};
// Writing MetadataGetter for method: FMOD::SoundGroup::hasHandle
// Il2CppName: hasHandle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (FMOD::SoundGroup::*)()>(&FMOD::SoundGroup::hasHandle)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(FMOD::SoundGroup), "hasHandle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: FMOD::SoundGroup::clearHandle
// Il2CppName: clearHandle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (FMOD::SoundGroup::*)()>(&FMOD::SoundGroup::clearHandle)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(FMOD::SoundGroup), "clearHandle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};