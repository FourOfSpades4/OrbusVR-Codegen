// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: ProceduralGridMover
#include "GlobalNamespace/ProceduralGridMover.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
// Including type: Pathfinding.Int2
#include "Pathfinding/Int2.hpp"
// Including type: Pathfinding.IntRect
#include "Pathfinding/IntRect.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Pathfinding
namespace Pathfinding {
  // Forward declaring type: GridNode
  class GridNode;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::ProceduralGridMover::$UpdateGraphCoroutine$d__13);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ProceduralGridMover::$UpdateGraphCoroutine$d__13*, "", "ProceduralGridMover/<UpdateGraphCoroutine>d__13");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x58
  #pragma pack(push, 1)
  // Autogenerated type: ProceduralGridMover/<UpdateGraphCoroutine>d__13
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: ACD1E0
  class ProceduralGridMover::$UpdateGraphCoroutine$d__13 : public ::Il2CppObject/*, public ::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*/ {
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
    // public ProceduralGridMover <>4__this
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::ProceduralGridMover* $$4__this;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::ProceduralGridMover*) == 0x8);
    // private Pathfinding.Int2 <offset>5__2
    // Size: 0x8
    // Offset: 0x28
    ::Pathfinding::Int2 $offset$5__2;
    // Field size check
    static_assert(sizeof(::Pathfinding::Int2) == 0x8);
    // private System.Int32 <width>5__3
    // Size: 0x4
    // Offset: 0x30
    int $width$5__3;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 <depth>5__4
    // Size: 0x4
    // Offset: 0x34
    int $depth$5__4;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private Pathfinding.GridNode[] <nodes>5__5
    // Size: 0x8
    // Offset: 0x38
    ::ArrayW<::Pathfinding::GridNode*> $nodes$5__5;
    // Field size check
    static_assert(sizeof(::ArrayW<::Pathfinding::GridNode*>) == 0x8);
    // private Pathfinding.IntRect <r>5__6
    // Size: 0x10
    // Offset: 0x40
    ::Pathfinding::IntRect $r$5__6;
    // Field size check
    static_assert(sizeof(::Pathfinding::IntRect) == 0x10);
    // private System.Int32 <minz>5__7
    // Size: 0x4
    // Offset: 0x50
    int $minz$5__7;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 <maxz>5__8
    // Size: 0x4
    // Offset: 0x54
    int $maxz$5__8;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating interface conversion operator: operator ::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>
    operator ::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>() noexcept {
      return *reinterpret_cast<::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*>(this);
    }
    // Get instance field reference: private System.Int32 <>1__state
    [[deprecated("Use field access instead!")]] int& dyn_$$1__state();
    // Get instance field reference: private System.Object <>2__current
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn_$$2__current();
    // Get instance field reference: public ProceduralGridMover <>4__this
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::ProceduralGridMover*& dyn_$$4__this();
    // Get instance field reference: private Pathfinding.Int2 <offset>5__2
    [[deprecated("Use field access instead!")]] ::Pathfinding::Int2& dyn_$offset$5__2();
    // Get instance field reference: private System.Int32 <width>5__3
    [[deprecated("Use field access instead!")]] int& dyn_$width$5__3();
    // Get instance field reference: private System.Int32 <depth>5__4
    [[deprecated("Use field access instead!")]] int& dyn_$depth$5__4();
    // Get instance field reference: private Pathfinding.GridNode[] <nodes>5__5
    [[deprecated("Use field access instead!")]] ::ArrayW<::Pathfinding::GridNode*>& dyn_$nodes$5__5();
    // Get instance field reference: private Pathfinding.IntRect <r>5__6
    [[deprecated("Use field access instead!")]] ::Pathfinding::IntRect& dyn_$r$5__6();
    // Get instance field reference: private System.Int32 <minz>5__7
    [[deprecated("Use field access instead!")]] int& dyn_$minz$5__7();
    // Get instance field reference: private System.Int32 <maxz>5__8
    [[deprecated("Use field access instead!")]] int& dyn_$maxz$5__8();
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0xE1DB3C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ProceduralGridMover::$UpdateGraphCoroutine$d__13* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::ProceduralGridMover::$UpdateGraphCoroutine$d__13::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ProceduralGridMover::$UpdateGraphCoroutine$d__13*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0xE1DCDC
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0xE1DCE0
    bool MoveNext();
    // private System.Object System.Collections.Generic.IEnumerator<System.Object>.get_Current()
    // Offset: 0xE1EB14
    ::Il2CppObject* System_Collections_Generic_IEnumerator$System_Object$_get_Current();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0xE1EB1C
    void System_Collections_IEnumerator_Reset();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0xE1EB84
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
  }; // ProceduralGridMover/<UpdateGraphCoroutine>d__13
  #pragma pack(pop)
  static check_size<sizeof(ProceduralGridMover::$UpdateGraphCoroutine$d__13), 84 + sizeof(int)> __GlobalNamespace_ProceduralGridMover_$UpdateGraphCoroutine$d__13SizeCheck;
  static_assert(sizeof(ProceduralGridMover::$UpdateGraphCoroutine$d__13) == 0x58);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ProceduralGridMover::$UpdateGraphCoroutine$d__13::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::ProceduralGridMover::$UpdateGraphCoroutine$d__13::System_IDisposable_Dispose
// Il2CppName: System.IDisposable.Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ProceduralGridMover::$UpdateGraphCoroutine$d__13::*)()>(&GlobalNamespace::ProceduralGridMover::$UpdateGraphCoroutine$d__13::System_IDisposable_Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ProceduralGridMover::$UpdateGraphCoroutine$d__13*), "System.IDisposable.Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ProceduralGridMover::$UpdateGraphCoroutine$d__13::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::ProceduralGridMover::$UpdateGraphCoroutine$d__13::*)()>(&GlobalNamespace::ProceduralGridMover::$UpdateGraphCoroutine$d__13::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ProceduralGridMover::$UpdateGraphCoroutine$d__13*), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ProceduralGridMover::$UpdateGraphCoroutine$d__13::System_Collections_Generic_IEnumerator$System_Object$_get_Current
// Il2CppName: System.Collections.Generic.IEnumerator<System.Object>.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (GlobalNamespace::ProceduralGridMover::$UpdateGraphCoroutine$d__13::*)()>(&GlobalNamespace::ProceduralGridMover::$UpdateGraphCoroutine$d__13::System_Collections_Generic_IEnumerator$System_Object$_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ProceduralGridMover::$UpdateGraphCoroutine$d__13*), "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ProceduralGridMover::$UpdateGraphCoroutine$d__13::System_Collections_IEnumerator_Reset
// Il2CppName: System.Collections.IEnumerator.Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ProceduralGridMover::$UpdateGraphCoroutine$d__13::*)()>(&GlobalNamespace::ProceduralGridMover::$UpdateGraphCoroutine$d__13::System_Collections_IEnumerator_Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ProceduralGridMover::$UpdateGraphCoroutine$d__13*), "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ProceduralGridMover::$UpdateGraphCoroutine$d__13::System_Collections_IEnumerator_get_Current
// Il2CppName: System.Collections.IEnumerator.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (GlobalNamespace::ProceduralGridMover::$UpdateGraphCoroutine$d__13::*)()>(&GlobalNamespace::ProceduralGridMover::$UpdateGraphCoroutine$d__13::System_Collections_IEnumerator_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ProceduralGridMover::$UpdateGraphCoroutine$d__13*), "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
