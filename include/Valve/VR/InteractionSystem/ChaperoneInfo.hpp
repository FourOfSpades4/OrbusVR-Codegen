// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: SteamVR_Events
#include "GlobalNamespace/SteamVR_Events.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Valve::VR::InteractionSystem
namespace Valve::VR::InteractionSystem {
}
// Forward declaring namespace: UnityEngine::Events
namespace UnityEngine::Events {
  // Forward declaring type: UnityAction
  class UnityAction;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: Valve.VR.InteractionSystem
namespace Valve::VR::InteractionSystem {
  // Forward declaring type: ChaperoneInfo
  class ChaperoneInfo;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Valve::VR::InteractionSystem::ChaperoneInfo);
DEFINE_IL2CPP_ARG_TYPE(::Valve::VR::InteractionSystem::ChaperoneInfo*, "Valve.VR.InteractionSystem", "ChaperoneInfo");
// Type namespace: Valve.VR.InteractionSystem
namespace Valve::VR::InteractionSystem {
  // Size: 0x25
  #pragma pack(push, 1)
  // Autogenerated type: Valve.VR.InteractionSystem.ChaperoneInfo
  // [TokenAttribute] Offset: FFFFFFFF
  class ChaperoneInfo : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::Valve::VR::InteractionSystem::ChaperoneInfo::$Start$d__21
    class $Start$d__21;
    public:
    // [CompilerGeneratedAttribute] Offset: 0xADE728
    // private System.Boolean <initialized>k__BackingField
    // Size: 0x1
    // Offset: 0x18
    bool initialized;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: initialized and: playAreaSizeX
    char __padding0[0x3] = {};
    // [CompilerGeneratedAttribute] Offset: 0xADE738
    // private System.Single <playAreaSizeX>k__BackingField
    // Size: 0x4
    // Offset: 0x1C
    float playAreaSizeX;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [CompilerGeneratedAttribute] Offset: 0xADE748
    // private System.Single <playAreaSizeZ>k__BackingField
    // Size: 0x4
    // Offset: 0x20
    float playAreaSizeZ;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [CompilerGeneratedAttribute] Offset: 0xADE758
    // private System.Boolean <roomscale>k__BackingField
    // Size: 0x1
    // Offset: 0x24
    bool roomscale;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get static field: static public SteamVR_Events/Event Initialized
    static ::GlobalNamespace::SteamVR_Events::Event* _get_Initialized();
    // Set static field: static public SteamVR_Events/Event Initialized
    static void _set_Initialized(::GlobalNamespace::SteamVR_Events::Event* value);
    // Get static field: static private Valve.VR.InteractionSystem.ChaperoneInfo _instance
    static ::Valve::VR::InteractionSystem::ChaperoneInfo* _get__instance();
    // Set static field: static private Valve.VR.InteractionSystem.ChaperoneInfo _instance
    static void _set__instance(::Valve::VR::InteractionSystem::ChaperoneInfo* value);
    // Get instance field reference: private System.Boolean <initialized>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$initialized$k__BackingField();
    // Get instance field reference: private System.Single <playAreaSizeX>k__BackingField
    [[deprecated("Use field access instead!")]] float& dyn_$playAreaSizeX$k__BackingField();
    // Get instance field reference: private System.Single <playAreaSizeZ>k__BackingField
    [[deprecated("Use field access instead!")]] float& dyn_$playAreaSizeZ$k__BackingField();
    // Get instance field reference: private System.Boolean <roomscale>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$roomscale$k__BackingField();
    // public System.Boolean get_initialized()
    // Offset: 0x115B2A8
    bool get_initialized();
    // private System.Void set_initialized(System.Boolean value)
    // Offset: 0x115B2B0
    void set_initialized(bool value);
    // public System.Single get_playAreaSizeX()
    // Offset: 0x115B2BC
    float get_playAreaSizeX();
    // private System.Void set_playAreaSizeX(System.Single value)
    // Offset: 0x115B2C4
    void set_playAreaSizeX(float value);
    // public System.Single get_playAreaSizeZ()
    // Offset: 0x115B2CC
    float get_playAreaSizeZ();
    // private System.Void set_playAreaSizeZ(System.Single value)
    // Offset: 0x115B2D4
    void set_playAreaSizeZ(float value);
    // public System.Boolean get_roomscale()
    // Offset: 0x115B2DC
    bool get_roomscale();
    // private System.Void set_roomscale(System.Boolean value)
    // Offset: 0x115B2E4
    void set_roomscale(bool value);
    // static public SteamVR_Events/Action InitializedAction(UnityEngine.Events.UnityAction action)
    // Offset: 0x115B2F0
    static ::GlobalNamespace::SteamVR_Events::Action* InitializedAction(::UnityEngine::Events::UnityAction* action);
    // static public Valve.VR.InteractionSystem.ChaperoneInfo get_instance()
    // Offset: 0x115B38C
    static ::Valve::VR::InteractionSystem::ChaperoneInfo* get_instance();
    // private System.Collections.IEnumerator Start()
    // Offset: 0x115B58C
    ::System::Collections::IEnumerator* Start();
    // public System.Void .ctor()
    // Offset: 0x115B62C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ChaperoneInfo* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Valve::VR::InteractionSystem::ChaperoneInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ChaperoneInfo*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x115B634
    static void _cctor();
  }; // Valve.VR.InteractionSystem.ChaperoneInfo
  #pragma pack(pop)
  static check_size<sizeof(ChaperoneInfo), 36 + sizeof(bool)> __Valve_VR_InteractionSystem_ChaperoneInfoSizeCheck;
  static_assert(sizeof(ChaperoneInfo) == 0x25);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Valve::VR::InteractionSystem::ChaperoneInfo::get_initialized
// Il2CppName: get_initialized
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Valve::VR::InteractionSystem::ChaperoneInfo::*)()>(&Valve::VR::InteractionSystem::ChaperoneInfo::get_initialized)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::InteractionSystem::ChaperoneInfo*), "get_initialized", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Valve::VR::InteractionSystem::ChaperoneInfo::set_initialized
// Il2CppName: set_initialized
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Valve::VR::InteractionSystem::ChaperoneInfo::*)(bool)>(&Valve::VR::InteractionSystem::ChaperoneInfo::set_initialized)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::InteractionSystem::ChaperoneInfo*), "set_initialized", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Valve::VR::InteractionSystem::ChaperoneInfo::get_playAreaSizeX
// Il2CppName: get_playAreaSizeX
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (Valve::VR::InteractionSystem::ChaperoneInfo::*)()>(&Valve::VR::InteractionSystem::ChaperoneInfo::get_playAreaSizeX)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::InteractionSystem::ChaperoneInfo*), "get_playAreaSizeX", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Valve::VR::InteractionSystem::ChaperoneInfo::set_playAreaSizeX
// Il2CppName: set_playAreaSizeX
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Valve::VR::InteractionSystem::ChaperoneInfo::*)(float)>(&Valve::VR::InteractionSystem::ChaperoneInfo::set_playAreaSizeX)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::InteractionSystem::ChaperoneInfo*), "set_playAreaSizeX", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Valve::VR::InteractionSystem::ChaperoneInfo::get_playAreaSizeZ
// Il2CppName: get_playAreaSizeZ
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (Valve::VR::InteractionSystem::ChaperoneInfo::*)()>(&Valve::VR::InteractionSystem::ChaperoneInfo::get_playAreaSizeZ)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::InteractionSystem::ChaperoneInfo*), "get_playAreaSizeZ", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Valve::VR::InteractionSystem::ChaperoneInfo::set_playAreaSizeZ
// Il2CppName: set_playAreaSizeZ
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Valve::VR::InteractionSystem::ChaperoneInfo::*)(float)>(&Valve::VR::InteractionSystem::ChaperoneInfo::set_playAreaSizeZ)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::InteractionSystem::ChaperoneInfo*), "set_playAreaSizeZ", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Valve::VR::InteractionSystem::ChaperoneInfo::get_roomscale
// Il2CppName: get_roomscale
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Valve::VR::InteractionSystem::ChaperoneInfo::*)()>(&Valve::VR::InteractionSystem::ChaperoneInfo::get_roomscale)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::InteractionSystem::ChaperoneInfo*), "get_roomscale", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Valve::VR::InteractionSystem::ChaperoneInfo::set_roomscale
// Il2CppName: set_roomscale
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Valve::VR::InteractionSystem::ChaperoneInfo::*)(bool)>(&Valve::VR::InteractionSystem::ChaperoneInfo::set_roomscale)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::InteractionSystem::ChaperoneInfo*), "set_roomscale", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Valve::VR::InteractionSystem::ChaperoneInfo::InitializedAction
// Il2CppName: InitializedAction
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::SteamVR_Events::Action* (*)(::UnityEngine::Events::UnityAction*)>(&Valve::VR::InteractionSystem::ChaperoneInfo::InitializedAction)> {
  static const MethodInfo* get() {
    static auto* action = &::il2cpp_utils::GetClassFromName("UnityEngine.Events", "UnityAction")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::InteractionSystem::ChaperoneInfo*), "InitializedAction", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{action});
  }
};
// Writing MetadataGetter for method: Valve::VR::InteractionSystem::ChaperoneInfo::get_instance
// Il2CppName: get_instance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Valve::VR::InteractionSystem::ChaperoneInfo* (*)()>(&Valve::VR::InteractionSystem::ChaperoneInfo::get_instance)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::InteractionSystem::ChaperoneInfo*), "get_instance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Valve::VR::InteractionSystem::ChaperoneInfo::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (Valve::VR::InteractionSystem::ChaperoneInfo::*)()>(&Valve::VR::InteractionSystem::ChaperoneInfo::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::InteractionSystem::ChaperoneInfo*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Valve::VR::InteractionSystem::ChaperoneInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Valve::VR::InteractionSystem::ChaperoneInfo::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Valve::VR::InteractionSystem::ChaperoneInfo::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::InteractionSystem::ChaperoneInfo*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
