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
  // Forward declaring type: SuperTextMesh
  class SuperTextMesh;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: STMAppendExample
  class STMAppendExample;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::STMAppendExample);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::STMAppendExample*, "", "STMAppendExample");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: STMAppendExample
  // [TokenAttribute] Offset: FFFFFFFF
  class STMAppendExample : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // public SuperTextMesh text
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::SuperTextMesh* text;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::SuperTextMesh*) == 0x8);
    // public System.String appendThis
    // Size: 0x8
    // Offset: 0x20
    ::StringW appendThis;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public SuperTextMesh text
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::SuperTextMesh*& dyn_text();
    // Get instance field reference: public System.String appendThis
    [[deprecated("Use field access instead!")]] ::StringW& dyn_appendThis();
    // private System.Void Update()
    // Offset: 0xE2BAD4
    void Update();
    // public System.Void .ctor()
    // Offset: 0xE2BB2C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static STMAppendExample* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::STMAppendExample::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<STMAppendExample*, creationType>()));
    }
  }; // STMAppendExample
  #pragma pack(pop)
  static check_size<sizeof(STMAppendExample), 32 + sizeof(::StringW)> __GlobalNamespace_STMAppendExampleSizeCheck;
  static_assert(sizeof(STMAppendExample) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::STMAppendExample::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::STMAppendExample::*)()>(&GlobalNamespace::STMAppendExample::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::STMAppendExample*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::STMAppendExample::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
