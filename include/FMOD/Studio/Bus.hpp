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
  // Forward declaring type: ChannelGroup
  struct ChannelGroup;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Guid
  struct Guid;
}
// Forward declaring namespace: FMOD::Studio
namespace FMOD::Studio {
  // Forward declaring type: STOP_MODE
  struct STOP_MODE;
}
// Completed forward declares
// Type namespace: FMOD.Studio
namespace FMOD::Studio {
  // Forward declaring type: Bus
  struct Bus;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::FMOD::Studio::Bus, "FMOD.Studio", "Bus");
// Type namespace: FMOD.Studio
namespace FMOD::Studio {
  // Size: 0x8
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: FMOD.Studio.Bus
  // [TokenAttribute] Offset: FFFFFFFF
  struct Bus/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.IntPtr handle
    // Size: 0x8
    // Offset: 0x0
    ::System::IntPtr handle;
    // Field size check
    static_assert(sizeof(::System::IntPtr) == 0x8);
    public:
    // Creating value type constructor for type: Bus
    constexpr Bus(::System::IntPtr handle_ = {}) noexcept : handle{handle_} {}
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
    // public FMOD.RESULT getID(out System.Guid id)
    // Offset: 0xBBDE08
    ::FMOD::RESULT getID(ByRef<::System::Guid> id);
    // public FMOD.RESULT getPath(out System.String path)
    // Offset: 0xBBDE10
    ::FMOD::RESULT getPath(ByRef<::StringW> path);
    // public FMOD.RESULT getVolume(out System.Single volume, out System.Single finalvolume)
    // Offset: 0xBBDE18
    ::FMOD::RESULT getVolume(ByRef<float> volume, ByRef<float> finalvolume);
    // public FMOD.RESULT setVolume(System.Single volume)
    // Offset: 0xBBDE20
    ::FMOD::RESULT setVolume(float volume);
    // public FMOD.RESULT getPaused(out System.Boolean paused)
    // Offset: 0xBBDE28
    ::FMOD::RESULT getPaused(ByRef<bool> paused);
    // public FMOD.RESULT setPaused(System.Boolean paused)
    // Offset: 0xBBDE30
    ::FMOD::RESULT setPaused(bool paused);
    // public FMOD.RESULT getMute(out System.Boolean mute)
    // Offset: 0xBBDE3C
    ::FMOD::RESULT getMute(ByRef<bool> mute);
    // public FMOD.RESULT setMute(System.Boolean mute)
    // Offset: 0xBBDE44
    ::FMOD::RESULT setMute(bool mute);
    // public FMOD.RESULT stopAllEvents(FMOD.Studio.STOP_MODE mode)
    // Offset: 0xBBDE50
    ::FMOD::RESULT stopAllEvents(::FMOD::Studio::STOP_MODE mode);
    // public FMOD.RESULT lockChannelGroup()
    // Offset: 0xBBDE58
    ::FMOD::RESULT lockChannelGroup();
    // public FMOD.RESULT unlockChannelGroup()
    // Offset: 0xBBDE60
    ::FMOD::RESULT unlockChannelGroup();
    // public FMOD.RESULT getChannelGroup(out FMOD.ChannelGroup group)
    // Offset: 0xBBDE68
    ::FMOD::RESULT getChannelGroup(ByRef<::FMOD::ChannelGroup> group);
    // static private System.Boolean FMOD_Studio_Bus_IsValid(System.IntPtr bus)
    // Offset: 0x22E6FC8
    static bool FMOD_Studio_Bus_IsValid(::System::IntPtr bus);
    // static private FMOD.RESULT FMOD_Studio_Bus_GetID(System.IntPtr bus, out System.Guid id)
    // Offset: 0x22E6500
    static ::FMOD::RESULT FMOD_Studio_Bus_GetID(::System::IntPtr bus, ByRef<::System::Guid> id);
    // static private FMOD.RESULT FMOD_Studio_Bus_GetPath(System.IntPtr bus, System.IntPtr path, System.Int32 size, out System.Int32 retrieved)
    // Offset: 0x22E67E4
    static ::FMOD::RESULT FMOD_Studio_Bus_GetPath(::System::IntPtr bus, ::System::IntPtr path, int size, ByRef<int> retrieved);
    // static private FMOD.RESULT FMOD_Studio_Bus_GetVolume(System.IntPtr bus, out System.Single volume, out System.Single finalvolume)
    // Offset: 0x22E68B0
    static ::FMOD::RESULT FMOD_Studio_Bus_GetVolume(::System::IntPtr bus, ByRef<float> volume, ByRef<float> finalvolume);
    // static private FMOD.RESULT FMOD_Studio_Bus_SetVolume(System.IntPtr bus, System.Single value)
    // Offset: 0x22E696C
    static ::FMOD::RESULT FMOD_Studio_Bus_SetVolume(::System::IntPtr bus, float value);
    // static private FMOD.RESULT FMOD_Studio_Bus_GetPaused(System.IntPtr bus, out System.Boolean paused)
    // Offset: 0x22E6A20
    static ::FMOD::RESULT FMOD_Studio_Bus_GetPaused(::System::IntPtr bus, ByRef<bool> paused);
    // static private FMOD.RESULT FMOD_Studio_Bus_SetPaused(System.IntPtr bus, System.Boolean paused)
    // Offset: 0x22E6AEC
    static ::FMOD::RESULT FMOD_Studio_Bus_SetPaused(::System::IntPtr bus, bool paused);
    // static private FMOD.RESULT FMOD_Studio_Bus_GetMute(System.IntPtr bus, out System.Boolean mute)
    // Offset: 0x22E6BA0
    static ::FMOD::RESULT FMOD_Studio_Bus_GetMute(::System::IntPtr bus, ByRef<bool> mute);
    // static private FMOD.RESULT FMOD_Studio_Bus_SetMute(System.IntPtr bus, System.Boolean mute)
    // Offset: 0x22E6C6C
    static ::FMOD::RESULT FMOD_Studio_Bus_SetMute(::System::IntPtr bus, bool mute);
    // static private FMOD.RESULT FMOD_Studio_Bus_StopAllEvents(System.IntPtr bus, FMOD.Studio.STOP_MODE mode)
    // Offset: 0x22E6D20
    static ::FMOD::RESULT FMOD_Studio_Bus_StopAllEvents(::System::IntPtr bus, ::FMOD::Studio::STOP_MODE mode);
    // static private FMOD.RESULT FMOD_Studio_Bus_LockChannelGroup(System.IntPtr bus)
    // Offset: 0x22E6DD4
    static ::FMOD::RESULT FMOD_Studio_Bus_LockChannelGroup(::System::IntPtr bus);
    // static private FMOD.RESULT FMOD_Studio_Bus_UnlockChannelGroup(System.IntPtr bus)
    // Offset: 0x22E6E78
    static ::FMOD::RESULT FMOD_Studio_Bus_UnlockChannelGroup(::System::IntPtr bus);
    // static private FMOD.RESULT FMOD_Studio_Bus_GetChannelGroup(System.IntPtr bus, out System.IntPtr group)
    // Offset: 0x22E6F1C
    static ::FMOD::RESULT FMOD_Studio_Bus_GetChannelGroup(::System::IntPtr bus, ByRef<::System::IntPtr> group);
    // public System.Boolean hasHandle()
    // Offset: 0xBBDE70
    bool hasHandle();
    // public System.Void clearHandle()
    // Offset: 0xBBDE78
    void clearHandle();
    // public System.Boolean isValid()
    // Offset: 0xBBDEBC
    bool isValid();
  }; // FMOD.Studio.Bus
  #pragma pack(pop)
  static check_size<sizeof(Bus), 0 + sizeof(::System::IntPtr)> __FMOD_Studio_BusSizeCheck;
  static_assert(sizeof(Bus) == 0x8);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: FMOD::Studio::Bus::getID
// Il2CppName: getID
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::FMOD::RESULT (FMOD::Studio::Bus::*)(ByRef<::System::Guid>)>(&FMOD::Studio::Bus::getID)> {
  static const MethodInfo* get() {
    static auto* id = &::il2cpp_utils::GetClassFromName("System", "Guid")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(FMOD::Studio::Bus), "getID", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{id});
  }
};
// Writing MetadataGetter for method: FMOD::Studio::Bus::getPath
// Il2CppName: getPath
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::FMOD::RESULT (FMOD::Studio::Bus::*)(ByRef<::StringW>)>(&FMOD::Studio::Bus::getPath)> {
  static const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "String")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(FMOD::Studio::Bus), "getPath", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path});
  }
};
// Writing MetadataGetter for method: FMOD::Studio::Bus::getVolume
// Il2CppName: getVolume
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::FMOD::RESULT (FMOD::Studio::Bus::*)(ByRef<float>, ByRef<float>)>(&FMOD::Studio::Bus::getVolume)> {
  static const MethodInfo* get() {
    static auto* volume = &::il2cpp_utils::GetClassFromName("System", "Single")->this_arg;
    static auto* finalvolume = &::il2cpp_utils::GetClassFromName("System", "Single")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(FMOD::Studio::Bus), "getVolume", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{volume, finalvolume});
  }
};
// Writing MetadataGetter for method: FMOD::Studio::Bus::setVolume
// Il2CppName: setVolume
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::FMOD::RESULT (FMOD::Studio::Bus::*)(float)>(&FMOD::Studio::Bus::setVolume)> {
  static const MethodInfo* get() {
    static auto* volume = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(FMOD::Studio::Bus), "setVolume", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{volume});
  }
};
// Writing MetadataGetter for method: FMOD::Studio::Bus::getPaused
// Il2CppName: getPaused
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::FMOD::RESULT (FMOD::Studio::Bus::*)(ByRef<bool>)>(&FMOD::Studio::Bus::getPaused)> {
  static const MethodInfo* get() {
    static auto* paused = &::il2cpp_utils::GetClassFromName("System", "Boolean")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(FMOD::Studio::Bus), "getPaused", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{paused});
  }
};
// Writing MetadataGetter for method: FMOD::Studio::Bus::setPaused
// Il2CppName: setPaused
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::FMOD::RESULT (FMOD::Studio::Bus::*)(bool)>(&FMOD::Studio::Bus::setPaused)> {
  static const MethodInfo* get() {
    static auto* paused = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(FMOD::Studio::Bus), "setPaused", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{paused});
  }
};
// Writing MetadataGetter for method: FMOD::Studio::Bus::getMute
// Il2CppName: getMute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::FMOD::RESULT (FMOD::Studio::Bus::*)(ByRef<bool>)>(&FMOD::Studio::Bus::getMute)> {
  static const MethodInfo* get() {
    static auto* mute = &::il2cpp_utils::GetClassFromName("System", "Boolean")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(FMOD::Studio::Bus), "getMute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mute});
  }
};
// Writing MetadataGetter for method: FMOD::Studio::Bus::setMute
// Il2CppName: setMute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::FMOD::RESULT (FMOD::Studio::Bus::*)(bool)>(&FMOD::Studio::Bus::setMute)> {
  static const MethodInfo* get() {
    static auto* mute = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(FMOD::Studio::Bus), "setMute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mute});
  }
};
// Writing MetadataGetter for method: FMOD::Studio::Bus::stopAllEvents
// Il2CppName: stopAllEvents
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::FMOD::RESULT (FMOD::Studio::Bus::*)(::FMOD::Studio::STOP_MODE)>(&FMOD::Studio::Bus::stopAllEvents)> {
  static const MethodInfo* get() {
    static auto* mode = &::il2cpp_utils::GetClassFromName("FMOD.Studio", "STOP_MODE")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(FMOD::Studio::Bus), "stopAllEvents", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mode});
  }
};
// Writing MetadataGetter for method: FMOD::Studio::Bus::lockChannelGroup
// Il2CppName: lockChannelGroup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::FMOD::RESULT (FMOD::Studio::Bus::*)()>(&FMOD::Studio::Bus::lockChannelGroup)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(FMOD::Studio::Bus), "lockChannelGroup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: FMOD::Studio::Bus::unlockChannelGroup
// Il2CppName: unlockChannelGroup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::FMOD::RESULT (FMOD::Studio::Bus::*)()>(&FMOD::Studio::Bus::unlockChannelGroup)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(FMOD::Studio::Bus), "unlockChannelGroup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: FMOD::Studio::Bus::getChannelGroup
// Il2CppName: getChannelGroup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::FMOD::RESULT (FMOD::Studio::Bus::*)(ByRef<::FMOD::ChannelGroup>)>(&FMOD::Studio::Bus::getChannelGroup)> {
  static const MethodInfo* get() {
    static auto* group = &::il2cpp_utils::GetClassFromName("FMOD", "ChannelGroup")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(FMOD::Studio::Bus), "getChannelGroup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{group});
  }
};
// Writing MetadataGetter for method: FMOD::Studio::Bus::FMOD_Studio_Bus_IsValid
// Il2CppName: FMOD_Studio_Bus_IsValid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::IntPtr)>(&FMOD::Studio::Bus::FMOD_Studio_Bus_IsValid)> {
  static const MethodInfo* get() {
    static auto* bus = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(FMOD::Studio::Bus), "FMOD_Studio_Bus_IsValid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bus});
  }
};
// Writing MetadataGetter for method: FMOD::Studio::Bus::FMOD_Studio_Bus_GetID
// Il2CppName: FMOD_Studio_Bus_GetID
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::FMOD::RESULT (*)(::System::IntPtr, ByRef<::System::Guid>)>(&FMOD::Studio::Bus::FMOD_Studio_Bus_GetID)> {
  static const MethodInfo* get() {
    static auto* bus = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* id = &::il2cpp_utils::GetClassFromName("System", "Guid")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(FMOD::Studio::Bus), "FMOD_Studio_Bus_GetID", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bus, id});
  }
};
// Writing MetadataGetter for method: FMOD::Studio::Bus::FMOD_Studio_Bus_GetPath
// Il2CppName: FMOD_Studio_Bus_GetPath
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::FMOD::RESULT (*)(::System::IntPtr, ::System::IntPtr, int, ByRef<int>)>(&FMOD::Studio::Bus::FMOD_Studio_Bus_GetPath)> {
  static const MethodInfo* get() {
    static auto* bus = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* size = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* retrieved = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(FMOD::Studio::Bus), "FMOD_Studio_Bus_GetPath", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bus, path, size, retrieved});
  }
};
// Writing MetadataGetter for method: FMOD::Studio::Bus::FMOD_Studio_Bus_GetVolume
// Il2CppName: FMOD_Studio_Bus_GetVolume
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::FMOD::RESULT (*)(::System::IntPtr, ByRef<float>, ByRef<float>)>(&FMOD::Studio::Bus::FMOD_Studio_Bus_GetVolume)> {
  static const MethodInfo* get() {
    static auto* bus = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* volume = &::il2cpp_utils::GetClassFromName("System", "Single")->this_arg;
    static auto* finalvolume = &::il2cpp_utils::GetClassFromName("System", "Single")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(FMOD::Studio::Bus), "FMOD_Studio_Bus_GetVolume", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bus, volume, finalvolume});
  }
};
// Writing MetadataGetter for method: FMOD::Studio::Bus::FMOD_Studio_Bus_SetVolume
// Il2CppName: FMOD_Studio_Bus_SetVolume
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::FMOD::RESULT (*)(::System::IntPtr, float)>(&FMOD::Studio::Bus::FMOD_Studio_Bus_SetVolume)> {
  static const MethodInfo* get() {
    static auto* bus = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(FMOD::Studio::Bus), "FMOD_Studio_Bus_SetVolume", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bus, value});
  }
};
// Writing MetadataGetter for method: FMOD::Studio::Bus::FMOD_Studio_Bus_GetPaused
// Il2CppName: FMOD_Studio_Bus_GetPaused
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::FMOD::RESULT (*)(::System::IntPtr, ByRef<bool>)>(&FMOD::Studio::Bus::FMOD_Studio_Bus_GetPaused)> {
  static const MethodInfo* get() {
    static auto* bus = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* paused = &::il2cpp_utils::GetClassFromName("System", "Boolean")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(FMOD::Studio::Bus), "FMOD_Studio_Bus_GetPaused", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bus, paused});
  }
};
// Writing MetadataGetter for method: FMOD::Studio::Bus::FMOD_Studio_Bus_SetPaused
// Il2CppName: FMOD_Studio_Bus_SetPaused
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::FMOD::RESULT (*)(::System::IntPtr, bool)>(&FMOD::Studio::Bus::FMOD_Studio_Bus_SetPaused)> {
  static const MethodInfo* get() {
    static auto* bus = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* paused = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(FMOD::Studio::Bus), "FMOD_Studio_Bus_SetPaused", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bus, paused});
  }
};
// Writing MetadataGetter for method: FMOD::Studio::Bus::FMOD_Studio_Bus_GetMute
// Il2CppName: FMOD_Studio_Bus_GetMute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::FMOD::RESULT (*)(::System::IntPtr, ByRef<bool>)>(&FMOD::Studio::Bus::FMOD_Studio_Bus_GetMute)> {
  static const MethodInfo* get() {
    static auto* bus = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* mute = &::il2cpp_utils::GetClassFromName("System", "Boolean")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(FMOD::Studio::Bus), "FMOD_Studio_Bus_GetMute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bus, mute});
  }
};
// Writing MetadataGetter for method: FMOD::Studio::Bus::FMOD_Studio_Bus_SetMute
// Il2CppName: FMOD_Studio_Bus_SetMute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::FMOD::RESULT (*)(::System::IntPtr, bool)>(&FMOD::Studio::Bus::FMOD_Studio_Bus_SetMute)> {
  static const MethodInfo* get() {
    static auto* bus = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* mute = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(FMOD::Studio::Bus), "FMOD_Studio_Bus_SetMute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bus, mute});
  }
};
// Writing MetadataGetter for method: FMOD::Studio::Bus::FMOD_Studio_Bus_StopAllEvents
// Il2CppName: FMOD_Studio_Bus_StopAllEvents
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::FMOD::RESULT (*)(::System::IntPtr, ::FMOD::Studio::STOP_MODE)>(&FMOD::Studio::Bus::FMOD_Studio_Bus_StopAllEvents)> {
  static const MethodInfo* get() {
    static auto* bus = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* mode = &::il2cpp_utils::GetClassFromName("FMOD.Studio", "STOP_MODE")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(FMOD::Studio::Bus), "FMOD_Studio_Bus_StopAllEvents", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bus, mode});
  }
};
// Writing MetadataGetter for method: FMOD::Studio::Bus::FMOD_Studio_Bus_LockChannelGroup
// Il2CppName: FMOD_Studio_Bus_LockChannelGroup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::FMOD::RESULT (*)(::System::IntPtr)>(&FMOD::Studio::Bus::FMOD_Studio_Bus_LockChannelGroup)> {
  static const MethodInfo* get() {
    static auto* bus = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(FMOD::Studio::Bus), "FMOD_Studio_Bus_LockChannelGroup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bus});
  }
};
// Writing MetadataGetter for method: FMOD::Studio::Bus::FMOD_Studio_Bus_UnlockChannelGroup
// Il2CppName: FMOD_Studio_Bus_UnlockChannelGroup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::FMOD::RESULT (*)(::System::IntPtr)>(&FMOD::Studio::Bus::FMOD_Studio_Bus_UnlockChannelGroup)> {
  static const MethodInfo* get() {
    static auto* bus = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(FMOD::Studio::Bus), "FMOD_Studio_Bus_UnlockChannelGroup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bus});
  }
};
// Writing MetadataGetter for method: FMOD::Studio::Bus::FMOD_Studio_Bus_GetChannelGroup
// Il2CppName: FMOD_Studio_Bus_GetChannelGroup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::FMOD::RESULT (*)(::System::IntPtr, ByRef<::System::IntPtr>)>(&FMOD::Studio::Bus::FMOD_Studio_Bus_GetChannelGroup)> {
  static const MethodInfo* get() {
    static auto* bus = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* group = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(FMOD::Studio::Bus), "FMOD_Studio_Bus_GetChannelGroup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bus, group});
  }
};
// Writing MetadataGetter for method: FMOD::Studio::Bus::hasHandle
// Il2CppName: hasHandle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (FMOD::Studio::Bus::*)()>(&FMOD::Studio::Bus::hasHandle)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(FMOD::Studio::Bus), "hasHandle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: FMOD::Studio::Bus::clearHandle
// Il2CppName: clearHandle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (FMOD::Studio::Bus::*)()>(&FMOD::Studio::Bus::clearHandle)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(FMOD::Studio::Bus), "clearHandle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: FMOD::Studio::Bus::isValid
// Il2CppName: isValid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (FMOD::Studio::Bus::*)()>(&FMOD::Studio::Bus::isValid)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(FMOD::Studio::Bus), "isValid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};