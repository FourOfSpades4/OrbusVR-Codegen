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
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: STMSampleLink
  class STMSampleLink;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::STMSampleLink);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::STMSampleLink*, "", "STMSampleLink");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: STMSampleLink
  // [TokenAttribute] Offset: FFFFFFFF
  // [RequireComponent] Offset: ACD4E0
  class STMSampleLink : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // public System.String linkName
    // Size: 0x8
    // Offset: 0x18
    ::StringW linkName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public System.String linkName
    [[deprecated("Use field access instead!")]] ::StringW& dyn_linkName();
    // public System.Void OnMouseDown()
    // Offset: 0xE2FEF8
    void OnMouseDown();
    // public System.Void .ctor(System.String linkName)
    // Offset: 0xE2FF80
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static STMSampleLink* New_ctor(::StringW linkName) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::STMSampleLink::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<STMSampleLink*, creationType>(linkName)));
    }
  }; // STMSampleLink
  #pragma pack(pop)
  static check_size<sizeof(STMSampleLink), 24 + sizeof(::StringW)> __GlobalNamespace_STMSampleLinkSizeCheck;
  static_assert(sizeof(STMSampleLink) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::STMSampleLink::OnMouseDown
// Il2CppName: OnMouseDown
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::STMSampleLink::*)()>(&GlobalNamespace::STMSampleLink::OnMouseDown)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::STMSampleLink*), "OnMouseDown", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::STMSampleLink::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
