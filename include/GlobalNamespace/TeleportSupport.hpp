// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: LocomotionTeleport
  class LocomotionTeleport;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: TeleportSupport
  class TeleportSupport;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::TeleportSupport);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TeleportSupport*, "", "TeleportSupport");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x21
  #pragma pack(push, 1)
  // Autogenerated type: TeleportSupport
  // [TokenAttribute] Offset: FFFFFFFF
  class TeleportSupport : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // [CompilerGeneratedAttribute] Offset: 0xADC174
    // private LocomotionTeleport <LocomotionTeleport>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::LocomotionTeleport* LocomotionTeleport;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::LocomotionTeleport*) == 0x8);
    // private System.Boolean _eventsActive
    // Size: 0x1
    // Offset: 0x20
    bool eventsActive;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private LocomotionTeleport <LocomotionTeleport>k__BackingField
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::LocomotionTeleport*& dyn_$LocomotionTeleport$k__BackingField();
    // Get instance field reference: private System.Boolean _eventsActive
    [[deprecated("Use field access instead!")]] bool& dyn__eventsActive();
    // protected LocomotionTeleport get_LocomotionTeleport()
    // Offset: 0x104AE64
    ::GlobalNamespace::LocomotionTeleport* get_LocomotionTeleport();
    // private System.Void set_LocomotionTeleport(LocomotionTeleport value)
    // Offset: 0x104E104
    void set_LocomotionTeleport(::GlobalNamespace::LocomotionTeleport* value);
    // protected System.Void OnEnable()
    // Offset: 0x104AE00
    void OnEnable();
    // protected System.Void OnDisable()
    // Offset: 0x104AF1C
    void OnDisable();
    // private System.Void LogEventHandler(System.String msg)
    // Offset: 0x104E10C
    void LogEventHandler(::StringW msg);
    // protected System.Void AddEventHandlers()
    // Offset: 0x104B654
    void AddEventHandlers();
    // protected System.Void RemoveEventHandlers()
    // Offset: 0x104B6F4
    void RemoveEventHandlers();
    // protected System.Void .ctor()
    // Offset: 0x104AF50
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TeleportSupport* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::TeleportSupport::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TeleportSupport*, creationType>()));
    }
  }; // TeleportSupport
  #pragma pack(pop)
  static check_size<sizeof(TeleportSupport), 32 + sizeof(bool)> __GlobalNamespace_TeleportSupportSizeCheck;
  static_assert(sizeof(TeleportSupport) == 0x21);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::TeleportSupport::get_LocomotionTeleport
// Il2CppName: get_LocomotionTeleport
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::LocomotionTeleport* (GlobalNamespace::TeleportSupport::*)()>(&GlobalNamespace::TeleportSupport::get_LocomotionTeleport)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TeleportSupport*), "get_LocomotionTeleport", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TeleportSupport::set_LocomotionTeleport
// Il2CppName: set_LocomotionTeleport
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TeleportSupport::*)(::GlobalNamespace::LocomotionTeleport*)>(&GlobalNamespace::TeleportSupport::set_LocomotionTeleport)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "LocomotionTeleport")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TeleportSupport*), "set_LocomotionTeleport", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TeleportSupport::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TeleportSupport::*)()>(&GlobalNamespace::TeleportSupport::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TeleportSupport*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TeleportSupport::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TeleportSupport::*)()>(&GlobalNamespace::TeleportSupport::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TeleportSupport*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TeleportSupport::LogEventHandler
// Il2CppName: LogEventHandler
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TeleportSupport::*)(::StringW)>(&GlobalNamespace::TeleportSupport::LogEventHandler)> {
  static const MethodInfo* get() {
    static auto* msg = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TeleportSupport*), "LogEventHandler", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{msg});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TeleportSupport::AddEventHandlers
// Il2CppName: AddEventHandlers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TeleportSupport::*)()>(&GlobalNamespace::TeleportSupport::AddEventHandlers)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TeleportSupport*), "AddEventHandlers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TeleportSupport::RemoveEventHandlers
// Il2CppName: RemoveEventHandlers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TeleportSupport::*)()>(&GlobalNamespace::TeleportSupport::RemoveEventHandlers)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TeleportSupport*), "RemoveEventHandlers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TeleportSupport::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!