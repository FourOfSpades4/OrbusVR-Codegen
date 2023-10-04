// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: System.DateTime
#include "System/DateTime.hpp"
// Including type: Oculus.Platform.RichPresenceExtraContext
#include "Oculus/Platform/RichPresenceExtraContext.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Text
  class Text;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: Oculus::Platform
namespace Oculus::Platform {
  // Forward declaring type: Message`1<T>
  template<typename T>
  class Message_1;
  // Forward declaring type: Message
  class Message;
}
// Forward declaring namespace: Oculus::Platform::Models
namespace Oculus::Platform::Models {
  // Forward declaring type: DestinationList
  class DestinationList;
  // Forward declaring type: User
  class User;
  // Forward declaring type: PlatformInitialize
  class PlatformInitialize;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: RichPresenceSample
  class RichPresenceSample;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::RichPresenceSample);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RichPresenceSample*, "", "RichPresenceSample");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x7D
  #pragma pack(push, 1)
  // Autogenerated type: RichPresenceSample
  // [TokenAttribute] Offset: FFFFFFFF
  class RichPresenceSample : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // public System.String DeeplinkMessageOverride
    // Size: 0x8
    // Offset: 0x18
    ::StringW DeeplinkMessageOverride;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Boolean IsJoinable
    // Size: 0x1
    // Offset: 0x20
    bool IsJoinable;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean IsIdle
    // Size: 0x1
    // Offset: 0x21
    bool IsIdle;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: IsIdle and: InstanceID
    char __padding2[0x6] = {};
    // public System.String InstanceID
    // Size: 0x8
    // Offset: 0x28
    ::StringW InstanceID;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.UInt32 CurrentCapacity
    // Size: 0x4
    // Offset: 0x30
    uint CurrentCapacity;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // public System.UInt32 MaxCapacity
    // Size: 0x4
    // Offset: 0x34
    uint MaxCapacity;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // public System.DateTime StartTime
    // Size: 0x8
    // Offset: 0x38
    ::System::DateTime StartTime;
    // Field size check
    static_assert(sizeof(::System::DateTime) == 0x8);
    // public System.DateTime EndTime
    // Size: 0x8
    // Offset: 0x40
    ::System::DateTime EndTime;
    // Field size check
    static_assert(sizeof(::System::DateTime) == 0x8);
    // public Oculus.Platform.RichPresenceExtraContext ExtraContext
    // Size: 0x4
    // Offset: 0x48
    ::Oculus::Platform::RichPresenceExtraContext ExtraContext;
    // Field size check
    static_assert(sizeof(::Oculus::Platform::RichPresenceExtraContext) == 0x4);
    // Padding between fields: ExtraContext and: InVRConsole
    char __padding8[0x4] = {};
    // public UnityEngine.UI.Text InVRConsole
    // Size: 0x8
    // Offset: 0x50
    ::UnityEngine::UI::Text* InVRConsole;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Text*) == 0x8);
    // public UnityEngine.UI.Text DestinationsConsole
    // Size: 0x8
    // Offset: 0x58
    ::UnityEngine::UI::Text* DestinationsConsole;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Text*) == 0x8);
    // private System.Collections.Generic.List`1<System.String> DestinationAPINames
    // Size: 0x8
    // Offset: 0x60
    ::System::Collections::Generic::List_1<::StringW>* DestinationAPINames;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::StringW>*) == 0x8);
    // private System.UInt64 LoggedInUserID
    // Size: 0x8
    // Offset: 0x68
    uint64_t LoggedInUserID;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // private System.String TrackingID
    // Size: 0x8
    // Offset: 0x70
    ::StringW TrackingID;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Int32 DestinationIndex
    // Size: 0x4
    // Offset: 0x78
    int DestinationIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Boolean OnlyPushUpOnce
    // Size: 0x1
    // Offset: 0x7C
    bool OnlyPushUpOnce;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public System.String DeeplinkMessageOverride
    [[deprecated("Use field access instead!")]] ::StringW& dyn_DeeplinkMessageOverride();
    // Get instance field reference: public System.Boolean IsJoinable
    [[deprecated("Use field access instead!")]] bool& dyn_IsJoinable();
    // Get instance field reference: public System.Boolean IsIdle
    [[deprecated("Use field access instead!")]] bool& dyn_IsIdle();
    // Get instance field reference: public System.String InstanceID
    [[deprecated("Use field access instead!")]] ::StringW& dyn_InstanceID();
    // Get instance field reference: public System.UInt32 CurrentCapacity
    [[deprecated("Use field access instead!")]] uint& dyn_CurrentCapacity();
    // Get instance field reference: public System.UInt32 MaxCapacity
    [[deprecated("Use field access instead!")]] uint& dyn_MaxCapacity();
    // Get instance field reference: public System.DateTime StartTime
    [[deprecated("Use field access instead!")]] ::System::DateTime& dyn_StartTime();
    // Get instance field reference: public System.DateTime EndTime
    [[deprecated("Use field access instead!")]] ::System::DateTime& dyn_EndTime();
    // Get instance field reference: public Oculus.Platform.RichPresenceExtraContext ExtraContext
    [[deprecated("Use field access instead!")]] ::Oculus::Platform::RichPresenceExtraContext& dyn_ExtraContext();
    // Get instance field reference: public UnityEngine.UI.Text InVRConsole
    [[deprecated("Use field access instead!")]] ::UnityEngine::UI::Text*& dyn_InVRConsole();
    // Get instance field reference: public UnityEngine.UI.Text DestinationsConsole
    [[deprecated("Use field access instead!")]] ::UnityEngine::UI::Text*& dyn_DestinationsConsole();
    // Get instance field reference: private System.Collections.Generic.List`1<System.String> DestinationAPINames
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::StringW>*& dyn_DestinationAPINames();
    // Get instance field reference: private System.UInt64 LoggedInUserID
    [[deprecated("Use field access instead!")]] uint64_t& dyn_LoggedInUserID();
    // Get instance field reference: private System.String TrackingID
    [[deprecated("Use field access instead!")]] ::StringW& dyn_TrackingID();
    // Get instance field reference: private System.Int32 DestinationIndex
    [[deprecated("Use field access instead!")]] int& dyn_DestinationIndex();
    // Get instance field reference: private System.Boolean OnlyPushUpOnce
    [[deprecated("Use field access instead!")]] bool& dyn_OnlyPushUpOnce();
    // private System.Void Start()
    // Offset: 0x1549824
    void Start();
    // private System.Void SetPresence()
    // Offset: 0x15499C0
    void SetPresence();
    // private System.Void ClearPresence()
    // Offset: 0x1549CB8
    void ClearPresence();
    // private System.String GetAppLaunchDetails()
    // Offset: 0x1549D68
    ::StringW GetAppLaunchDetails();
    // private System.Void OnLaunchIntentChangeNotif(Oculus.Platform.Message`1<System.String> message)
    // Offset: 0x154A228
    void OnLaunchIntentChangeNotif(::Oculus::Platform::Message_1<::StringW>* message);
    // private System.Void OnGetDestinations(Oculus.Platform.Message`1<Oculus.Platform.Models.DestinationList> message)
    // Offset: 0x154A2EC
    void OnGetDestinations(::Oculus::Platform::Message_1<::Oculus::Platform::Models::DestinationList*>* message);
    // private System.Void Update()
    // Offset: 0x154A748
    void Update();
    // private System.Void ScrollThroughDestinations()
    // Offset: 0x154A820
    void ScrollThroughDestinations();
    // private System.Void UpdateDestinationsConsole()
    // Offset: 0x154A5C8
    void UpdateDestinationsConsole();
    // private System.Void OnLoggedInUser(Oculus.Platform.Message`1<Oculus.Platform.Models.User> message)
    // Offset: 0x154A94C
    void OnLoggedInUser(::Oculus::Platform::Message_1<::Oculus::Platform::Models::User*>* message);
    // private System.Void UpdateConsole(System.String value)
    // Offset: 0x1549908
    void UpdateConsole(::StringW value);
    // private System.Boolean PressAButton()
    // Offset: 0x154A808
    bool PressAButton();
    // private System.Boolean PressBButton()
    // Offset: 0x154A814
    bool PressBButton();
    // private System.Boolean PressUp()
    // Offset: 0x154A934
    bool PressUp();
    // private System.Boolean PressDown()
    // Offset: 0x154A940
    bool PressDown();
    // public System.Void .ctor()
    // Offset: 0x154AA28
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RichPresenceSample* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::RichPresenceSample::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RichPresenceSample*, creationType>()));
    }
    // private System.Void <Start>b__14_0(Oculus.Platform.Message`1<Oculus.Platform.Models.PlatformInitialize> message)
    // Offset: 0x154AB04
    void $Start$b__14_0(::Oculus::Platform::Message_1<::Oculus::Platform::Models::PlatformInitialize*>* message);
    // private System.Void <SetPresence>b__15_0(Oculus.Platform.Message message)
    // Offset: 0x154ACE4
    void $SetPresence$b__15_0(::Oculus::Platform::Message* message);
    // private System.Void <SetPresence>b__15_1(Oculus.Platform.Message`1<Oculus.Platform.Models.User> message2)
    // Offset: 0x154AE10
    void $SetPresence$b__15_1(::Oculus::Platform::Message_1<::Oculus::Platform::Models::User*>* message2);
    // private System.Void <ClearPresence>b__16_0(Oculus.Platform.Message message)
    // Offset: 0x154B10C
    void $ClearPresence$b__16_0(::Oculus::Platform::Message* message);
    // private System.Void <ClearPresence>b__16_1(Oculus.Platform.Message`1<Oculus.Platform.Models.User> message2)
    // Offset: 0x154B218
    void $ClearPresence$b__16_1(::Oculus::Platform::Message_1<::Oculus::Platform::Models::User*>* message2);
  }; // RichPresenceSample
  #pragma pack(pop)
  static check_size<sizeof(RichPresenceSample), 124 + sizeof(bool)> __GlobalNamespace_RichPresenceSampleSizeCheck;
  static_assert(sizeof(RichPresenceSample) == 0x7D);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::RichPresenceSample::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::RichPresenceSample::*)()>(&GlobalNamespace::RichPresenceSample::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RichPresenceSample*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RichPresenceSample::SetPresence
// Il2CppName: SetPresence
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::RichPresenceSample::*)()>(&GlobalNamespace::RichPresenceSample::SetPresence)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RichPresenceSample*), "SetPresence", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RichPresenceSample::ClearPresence
// Il2CppName: ClearPresence
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::RichPresenceSample::*)()>(&GlobalNamespace::RichPresenceSample::ClearPresence)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RichPresenceSample*), "ClearPresence", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RichPresenceSample::GetAppLaunchDetails
// Il2CppName: GetAppLaunchDetails
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::RichPresenceSample::*)()>(&GlobalNamespace::RichPresenceSample::GetAppLaunchDetails)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RichPresenceSample*), "GetAppLaunchDetails", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RichPresenceSample::OnLaunchIntentChangeNotif
// Il2CppName: OnLaunchIntentChangeNotif
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::RichPresenceSample::*)(::Oculus::Platform::Message_1<::StringW>*)>(&GlobalNamespace::RichPresenceSample::OnLaunchIntentChangeNotif)> {
  static const MethodInfo* get() {
    static auto* message = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("Oculus.Platform", "Message`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RichPresenceSample*), "OnLaunchIntentChangeNotif", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RichPresenceSample::OnGetDestinations
// Il2CppName: OnGetDestinations
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::RichPresenceSample::*)(::Oculus::Platform::Message_1<::Oculus::Platform::Models::DestinationList*>*)>(&GlobalNamespace::RichPresenceSample::OnGetDestinations)> {
  static const MethodInfo* get() {
    static auto* message = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("Oculus.Platform", "Message`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Oculus.Platform.Models", "DestinationList")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RichPresenceSample*), "OnGetDestinations", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RichPresenceSample::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::RichPresenceSample::*)()>(&GlobalNamespace::RichPresenceSample::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RichPresenceSample*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RichPresenceSample::ScrollThroughDestinations
// Il2CppName: ScrollThroughDestinations
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::RichPresenceSample::*)()>(&GlobalNamespace::RichPresenceSample::ScrollThroughDestinations)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RichPresenceSample*), "ScrollThroughDestinations", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RichPresenceSample::UpdateDestinationsConsole
// Il2CppName: UpdateDestinationsConsole
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::RichPresenceSample::*)()>(&GlobalNamespace::RichPresenceSample::UpdateDestinationsConsole)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RichPresenceSample*), "UpdateDestinationsConsole", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RichPresenceSample::OnLoggedInUser
// Il2CppName: OnLoggedInUser
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::RichPresenceSample::*)(::Oculus::Platform::Message_1<::Oculus::Platform::Models::User*>*)>(&GlobalNamespace::RichPresenceSample::OnLoggedInUser)> {
  static const MethodInfo* get() {
    static auto* message = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("Oculus.Platform", "Message`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Oculus.Platform.Models", "User")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RichPresenceSample*), "OnLoggedInUser", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RichPresenceSample::UpdateConsole
// Il2CppName: UpdateConsole
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::RichPresenceSample::*)(::StringW)>(&GlobalNamespace::RichPresenceSample::UpdateConsole)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RichPresenceSample*), "UpdateConsole", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RichPresenceSample::PressAButton
// Il2CppName: PressAButton
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::RichPresenceSample::*)()>(&GlobalNamespace::RichPresenceSample::PressAButton)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RichPresenceSample*), "PressAButton", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RichPresenceSample::PressBButton
// Il2CppName: PressBButton
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::RichPresenceSample::*)()>(&GlobalNamespace::RichPresenceSample::PressBButton)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RichPresenceSample*), "PressBButton", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RichPresenceSample::PressUp
// Il2CppName: PressUp
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::RichPresenceSample::*)()>(&GlobalNamespace::RichPresenceSample::PressUp)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RichPresenceSample*), "PressUp", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RichPresenceSample::PressDown
// Il2CppName: PressDown
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::RichPresenceSample::*)()>(&GlobalNamespace::RichPresenceSample::PressDown)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RichPresenceSample*), "PressDown", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RichPresenceSample::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::RichPresenceSample::$Start$b__14_0
// Il2CppName: <Start>b__14_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::RichPresenceSample::*)(::Oculus::Platform::Message_1<::Oculus::Platform::Models::PlatformInitialize*>*)>(&GlobalNamespace::RichPresenceSample::$Start$b__14_0)> {
  static const MethodInfo* get() {
    static auto* message = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("Oculus.Platform", "Message`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Oculus.Platform.Models", "PlatformInitialize")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RichPresenceSample*), "<Start>b__14_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RichPresenceSample::$SetPresence$b__15_0
// Il2CppName: <SetPresence>b__15_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::RichPresenceSample::*)(::Oculus::Platform::Message*)>(&GlobalNamespace::RichPresenceSample::$SetPresence$b__15_0)> {
  static const MethodInfo* get() {
    static auto* message = &::il2cpp_utils::GetClassFromName("Oculus.Platform", "Message")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RichPresenceSample*), "<SetPresence>b__15_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RichPresenceSample::$SetPresence$b__15_1
// Il2CppName: <SetPresence>b__15_1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::RichPresenceSample::*)(::Oculus::Platform::Message_1<::Oculus::Platform::Models::User*>*)>(&GlobalNamespace::RichPresenceSample::$SetPresence$b__15_1)> {
  static const MethodInfo* get() {
    static auto* message2 = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("Oculus.Platform", "Message`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Oculus.Platform.Models", "User")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RichPresenceSample*), "<SetPresence>b__15_1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message2});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RichPresenceSample::$ClearPresence$b__16_0
// Il2CppName: <ClearPresence>b__16_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::RichPresenceSample::*)(::Oculus::Platform::Message*)>(&GlobalNamespace::RichPresenceSample::$ClearPresence$b__16_0)> {
  static const MethodInfo* get() {
    static auto* message = &::il2cpp_utils::GetClassFromName("Oculus.Platform", "Message")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RichPresenceSample*), "<ClearPresence>b__16_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RichPresenceSample::$ClearPresence$b__16_1
// Il2CppName: <ClearPresence>b__16_1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::RichPresenceSample::*)(::Oculus::Platform::Message_1<::Oculus::Platform::Models::User*>*)>(&GlobalNamespace::RichPresenceSample::$ClearPresence$b__16_1)> {
  static const MethodInfo* get() {
    static auto* message2 = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("Oculus.Platform", "Message`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Oculus.Platform.Models", "User")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RichPresenceSample*), "<ClearPresence>b__16_1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message2});
  }
};