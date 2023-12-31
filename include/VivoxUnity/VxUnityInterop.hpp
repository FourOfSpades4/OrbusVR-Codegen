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
// Completed includes
// Begin forward declares
// Forward declaring namespace: VivoxUnity
namespace VivoxUnity {
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: VivoxUnity
namespace VivoxUnity {
  // Forward declaring type: VxUnityInterop
  class VxUnityInterop;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VivoxUnity::VxUnityInterop);
DEFINE_IL2CPP_ARG_TYPE(::VivoxUnity::VxUnityInterop*, "VivoxUnity", "VxUnityInterop");
// Type namespace: VivoxUnity
namespace VivoxUnity {
  // Size: 0x19
  #pragma pack(push, 1)
  // Autogenerated type: VivoxUnity.VxUnityInterop
  // [TokenAttribute] Offset: FFFFFFFF
  class VxUnityInterop : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::VivoxUnity::VxUnityInterop::$VivoxUnityRun$d__7
    class $VivoxUnityRun$d__7;
    public:
    // private System.Boolean quitting
    // Size: 0x1
    // Offset: 0x18
    bool quitting;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get static field: static private System.Object m_Lock
    static ::Il2CppObject* _get_m_Lock();
    // Set static field: static private System.Object m_Lock
    static void _set_m_Lock(::Il2CppObject* value);
    // Get static field: static private VivoxUnity.VxUnityInterop m_Instance
    static ::VivoxUnity::VxUnityInterop* _get_m_Instance();
    // Set static field: static private VivoxUnity.VxUnityInterop m_Instance
    static void _set_m_Instance(::VivoxUnity::VxUnityInterop* value);
    // Get instance field reference: private System.Boolean quitting
    [[deprecated("Use field access instead!")]] bool& dyn_quitting();
    // static public VivoxUnity.VxUnityInterop get_Instance()
    // Offset: 0x12DB7DC
    static ::VivoxUnity::VxUnityInterop* get_Instance();
    // private System.Void OnApplicationQuit()
    // Offset: 0x12DCFEC
    void OnApplicationQuit();
    // public System.Void StartVivoxUnity()
    // Offset: 0x12DCFF8
    void StartVivoxUnity();
    // private System.Collections.IEnumerator VivoxUnityRun()
    // Offset: 0x12DD024
    ::System::Collections::IEnumerator* VivoxUnityRun();
    // private System.Void OnDestroy()
    // Offset: 0x12DD0B0
    void OnDestroy();
    // public System.Void .ctor()
    // Offset: 0x12DD4B4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static VxUnityInterop* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VivoxUnity::VxUnityInterop::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<VxUnityInterop*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x12DD4BC
    static void _cctor();
  }; // VivoxUnity.VxUnityInterop
  #pragma pack(pop)
  static check_size<sizeof(VxUnityInterop), 24 + sizeof(bool)> __VivoxUnity_VxUnityInteropSizeCheck;
  static_assert(sizeof(VxUnityInterop) == 0x19);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VivoxUnity::VxUnityInterop::get_Instance
// Il2CppName: get_Instance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VivoxUnity::VxUnityInterop* (*)()>(&VivoxUnity::VxUnityInterop::get_Instance)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VivoxUnity::VxUnityInterop*), "get_Instance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VivoxUnity::VxUnityInterop::OnApplicationQuit
// Il2CppName: OnApplicationQuit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VivoxUnity::VxUnityInterop::*)()>(&VivoxUnity::VxUnityInterop::OnApplicationQuit)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VivoxUnity::VxUnityInterop*), "OnApplicationQuit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VivoxUnity::VxUnityInterop::StartVivoxUnity
// Il2CppName: StartVivoxUnity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VivoxUnity::VxUnityInterop::*)()>(&VivoxUnity::VxUnityInterop::StartVivoxUnity)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VivoxUnity::VxUnityInterop*), "StartVivoxUnity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VivoxUnity::VxUnityInterop::VivoxUnityRun
// Il2CppName: VivoxUnityRun
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (VivoxUnity::VxUnityInterop::*)()>(&VivoxUnity::VxUnityInterop::VivoxUnityRun)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VivoxUnity::VxUnityInterop*), "VivoxUnityRun", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VivoxUnity::VxUnityInterop::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VivoxUnity::VxUnityInterop::*)()>(&VivoxUnity::VxUnityInterop::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VivoxUnity::VxUnityInterop*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VivoxUnity::VxUnityInterop::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VivoxUnity::VxUnityInterop::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&VivoxUnity::VxUnityInterop::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VivoxUnity::VxUnityInterop*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
