// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Funly.SkyStudio.NearbyStarRenderer
#include "Funly/SkyStudio/NearbyStarRenderer.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Funly::SkyStudio::NearbyStarRenderer::$ComputeStarData$d__7);
DEFINE_IL2CPP_ARG_TYPE(::Funly::SkyStudio::NearbyStarRenderer::$ComputeStarData$d__7*, "Funly.SkyStudio", "NearbyStarRenderer/<ComputeStarData>d__7");
// Type namespace: Funly.SkyStudio
namespace Funly::SkyStudio {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: Funly.SkyStudio.NearbyStarRenderer/<ComputeStarData>d__7
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: AD2460
  class NearbyStarRenderer::$ComputeStarData$d__7 : public ::Il2CppObject/*, public ::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*/ {
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
    // public Funly.SkyStudio.NearbyStarRenderer <>4__this
    // Size: 0x8
    // Offset: 0x20
    ::Funly::SkyStudio::NearbyStarRenderer* $$4__this;
    // Field size check
    static_assert(sizeof(::Funly::SkyStudio::NearbyStarRenderer*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>
    operator ::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>() noexcept {
      return *reinterpret_cast<::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*>(this);
    }
    // Get instance field reference: private System.Int32 <>1__state
    [[deprecated("Use field access instead!")]] int& dyn_$$1__state();
    // Get instance field reference: private System.Object <>2__current
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn_$$2__current();
    // Get instance field reference: public Funly.SkyStudio.NearbyStarRenderer <>4__this
    [[deprecated("Use field access instead!")]] ::Funly::SkyStudio::NearbyStarRenderer*& dyn_$$4__this();
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x1512C18
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NearbyStarRenderer::$ComputeStarData$d__7* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Funly::SkyStudio::NearbyStarRenderer::$ComputeStarData$d__7::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NearbyStarRenderer::$ComputeStarData$d__7*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x1512C4C
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x1512C50
    bool MoveNext();
    // private System.Object System.Collections.Generic.IEnumerator<System.Object>.get_Current()
    // Offset: 0x1513010
    ::Il2CppObject* System_Collections_Generic_IEnumerator$System_Object$_get_Current();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x1513018
    void System_Collections_IEnumerator_Reset();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x1513080
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
  }; // Funly.SkyStudio.NearbyStarRenderer/<ComputeStarData>d__7
  #pragma pack(pop)
  static check_size<sizeof(NearbyStarRenderer::$ComputeStarData$d__7), 32 + sizeof(::Funly::SkyStudio::NearbyStarRenderer*)> __Funly_SkyStudio_NearbyStarRenderer_$ComputeStarData$d__7SizeCheck;
  static_assert(sizeof(NearbyStarRenderer::$ComputeStarData$d__7) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Funly::SkyStudio::NearbyStarRenderer::$ComputeStarData$d__7::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Funly::SkyStudio::NearbyStarRenderer::$ComputeStarData$d__7::System_IDisposable_Dispose
// Il2CppName: System.IDisposable.Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Funly::SkyStudio::NearbyStarRenderer::$ComputeStarData$d__7::*)()>(&Funly::SkyStudio::NearbyStarRenderer::$ComputeStarData$d__7::System_IDisposable_Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Funly::SkyStudio::NearbyStarRenderer::$ComputeStarData$d__7*), "System.IDisposable.Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Funly::SkyStudio::NearbyStarRenderer::$ComputeStarData$d__7::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Funly::SkyStudio::NearbyStarRenderer::$ComputeStarData$d__7::*)()>(&Funly::SkyStudio::NearbyStarRenderer::$ComputeStarData$d__7::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Funly::SkyStudio::NearbyStarRenderer::$ComputeStarData$d__7*), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Funly::SkyStudio::NearbyStarRenderer::$ComputeStarData$d__7::System_Collections_Generic_IEnumerator$System_Object$_get_Current
// Il2CppName: System.Collections.Generic.IEnumerator<System.Object>.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (Funly::SkyStudio::NearbyStarRenderer::$ComputeStarData$d__7::*)()>(&Funly::SkyStudio::NearbyStarRenderer::$ComputeStarData$d__7::System_Collections_Generic_IEnumerator$System_Object$_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Funly::SkyStudio::NearbyStarRenderer::$ComputeStarData$d__7*), "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Funly::SkyStudio::NearbyStarRenderer::$ComputeStarData$d__7::System_Collections_IEnumerator_Reset
// Il2CppName: System.Collections.IEnumerator.Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Funly::SkyStudio::NearbyStarRenderer::$ComputeStarData$d__7::*)()>(&Funly::SkyStudio::NearbyStarRenderer::$ComputeStarData$d__7::System_Collections_IEnumerator_Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Funly::SkyStudio::NearbyStarRenderer::$ComputeStarData$d__7*), "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Funly::SkyStudio::NearbyStarRenderer::$ComputeStarData$d__7::System_Collections_IEnumerator_get_Current
// Il2CppName: System.Collections.IEnumerator.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (Funly::SkyStudio::NearbyStarRenderer::$ComputeStarData$d__7::*)()>(&Funly::SkyStudio::NearbyStarRenderer::$ComputeStarData$d__7::System_Collections_IEnumerator_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Funly::SkyStudio::NearbyStarRenderer::$ComputeStarData$d__7*), "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
