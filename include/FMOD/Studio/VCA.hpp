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
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Guid
  struct Guid;
}
// Completed forward declares
// Type namespace: FMOD.Studio
namespace FMOD::Studio {
  // Forward declaring type: VCA
  struct VCA;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::FMOD::Studio::VCA, "FMOD.Studio", "VCA");
// Type namespace: FMOD.Studio
namespace FMOD::Studio {
  // Size: 0x8
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: FMOD.Studio.VCA
  // [TokenAttribute] Offset: FFFFFFFF
  struct VCA/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.IntPtr handle
    // Size: 0x8
    // Offset: 0x0
    ::System::IntPtr handle;
    // Field size check
    static_assert(sizeof(::System::IntPtr) == 0x8);
    public:
    // Creating value type constructor for type: VCA
    constexpr VCA(::System::IntPtr handle_ = {}) noexcept : handle{handle_} {}
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
    // Offset: 0xBA1030
    ::FMOD::RESULT getID(ByRef<::System::Guid> id);
    // public FMOD.RESULT getPath(out System.String path)
    // Offset: 0xBA1038
    ::FMOD::RESULT getPath(ByRef<::StringW> path);
    // public FMOD.RESULT getVolume(out System.Single volume, out System.Single finalvolume)
    // Offset: 0xBA1040
    ::FMOD::RESULT getVolume(ByRef<float> volume, ByRef<float> finalvolume);
    // public FMOD.RESULT setVolume(System.Single volume)
    // Offset: 0xBA1048
    ::FMOD::RESULT setVolume(float volume);
    // static private System.Boolean FMOD_Studio_VCA_IsValid(System.IntPtr vca)
    // Offset: 0x15CD7F0
    static bool FMOD_Studio_VCA_IsValid(::System::IntPtr vca);
    // static private FMOD.RESULT FMOD_Studio_VCA_GetID(System.IntPtr vca, out System.Guid id)
    // Offset: 0x15CD2D0
    static ::FMOD::RESULT FMOD_Studio_VCA_GetID(::System::IntPtr vca, ByRef<::System::Guid> id);
    // static private FMOD.RESULT FMOD_Studio_VCA_GetPath(System.IntPtr vca, System.IntPtr path, System.Int32 size, out System.Int32 retrieved)
    // Offset: 0x15CD5BC
    static ::FMOD::RESULT FMOD_Studio_VCA_GetPath(::System::IntPtr vca, ::System::IntPtr path, int size, ByRef<int> retrieved);
    // static private FMOD.RESULT FMOD_Studio_VCA_GetVolume(System.IntPtr vca, out System.Single volume, out System.Single finalvolume)
    // Offset: 0x15CD688
    static ::FMOD::RESULT FMOD_Studio_VCA_GetVolume(::System::IntPtr vca, ByRef<float> volume, ByRef<float> finalvolume);
    // static private FMOD.RESULT FMOD_Studio_VCA_SetVolume(System.IntPtr vca, System.Single value)
    // Offset: 0x15CD744
    static ::FMOD::RESULT FMOD_Studio_VCA_SetVolume(::System::IntPtr vca, float value);
    // public System.Boolean hasHandle()
    // Offset: 0xBA1050
    bool hasHandle();
    // public System.Void clearHandle()
    // Offset: 0xBA1058
    void clearHandle();
    // public System.Boolean isValid()
    // Offset: 0xBA109C
    bool isValid();
  }; // FMOD.Studio.VCA
  #pragma pack(pop)
  static check_size<sizeof(VCA), 0 + sizeof(::System::IntPtr)> __FMOD_Studio_VCASizeCheck;
  static_assert(sizeof(VCA) == 0x8);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: FMOD::Studio::VCA::getID
// Il2CppName: getID
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::FMOD::RESULT (FMOD::Studio::VCA::*)(ByRef<::System::Guid>)>(&FMOD::Studio::VCA::getID)> {
  static const MethodInfo* get() {
    static auto* id = &::il2cpp_utils::GetClassFromName("System", "Guid")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(FMOD::Studio::VCA), "getID", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{id});
  }
};
// Writing MetadataGetter for method: FMOD::Studio::VCA::getPath
// Il2CppName: getPath
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::FMOD::RESULT (FMOD::Studio::VCA::*)(ByRef<::StringW>)>(&FMOD::Studio::VCA::getPath)> {
  static const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "String")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(FMOD::Studio::VCA), "getPath", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path});
  }
};
// Writing MetadataGetter for method: FMOD::Studio::VCA::getVolume
// Il2CppName: getVolume
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::FMOD::RESULT (FMOD::Studio::VCA::*)(ByRef<float>, ByRef<float>)>(&FMOD::Studio::VCA::getVolume)> {
  static const MethodInfo* get() {
    static auto* volume = &::il2cpp_utils::GetClassFromName("System", "Single")->this_arg;
    static auto* finalvolume = &::il2cpp_utils::GetClassFromName("System", "Single")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(FMOD::Studio::VCA), "getVolume", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{volume, finalvolume});
  }
};
// Writing MetadataGetter for method: FMOD::Studio::VCA::setVolume
// Il2CppName: setVolume
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::FMOD::RESULT (FMOD::Studio::VCA::*)(float)>(&FMOD::Studio::VCA::setVolume)> {
  static const MethodInfo* get() {
    static auto* volume = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(FMOD::Studio::VCA), "setVolume", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{volume});
  }
};
// Writing MetadataGetter for method: FMOD::Studio::VCA::FMOD_Studio_VCA_IsValid
// Il2CppName: FMOD_Studio_VCA_IsValid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::IntPtr)>(&FMOD::Studio::VCA::FMOD_Studio_VCA_IsValid)> {
  static const MethodInfo* get() {
    static auto* vca = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(FMOD::Studio::VCA), "FMOD_Studio_VCA_IsValid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{vca});
  }
};
// Writing MetadataGetter for method: FMOD::Studio::VCA::FMOD_Studio_VCA_GetID
// Il2CppName: FMOD_Studio_VCA_GetID
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::FMOD::RESULT (*)(::System::IntPtr, ByRef<::System::Guid>)>(&FMOD::Studio::VCA::FMOD_Studio_VCA_GetID)> {
  static const MethodInfo* get() {
    static auto* vca = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* id = &::il2cpp_utils::GetClassFromName("System", "Guid")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(FMOD::Studio::VCA), "FMOD_Studio_VCA_GetID", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{vca, id});
  }
};
// Writing MetadataGetter for method: FMOD::Studio::VCA::FMOD_Studio_VCA_GetPath
// Il2CppName: FMOD_Studio_VCA_GetPath
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::FMOD::RESULT (*)(::System::IntPtr, ::System::IntPtr, int, ByRef<int>)>(&FMOD::Studio::VCA::FMOD_Studio_VCA_GetPath)> {
  static const MethodInfo* get() {
    static auto* vca = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* size = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* retrieved = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(FMOD::Studio::VCA), "FMOD_Studio_VCA_GetPath", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{vca, path, size, retrieved});
  }
};
// Writing MetadataGetter for method: FMOD::Studio::VCA::FMOD_Studio_VCA_GetVolume
// Il2CppName: FMOD_Studio_VCA_GetVolume
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::FMOD::RESULT (*)(::System::IntPtr, ByRef<float>, ByRef<float>)>(&FMOD::Studio::VCA::FMOD_Studio_VCA_GetVolume)> {
  static const MethodInfo* get() {
    static auto* vca = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* volume = &::il2cpp_utils::GetClassFromName("System", "Single")->this_arg;
    static auto* finalvolume = &::il2cpp_utils::GetClassFromName("System", "Single")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(FMOD::Studio::VCA), "FMOD_Studio_VCA_GetVolume", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{vca, volume, finalvolume});
  }
};
// Writing MetadataGetter for method: FMOD::Studio::VCA::FMOD_Studio_VCA_SetVolume
// Il2CppName: FMOD_Studio_VCA_SetVolume
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::FMOD::RESULT (*)(::System::IntPtr, float)>(&FMOD::Studio::VCA::FMOD_Studio_VCA_SetVolume)> {
  static const MethodInfo* get() {
    static auto* vca = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(FMOD::Studio::VCA), "FMOD_Studio_VCA_SetVolume", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{vca, value});
  }
};
// Writing MetadataGetter for method: FMOD::Studio::VCA::hasHandle
// Il2CppName: hasHandle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (FMOD::Studio::VCA::*)()>(&FMOD::Studio::VCA::hasHandle)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(FMOD::Studio::VCA), "hasHandle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: FMOD::Studio::VCA::clearHandle
// Il2CppName: clearHandle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (FMOD::Studio::VCA::*)()>(&FMOD::Studio::VCA::clearHandle)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(FMOD::Studio::VCA), "clearHandle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: FMOD::Studio::VCA::isValid
// Il2CppName: isValid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (FMOD::Studio::VCA::*)()>(&FMOD::Studio::VCA::isValid)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(FMOD::Studio::VCA), "isValid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
