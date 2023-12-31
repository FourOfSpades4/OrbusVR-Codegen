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
// Type namespace: Pegasus
namespace Pegasus {
  // Forward declaring type: PegasusHide
  class PegasusHide;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Pegasus::PegasusHide);
DEFINE_IL2CPP_ARG_TYPE(::Pegasus::PegasusHide*, "Pegasus", "PegasusHide");
// Type namespace: Pegasus
namespace Pegasus {
  // Size: 0x19
  #pragma pack(push, 1)
  // Autogenerated type: Pegasus.PegasusHide
  // [TokenAttribute] Offset: FFFFFFFF
  class PegasusHide : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // public System.Boolean m_hideAtRuntime
    // Size: 0x1
    // Offset: 0x18
    bool m_hideAtRuntime;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public System.Boolean m_hideAtRuntime
    [[deprecated("Use field access instead!")]] bool& dyn_m_hideAtRuntime();
    // private System.Void Start()
    // Offset: 0xE45634
    void Start();
    // public System.Void .ctor()
    // Offset: 0xE4577C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PegasusHide* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Pegasus::PegasusHide::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PegasusHide*, creationType>()));
    }
  }; // Pegasus.PegasusHide
  #pragma pack(pop)
  static check_size<sizeof(PegasusHide), 24 + sizeof(bool)> __Pegasus_PegasusHideSizeCheck;
  static_assert(sizeof(PegasusHide) == 0x19);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Pegasus::PegasusHide::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pegasus::PegasusHide::*)()>(&Pegasus::PegasusHide::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pegasus::PegasusHide*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pegasus::PegasusHide::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
