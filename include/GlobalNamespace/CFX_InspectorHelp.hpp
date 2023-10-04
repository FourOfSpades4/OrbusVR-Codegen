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
  // Forward declaring type: CFX_InspectorHelp
  class CFX_InspectorHelp;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::CFX_InspectorHelp);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CFX_InspectorHelp*, "", "CFX_InspectorHelp");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x34
  #pragma pack(push, 1)
  // Autogenerated type: CFX_InspectorHelp
  // [TokenAttribute] Offset: FFFFFFFF
  class CFX_InspectorHelp : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // public System.Boolean Locked
    // Size: 0x1
    // Offset: 0x18
    bool Locked;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: Locked and: Title
    char __padding0[0x7] = {};
    // public System.String Title
    // Size: 0x8
    // Offset: 0x20
    ::StringW Title;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String HelpText
    // Size: 0x8
    // Offset: 0x28
    ::StringW HelpText;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Int32 MsgType
    // Size: 0x4
    // Offset: 0x30
    int MsgType;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public System.Boolean Locked
    [[deprecated("Use field access instead!")]] bool& dyn_Locked();
    // Get instance field reference: public System.String Title
    [[deprecated("Use field access instead!")]] ::StringW& dyn_Title();
    // Get instance field reference: public System.String HelpText
    [[deprecated("Use field access instead!")]] ::StringW& dyn_HelpText();
    // Get instance field reference: public System.Int32 MsgType
    [[deprecated("Use field access instead!")]] int& dyn_MsgType();
    // private System.Void Unlock()
    // Offset: 0xDDD070
    void Unlock();
    // public System.Void .ctor()
    // Offset: 0xDDD078
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CFX_InspectorHelp* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::CFX_InspectorHelp::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CFX_InspectorHelp*, creationType>()));
    }
  }; // CFX_InspectorHelp
  #pragma pack(pop)
  static check_size<sizeof(CFX_InspectorHelp), 48 + sizeof(int)> __GlobalNamespace_CFX_InspectorHelpSizeCheck;
  static_assert(sizeof(CFX_InspectorHelp) == 0x34);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::CFX_InspectorHelp::Unlock
// Il2CppName: Unlock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CFX_InspectorHelp::*)()>(&GlobalNamespace::CFX_InspectorHelp::Unlock)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CFX_InspectorHelp*), "Unlock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CFX_InspectorHelp::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!