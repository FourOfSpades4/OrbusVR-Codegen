// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.UI.Dropdown
#include "UnityEngine/UI/Dropdown.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::UI::Dropdown::$Show$c__AnonStorey1);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::Dropdown::$Show$c__AnonStorey1*, "UnityEngine.UI", "Dropdown/<Show>c__AnonStorey1");
// Type namespace: UnityEngine.UI
namespace UnityEngine::UI {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UI.Dropdown/<Show>c__AnonStorey1
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: AAF3D0
  class Dropdown::$Show$c__AnonStorey1 : public ::Il2CppObject {
    public:
    public:
    // UnityEngine.UI.Dropdown/DropdownItem item
    // Size: 0x8
    // Offset: 0x10
    ::UnityEngine::UI::Dropdown::DropdownItem* item;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Dropdown::DropdownItem*) == 0x8);
    // UnityEngine.UI.Dropdown $this
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::UI::Dropdown* $this;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Dropdown*) == 0x8);
    public:
    // Get instance field reference: UnityEngine.UI.Dropdown/DropdownItem item
    [[deprecated("Use field access instead!")]] ::UnityEngine::UI::Dropdown::DropdownItem*& dyn_item();
    // Get instance field reference: UnityEngine.UI.Dropdown $this
    [[deprecated("Use field access instead!")]] ::UnityEngine::UI::Dropdown*& dyn_$this();
    // public System.Void .ctor()
    // Offset: 0x1C421EC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Dropdown::$Show$c__AnonStorey1* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UI::Dropdown::$Show$c__AnonStorey1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Dropdown::$Show$c__AnonStorey1*, creationType>()));
    }
    // System.Void <>m__0(System.Boolean x)
    // Offset: 0x1C421F4
    void $$m__0(bool x);
  }; // UnityEngine.UI.Dropdown/<Show>c__AnonStorey1
  #pragma pack(pop)
  static check_size<sizeof(Dropdown::$Show$c__AnonStorey1), 24 + sizeof(::UnityEngine::UI::Dropdown*)> __UnityEngine_UI_Dropdown_$Show$c__AnonStorey1SizeCheck;
  static_assert(sizeof(Dropdown::$Show$c__AnonStorey1) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UI::Dropdown::$Show$c__AnonStorey1::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::UI::Dropdown::$Show$c__AnonStorey1::$$m__0
// Il2CppName: <>m__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::Dropdown::$Show$c__AnonStorey1::*)(bool)>(&UnityEngine::UI::Dropdown::$Show$c__AnonStorey1::$$m__0)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::Dropdown::$Show$c__AnonStorey1*), "<>m__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
