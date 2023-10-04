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
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: CFX_AutoDestructShuriken
  class CFX_AutoDestructShuriken;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::CFX_AutoDestructShuriken);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CFX_AutoDestructShuriken*, "", "CFX_AutoDestructShuriken");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x19
  #pragma pack(push, 1)
  // Autogenerated type: CFX_AutoDestructShuriken
  // [TokenAttribute] Offset: FFFFFFFF
  // [RequireComponent] Offset: ACDCF0
  class CFX_AutoDestructShuriken : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::GlobalNamespace::CFX_AutoDestructShuriken::$CheckIfAlive$d__2
    class $CheckIfAlive$d__2;
    public:
    // public System.Boolean OnlyDeactivate
    // Size: 0x1
    // Offset: 0x18
    bool OnlyDeactivate;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public System.Boolean OnlyDeactivate
    [[deprecated("Use field access instead!")]] bool& dyn_OnlyDeactivate();
    // private System.Void OnEnable()
    // Offset: 0xDDCC10
    void OnEnable();
    // private System.Collections.IEnumerator CheckIfAlive()
    // Offset: 0xDDCC3C
    ::System::Collections::IEnumerator* CheckIfAlive();
    // public System.Void .ctor()
    // Offset: 0xDDCCDC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CFX_AutoDestructShuriken* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::CFX_AutoDestructShuriken::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CFX_AutoDestructShuriken*, creationType>()));
    }
  }; // CFX_AutoDestructShuriken
  #pragma pack(pop)
  static check_size<sizeof(CFX_AutoDestructShuriken), 24 + sizeof(bool)> __GlobalNamespace_CFX_AutoDestructShurikenSizeCheck;
  static_assert(sizeof(CFX_AutoDestructShuriken) == 0x19);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::CFX_AutoDestructShuriken::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CFX_AutoDestructShuriken::*)()>(&GlobalNamespace::CFX_AutoDestructShuriken::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CFX_AutoDestructShuriken*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CFX_AutoDestructShuriken::CheckIfAlive
// Il2CppName: CheckIfAlive
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (GlobalNamespace::CFX_AutoDestructShuriken::*)()>(&GlobalNamespace::CFX_AutoDestructShuriken::CheckIfAlive)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CFX_AutoDestructShuriken*), "CheckIfAlive", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CFX_AutoDestructShuriken::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!