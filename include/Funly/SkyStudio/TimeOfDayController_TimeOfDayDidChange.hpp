// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Funly.SkyStudio.TimeOfDayController
#include "Funly/SkyStudio/TimeOfDayController.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Funly::SkyStudio::TimeOfDayController::TimeOfDayDidChange);
DEFINE_IL2CPP_ARG_TYPE(::Funly::SkyStudio::TimeOfDayController::TimeOfDayDidChange*, "Funly.SkyStudio", "TimeOfDayController/TimeOfDayDidChange");
// Type namespace: Funly.SkyStudio
namespace Funly::SkyStudio {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: Funly.SkyStudio.TimeOfDayController/TimeOfDayDidChange
  // [TokenAttribute] Offset: FFFFFFFF
  class TimeOfDayController::TimeOfDayDidChange : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1525E98
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TimeOfDayController::TimeOfDayDidChange* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Funly::SkyStudio::TimeOfDayController::TimeOfDayDidChange::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TimeOfDayController::TimeOfDayDidChange*, creationType>(object, method)));
    }
    // public System.Void Invoke(Funly.SkyStudio.TimeOfDayController tc, System.Single timeOfDay)
    // Offset: 0x15256F4
    void Invoke(::Funly::SkyStudio::TimeOfDayController* tc, float timeOfDay);
    // public System.IAsyncResult BeginInvoke(Funly.SkyStudio.TimeOfDayController tc, System.Single timeOfDay, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1525EA8
    ::System::IAsyncResult* BeginInvoke(::Funly::SkyStudio::TimeOfDayController* tc, float timeOfDay, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x1525F44
    void EndInvoke(::System::IAsyncResult* result);
  }; // Funly.SkyStudio.TimeOfDayController/TimeOfDayDidChange
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Funly::SkyStudio::TimeOfDayController::TimeOfDayDidChange::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Funly::SkyStudio::TimeOfDayController::TimeOfDayDidChange::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Funly::SkyStudio::TimeOfDayController::TimeOfDayDidChange::*)(::Funly::SkyStudio::TimeOfDayController*, float)>(&Funly::SkyStudio::TimeOfDayController::TimeOfDayDidChange::Invoke)> {
  static const MethodInfo* get() {
    static auto* tc = &::il2cpp_utils::GetClassFromName("Funly.SkyStudio", "TimeOfDayController")->byval_arg;
    static auto* timeOfDay = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Funly::SkyStudio::TimeOfDayController::TimeOfDayDidChange*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tc, timeOfDay});
  }
};
// Writing MetadataGetter for method: Funly::SkyStudio::TimeOfDayController::TimeOfDayDidChange::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (Funly::SkyStudio::TimeOfDayController::TimeOfDayDidChange::*)(::Funly::SkyStudio::TimeOfDayController*, float, ::System::AsyncCallback*, ::Il2CppObject*)>(&Funly::SkyStudio::TimeOfDayController::TimeOfDayDidChange::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* tc = &::il2cpp_utils::GetClassFromName("Funly.SkyStudio", "TimeOfDayController")->byval_arg;
    static auto* timeOfDay = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Funly::SkyStudio::TimeOfDayController::TimeOfDayDidChange*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tc, timeOfDay, callback, object});
  }
};
// Writing MetadataGetter for method: Funly::SkyStudio::TimeOfDayController::TimeOfDayDidChange::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Funly::SkyStudio::TimeOfDayController::TimeOfDayDidChange::*)(::System::IAsyncResult*)>(&Funly::SkyStudio::TimeOfDayController::TimeOfDayDidChange::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Funly::SkyStudio::TimeOfDayController::TimeOfDayDidChange*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};