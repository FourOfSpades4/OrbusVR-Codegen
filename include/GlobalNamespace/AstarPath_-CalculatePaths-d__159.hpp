// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: AstarPath
#include "GlobalNamespace/AstarPath.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Pathfinding
namespace Pathfinding {
  // Forward declaring type: PathHandler
  class PathHandler;
  // Forward declaring type: Path
  class Path;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::AstarPath::$CalculatePaths$d__159);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AstarPath::$CalculatePaths$d__159*, "", "AstarPath/<CalculatePaths>d__159");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x68
  #pragma pack(push, 1)
  // Autogenerated type: AstarPath/<CalculatePaths>d__159
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: ACD0F8
  class AstarPath::$CalculatePaths$d__159 : public ::Il2CppObject/*, public ::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*/ {
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
    // public System.Object _threadInfo
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppObject* threadInfo;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private System.Int32 <numPaths>5__2
    // Size: 0x4
    // Offset: 0x28
    int $numPaths$5__2;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: $numPaths$5__2 and: $runData$5__3
    char __padding3[0x4] = {};
    // private Pathfinding.PathHandler <runData>5__3
    // Size: 0x8
    // Offset: 0x30
    ::Pathfinding::PathHandler* $runData$5__3;
    // Field size check
    static_assert(sizeof(::Pathfinding::PathHandler*) == 0x8);
    // private AstarPath <astar>5__4
    // Size: 0x8
    // Offset: 0x38
    ::GlobalNamespace::AstarPath* $astar$5__4;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::AstarPath*) == 0x8);
    // private System.Int64 <maxTicks>5__5
    // Size: 0x8
    // Offset: 0x40
    int64_t $maxTicks$5__5;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // private System.Int64 <targetTick>5__6
    // Size: 0x8
    // Offset: 0x48
    int64_t $targetTick$5__6;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // private Pathfinding.Path <p>5__7
    // Size: 0x8
    // Offset: 0x50
    ::Pathfinding::Path* $p$5__7;
    // Field size check
    static_assert(sizeof(::Pathfinding::Path*) == 0x8);
    // private System.Boolean <blockedBefore>5__8
    // Size: 0x1
    // Offset: 0x58
    bool $blockedBefore$5__8;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: $blockedBefore$5__8 and: $totalTicks$5__9
    char __padding9[0x7] = {};
    // private System.Int64 <totalTicks>5__9
    // Size: 0x8
    // Offset: 0x60
    int64_t $totalTicks$5__9;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>
    operator ::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>() noexcept {
      return *reinterpret_cast<::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*>(this);
    }
    // Get instance field reference: private System.Int32 <>1__state
    [[deprecated("Use field access instead!")]] int& dyn_$$1__state();
    // Get instance field reference: private System.Object <>2__current
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn_$$2__current();
    // Get instance field reference: public System.Object _threadInfo
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn__threadInfo();
    // Get instance field reference: private System.Int32 <numPaths>5__2
    [[deprecated("Use field access instead!")]] int& dyn_$numPaths$5__2();
    // Get instance field reference: private Pathfinding.PathHandler <runData>5__3
    [[deprecated("Use field access instead!")]] ::Pathfinding::PathHandler*& dyn_$runData$5__3();
    // Get instance field reference: private AstarPath <astar>5__4
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::AstarPath*& dyn_$astar$5__4();
    // Get instance field reference: private System.Int64 <maxTicks>5__5
    [[deprecated("Use field access instead!")]] int64_t& dyn_$maxTicks$5__5();
    // Get instance field reference: private System.Int64 <targetTick>5__6
    [[deprecated("Use field access instead!")]] int64_t& dyn_$targetTick$5__6();
    // Get instance field reference: private Pathfinding.Path <p>5__7
    [[deprecated("Use field access instead!")]] ::Pathfinding::Path*& dyn_$p$5__7();
    // Get instance field reference: private System.Boolean <blockedBefore>5__8
    [[deprecated("Use field access instead!")]] bool& dyn_$blockedBefore$5__8();
    // Get instance field reference: private System.Int64 <totalTicks>5__9
    [[deprecated("Use field access instead!")]] int64_t& dyn_$totalTicks$5__9();
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x12A56DC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AstarPath::$CalculatePaths$d__159* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::AstarPath::$CalculatePaths$d__159::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AstarPath::$CalculatePaths$d__159*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x12A6B68
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x12A6B6C
    bool MoveNext();
    // private System.Object System.Collections.Generic.IEnumerator<System.Object>.get_Current()
    // Offset: 0x12A7500
    ::Il2CppObject* System_Collections_Generic_IEnumerator$System_Object$_get_Current();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x12A7508
    void System_Collections_IEnumerator_Reset();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x12A7570
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
  }; // AstarPath/<CalculatePaths>d__159
  #pragma pack(pop)
  static check_size<sizeof(AstarPath::$CalculatePaths$d__159), 96 + sizeof(int64_t)> __GlobalNamespace_AstarPath_$CalculatePaths$d__159SizeCheck;
  static_assert(sizeof(AstarPath::$CalculatePaths$d__159) == 0x68);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::AstarPath::$CalculatePaths$d__159::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::AstarPath::$CalculatePaths$d__159::System_IDisposable_Dispose
// Il2CppName: System.IDisposable.Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AstarPath::$CalculatePaths$d__159::*)()>(&GlobalNamespace::AstarPath::$CalculatePaths$d__159::System_IDisposable_Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AstarPath::$CalculatePaths$d__159*), "System.IDisposable.Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AstarPath::$CalculatePaths$d__159::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::AstarPath::$CalculatePaths$d__159::*)()>(&GlobalNamespace::AstarPath::$CalculatePaths$d__159::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AstarPath::$CalculatePaths$d__159*), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AstarPath::$CalculatePaths$d__159::System_Collections_Generic_IEnumerator$System_Object$_get_Current
// Il2CppName: System.Collections.Generic.IEnumerator<System.Object>.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (GlobalNamespace::AstarPath::$CalculatePaths$d__159::*)()>(&GlobalNamespace::AstarPath::$CalculatePaths$d__159::System_Collections_Generic_IEnumerator$System_Object$_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AstarPath::$CalculatePaths$d__159*), "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AstarPath::$CalculatePaths$d__159::System_Collections_IEnumerator_Reset
// Il2CppName: System.Collections.IEnumerator.Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AstarPath::$CalculatePaths$d__159::*)()>(&GlobalNamespace::AstarPath::$CalculatePaths$d__159::System_Collections_IEnumerator_Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AstarPath::$CalculatePaths$d__159*), "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AstarPath::$CalculatePaths$d__159::System_Collections_IEnumerator_get_Current
// Il2CppName: System.Collections.IEnumerator.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (GlobalNamespace::AstarPath::$CalculatePaths$d__159::*)()>(&GlobalNamespace::AstarPath::$CalculatePaths$d__159::System_Collections_IEnumerator_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AstarPath::$CalculatePaths$d__159*), "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
