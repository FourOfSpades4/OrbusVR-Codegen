// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: ExtUI.InterfaceAPI
#include "ExtUI/InterfaceAPI.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: WWW
  class WWW;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::ExtUI::InterfaceAPI::$finalizeOculusIap$d__318);
DEFINE_IL2CPP_ARG_TYPE(::ExtUI::InterfaceAPI::$finalizeOculusIap$d__318*, "ExtUI", "InterfaceAPI/<finalizeOculusIap>d__318");
// Type namespace: ExtUI
namespace ExtUI {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: ExtUI.InterfaceAPI/<finalizeOculusIap>d__318
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: AD1B58
  class InterfaceAPI::$finalizeOculusIap$d__318 : public ::Il2CppObject/*, public ::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*/ {
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
    // private System.Object <>2__current
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppObject* $$2__current;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // public System.String sku
    // Size: 0x8
    // Offset: 0x20
    ::StringW sku;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String nonce
    // Size: 0x8
    // Offset: 0x28
    ::StringW nonce;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Boolean initialCheck
    // Size: 0x1
    // Offset: 0x30
    bool initialCheck;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: initialCheck and: $www$5__2
    char __padding4[0x7] = {};
    // private UnityEngine.WWW <www>5__2
    // Size: 0x8
    // Offset: 0x38
    ::UnityEngine::WWW* $www$5__2;
    // Field size check
    static_assert(sizeof(::UnityEngine::WWW*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>
    operator ::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>() noexcept {
      return *reinterpret_cast<::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*>(this);
    }
    // Get instance field reference: private System.Int32 <>1__state
    [[deprecated("Use field access instead!")]] int& dyn_$$1__state();
    // Get instance field reference: private System.Object <>2__current
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn_$$2__current();
    // Get instance field reference: public System.String sku
    [[deprecated("Use field access instead!")]] ::StringW& dyn_sku();
    // Get instance field reference: public System.String nonce
    [[deprecated("Use field access instead!")]] ::StringW& dyn_nonce();
    // Get instance field reference: public System.Boolean initialCheck
    [[deprecated("Use field access instead!")]] bool& dyn_initialCheck();
    // Get instance field reference: private UnityEngine.WWW <www>5__2
    [[deprecated("Use field access instead!")]] ::UnityEngine::WWW*& dyn_$www$5__2();
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x28DE0D8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InterfaceAPI::$finalizeOculusIap$d__318* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("::ExtUI::InterfaceAPI::$finalizeOculusIap$d__318::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InterfaceAPI::$finalizeOculusIap$d__318*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x28E1494
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x28E1498
    bool MoveNext();
    // private System.Object System.Collections.Generic.IEnumerator<System.Object>.get_Current()
    // Offset: 0x28E1CA0
    ::Il2CppObject* System_Collections_Generic_IEnumerator$System_Object$_get_Current();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x28E1CA8
    void System_Collections_IEnumerator_Reset();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x28E1D10
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
  }; // ExtUI.InterfaceAPI/<finalizeOculusIap>d__318
  #pragma pack(pop)
  static check_size<sizeof(InterfaceAPI::$finalizeOculusIap$d__318), 56 + sizeof(::UnityEngine::WWW*)> __ExtUI_InterfaceAPI_$finalizeOculusIap$d__318SizeCheck;
  static_assert(sizeof(InterfaceAPI::$finalizeOculusIap$d__318) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: ExtUI::InterfaceAPI::$finalizeOculusIap$d__318::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: ExtUI::InterfaceAPI::$finalizeOculusIap$d__318::System_IDisposable_Dispose
// Il2CppName: System.IDisposable.Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (ExtUI::InterfaceAPI::$finalizeOculusIap$d__318::*)()>(&ExtUI::InterfaceAPI::$finalizeOculusIap$d__318::System_IDisposable_Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ExtUI::InterfaceAPI::$finalizeOculusIap$d__318*), "System.IDisposable.Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: ExtUI::InterfaceAPI::$finalizeOculusIap$d__318::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (ExtUI::InterfaceAPI::$finalizeOculusIap$d__318::*)()>(&ExtUI::InterfaceAPI::$finalizeOculusIap$d__318::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ExtUI::InterfaceAPI::$finalizeOculusIap$d__318*), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: ExtUI::InterfaceAPI::$finalizeOculusIap$d__318::System_Collections_Generic_IEnumerator$System_Object$_get_Current
// Il2CppName: System.Collections.Generic.IEnumerator<System.Object>.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (ExtUI::InterfaceAPI::$finalizeOculusIap$d__318::*)()>(&ExtUI::InterfaceAPI::$finalizeOculusIap$d__318::System_Collections_Generic_IEnumerator$System_Object$_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ExtUI::InterfaceAPI::$finalizeOculusIap$d__318*), "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: ExtUI::InterfaceAPI::$finalizeOculusIap$d__318::System_Collections_IEnumerator_Reset
// Il2CppName: System.Collections.IEnumerator.Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (ExtUI::InterfaceAPI::$finalizeOculusIap$d__318::*)()>(&ExtUI::InterfaceAPI::$finalizeOculusIap$d__318::System_Collections_IEnumerator_Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ExtUI::InterfaceAPI::$finalizeOculusIap$d__318*), "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: ExtUI::InterfaceAPI::$finalizeOculusIap$d__318::System_Collections_IEnumerator_get_Current
// Il2CppName: System.Collections.IEnumerator.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (ExtUI::InterfaceAPI::$finalizeOculusIap$d__318::*)()>(&ExtUI::InterfaceAPI::$finalizeOculusIap$d__318::System_Collections_IEnumerator_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ExtUI::InterfaceAPI::$finalizeOculusIap$d__318*), "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
