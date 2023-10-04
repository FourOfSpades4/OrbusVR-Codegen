// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.UI.InputField
#include "UnityEngine/UI/InputField.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::UI::InputField::$CaretBlink$c__Iterator0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::InputField::$CaretBlink$c__Iterator0*, "UnityEngine.UI", "InputField/<CaretBlink>c__Iterator0");
// Type namespace: UnityEngine.UI
namespace UnityEngine::UI {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UI.InputField/<CaretBlink>c__Iterator0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: AAF3F0
  class InputField::$CaretBlink$c__Iterator0 : public ::Il2CppObject/*, public ::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*/ {
    public:
    public:
    // System.Single <blinkPeriod>__1
    // Size: 0x4
    // Offset: 0x10
    float $blinkPeriod$__1;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // System.Boolean <blinkState>__1
    // Size: 0x1
    // Offset: 0x14
    bool $blinkState$__1;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: $blinkState$__1 and: $this
    char __padding1[0x3] = {};
    // UnityEngine.UI.InputField $this
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::UI::InputField* $this;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::InputField*) == 0x8);
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
    char __padding4[0x3] = {};
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
    // Get instance field reference: System.Single <blinkPeriod>__1
    [[deprecated("Use field access instead!")]] float& dyn_$blinkPeriod$__1();
    // Get instance field reference: System.Boolean <blinkState>__1
    [[deprecated("Use field access instead!")]] bool& dyn_$blinkState$__1();
    // Get instance field reference: UnityEngine.UI.InputField $this
    [[deprecated("Use field access instead!")]] ::UnityEngine::UI::InputField*& dyn_$this();
    // Get instance field reference: System.Object $current
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn_$current();
    // Get instance field reference: System.Boolean $disposing
    [[deprecated("Use field access instead!")]] bool& dyn_$disposing();
    // Get instance field reference: System.Int32 $PC
    [[deprecated("Use field access instead!")]] int& dyn_$PC();
    // public System.Void .ctor()
    // Offset: 0x1C54BA4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InputField::$CaretBlink$c__Iterator0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UI::InputField::$CaretBlink$c__Iterator0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InputField::$CaretBlink$c__Iterator0*, creationType>()));
    }
    // public System.Boolean MoveNext()
    // Offset: 0x1C5CAE0
    bool MoveNext();
    // private System.Object System.Collections.Generic.IEnumerator<object>.get_Current()
    // Offset: 0x1C5CCB8
    ::Il2CppObject* System_Collections_Generic_IEnumerator$object$_get_Current();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x1C5CCC0
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
    // public System.Void Dispose()
    // Offset: 0x1C5CCC8
    void Dispose();
    // public System.Void Reset()
    // Offset: 0x1C5CCDC
    void Reset();
  }; // UnityEngine.UI.InputField/<CaretBlink>c__Iterator0
  #pragma pack(pop)
  static check_size<sizeof(InputField::$CaretBlink$c__Iterator0), 44 + sizeof(int)> __UnityEngine_UI_InputField_$CaretBlink$c__Iterator0SizeCheck;
  static_assert(sizeof(InputField::$CaretBlink$c__Iterator0) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UI::InputField::$CaretBlink$c__Iterator0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::UI::InputField::$CaretBlink$c__Iterator0::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UI::InputField::$CaretBlink$c__Iterator0::*)()>(&UnityEngine::UI::InputField::$CaretBlink$c__Iterator0::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::InputField::$CaretBlink$c__Iterator0*), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::InputField::$CaretBlink$c__Iterator0::System_Collections_Generic_IEnumerator$object$_get_Current
// Il2CppName: System.Collections.Generic.IEnumerator<object>.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (UnityEngine::UI::InputField::$CaretBlink$c__Iterator0::*)()>(&UnityEngine::UI::InputField::$CaretBlink$c__Iterator0::System_Collections_Generic_IEnumerator$object$_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::InputField::$CaretBlink$c__Iterator0*), "System.Collections.Generic.IEnumerator<object>.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::InputField::$CaretBlink$c__Iterator0::System_Collections_IEnumerator_get_Current
// Il2CppName: System.Collections.IEnumerator.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (UnityEngine::UI::InputField::$CaretBlink$c__Iterator0::*)()>(&UnityEngine::UI::InputField::$CaretBlink$c__Iterator0::System_Collections_IEnumerator_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::InputField::$CaretBlink$c__Iterator0*), "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::InputField::$CaretBlink$c__Iterator0::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::InputField::$CaretBlink$c__Iterator0::*)()>(&UnityEngine::UI::InputField::$CaretBlink$c__Iterator0::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::InputField::$CaretBlink$c__Iterator0*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::InputField::$CaretBlink$c__Iterator0::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::InputField::$CaretBlink$c__Iterator0::*)()>(&UnityEngine::UI::InputField::$CaretBlink$c__Iterator0::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::InputField::$CaretBlink$c__Iterator0*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};