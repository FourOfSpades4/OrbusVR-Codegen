// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Valve.VR.InteractionSystem.Teleport
#include "Valve/VR/InteractionSystem/Teleport.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Valve::VR::InteractionSystem::Teleport::$TeleportHintCoroutine$d__105);
DEFINE_IL2CPP_ARG_TYPE(::Valve::VR::InteractionSystem::Teleport::$TeleportHintCoroutine$d__105*, "Valve.VR.InteractionSystem", "Teleport/<TeleportHintCoroutine>d__105");
// Type namespace: Valve.VR.InteractionSystem
namespace Valve::VR::InteractionSystem {
  // Size: 0x31
  #pragma pack(push, 1)
  // Autogenerated type: Valve.VR.InteractionSystem.Teleport/<TeleportHintCoroutine>d__105
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: AD0DF4
  class Teleport::$TeleportHintCoroutine$d__105 : public ::Il2CppObject/*, public ::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*/ {
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
    // public Valve.VR.InteractionSystem.Teleport <>4__this
    // Size: 0x8
    // Offset: 0x20
    ::Valve::VR::InteractionSystem::Teleport* $$4__this;
    // Field size check
    static_assert(sizeof(::Valve::VR::InteractionSystem::Teleport*) == 0x8);
    // private System.Single <prevBreakTime>5__2
    // Size: 0x4
    // Offset: 0x28
    float $prevBreakTime$5__2;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single <prevHapticPulseTime>5__3
    // Size: 0x4
    // Offset: 0x2C
    float $prevHapticPulseTime$5__3;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean <pulsed>5__4
    // Size: 0x1
    // Offset: 0x30
    bool $pulsed$5__4;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating interface conversion operator: operator ::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>
    operator ::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>() noexcept {
      return *reinterpret_cast<::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*>(this);
    }
    // Get instance field reference: private System.Int32 <>1__state
    [[deprecated("Use field access instead!")]] int& dyn_$$1__state();
    // Get instance field reference: private System.Object <>2__current
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn_$$2__current();
    // Get instance field reference: public Valve.VR.InteractionSystem.Teleport <>4__this
    [[deprecated("Use field access instead!")]] ::Valve::VR::InteractionSystem::Teleport*& dyn_$$4__this();
    // Get instance field reference: private System.Single <prevBreakTime>5__2
    [[deprecated("Use field access instead!")]] float& dyn_$prevBreakTime$5__2();
    // Get instance field reference: private System.Single <prevHapticPulseTime>5__3
    [[deprecated("Use field access instead!")]] float& dyn_$prevHapticPulseTime$5__3();
    // Get instance field reference: private System.Boolean <pulsed>5__4
    [[deprecated("Use field access instead!")]] bool& dyn_$pulsed$5__4();
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0xDC6764
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Teleport::$TeleportHintCoroutine$d__105* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Valve::VR::InteractionSystem::Teleport::$TeleportHintCoroutine$d__105::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Teleport::$TeleportHintCoroutine$d__105*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0xDC6B68
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0xDC6B6C
    bool MoveNext();
    // private System.Object System.Collections.Generic.IEnumerator<System.Object>.get_Current()
    // Offset: 0xDC6E00
    ::Il2CppObject* System_Collections_Generic_IEnumerator$System_Object$_get_Current();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0xDC6E08
    void System_Collections_IEnumerator_Reset();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0xDC6E70
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
  }; // Valve.VR.InteractionSystem.Teleport/<TeleportHintCoroutine>d__105
  #pragma pack(pop)
  static check_size<sizeof(Teleport::$TeleportHintCoroutine$d__105), 48 + sizeof(bool)> __Valve_VR_InteractionSystem_Teleport_$TeleportHintCoroutine$d__105SizeCheck;
  static_assert(sizeof(Teleport::$TeleportHintCoroutine$d__105) == 0x31);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Valve::VR::InteractionSystem::Teleport::$TeleportHintCoroutine$d__105::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Valve::VR::InteractionSystem::Teleport::$TeleportHintCoroutine$d__105::System_IDisposable_Dispose
// Il2CppName: System.IDisposable.Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Valve::VR::InteractionSystem::Teleport::$TeleportHintCoroutine$d__105::*)()>(&Valve::VR::InteractionSystem::Teleport::$TeleportHintCoroutine$d__105::System_IDisposable_Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::InteractionSystem::Teleport::$TeleportHintCoroutine$d__105*), "System.IDisposable.Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Valve::VR::InteractionSystem::Teleport::$TeleportHintCoroutine$d__105::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Valve::VR::InteractionSystem::Teleport::$TeleportHintCoroutine$d__105::*)()>(&Valve::VR::InteractionSystem::Teleport::$TeleportHintCoroutine$d__105::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::InteractionSystem::Teleport::$TeleportHintCoroutine$d__105*), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Valve::VR::InteractionSystem::Teleport::$TeleportHintCoroutine$d__105::System_Collections_Generic_IEnumerator$System_Object$_get_Current
// Il2CppName: System.Collections.Generic.IEnumerator<System.Object>.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (Valve::VR::InteractionSystem::Teleport::$TeleportHintCoroutine$d__105::*)()>(&Valve::VR::InteractionSystem::Teleport::$TeleportHintCoroutine$d__105::System_Collections_Generic_IEnumerator$System_Object$_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::InteractionSystem::Teleport::$TeleportHintCoroutine$d__105*), "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Valve::VR::InteractionSystem::Teleport::$TeleportHintCoroutine$d__105::System_Collections_IEnumerator_Reset
// Il2CppName: System.Collections.IEnumerator.Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Valve::VR::InteractionSystem::Teleport::$TeleportHintCoroutine$d__105::*)()>(&Valve::VR::InteractionSystem::Teleport::$TeleportHintCoroutine$d__105::System_Collections_IEnumerator_Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::InteractionSystem::Teleport::$TeleportHintCoroutine$d__105*), "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Valve::VR::InteractionSystem::Teleport::$TeleportHintCoroutine$d__105::System_Collections_IEnumerator_get_Current
// Il2CppName: System.Collections.IEnumerator.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (Valve::VR::InteractionSystem::Teleport::$TeleportHintCoroutine$d__105::*)()>(&Valve::VR::InteractionSystem::Teleport::$TeleportHintCoroutine$d__105::System_Collections_IEnumerator_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::InteractionSystem::Teleport::$TeleportHintCoroutine$d__105*), "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
