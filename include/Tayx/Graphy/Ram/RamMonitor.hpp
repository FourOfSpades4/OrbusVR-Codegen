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
// Type namespace: Tayx.Graphy.Ram
namespace Tayx::Graphy::Ram {
  // Forward declaring type: RamMonitor
  class RamMonitor;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Tayx::Graphy::Ram::RamMonitor);
DEFINE_IL2CPP_ARG_TYPE(::Tayx::Graphy::Ram::RamMonitor*, "Tayx.Graphy.Ram", "RamMonitor");
// Type namespace: Tayx.Graphy.Ram
namespace Tayx::Graphy::Ram {
  // Size: 0x24
  #pragma pack(push, 1)
  // Autogenerated type: Tayx.Graphy.Ram.RamMonitor
  // [TokenAttribute] Offset: FFFFFFFF
  class RamMonitor : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private System.Single m_allocatedRam
    // Size: 0x4
    // Offset: 0x18
    float m_allocatedRam;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single m_reservedRam
    // Size: 0x4
    // Offset: 0x1C
    float m_reservedRam;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single m_monoRam
    // Size: 0x4
    // Offset: 0x20
    float m_monoRam;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private System.Single m_allocatedRam
    [[deprecated("Use field access instead!")]] float& dyn_m_allocatedRam();
    // Get instance field reference: private System.Single m_reservedRam
    [[deprecated("Use field access instead!")]] float& dyn_m_reservedRam();
    // Get instance field reference: private System.Single m_monoRam
    [[deprecated("Use field access instead!")]] float& dyn_m_monoRam();
    // public System.Single get_AllocatedRam()
    // Offset: 0x1046EA0
    float get_AllocatedRam();
    // public System.Single get_ReservedRam()
    // Offset: 0x1047E38
    float get_ReservedRam();
    // public System.Single get_MonoRam()
    // Offset: 0x1047E6C
    float get_MonoRam();
    // private System.Void Update()
    // Offset: 0x104A374
    void Update();
    // public System.Void .ctor()
    // Offset: 0x104A3DC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RamMonitor* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Tayx::Graphy::Ram::RamMonitor::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RamMonitor*, creationType>()));
    }
  }; // Tayx.Graphy.Ram.RamMonitor
  #pragma pack(pop)
  static check_size<sizeof(RamMonitor), 32 + sizeof(float)> __Tayx_Graphy_Ram_RamMonitorSizeCheck;
  static_assert(sizeof(RamMonitor) == 0x24);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Tayx::Graphy::Ram::RamMonitor::get_AllocatedRam
// Il2CppName: get_AllocatedRam
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (Tayx::Graphy::Ram::RamMonitor::*)()>(&Tayx::Graphy::Ram::RamMonitor::get_AllocatedRam)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Tayx::Graphy::Ram::RamMonitor*), "get_AllocatedRam", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Tayx::Graphy::Ram::RamMonitor::get_ReservedRam
// Il2CppName: get_ReservedRam
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (Tayx::Graphy::Ram::RamMonitor::*)()>(&Tayx::Graphy::Ram::RamMonitor::get_ReservedRam)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Tayx::Graphy::Ram::RamMonitor*), "get_ReservedRam", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Tayx::Graphy::Ram::RamMonitor::get_MonoRam
// Il2CppName: get_MonoRam
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (Tayx::Graphy::Ram::RamMonitor::*)()>(&Tayx::Graphy::Ram::RamMonitor::get_MonoRam)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Tayx::Graphy::Ram::RamMonitor*), "get_MonoRam", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Tayx::Graphy::Ram::RamMonitor::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Tayx::Graphy::Ram::RamMonitor::*)()>(&Tayx::Graphy::Ram::RamMonitor::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Tayx::Graphy::Ram::RamMonitor*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Tayx::Graphy::Ram::RamMonitor::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
