// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: PowerUI.DocumentElements
#include "PowerUI/DocumentElements.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: PowerUI
namespace PowerUI {
  // Forward declaring type: Element
  class Element;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PowerUI::DocumentElements::$GetEnumerator$d__4);
DEFINE_IL2CPP_ARG_TYPE(::PowerUI::DocumentElements::$GetEnumerator$d__4*, "PowerUI", "DocumentElements/<GetEnumerator>d__4");
// Type namespace: PowerUI
namespace PowerUI {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: PowerUI.DocumentElements/<GetEnumerator>d__4
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: AD1358
  class DocumentElements::$GetEnumerator$d__4 : public ::Il2CppObject/*, public ::System::Collections::Generic::IEnumerator_1<::PowerUI::Element*>*/ {
    public:
    public:
    // private System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x10
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: $$1__state and: $$2__current
    char __padding0[0x4] = {};
    // private PowerUI.Element <>2__current
    // Size: 0x8
    // Offset: 0x18
    ::PowerUI::Element* $$2__current;
    // Field size check
    static_assert(sizeof(::PowerUI::Element*) == 0x8);
    // public PowerUI.DocumentElements <>4__this
    // Size: 0x8
    // Offset: 0x20
    ::PowerUI::DocumentElements* $$4__this;
    // Field size check
    static_assert(sizeof(::PowerUI::DocumentElements*) == 0x8);
    // private System.Collections.Generic.IEnumerator`1<PowerUI.Element> <>7__wrap1
    // Size: 0x8
    // Offset: 0x28
    ::System::Collections::Generic::IEnumerator_1<::PowerUI::Element*>* $$7__wrap1;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::IEnumerator_1<::PowerUI::Element*>*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::Collections::Generic::IEnumerator_1<::PowerUI::Element*>
    operator ::System::Collections::Generic::IEnumerator_1<::PowerUI::Element*>() noexcept {
      return *reinterpret_cast<::System::Collections::Generic::IEnumerator_1<::PowerUI::Element*>*>(this);
    }
    // Get instance field reference: private System.Int32 <>1__state
    [[deprecated("Use field access instead!")]] int& dyn_$$1__state();
    // Get instance field reference: private PowerUI.Element <>2__current
    [[deprecated("Use field access instead!")]] ::PowerUI::Element*& dyn_$$2__current();
    // Get instance field reference: public PowerUI.DocumentElements <>4__this
    [[deprecated("Use field access instead!")]] ::PowerUI::DocumentElements*& dyn_$$4__this();
    // Get instance field reference: private System.Collections.Generic.IEnumerator`1<PowerUI.Element> <>7__wrap1
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::IEnumerator_1<::PowerUI::Element*>*& dyn_$$7__wrap1();
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x1857B90
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DocumentElements::$GetEnumerator$d__4* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("::PowerUI::DocumentElements::$GetEnumerator$d__4::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DocumentElements::$GetEnumerator$d__4*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x1857BC0
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x1857C9C
    bool MoveNext();
    // private System.Void <>m__Finally1()
    // Offset: 0x1857BDC
    void $$m__Finally1();
    // private PowerUI.Element System.Collections.Generic.IEnumerator<PowerUI.Element>.get_Current()
    // Offset: 0x1857F38
    ::PowerUI::Element* System_Collections_Generic_IEnumerator$PowerUI_Element$_get_Current();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x1857F40
    void System_Collections_IEnumerator_Reset();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x1857FA8
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
  }; // PowerUI.DocumentElements/<GetEnumerator>d__4
  #pragma pack(pop)
  static check_size<sizeof(DocumentElements::$GetEnumerator$d__4), 40 + sizeof(::System::Collections::Generic::IEnumerator_1<::PowerUI::Element*>*)> __PowerUI_DocumentElements_$GetEnumerator$d__4SizeCheck;
  static_assert(sizeof(DocumentElements::$GetEnumerator$d__4) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PowerUI::DocumentElements::$GetEnumerator$d__4::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: PowerUI::DocumentElements::$GetEnumerator$d__4::System_IDisposable_Dispose
// Il2CppName: System.IDisposable.Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (PowerUI::DocumentElements::$GetEnumerator$d__4::*)()>(&PowerUI::DocumentElements::$GetEnumerator$d__4::System_IDisposable_Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(PowerUI::DocumentElements::$GetEnumerator$d__4*), "System.IDisposable.Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: PowerUI::DocumentElements::$GetEnumerator$d__4::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (PowerUI::DocumentElements::$GetEnumerator$d__4::*)()>(&PowerUI::DocumentElements::$GetEnumerator$d__4::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(PowerUI::DocumentElements::$GetEnumerator$d__4*), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: PowerUI::DocumentElements::$GetEnumerator$d__4::$$m__Finally1
// Il2CppName: <>m__Finally1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (PowerUI::DocumentElements::$GetEnumerator$d__4::*)()>(&PowerUI::DocumentElements::$GetEnumerator$d__4::$$m__Finally1)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(PowerUI::DocumentElements::$GetEnumerator$d__4*), "<>m__Finally1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: PowerUI::DocumentElements::$GetEnumerator$d__4::System_Collections_Generic_IEnumerator$PowerUI_Element$_get_Current
// Il2CppName: System.Collections.Generic.IEnumerator<PowerUI.Element>.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::PowerUI::Element* (PowerUI::DocumentElements::$GetEnumerator$d__4::*)()>(&PowerUI::DocumentElements::$GetEnumerator$d__4::System_Collections_Generic_IEnumerator$PowerUI_Element$_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(PowerUI::DocumentElements::$GetEnumerator$d__4*), "System.Collections.Generic.IEnumerator<PowerUI.Element>.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: PowerUI::DocumentElements::$GetEnumerator$d__4::System_Collections_IEnumerator_Reset
// Il2CppName: System.Collections.IEnumerator.Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (PowerUI::DocumentElements::$GetEnumerator$d__4::*)()>(&PowerUI::DocumentElements::$GetEnumerator$d__4::System_Collections_IEnumerator_Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(PowerUI::DocumentElements::$GetEnumerator$d__4*), "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: PowerUI::DocumentElements::$GetEnumerator$d__4::System_Collections_IEnumerator_get_Current
// Il2CppName: System.Collections.IEnumerator.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (PowerUI::DocumentElements::$GetEnumerator$d__4::*)()>(&PowerUI::DocumentElements::$GetEnumerator$d__4::System_Collections_IEnumerator_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(PowerUI::DocumentElements::$GetEnumerator$d__4*), "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
