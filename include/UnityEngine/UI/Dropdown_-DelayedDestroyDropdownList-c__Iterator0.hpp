// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.UI.Dropdown
#include "UnityEngine/UI/Dropdown.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::UI::Dropdown::$DelayedDestroyDropdownList$c__Iterator0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::Dropdown::$DelayedDestroyDropdownList$c__Iterator0*, "UnityEngine.UI", "Dropdown/<DelayedDestroyDropdownList>c__Iterator0");
// Type namespace: UnityEngine.UI
namespace UnityEngine::UI {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UI.Dropdown/<DelayedDestroyDropdownList>c__Iterator0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: AAF3E0
  class Dropdown::$DelayedDestroyDropdownList$c__Iterator0 : public ::Il2CppObject/*, public ::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*/ {
    public:
    public:
    // System.Single delay
    // Size: 0x4
    // Offset: 0x10
    float delay;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: delay and: $this
    char __padding0[0x4] = {};
    // UnityEngine.UI.Dropdown $this
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::UI::Dropdown* $this;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Dropdown*) == 0x8);
    // System.Object $current
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppObject* $current;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // System.Boolean $disposing
    // Size: 0x1
    // Offset: 0x28
    bool $disposing;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: $disposing and: $PC
    char __padding3[0x3] = {};
    // System.Int32 $PC
    // Size: 0x4
    // Offset: 0x2C
    int $PC;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating interface conversion operator: operator ::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>
    operator ::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>() noexcept {
      return *reinterpret_cast<::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*>(this);
    }
    // Get instance field reference: System.Single delay
    [[deprecated("Use field access instead!")]] float& dyn_delay();
    // Get instance field reference: UnityEngine.UI.Dropdown $this
    [[deprecated("Use field access instead!")]] ::UnityEngine::UI::Dropdown*& dyn_$this();
    // Get instance field reference: System.Object $current
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn_$current();
    // Get instance field reference: System.Boolean $disposing
    [[deprecated("Use field access instead!")]] bool& dyn_$disposing();
    // Get instance field reference: System.Int32 $PC
    [[deprecated("Use field access instead!")]] int& dyn_$PC();
    // public System.Void .ctor()
    // Offset: 0x1C41EC4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Dropdown::$DelayedDestroyDropdownList$c__Iterator0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UI::Dropdown::$DelayedDestroyDropdownList$c__Iterator0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Dropdown::$DelayedDestroyDropdownList$c__Iterator0*, creationType>()));
    }
    // public System.Boolean MoveNext()
    // Offset: 0x1C41ECC
    bool MoveNext();
    // private System.Object System.Collections.Generic.IEnumerator<object>.get_Current()
    // Offset: 0x1C42160
    ::Il2CppObject* System_Collections_Generic_IEnumerator$object$_get_Current();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x1C42168
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
    // public System.Void Dispose()
    // Offset: 0x1C42170
    void Dispose();
    // public System.Void Reset()
    // Offset: 0x1C42184
    void Reset();
  }; // UnityEngine.UI.Dropdown/<DelayedDestroyDropdownList>c__Iterator0
  #pragma pack(pop)
  static check_size<sizeof(Dropdown::$DelayedDestroyDropdownList$c__Iterator0), 44 + sizeof(int)> __UnityEngine_UI_Dropdown_$DelayedDestroyDropdownList$c__Iterator0SizeCheck;
  static_assert(sizeof(Dropdown::$DelayedDestroyDropdownList$c__Iterator0) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UI::Dropdown::$DelayedDestroyDropdownList$c__Iterator0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::UI::Dropdown::$DelayedDestroyDropdownList$c__Iterator0::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UI::Dropdown::$DelayedDestroyDropdownList$c__Iterator0::*)()>(&UnityEngine::UI::Dropdown::$DelayedDestroyDropdownList$c__Iterator0::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::Dropdown::$DelayedDestroyDropdownList$c__Iterator0*), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::Dropdown::$DelayedDestroyDropdownList$c__Iterator0::System_Collections_Generic_IEnumerator$object$_get_Current
// Il2CppName: System.Collections.Generic.IEnumerator<object>.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (UnityEngine::UI::Dropdown::$DelayedDestroyDropdownList$c__Iterator0::*)()>(&UnityEngine::UI::Dropdown::$DelayedDestroyDropdownList$c__Iterator0::System_Collections_Generic_IEnumerator$object$_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::Dropdown::$DelayedDestroyDropdownList$c__Iterator0*), "System.Collections.Generic.IEnumerator<object>.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::Dropdown::$DelayedDestroyDropdownList$c__Iterator0::System_Collections_IEnumerator_get_Current
// Il2CppName: System.Collections.IEnumerator.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (UnityEngine::UI::Dropdown::$DelayedDestroyDropdownList$c__Iterator0::*)()>(&UnityEngine::UI::Dropdown::$DelayedDestroyDropdownList$c__Iterator0::System_Collections_IEnumerator_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::Dropdown::$DelayedDestroyDropdownList$c__Iterator0*), "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::Dropdown::$DelayedDestroyDropdownList$c__Iterator0::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::Dropdown::$DelayedDestroyDropdownList$c__Iterator0::*)()>(&UnityEngine::UI::Dropdown::$DelayedDestroyDropdownList$c__Iterator0::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::Dropdown::$DelayedDestroyDropdownList$c__Iterator0*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::Dropdown::$DelayedDestroyDropdownList$c__Iterator0::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::Dropdown::$DelayedDestroyDropdownList$c__Iterator0::*)()>(&UnityEngine::UI::Dropdown::$DelayedDestroyDropdownList$c__Iterator0::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::Dropdown::$DelayedDestroyDropdownList$c__Iterator0*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
