// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: FMOD.Studio.EventInstance
#include "FMOD/Studio/EventInstance.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: FMODUnity
namespace FMODUnity {
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: FMOD
namespace FMOD {
  // Forward declaring type: ATTRIBUTES_3D
  struct ATTRIBUTES_3D;
}
// Forward declaring namespace: FMOD::Studio
namespace FMOD::Studio {
  // Forward declaring type: STOP_MODE
  struct STOP_MODE;
}
// Completed forward declares
// Type namespace: FMODUnity
namespace FMODUnity {
  // Forward declaring type: OneshotList
  class OneshotList;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::FMODUnity::OneshotList);
DEFINE_IL2CPP_ARG_TYPE(::FMODUnity::OneshotList*, "FMODUnity", "OneshotList");
// Type namespace: FMODUnity
namespace FMODUnity {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: FMODUnity.OneshotList
  // [TokenAttribute] Offset: FFFFFFFF
  class OneshotList : public ::Il2CppObject {
    public:
    // Nested type: ::FMODUnity::OneshotList::$$c__DisplayClass2_0
    class $$c__DisplayClass2_0;
    // Nested type: ::FMODUnity::OneshotList::$$c
    class $$c;
    public:
    // private System.Collections.Generic.List`1<FMOD.Studio.EventInstance> instances
    // Size: 0x8
    // Offset: 0x10
    ::System::Collections::Generic::List_1<::FMOD::Studio::EventInstance>* instances;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::FMOD::Studio::EventInstance>*) == 0x8);
    public:
    // Creating conversion operator: operator ::System::Collections::Generic::List_1<::FMOD::Studio::EventInstance>*
    constexpr operator ::System::Collections::Generic::List_1<::FMOD::Studio::EventInstance>*() const noexcept {
      return instances;
    }
    // Get instance field reference: private System.Collections.Generic.List`1<FMOD.Studio.EventInstance> instances
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::FMOD::Studio::EventInstance>*& dyn_instances();
    // public System.Void Add(FMOD.Studio.EventInstance instance)
    // Offset: 0x15D4B80
    void Add(::FMOD::Studio::EventInstance instance);
    // public System.Void Update(FMOD.ATTRIBUTES_3D attributes)
    // Offset: 0x15D4BF0
    void Update(::FMOD::ATTRIBUTES_3D attributes);
    // public System.Void SetParameterValue(System.String name, System.Single value)
    // Offset: 0x15D4F50
    void SetParameterValue(::StringW name, float value);
    // public System.Void StopAll(FMOD.Studio.STOP_MODE stopMode)
    // Offset: 0x15D5094
    void StopAll(::FMOD::Studio::STOP_MODE stopMode);
    // public System.Void .ctor()
    // Offset: 0x15D51F8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OneshotList* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::FMODUnity::OneshotList::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OneshotList*, creationType>()));
    }
  }; // FMODUnity.OneshotList
  #pragma pack(pop)
  static check_size<sizeof(OneshotList), 16 + sizeof(::System::Collections::Generic::List_1<::FMOD::Studio::EventInstance>*)> __FMODUnity_OneshotListSizeCheck;
  static_assert(sizeof(OneshotList) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: FMODUnity::OneshotList::Add
// Il2CppName: Add
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (FMODUnity::OneshotList::*)(::FMOD::Studio::EventInstance)>(&FMODUnity::OneshotList::Add)> {
  static const MethodInfo* get() {
    static auto* instance = &::il2cpp_utils::GetClassFromName("FMOD.Studio", "EventInstance")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(FMODUnity::OneshotList*), "Add", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{instance});
  }
};
// Writing MetadataGetter for method: FMODUnity::OneshotList::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (FMODUnity::OneshotList::*)(::FMOD::ATTRIBUTES_3D)>(&FMODUnity::OneshotList::Update)> {
  static const MethodInfo* get() {
    static auto* attributes = &::il2cpp_utils::GetClassFromName("FMOD", "ATTRIBUTES_3D")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(FMODUnity::OneshotList*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{attributes});
  }
};
// Writing MetadataGetter for method: FMODUnity::OneshotList::SetParameterValue
// Il2CppName: SetParameterValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (FMODUnity::OneshotList::*)(::StringW, float)>(&FMODUnity::OneshotList::SetParameterValue)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(FMODUnity::OneshotList*), "SetParameterValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, value});
  }
};
// Writing MetadataGetter for method: FMODUnity::OneshotList::StopAll
// Il2CppName: StopAll
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (FMODUnity::OneshotList::*)(::FMOD::Studio::STOP_MODE)>(&FMODUnity::OneshotList::StopAll)> {
  static const MethodInfo* get() {
    static auto* stopMode = &::il2cpp_utils::GetClassFromName("FMOD.Studio", "STOP_MODE")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(FMODUnity::OneshotList*), "StopAll", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stopMode});
  }
};
// Writing MetadataGetter for method: FMODUnity::OneshotList::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!