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
  // Forward declaring type: SuperTextMesh
  class SuperTextMesh;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: STMReadoutControls
  class STMReadoutControls;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::STMReadoutControls);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::STMReadoutControls*, "", "STMReadoutControls");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: STMReadoutControls
  // [TokenAttribute] Offset: FFFFFFFF
  class STMReadoutControls : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // public SuperTextMesh stm
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::SuperTextMesh* stm;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::SuperTextMesh*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public SuperTextMesh stm
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::SuperTextMesh*& dyn_stm();
    // private System.Void Update()
    // Offset: 0xE2FEA0
    void Update();
    // public System.Void .ctor()
    // Offset: 0xE2FEF0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static STMReadoutControls* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::STMReadoutControls::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<STMReadoutControls*, creationType>()));
    }
  }; // STMReadoutControls
  #pragma pack(pop)
  static check_size<sizeof(STMReadoutControls), 24 + sizeof(::GlobalNamespace::SuperTextMesh*)> __GlobalNamespace_STMReadoutControlsSizeCheck;
  static_assert(sizeof(STMReadoutControls) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::STMReadoutControls::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::STMReadoutControls::*)()>(&GlobalNamespace::STMReadoutControls::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::STMReadoutControls*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::STMReadoutControls::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!