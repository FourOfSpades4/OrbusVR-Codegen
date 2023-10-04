// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: ProgressBarPro
#include "GlobalNamespace/ProgressBarPro.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::ProgressBarPro::$DoBarSizeAnim$d__20);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ProgressBarPro::$DoBarSizeAnim$d__20*, "", "ProgressBarPro/<DoBarSizeAnim>d__20");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: ProgressBarPro/<DoBarSizeAnim>d__20
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: ACE714
  class ProgressBarPro::$DoBarSizeAnim$d__20 : public ::Il2CppObject/*, public ::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*/ {
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
    // public ProgressBarPro <>4__this
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::ProgressBarPro* $$4__this;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::ProgressBarPro*) == 0x8);
    // private System.Single <startValue>5__2
    // Size: 0x4
    // Offset: 0x28
    float $startValue$5__2;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single <time>5__3
    // Size: 0x4
    // Offset: 0x2C
    float $time$5__3;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single <change>5__4
    // Size: 0x4
    // Offset: 0x30
    float $change$5__4;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single <duration>5__5
    // Size: 0x4
    // Offset: 0x34
    float $duration$5__5;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Creating interface conversion operator: operator ::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>
    operator ::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>() noexcept {
      return *reinterpret_cast<::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*>(this);
    }
    // Get instance field reference: private System.Int32 <>1__state
    [[deprecated("Use field access instead!")]] int& dyn_$$1__state();
    // Get instance field reference: private System.Object <>2__current
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn_$$2__current();
    // Get instance field reference: public ProgressBarPro <>4__this
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::ProgressBarPro*& dyn_$$4__this();
    // Get instance field reference: private System.Single <startValue>5__2
    [[deprecated("Use field access instead!")]] float& dyn_$startValue$5__2();
    // Get instance field reference: private System.Single <time>5__3
    [[deprecated("Use field access instead!")]] float& dyn_$time$5__3();
    // Get instance field reference: private System.Single <change>5__4
    [[deprecated("Use field access instead!")]] float& dyn_$change$5__4();
    // Get instance field reference: private System.Single <duration>5__5
    [[deprecated("Use field access instead!")]] float& dyn_$duration$5__5();
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0xE214B8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ProgressBarPro::$DoBarSizeAnim$d__20* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::ProgressBarPro::$DoBarSizeAnim$d__20::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ProgressBarPro::$DoBarSizeAnim$d__20*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0xE216D8
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0xE216DC
    bool MoveNext();
    // private System.Object System.Collections.Generic.IEnumerator<System.Object>.get_Current()
    // Offset: 0xE218AC
    ::Il2CppObject* System_Collections_Generic_IEnumerator$System_Object$_get_Current();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0xE218B4
    void System_Collections_IEnumerator_Reset();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0xE2191C
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
  }; // ProgressBarPro/<DoBarSizeAnim>d__20
  #pragma pack(pop)
  static check_size<sizeof(ProgressBarPro::$DoBarSizeAnim$d__20), 52 + sizeof(float)> __GlobalNamespace_ProgressBarPro_$DoBarSizeAnim$d__20SizeCheck;
  static_assert(sizeof(ProgressBarPro::$DoBarSizeAnim$d__20) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ProgressBarPro::$DoBarSizeAnim$d__20::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::ProgressBarPro::$DoBarSizeAnim$d__20::System_IDisposable_Dispose
// Il2CppName: System.IDisposable.Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ProgressBarPro::$DoBarSizeAnim$d__20::*)()>(&GlobalNamespace::ProgressBarPro::$DoBarSizeAnim$d__20::System_IDisposable_Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ProgressBarPro::$DoBarSizeAnim$d__20*), "System.IDisposable.Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ProgressBarPro::$DoBarSizeAnim$d__20::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::ProgressBarPro::$DoBarSizeAnim$d__20::*)()>(&GlobalNamespace::ProgressBarPro::$DoBarSizeAnim$d__20::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ProgressBarPro::$DoBarSizeAnim$d__20*), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ProgressBarPro::$DoBarSizeAnim$d__20::System_Collections_Generic_IEnumerator$System_Object$_get_Current
// Il2CppName: System.Collections.Generic.IEnumerator<System.Object>.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (GlobalNamespace::ProgressBarPro::$DoBarSizeAnim$d__20::*)()>(&GlobalNamespace::ProgressBarPro::$DoBarSizeAnim$d__20::System_Collections_Generic_IEnumerator$System_Object$_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ProgressBarPro::$DoBarSizeAnim$d__20*), "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ProgressBarPro::$DoBarSizeAnim$d__20::System_Collections_IEnumerator_Reset
// Il2CppName: System.Collections.IEnumerator.Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ProgressBarPro::$DoBarSizeAnim$d__20::*)()>(&GlobalNamespace::ProgressBarPro::$DoBarSizeAnim$d__20::System_Collections_IEnumerator_Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ProgressBarPro::$DoBarSizeAnim$d__20*), "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ProgressBarPro::$DoBarSizeAnim$d__20::System_Collections_IEnumerator_get_Current
// Il2CppName: System.Collections.IEnumerator.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (GlobalNamespace::ProgressBarPro::$DoBarSizeAnim$d__20::*)()>(&GlobalNamespace::ProgressBarPro::$DoBarSizeAnim$d__20::System_Collections_IEnumerator_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ProgressBarPro::$DoBarSizeAnim$d__20*), "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
