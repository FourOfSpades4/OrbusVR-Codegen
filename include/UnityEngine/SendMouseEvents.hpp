// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Camera
  class Camera;
  // Forward declaring type: Vector3
  struct Vector3;
  // Skipping declaration: HitInfo because it is already included!
  // Forward declaring type: GameObject
  class GameObject;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: SendMouseEvents
  class SendMouseEvents;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::SendMouseEvents);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::SendMouseEvents*, "UnityEngine", "SendMouseEvents");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.SendMouseEvents
  // [TokenAttribute] Offset: FFFFFFFF
  class SendMouseEvents : public ::Il2CppObject {
    public:
    // Nested type: ::UnityEngine::SendMouseEvents::HitInfo
    struct HitInfo;
    // Size: 0x10
    #pragma pack(push, 1)
    // WARNING Layout: Sequential may not be correctly taken into account!
    // Autogenerated type: UnityEngine.SendMouseEvents/HitInfo
    // [TokenAttribute] Offset: FFFFFFFF
    struct HitInfo/*, public ::System::ValueType*/ {
      public:
      public:
      // public UnityEngine.GameObject target
      // Size: 0x8
      // Offset: 0x0
      ::UnityEngine::GameObject* target;
      // Field size check
      static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
      // public UnityEngine.Camera camera
      // Size: 0x8
      // Offset: 0x8
      ::UnityEngine::Camera* camera;
      // Field size check
      static_assert(sizeof(::UnityEngine::Camera*) == 0x8);
      public:
      // Creating value type constructor for type: HitInfo
      constexpr HitInfo(::UnityEngine::GameObject* target_ = {}, ::UnityEngine::Camera* camera_ = {}) noexcept : target{target_}, camera{camera_} {}
      // Creating interface conversion operator: operator ::System::ValueType
      operator ::System::ValueType() noexcept {
        return *reinterpret_cast<::System::ValueType*>(this);
      }
      // Get instance field reference: public UnityEngine.GameObject target
      [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn_target();
      // Get instance field reference: public UnityEngine.Camera camera
      [[deprecated("Use field access instead!")]] ::UnityEngine::Camera*& dyn_camera();
      // public System.Void SendMessage(System.String name)
      // Offset: 0xBB4178
      void SendMessage(::StringW name);
      // static public System.Boolean Compare(UnityEngine.SendMouseEvents/HitInfo lhs, UnityEngine.SendMouseEvents/HitInfo rhs)
      // Offset: 0x1F99468
      static bool Compare(::UnityEngine::SendMouseEvents::HitInfo lhs, ::UnityEngine::SendMouseEvents::HitInfo rhs);
    }; // UnityEngine.SendMouseEvents/HitInfo
    #pragma pack(pop)
    static check_size<sizeof(SendMouseEvents::HitInfo), 8 + sizeof(::UnityEngine::Camera*)> __UnityEngine_SendMouseEvents_HitInfoSizeCheck;
    static_assert(sizeof(SendMouseEvents::HitInfo) == 0x10);
    // Get static field: static private System.Boolean s_MouseUsed
    static bool _get_s_MouseUsed();
    // Set static field: static private System.Boolean s_MouseUsed
    static void _set_s_MouseUsed(bool value);
    // Get static field: static private readonly UnityEngine.SendMouseEvents/HitInfo[] m_LastHit
    static ::ArrayW<::UnityEngine::SendMouseEvents::HitInfo> _get_m_LastHit();
    // Set static field: static private readonly UnityEngine.SendMouseEvents/HitInfo[] m_LastHit
    static void _set_m_LastHit(::ArrayW<::UnityEngine::SendMouseEvents::HitInfo> value);
    // Get static field: static private readonly UnityEngine.SendMouseEvents/HitInfo[] m_MouseDownHit
    static ::ArrayW<::UnityEngine::SendMouseEvents::HitInfo> _get_m_MouseDownHit();
    // Set static field: static private readonly UnityEngine.SendMouseEvents/HitInfo[] m_MouseDownHit
    static void _set_m_MouseDownHit(::ArrayW<::UnityEngine::SendMouseEvents::HitInfo> value);
    // Get static field: static private readonly UnityEngine.SendMouseEvents/HitInfo[] m_CurrentHit
    static ::ArrayW<::UnityEngine::SendMouseEvents::HitInfo> _get_m_CurrentHit();
    // Set static field: static private readonly UnityEngine.SendMouseEvents/HitInfo[] m_CurrentHit
    static void _set_m_CurrentHit(::ArrayW<::UnityEngine::SendMouseEvents::HitInfo> value);
    // Get static field: static private UnityEngine.Camera[] m_Cameras
    static ::ArrayW<::UnityEngine::Camera*> _get_m_Cameras();
    // Set static field: static private UnityEngine.Camera[] m_Cameras
    static void _set_m_Cameras(::ArrayW<::UnityEngine::Camera*> value);
    // static private System.Void SetMouseMoved()
    // Offset: 0x1F97F94
    static void SetMouseMoved();
    // static private System.Void HitTestLegacyGUI(UnityEngine.Camera camera, UnityEngine.Vector3 mousePosition, ref UnityEngine.SendMouseEvents/HitInfo hitInfo)
    // Offset: 0x1F98000
    static void HitTestLegacyGUI(::UnityEngine::Camera* camera, ::UnityEngine::Vector3 mousePosition, ByRef<::UnityEngine::SendMouseEvents::HitInfo> hitInfo);
    // static private System.Void DoSendMouseEvents(System.Int32 skipRTCameras)
    // Offset: 0x1F9813C
    static void DoSendMouseEvents(int skipRTCameras);
    // static private System.Void SendEvents(System.Int32 i, UnityEngine.SendMouseEvents/HitInfo hit)
    // Offset: 0x1F98DB4
    static void SendEvents(int i, ::UnityEngine::SendMouseEvents::HitInfo hit);
    // static private System.Void .cctor()
    // Offset: 0x1F99534
    static void _cctor();
  }; // UnityEngine.SendMouseEvents
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::SendMouseEvents::HitInfo, "UnityEngine", "SendMouseEvents/HitInfo");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::SendMouseEvents::SetMouseMoved
// Il2CppName: SetMouseMoved
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::SendMouseEvents::SetMouseMoved)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SendMouseEvents*), "SetMouseMoved", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::SendMouseEvents::HitTestLegacyGUI
// Il2CppName: HitTestLegacyGUI
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Camera*, ::UnityEngine::Vector3, ByRef<::UnityEngine::SendMouseEvents::HitInfo>)>(&UnityEngine::SendMouseEvents::HitTestLegacyGUI)> {
  static const MethodInfo* get() {
    static auto* camera = &::il2cpp_utils::GetClassFromName("UnityEngine", "Camera")->byval_arg;
    static auto* mousePosition = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* hitInfo = &::il2cpp_utils::GetClassFromName("UnityEngine", "SendMouseEvents/HitInfo")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SendMouseEvents*), "HitTestLegacyGUI", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{camera, mousePosition, hitInfo});
  }
};
// Writing MetadataGetter for method: UnityEngine::SendMouseEvents::DoSendMouseEvents
// Il2CppName: DoSendMouseEvents
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int)>(&UnityEngine::SendMouseEvents::DoSendMouseEvents)> {
  static const MethodInfo* get() {
    static auto* skipRTCameras = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SendMouseEvents*), "DoSendMouseEvents", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{skipRTCameras});
  }
};
// Writing MetadataGetter for method: UnityEngine::SendMouseEvents::SendEvents
// Il2CppName: SendEvents
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int, ::UnityEngine::SendMouseEvents::HitInfo)>(&UnityEngine::SendMouseEvents::SendEvents)> {
  static const MethodInfo* get() {
    static auto* i = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* hit = &::il2cpp_utils::GetClassFromName("UnityEngine", "SendMouseEvents/HitInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SendMouseEvents*), "SendEvents", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{i, hit});
  }
};
// Writing MetadataGetter for method: UnityEngine::SendMouseEvents::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::SendMouseEvents::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SendMouseEvents*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
