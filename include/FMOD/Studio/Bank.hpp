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
// Including type: FMOD.Studio.EventDescription
#include "FMOD/Studio/EventDescription.hpp"
// Including type: FMOD.Studio.Bus
#include "FMOD/Studio/Bus.hpp"
// Including type: FMOD.Studio.VCA
#include "FMOD/Studio/VCA.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
// Forward declaring namespace: FMOD::Studio
namespace FMOD::Studio {
  // Forward declaring type: LOADING_STATE
  struct LOADING_STATE;
}
// Completed forward declares
// Type namespace: FMOD.Studio
namespace FMOD::Studio {
  // Forward declaring type: Bank
  struct Bank;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::FMOD::Studio::Bank, "FMOD.Studio", "Bank");
// Type namespace: FMOD.Studio
namespace FMOD::Studio {
  // Size: 0x8
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: FMOD.Studio.Bank
  // [TokenAttribute] Offset: FFFFFFFF
  struct Bank/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.IntPtr handle
    // Size: 0x8
    // Offset: 0x0
    ::System::IntPtr handle;
    // Field size check
    static_assert(sizeof(::System::IntPtr) == 0x8);
    public:
    // Creating value type constructor for type: Bank
    constexpr Bank(::System::IntPtr handle_ = {}) noexcept : handle{handle_} {}
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
    // Offset: 0xBBDD2C
    ::FMOD::RESULT getID(ByRef<::System::Guid> id);
    // public FMOD.RESULT getPath(out System.String path)
    // Offset: 0xBBDD34
    ::FMOD::RESULT getPath(ByRef<::StringW> path);
    // public FMOD.RESULT unload()
    // Offset: 0xBBDD3C
    ::FMOD::RESULT unload();
    // public FMOD.RESULT loadSampleData()
    // Offset: 0xBBDD44
    ::FMOD::RESULT loadSampleData();
    // public FMOD.RESULT unloadSampleData()
    // Offset: 0xBBDD4C
    ::FMOD::RESULT unloadSampleData();
    // public FMOD.RESULT getLoadingState(out FMOD.Studio.LOADING_STATE state)
    // Offset: 0xBBDD54
    ::FMOD::RESULT getLoadingState(ByRef<::FMOD::Studio::LOADING_STATE> state);
    // public FMOD.RESULT getSampleLoadingState(out FMOD.Studio.LOADING_STATE state)
    // Offset: 0xBBDD5C
    ::FMOD::RESULT getSampleLoadingState(ByRef<::FMOD::Studio::LOADING_STATE> state);
    // public FMOD.RESULT getStringCount(out System.Int32 count)
    // Offset: 0xBBDD64
    ::FMOD::RESULT getStringCount(ByRef<int> count);
    // public FMOD.RESULT getStringInfo(System.Int32 index, out System.Guid id, out System.String path)
    // Offset: 0xBBDD6C
    ::FMOD::RESULT getStringInfo(int index, ByRef<::System::Guid> id, ByRef<::StringW> path);
    // public FMOD.RESULT getEventCount(out System.Int32 count)
    // Offset: 0xBBDD74
    ::FMOD::RESULT getEventCount(ByRef<int> count);
    // public FMOD.RESULT getEventList(out FMOD.Studio.EventDescription[] array)
    // Offset: 0xBBDD7C
    ::FMOD::RESULT getEventList(ByRef<::ArrayW<::FMOD::Studio::EventDescription>> array);
    // public FMOD.RESULT getBusCount(out System.Int32 count)
    // Offset: 0xBBDD84
    ::FMOD::RESULT getBusCount(ByRef<int> count);
    // public FMOD.RESULT getBusList(out FMOD.Studio.Bus[] array)
    // Offset: 0xBBDD8C
    ::FMOD::RESULT getBusList(ByRef<::ArrayW<::FMOD::Studio::Bus>> array);
    // public FMOD.RESULT getVCACount(out System.Int32 count)
    // Offset: 0xBBDD94
    ::FMOD::RESULT getVCACount(ByRef<int> count);
    // public FMOD.RESULT getVCAList(out FMOD.Studio.VCA[] array)
    // Offset: 0xBBDD9C
    ::FMOD::RESULT getVCAList(ByRef<::ArrayW<::FMOD::Studio::VCA>> array);
    // public FMOD.RESULT getUserData(out System.IntPtr userdata)
    // Offset: 0xBBDDA4
    ::FMOD::RESULT getUserData(ByRef<::System::IntPtr> userdata);
    // public FMOD.RESULT setUserData(System.IntPtr userdata)
    // Offset: 0xBBDDAC
    ::FMOD::RESULT setUserData(::System::IntPtr userdata);
    // static private System.Boolean FMOD_Studio_Bank_IsValid(System.IntPtr bank)
    // Offset: 0x22E638C
    static bool FMOD_Studio_Bank_IsValid(::System::IntPtr bank);
    // static private FMOD.RESULT FMOD_Studio_Bank_GetID(System.IntPtr bank, out System.Guid id)
    // Offset: 0x22E4DB0
    static ::FMOD::RESULT FMOD_Studio_Bank_GetID(::System::IntPtr bank, ByRef<::System::Guid> id);
    // static private FMOD.RESULT FMOD_Studio_Bank_GetPath(System.IntPtr bank, System.IntPtr path, System.Int32 size, out System.Int32 retrieved)
    // Offset: 0x22E5094
    static ::FMOD::RESULT FMOD_Studio_Bank_GetPath(::System::IntPtr bank, ::System::IntPtr path, int size, ByRef<int> retrieved);
    // static private FMOD.RESULT FMOD_Studio_Bank_Unload(System.IntPtr bank)
    // Offset: 0x22E5160
    static ::FMOD::RESULT FMOD_Studio_Bank_Unload(::System::IntPtr bank);
    // static private FMOD.RESULT FMOD_Studio_Bank_LoadSampleData(System.IntPtr bank)
    // Offset: 0x22E5204
    static ::FMOD::RESULT FMOD_Studio_Bank_LoadSampleData(::System::IntPtr bank);
    // static private FMOD.RESULT FMOD_Studio_Bank_UnloadSampleData(System.IntPtr bank)
    // Offset: 0x22E52A8
    static ::FMOD::RESULT FMOD_Studio_Bank_UnloadSampleData(::System::IntPtr bank);
    // static private FMOD.RESULT FMOD_Studio_Bank_GetLoadingState(System.IntPtr bank, out FMOD.Studio.LOADING_STATE state)
    // Offset: 0x22E534C
    static ::FMOD::RESULT FMOD_Studio_Bank_GetLoadingState(::System::IntPtr bank, ByRef<::FMOD::Studio::LOADING_STATE> state);
    // static private FMOD.RESULT FMOD_Studio_Bank_GetSampleLoadingState(System.IntPtr bank, out FMOD.Studio.LOADING_STATE state)
    // Offset: 0x22E5400
    static ::FMOD::RESULT FMOD_Studio_Bank_GetSampleLoadingState(::System::IntPtr bank, ByRef<::FMOD::Studio::LOADING_STATE> state);
    // static private FMOD.RESULT FMOD_Studio_Bank_GetStringCount(System.IntPtr bank, out System.Int32 count)
    // Offset: 0x22E54B4
    static ::FMOD::RESULT FMOD_Studio_Bank_GetStringCount(::System::IntPtr bank, ByRef<int> count);
    // static private FMOD.RESULT FMOD_Studio_Bank_GetStringInfo(System.IntPtr bank, System.Int32 index, out System.Guid id, System.IntPtr path, System.Int32 size, out System.Int32 retrieved)
    // Offset: 0x22E57E8
    static ::FMOD::RESULT FMOD_Studio_Bank_GetStringInfo(::System::IntPtr bank, int index, ByRef<::System::Guid> id, ::System::IntPtr path, int size, ByRef<int> retrieved);
    // static private FMOD.RESULT FMOD_Studio_Bank_GetEventCount(System.IntPtr bank, out System.Int32 count)
    // Offset: 0x22E58CC
    static ::FMOD::RESULT FMOD_Studio_Bank_GetEventCount(::System::IntPtr bank, ByRef<int> count);
    // static private FMOD.RESULT FMOD_Studio_Bank_GetEventList(System.IntPtr bank, System.IntPtr[] array, System.Int32 capacity, out System.Int32 count)
    // Offset: 0x22E5B18
    static ::FMOD::RESULT FMOD_Studio_Bank_GetEventList(::System::IntPtr bank, ::ArrayW<::System::IntPtr> array, int capacity, ByRef<int> count);
    // static private FMOD.RESULT FMOD_Studio_Bank_GetBusCount(System.IntPtr bank, out System.Int32 count)
    // Offset: 0x22E5BEC
    static ::FMOD::RESULT FMOD_Studio_Bank_GetBusCount(::System::IntPtr bank, ByRef<int> count);
    // static private FMOD.RESULT FMOD_Studio_Bank_GetBusList(System.IntPtr bank, System.IntPtr[] array, System.Int32 capacity, out System.Int32 count)
    // Offset: 0x22E5E38
    static ::FMOD::RESULT FMOD_Studio_Bank_GetBusList(::System::IntPtr bank, ::ArrayW<::System::IntPtr> array, int capacity, ByRef<int> count);
    // static private FMOD.RESULT FMOD_Studio_Bank_GetVCACount(System.IntPtr bank, out System.Int32 count)
    // Offset: 0x22E5F0C
    static ::FMOD::RESULT FMOD_Studio_Bank_GetVCACount(::System::IntPtr bank, ByRef<int> count);
    // static private FMOD.RESULT FMOD_Studio_Bank_GetVCAList(System.IntPtr bank, System.IntPtr[] array, System.Int32 capacity, out System.Int32 count)
    // Offset: 0x22E6158
    static ::FMOD::RESULT FMOD_Studio_Bank_GetVCAList(::System::IntPtr bank, ::ArrayW<::System::IntPtr> array, int capacity, ByRef<int> count);
    // static private FMOD.RESULT FMOD_Studio_Bank_GetUserData(System.IntPtr bank, out System.IntPtr userdata)
    // Offset: 0x22E622C
    static ::FMOD::RESULT FMOD_Studio_Bank_GetUserData(::System::IntPtr bank, ByRef<::System::IntPtr> userdata);
    // static private FMOD.RESULT FMOD_Studio_Bank_SetUserData(System.IntPtr bank, System.IntPtr userdata)
    // Offset: 0x22E62E0
    static ::FMOD::RESULT FMOD_Studio_Bank_SetUserData(::System::IntPtr bank, ::System::IntPtr userdata);
    // public System.Boolean hasHandle()
    // Offset: 0xBBDDB4
    bool hasHandle();
    // public System.Void clearHandle()
    // Offset: 0xBBDDBC
    void clearHandle();
    // public System.Boolean isValid()
    // Offset: 0xBBDE00
    bool isValid();
  }; // FMOD.Studio.Bank
  #pragma pack(pop)
  static check_size<sizeof(Bank), 0 + sizeof(::System::IntPtr)> __FMOD_Studio_BankSizeCheck;
  static_assert(sizeof(Bank) == 0x8);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: FMOD::Studio::Bank::getID
// Il2CppName: getID
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::FMOD::RESULT (FMOD::Studio::Bank::*)(ByRef<::System::Guid>)>(&FMOD::Studio::Bank::getID)> {
  static const MethodInfo* get() {
    static auto* id = &::il2cpp_utils::GetClassFromName("System", "Guid")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(FMOD::Studio::Bank), "getID", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{id});
  }
};
// Writing MetadataGetter for method: FMOD::Studio::Bank::getPath
// Il2CppName: getPath
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::FMOD::RESULT (FMOD::Studio::Bank::*)(ByRef<::StringW>)>(&FMOD::Studio::Bank::getPath)> {
  static const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "String")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(FMOD::Studio::Bank), "getPath", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path});
  }
};
// Writing MetadataGetter for method: FMOD::Studio::Bank::unload
// Il2CppName: unload
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::FMOD::RESULT (FMOD::Studio::Bank::*)()>(&FMOD::Studio::Bank::unload)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(FMOD::Studio::Bank), "unload", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: FMOD::Studio::Bank::loadSampleData
// Il2CppName: loadSampleData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::FMOD::RESULT (FMOD::Studio::Bank::*)()>(&FMOD::Studio::Bank::loadSampleData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(FMOD::Studio::Bank), "loadSampleData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: FMOD::Studio::Bank::unloadSampleData
// Il2CppName: unloadSampleData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::FMOD::RESULT (FMOD::Studio::Bank::*)()>(&FMOD::Studio::Bank::unloadSampleData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(FMOD::Studio::Bank), "unloadSampleData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: FMOD::Studio::Bank::getLoadingState
// Il2CppName: getLoadingState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::FMOD::RESULT (FMOD::Studio::Bank::*)(ByRef<::FMOD::Studio::LOADING_STATE>)>(&FMOD::Studio::Bank::getLoadingState)> {
  static const MethodInfo* get() {
    static auto* state = &::il2cpp_utils::GetClassFromName("FMOD.Studio", "LOADING_STATE")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(FMOD::Studio::Bank), "getLoadingState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{state});
  }
};
// Writing MetadataGetter for method: FMOD::Studio::Bank::getSampleLoadingState
// Il2CppName: getSampleLoadingState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::FMOD::RESULT (FMOD::Studio::Bank::*)(ByRef<::FMOD::Studio::LOADING_STATE>)>(&FMOD::Studio::Bank::getSampleLoadingState)> {
  static const MethodInfo* get() {
    static auto* state = &::il2cpp_utils::GetClassFromName("FMOD.Studio", "LOADING_STATE")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(FMOD::Studio::Bank), "getSampleLoadingState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{state});
  }
};
// Writing MetadataGetter for method: FMOD::Studio::Bank::getStringCount
// Il2CppName: getStringCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::FMOD::RESULT (FMOD::Studio::Bank::*)(ByRef<int>)>(&FMOD::Studio::Bank::getStringCount)> {
  static const MethodInfo* get() {
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(FMOD::Studio::Bank), "getStringCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{count});
  }
};
// Writing MetadataGetter for method: FMOD::Studio::Bank::getStringInfo
// Il2CppName: getStringInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::FMOD::RESULT (FMOD::Studio::Bank::*)(int, ByRef<::System::Guid>, ByRef<::StringW>)>(&FMOD::Studio::Bank::getStringInfo)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* id = &::il2cpp_utils::GetClassFromName("System", "Guid")->this_arg;
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "String")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(FMOD::Studio::Bank), "getStringInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index, id, path});
  }
};
// Writing MetadataGetter for method: FMOD::Studio::Bank::getEventCount
// Il2CppName: getEventCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::FMOD::RESULT (FMOD::Studio::Bank::*)(ByRef<int>)>(&FMOD::Studio::Bank::getEventCount)> {
  static const MethodInfo* get() {
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(FMOD::Studio::Bank), "getEventCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{count});
  }
};
// Writing MetadataGetter for method: FMOD::Studio::Bank::getEventList
// Il2CppName: getEventList
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::FMOD::RESULT (FMOD::Studio::Bank::*)(ByRef<::ArrayW<::FMOD::Studio::EventDescription>>)>(&FMOD::Studio::Bank::getEventList)> {
  static const MethodInfo* get() {
    static auto* array = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("FMOD.Studio", "EventDescription"), 1)->this_arg;
    return ::il2cpp_utils::FindMethod(classof(FMOD::Studio::Bank), "getEventList", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{array});
  }
};
// Writing MetadataGetter for method: FMOD::Studio::Bank::getBusCount
// Il2CppName: getBusCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::FMOD::RESULT (FMOD::Studio::Bank::*)(ByRef<int>)>(&FMOD::Studio::Bank::getBusCount)> {
  static const MethodInfo* get() {
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(FMOD::Studio::Bank), "getBusCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{count});
  }
};
// Writing MetadataGetter for method: FMOD::Studio::Bank::getBusList
// Il2CppName: getBusList
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::FMOD::RESULT (FMOD::Studio::Bank::*)(ByRef<::ArrayW<::FMOD::Studio::Bus>>)>(&FMOD::Studio::Bank::getBusList)> {
  static const MethodInfo* get() {
    static auto* array = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("FMOD.Studio", "Bus"), 1)->this_arg;
    return ::il2cpp_utils::FindMethod(classof(FMOD::Studio::Bank), "getBusList", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{array});
  }
};
// Writing MetadataGetter for method: FMOD::Studio::Bank::getVCACount
// Il2CppName: getVCACount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::FMOD::RESULT (FMOD::Studio::Bank::*)(ByRef<int>)>(&FMOD::Studio::Bank::getVCACount)> {
  static const MethodInfo* get() {
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(FMOD::Studio::Bank), "getVCACount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{count});
  }
};
// Writing MetadataGetter for method: FMOD::Studio::Bank::getVCAList
// Il2CppName: getVCAList
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::FMOD::RESULT (FMOD::Studio::Bank::*)(ByRef<::ArrayW<::FMOD::Studio::VCA>>)>(&FMOD::Studio::Bank::getVCAList)> {
  static const MethodInfo* get() {
    static auto* array = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("FMOD.Studio", "VCA"), 1)->this_arg;
    return ::il2cpp_utils::FindMethod(classof(FMOD::Studio::Bank), "getVCAList", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{array});
  }
};
// Writing MetadataGetter for method: FMOD::Studio::Bank::getUserData
// Il2CppName: getUserData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::FMOD::RESULT (FMOD::Studio::Bank::*)(ByRef<::System::IntPtr>)>(&FMOD::Studio::Bank::getUserData)> {
  static const MethodInfo* get() {
    static auto* userdata = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(FMOD::Studio::Bank), "getUserData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{userdata});
  }
};
// Writing MetadataGetter for method: FMOD::Studio::Bank::setUserData
// Il2CppName: setUserData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::FMOD::RESULT (FMOD::Studio::Bank::*)(::System::IntPtr)>(&FMOD::Studio::Bank::setUserData)> {
  static const MethodInfo* get() {
    static auto* userdata = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(FMOD::Studio::Bank), "setUserData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{userdata});
  }
};
// Writing MetadataGetter for method: FMOD::Studio::Bank::FMOD_Studio_Bank_IsValid
// Il2CppName: FMOD_Studio_Bank_IsValid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::IntPtr)>(&FMOD::Studio::Bank::FMOD_Studio_Bank_IsValid)> {
  static const MethodInfo* get() {
    static auto* bank = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(FMOD::Studio::Bank), "FMOD_Studio_Bank_IsValid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bank});
  }
};
// Writing MetadataGetter for method: FMOD::Studio::Bank::FMOD_Studio_Bank_GetID
// Il2CppName: FMOD_Studio_Bank_GetID
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::FMOD::RESULT (*)(::System::IntPtr, ByRef<::System::Guid>)>(&FMOD::Studio::Bank::FMOD_Studio_Bank_GetID)> {
  static const MethodInfo* get() {
    static auto* bank = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* id = &::il2cpp_utils::GetClassFromName("System", "Guid")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(FMOD::Studio::Bank), "FMOD_Studio_Bank_GetID", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bank, id});
  }
};
// Writing MetadataGetter for method: FMOD::Studio::Bank::FMOD_Studio_Bank_GetPath
// Il2CppName: FMOD_Studio_Bank_GetPath
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::FMOD::RESULT (*)(::System::IntPtr, ::System::IntPtr, int, ByRef<int>)>(&FMOD::Studio::Bank::FMOD_Studio_Bank_GetPath)> {
  static const MethodInfo* get() {
    static auto* bank = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* size = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* retrieved = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(FMOD::Studio::Bank), "FMOD_Studio_Bank_GetPath", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bank, path, size, retrieved});
  }
};
// Writing MetadataGetter for method: FMOD::Studio::Bank::FMOD_Studio_Bank_Unload
// Il2CppName: FMOD_Studio_Bank_Unload
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::FMOD::RESULT (*)(::System::IntPtr)>(&FMOD::Studio::Bank::FMOD_Studio_Bank_Unload)> {
  static const MethodInfo* get() {
    static auto* bank = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(FMOD::Studio::Bank), "FMOD_Studio_Bank_Unload", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bank});
  }
};
// Writing MetadataGetter for method: FMOD::Studio::Bank::FMOD_Studio_Bank_LoadSampleData
// Il2CppName: FMOD_Studio_Bank_LoadSampleData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::FMOD::RESULT (*)(::System::IntPtr)>(&FMOD::Studio::Bank::FMOD_Studio_Bank_LoadSampleData)> {
  static const MethodInfo* get() {
    static auto* bank = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(FMOD::Studio::Bank), "FMOD_Studio_Bank_LoadSampleData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bank});
  }
};
// Writing MetadataGetter for method: FMOD::Studio::Bank::FMOD_Studio_Bank_UnloadSampleData
// Il2CppName: FMOD_Studio_Bank_UnloadSampleData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::FMOD::RESULT (*)(::System::IntPtr)>(&FMOD::Studio::Bank::FMOD_Studio_Bank_UnloadSampleData)> {
  static const MethodInfo* get() {
    static auto* bank = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(FMOD::Studio::Bank), "FMOD_Studio_Bank_UnloadSampleData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bank});
  }
};
// Writing MetadataGetter for method: FMOD::Studio::Bank::FMOD_Studio_Bank_GetLoadingState
// Il2CppName: FMOD_Studio_Bank_GetLoadingState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::FMOD::RESULT (*)(::System::IntPtr, ByRef<::FMOD::Studio::LOADING_STATE>)>(&FMOD::Studio::Bank::FMOD_Studio_Bank_GetLoadingState)> {
  static const MethodInfo* get() {
    static auto* bank = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* state = &::il2cpp_utils::GetClassFromName("FMOD.Studio", "LOADING_STATE")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(FMOD::Studio::Bank), "FMOD_Studio_Bank_GetLoadingState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bank, state});
  }
};
// Writing MetadataGetter for method: FMOD::Studio::Bank::FMOD_Studio_Bank_GetSampleLoadingState
// Il2CppName: FMOD_Studio_Bank_GetSampleLoadingState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::FMOD::RESULT (*)(::System::IntPtr, ByRef<::FMOD::Studio::LOADING_STATE>)>(&FMOD::Studio::Bank::FMOD_Studio_Bank_GetSampleLoadingState)> {
  static const MethodInfo* get() {
    static auto* bank = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* state = &::il2cpp_utils::GetClassFromName("FMOD.Studio", "LOADING_STATE")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(FMOD::Studio::Bank), "FMOD_Studio_Bank_GetSampleLoadingState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bank, state});
  }
};
// Writing MetadataGetter for method: FMOD::Studio::Bank::FMOD_Studio_Bank_GetStringCount
// Il2CppName: FMOD_Studio_Bank_GetStringCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::FMOD::RESULT (*)(::System::IntPtr, ByRef<int>)>(&FMOD::Studio::Bank::FMOD_Studio_Bank_GetStringCount)> {
  static const MethodInfo* get() {
    static auto* bank = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(FMOD::Studio::Bank), "FMOD_Studio_Bank_GetStringCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bank, count});
  }
};
// Writing MetadataGetter for method: FMOD::Studio::Bank::FMOD_Studio_Bank_GetStringInfo
// Il2CppName: FMOD_Studio_Bank_GetStringInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::FMOD::RESULT (*)(::System::IntPtr, int, ByRef<::System::Guid>, ::System::IntPtr, int, ByRef<int>)>(&FMOD::Studio::Bank::FMOD_Studio_Bank_GetStringInfo)> {
  static const MethodInfo* get() {
    static auto* bank = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* id = &::il2cpp_utils::GetClassFromName("System", "Guid")->this_arg;
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* size = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* retrieved = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(FMOD::Studio::Bank), "FMOD_Studio_Bank_GetStringInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bank, index, id, path, size, retrieved});
  }
};
// Writing MetadataGetter for method: FMOD::Studio::Bank::FMOD_Studio_Bank_GetEventCount
// Il2CppName: FMOD_Studio_Bank_GetEventCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::FMOD::RESULT (*)(::System::IntPtr, ByRef<int>)>(&FMOD::Studio::Bank::FMOD_Studio_Bank_GetEventCount)> {
  static const MethodInfo* get() {
    static auto* bank = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(FMOD::Studio::Bank), "FMOD_Studio_Bank_GetEventCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bank, count});
  }
};
// Writing MetadataGetter for method: FMOD::Studio::Bank::FMOD_Studio_Bank_GetEventList
// Il2CppName: FMOD_Studio_Bank_GetEventList
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::FMOD::RESULT (*)(::System::IntPtr, ::ArrayW<::System::IntPtr>, int, ByRef<int>)>(&FMOD::Studio::Bank::FMOD_Studio_Bank_GetEventList)> {
  static const MethodInfo* get() {
    static auto* bank = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* array = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "IntPtr"), 1)->byval_arg;
    static auto* capacity = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(FMOD::Studio::Bank), "FMOD_Studio_Bank_GetEventList", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bank, array, capacity, count});
  }
};
// Writing MetadataGetter for method: FMOD::Studio::Bank::FMOD_Studio_Bank_GetBusCount
// Il2CppName: FMOD_Studio_Bank_GetBusCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::FMOD::RESULT (*)(::System::IntPtr, ByRef<int>)>(&FMOD::Studio::Bank::FMOD_Studio_Bank_GetBusCount)> {
  static const MethodInfo* get() {
    static auto* bank = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(FMOD::Studio::Bank), "FMOD_Studio_Bank_GetBusCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bank, count});
  }
};
// Writing MetadataGetter for method: FMOD::Studio::Bank::FMOD_Studio_Bank_GetBusList
// Il2CppName: FMOD_Studio_Bank_GetBusList
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::FMOD::RESULT (*)(::System::IntPtr, ::ArrayW<::System::IntPtr>, int, ByRef<int>)>(&FMOD::Studio::Bank::FMOD_Studio_Bank_GetBusList)> {
  static const MethodInfo* get() {
    static auto* bank = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* array = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "IntPtr"), 1)->byval_arg;
    static auto* capacity = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(FMOD::Studio::Bank), "FMOD_Studio_Bank_GetBusList", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bank, array, capacity, count});
  }
};
// Writing MetadataGetter for method: FMOD::Studio::Bank::FMOD_Studio_Bank_GetVCACount
// Il2CppName: FMOD_Studio_Bank_GetVCACount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::FMOD::RESULT (*)(::System::IntPtr, ByRef<int>)>(&FMOD::Studio::Bank::FMOD_Studio_Bank_GetVCACount)> {
  static const MethodInfo* get() {
    static auto* bank = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(FMOD::Studio::Bank), "FMOD_Studio_Bank_GetVCACount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bank, count});
  }
};
// Writing MetadataGetter for method: FMOD::Studio::Bank::FMOD_Studio_Bank_GetVCAList
// Il2CppName: FMOD_Studio_Bank_GetVCAList
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::FMOD::RESULT (*)(::System::IntPtr, ::ArrayW<::System::IntPtr>, int, ByRef<int>)>(&FMOD::Studio::Bank::FMOD_Studio_Bank_GetVCAList)> {
  static const MethodInfo* get() {
    static auto* bank = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* array = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "IntPtr"), 1)->byval_arg;
    static auto* capacity = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(FMOD::Studio::Bank), "FMOD_Studio_Bank_GetVCAList", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bank, array, capacity, count});
  }
};
// Writing MetadataGetter for method: FMOD::Studio::Bank::FMOD_Studio_Bank_GetUserData
// Il2CppName: FMOD_Studio_Bank_GetUserData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::FMOD::RESULT (*)(::System::IntPtr, ByRef<::System::IntPtr>)>(&FMOD::Studio::Bank::FMOD_Studio_Bank_GetUserData)> {
  static const MethodInfo* get() {
    static auto* bank = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* userdata = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(FMOD::Studio::Bank), "FMOD_Studio_Bank_GetUserData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bank, userdata});
  }
};
// Writing MetadataGetter for method: FMOD::Studio::Bank::FMOD_Studio_Bank_SetUserData
// Il2CppName: FMOD_Studio_Bank_SetUserData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::FMOD::RESULT (*)(::System::IntPtr, ::System::IntPtr)>(&FMOD::Studio::Bank::FMOD_Studio_Bank_SetUserData)> {
  static const MethodInfo* get() {
    static auto* bank = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* userdata = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(FMOD::Studio::Bank), "FMOD_Studio_Bank_SetUserData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bank, userdata});
  }
};
// Writing MetadataGetter for method: FMOD::Studio::Bank::hasHandle
// Il2CppName: hasHandle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (FMOD::Studio::Bank::*)()>(&FMOD::Studio::Bank::hasHandle)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(FMOD::Studio::Bank), "hasHandle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: FMOD::Studio::Bank::clearHandle
// Il2CppName: clearHandle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (FMOD::Studio::Bank::*)()>(&FMOD::Studio::Bank::clearHandle)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(FMOD::Studio::Bank), "clearHandle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: FMOD::Studio::Bank::isValid
// Il2CppName: isValid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (FMOD::Studio::Bank::*)()>(&FMOD::Studio::Bank::isValid)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(FMOD::Studio::Bank), "isValid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
