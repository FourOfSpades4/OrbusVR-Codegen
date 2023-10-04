// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Tayx.Graphy.GraphyDebugger
#include "Tayx/Graphy/GraphyDebugger.hpp"
// Including type: Tayx.Graphy.GraphyDebugger/ConditionEvaluation
#include "Tayx/Graphy/GraphyDebugger_ConditionEvaluation.hpp"
// Including type: Tayx.Graphy.GraphyDebugger/MessageType
#include "Tayx/Graphy/GraphyDebugger_MessageType.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: UnityEngine::Events
namespace UnityEngine::Events {
  // Forward declaring type: UnityEvent
  class UnityEvent;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Tayx::Graphy::GraphyDebugger::DebugPacket);
DEFINE_IL2CPP_ARG_TYPE(::Tayx::Graphy::GraphyDebugger::DebugPacket*, "Tayx.Graphy", "GraphyDebugger/DebugPacket");
// Type namespace: Tayx.Graphy
namespace Tayx::Graphy {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: Tayx.Graphy.GraphyDebugger/DebugPacket
  // [TokenAttribute] Offset: FFFFFFFF
  class GraphyDebugger::DebugPacket : public ::Il2CppObject {
    public:
    public:
    // [TooltipAttribute] Offset: 0xADD040
    // public System.Boolean Active
    // Size: 0x1
    // Offset: 0x10
    bool Active;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: Active and: Id
    char __padding0[0x3] = {};
    // [TooltipAttribute] Offset: 0xADD078
    // public System.Int32 Id
    // Size: 0x4
    // Offset: 0x14
    int Id;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // [TooltipAttribute] Offset: 0xADD0B0
    // public System.Boolean ExecuteOnce
    // Size: 0x1
    // Offset: 0x18
    bool ExecuteOnce;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: ExecuteOnce and: InitSleepTime
    char __padding2[0x3] = {};
    // [TooltipAttribute] Offset: 0xADD0E8
    // public System.Single InitSleepTime
    // Size: 0x4
    // Offset: 0x1C
    float InitSleepTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0xADD120
    // public System.Single ExecuteSleepTime
    // Size: 0x4
    // Offset: 0x20
    float ExecuteSleepTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public Tayx.Graphy.GraphyDebugger/ConditionEvaluation ConditionEvaluation
    // Size: 0x4
    // Offset: 0x24
    ::Tayx::Graphy::GraphyDebugger::ConditionEvaluation ConditionEvaluation;
    // Field size check
    static_assert(sizeof(::Tayx::Graphy::GraphyDebugger::ConditionEvaluation) == 0x4);
    // [TooltipAttribute] Offset: 0xADD158
    // public System.Collections.Generic.List`1<Tayx.Graphy.GraphyDebugger/DebugCondition> DebugConditions
    // Size: 0x8
    // Offset: 0x28
    ::System::Collections::Generic::List_1<::Tayx::Graphy::GraphyDebugger::DebugCondition>* DebugConditions;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::Tayx::Graphy::GraphyDebugger::DebugCondition>*) == 0x8);
    // public Tayx.Graphy.GraphyDebugger/MessageType MessageType
    // Size: 0x4
    // Offset: 0x30
    ::Tayx::Graphy::GraphyDebugger::MessageType MessageType;
    // Field size check
    static_assert(sizeof(::Tayx::Graphy::GraphyDebugger::MessageType) == 0x4);
    // Padding between fields: MessageType and: Message
    char __padding7[0x4] = {};
    // public System.String Message
    // Size: 0x8
    // Offset: 0x38
    ::StringW Message;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Boolean TakeScreenshot
    // Size: 0x1
    // Offset: 0x40
    bool TakeScreenshot;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: TakeScreenshot and: ScreenshotFileName
    char __padding9[0x7] = {};
    // public System.String ScreenshotFileName
    // Size: 0x8
    // Offset: 0x48
    ::StringW ScreenshotFileName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // [TooltipAttribute] Offset: 0xADD1A0
    // public System.Boolean DebugBreak
    // Size: 0x1
    // Offset: 0x50
    bool DebugBreak;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: DebugBreak and: UnityEvents
    char __padding11[0x7] = {};
    // public UnityEngine.Events.UnityEvent UnityEvents
    // Size: 0x8
    // Offset: 0x58
    ::UnityEngine::Events::UnityEvent* UnityEvents;
    // Field size check
    static_assert(sizeof(::UnityEngine::Events::UnityEvent*) == 0x8);
    // public System.Collections.Generic.List`1<System.Action> Callbacks
    // Size: 0x8
    // Offset: 0x60
    ::System::Collections::Generic::List_1<::System::Action*>* Callbacks;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::System::Action*>*) == 0x8);
    // private System.Boolean canBeChecked
    // Size: 0x1
    // Offset: 0x68
    bool canBeChecked;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean executed
    // Size: 0x1
    // Offset: 0x69
    bool executed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: executed and: timePassed
    char __padding15[0x2] = {};
    // private System.Single timePassed
    // Size: 0x4
    // Offset: 0x6C
    float timePassed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Get instance field reference: public System.Boolean Active
    [[deprecated("Use field access instead!")]] bool& dyn_Active();
    // Get instance field reference: public System.Int32 Id
    [[deprecated("Use field access instead!")]] int& dyn_Id();
    // Get instance field reference: public System.Boolean ExecuteOnce
    [[deprecated("Use field access instead!")]] bool& dyn_ExecuteOnce();
    // Get instance field reference: public System.Single InitSleepTime
    [[deprecated("Use field access instead!")]] float& dyn_InitSleepTime();
    // Get instance field reference: public System.Single ExecuteSleepTime
    [[deprecated("Use field access instead!")]] float& dyn_ExecuteSleepTime();
    // Get instance field reference: public Tayx.Graphy.GraphyDebugger/ConditionEvaluation ConditionEvaluation
    [[deprecated("Use field access instead!")]] ::Tayx::Graphy::GraphyDebugger::ConditionEvaluation& dyn_ConditionEvaluation();
    // Get instance field reference: public System.Collections.Generic.List`1<Tayx.Graphy.GraphyDebugger/DebugCondition> DebugConditions
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::Tayx::Graphy::GraphyDebugger::DebugCondition>*& dyn_DebugConditions();
    // Get instance field reference: public Tayx.Graphy.GraphyDebugger/MessageType MessageType
    [[deprecated("Use field access instead!")]] ::Tayx::Graphy::GraphyDebugger::MessageType& dyn_MessageType();
    // Get instance field reference: public System.String Message
    [[deprecated("Use field access instead!")]] ::StringW& dyn_Message();
    // Get instance field reference: public System.Boolean TakeScreenshot
    [[deprecated("Use field access instead!")]] bool& dyn_TakeScreenshot();
    // Get instance field reference: public System.String ScreenshotFileName
    [[deprecated("Use field access instead!")]] ::StringW& dyn_ScreenshotFileName();
    // Get instance field reference: public System.Boolean DebugBreak
    [[deprecated("Use field access instead!")]] bool& dyn_DebugBreak();
    // Get instance field reference: public UnityEngine.Events.UnityEvent UnityEvents
    [[deprecated("Use field access instead!")]] ::UnityEngine::Events::UnityEvent*& dyn_UnityEvents();
    // Get instance field reference: public System.Collections.Generic.List`1<System.Action> Callbacks
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::System::Action*>*& dyn_Callbacks();
    // Get instance field reference: private System.Boolean canBeChecked
    [[deprecated("Use field access instead!")]] bool& dyn_canBeChecked();
    // Get instance field reference: private System.Boolean executed
    [[deprecated("Use field access instead!")]] bool& dyn_executed();
    // Get instance field reference: private System.Single timePassed
    [[deprecated("Use field access instead!")]] float& dyn_timePassed();
    // public System.Boolean get_Check()
    // Offset: 0x1046668
    bool get_Check();
    // public System.Void Update()
    // Offset: 0x1046600
    void Update();
    // public System.Void Executed()
    // Offset: 0x1046EA8
    void Executed();
    // public System.Void .ctor()
    // Offset: 0x1045D0C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GraphyDebugger::DebugPacket* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Tayx::Graphy::GraphyDebugger::DebugPacket::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GraphyDebugger::DebugPacket*, creationType>()));
    }
  }; // Tayx.Graphy.GraphyDebugger/DebugPacket
  #pragma pack(pop)
  static check_size<sizeof(GraphyDebugger::DebugPacket), 108 + sizeof(float)> __Tayx_Graphy_GraphyDebugger_DebugPacketSizeCheck;
  static_assert(sizeof(GraphyDebugger::DebugPacket) == 0x70);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Tayx::Graphy::GraphyDebugger::DebugPacket::get_Check
// Il2CppName: get_Check
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Tayx::Graphy::GraphyDebugger::DebugPacket::*)()>(&Tayx::Graphy::GraphyDebugger::DebugPacket::get_Check)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Tayx::Graphy::GraphyDebugger::DebugPacket*), "get_Check", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Tayx::Graphy::GraphyDebugger::DebugPacket::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Tayx::Graphy::GraphyDebugger::DebugPacket::*)()>(&Tayx::Graphy::GraphyDebugger::DebugPacket::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Tayx::Graphy::GraphyDebugger::DebugPacket*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Tayx::Graphy::GraphyDebugger::DebugPacket::Executed
// Il2CppName: Executed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Tayx::Graphy::GraphyDebugger::DebugPacket::*)()>(&Tayx::Graphy::GraphyDebugger::DebugPacket::Executed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Tayx::Graphy::GraphyDebugger::DebugPacket*), "Executed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Tayx::Graphy::GraphyDebugger::DebugPacket::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
