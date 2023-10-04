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
  // Forward declaring type: STMInputStringDemo
  class STMInputStringDemo;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::STMInputStringDemo);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::STMInputStringDemo*, "", "STMInputStringDemo");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: STMInputStringDemo
  // [TokenAttribute] Offset: FFFFFFFF
  class STMInputStringDemo : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // public SuperTextMesh rawstm
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::SuperTextMesh* rawstm;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::SuperTextMesh*) == 0x8);
    // public SuperTextMesh stm
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::SuperTextMesh* stm;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::SuperTextMesh*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public SuperTextMesh rawstm
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::SuperTextMesh*& dyn_rawstm();
    // Get instance field reference: public SuperTextMesh stm
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::SuperTextMesh*& dyn_stm();
    // private System.Void Update()
    // Offset: 0xE2E458
    void Update();
    // public System.Void UpdateBox()
    // Offset: 0xE2E664
    void UpdateBox();
    // public System.Void .ctor()
    // Offset: 0xE2E6B4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static STMInputStringDemo* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::STMInputStringDemo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<STMInputStringDemo*, creationType>()));
    }
  }; // STMInputStringDemo
  #pragma pack(pop)
  static check_size<sizeof(STMInputStringDemo), 32 + sizeof(::GlobalNamespace::SuperTextMesh*)> __GlobalNamespace_STMInputStringDemoSizeCheck;
  static_assert(sizeof(STMInputStringDemo) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::STMInputStringDemo::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::STMInputStringDemo::*)()>(&GlobalNamespace::STMInputStringDemo::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::STMInputStringDemo*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::STMInputStringDemo::UpdateBox
// Il2CppName: UpdateBox
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::STMInputStringDemo::*)()>(&GlobalNamespace::STMInputStringDemo::UpdateBox)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::STMInputStringDemo*), "UpdateBox", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::STMInputStringDemo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
