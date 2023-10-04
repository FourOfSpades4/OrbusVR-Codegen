// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Diagnostics.Tracing.ActivityFilter
#include "System/Diagnostics/Tracing/ActivityFilter.hpp"
// Including type: System.Collections.Generic.IEnumerable`1
#include "System/Collections/Generic/IEnumerable_1.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
// Including type: System.Guid
#include "System/Guid.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Tuple`2<T1, T2>
  template<typename T1, typename T2>
  class Tuple_2;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Skipping declaration: IEnumerator because it is already included!
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Diagnostics::Tracing::ActivityFilter::$GetFilterAsTuple$d__7);
DEFINE_IL2CPP_ARG_TYPE(::System::Diagnostics::Tracing::ActivityFilter::$GetFilterAsTuple$d__7*, "System.Diagnostics.Tracing", "ActivityFilter/<GetFilterAsTuple>d__7");
// Type namespace: System.Diagnostics.Tracing
namespace System::Diagnostics::Tracing {
  // Size: 0x58
  #pragma pack(push, 1)
  // Autogenerated type: System.Diagnostics.Tracing.ActivityFilter/<GetFilterAsTuple>d__7
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: A5E590
  class ActivityFilter::$GetFilterAsTuple$d__7 : public ::Il2CppObject/*, public ::System::Collections::Generic::IEnumerable_1<::System::Tuple_2<int, int>*>, public ::System::Collections::Generic::IEnumerator_1<::System::Tuple_2<int, int>*>*/ {
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
    // private System.Tuple`2<System.Int32,System.Int32> <>2__current
    // Size: 0x8
    // Offset: 0x18
    ::System::Tuple_2<int, int>* $$2__current;
    // Field size check
    static_assert(sizeof(::System::Tuple_2<int, int>*) == 0x8);
    // private System.Int32 <>l__initialThreadId
    // Size: 0x4
    // Offset: 0x20
    int $$l__initialThreadId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: $$l__initialThreadId and: $$4__this
    char __padding2[0x4] = {};
    // public System.Diagnostics.Tracing.ActivityFilter <>4__this
    // Size: 0x8
    // Offset: 0x28
    ::System::Diagnostics::Tracing::ActivityFilter* $$4__this;
    // Field size check
    static_assert(sizeof(::System::Diagnostics::Tracing::ActivityFilter*) == 0x8);
    // private System.Guid sourceGuid
    // Size: 0x10
    // Offset: 0x30
    ::System::Guid sourceGuid;
    // Field size check
    static_assert(sizeof(::System::Guid) == 0x10);
    // public System.Guid <>3__sourceGuid
    // Size: 0x10
    // Offset: 0x40
    ::System::Guid $$3__sourceGuid;
    // Field size check
    static_assert(sizeof(::System::Guid) == 0x10);
    // private System.Diagnostics.Tracing.ActivityFilter <af>5__1
    // Size: 0x8
    // Offset: 0x50
    ::System::Diagnostics::Tracing::ActivityFilter* $af$5__1;
    // Field size check
    static_assert(sizeof(::System::Diagnostics::Tracing::ActivityFilter*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::Collections::Generic::IEnumerable_1<::System::Tuple_2<int, int>*>
    operator ::System::Collections::Generic::IEnumerable_1<::System::Tuple_2<int, int>*>() noexcept {
      return *reinterpret_cast<::System::Collections::Generic::IEnumerable_1<::System::Tuple_2<int, int>*>*>(this);
    }
    // Creating interface conversion operator: operator ::System::Collections::Generic::IEnumerator_1<::System::Tuple_2<int, int>*>
    operator ::System::Collections::Generic::IEnumerator_1<::System::Tuple_2<int, int>*>() noexcept {
      return *reinterpret_cast<::System::Collections::Generic::IEnumerator_1<::System::Tuple_2<int, int>*>*>(this);
    }
    // Get instance field reference: private System.Int32 <>1__state
    [[deprecated("Use field access instead!")]] int& dyn_$$1__state();
    // Get instance field reference: private System.Tuple`2<System.Int32,System.Int32> <>2__current
    [[deprecated("Use field access instead!")]] ::System::Tuple_2<int, int>*& dyn_$$2__current();
    // Get instance field reference: private System.Int32 <>l__initialThreadId
    [[deprecated("Use field access instead!")]] int& dyn_$$l__initialThreadId();
    // Get instance field reference: public System.Diagnostics.Tracing.ActivityFilter <>4__this
    [[deprecated("Use field access instead!")]] ::System::Diagnostics::Tracing::ActivityFilter*& dyn_$$4__this();
    // Get instance field reference: private System.Guid sourceGuid
    [[deprecated("Use field access instead!")]] ::System::Guid& dyn_sourceGuid();
    // Get instance field reference: public System.Guid <>3__sourceGuid
    [[deprecated("Use field access instead!")]] ::System::Guid& dyn_$$3__sourceGuid();
    // Get instance field reference: private System.Diagnostics.Tracing.ActivityFilter <af>5__1
    [[deprecated("Use field access instead!")]] ::System::Diagnostics::Tracing::ActivityFilter*& dyn_$af$5__1();
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x15E88D4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ActivityFilter::$GetFilterAsTuple$d__7* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Diagnostics::Tracing::ActivityFilter::$GetFilterAsTuple$d__7::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ActivityFilter::$GetFilterAsTuple$d__7*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x15E8D08
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x15E8D0C
    bool MoveNext();
    // private System.Tuple`2<System.Int32,System.Int32> System.Collections.Generic.IEnumerator<System.Tuple<System.Int32,System.Int32>>.get_Current()
    // Offset: 0x15E8E4C
    ::System::Tuple_2<int, int>* System_Collections_Generic_IEnumerator$System_Tuple$System_Int32_System_Int32$$_get_Current();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x15E8E54
    void System_Collections_IEnumerator_Reset();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x15E8EBC
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
    // private System.Collections.Generic.IEnumerator`1<System.Tuple`2<System.Int32,System.Int32>> System.Collections.Generic.IEnumerable<System.Tuple<System.Int32,System.Int32>>.GetEnumerator()
    // Offset: 0x15E8EC4
    ::System::Collections::Generic::IEnumerator_1<::System::Tuple_2<int, int>*>* System_Collections_Generic_IEnumerable$System_Tuple$System_Int32_System_Int32$$_GetEnumerator();
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0x15E8F84
    ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
  }; // System.Diagnostics.Tracing.ActivityFilter/<GetFilterAsTuple>d__7
  #pragma pack(pop)
  static check_size<sizeof(ActivityFilter::$GetFilterAsTuple$d__7), 80 + sizeof(::System::Diagnostics::Tracing::ActivityFilter*)> __System_Diagnostics_Tracing_ActivityFilter_$GetFilterAsTuple$d__7SizeCheck;
  static_assert(sizeof(ActivityFilter::$GetFilterAsTuple$d__7) == 0x58);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Diagnostics::Tracing::ActivityFilter::$GetFilterAsTuple$d__7::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Diagnostics::Tracing::ActivityFilter::$GetFilterAsTuple$d__7::System_IDisposable_Dispose
// Il2CppName: System.IDisposable.Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Diagnostics::Tracing::ActivityFilter::$GetFilterAsTuple$d__7::*)()>(&System::Diagnostics::Tracing::ActivityFilter::$GetFilterAsTuple$d__7::System_IDisposable_Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::Tracing::ActivityFilter::$GetFilterAsTuple$d__7*), "System.IDisposable.Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::Tracing::ActivityFilter::$GetFilterAsTuple$d__7::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Diagnostics::Tracing::ActivityFilter::$GetFilterAsTuple$d__7::*)()>(&System::Diagnostics::Tracing::ActivityFilter::$GetFilterAsTuple$d__7::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::Tracing::ActivityFilter::$GetFilterAsTuple$d__7*), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::Tracing::ActivityFilter::$GetFilterAsTuple$d__7::System_Collections_Generic_IEnumerator$System_Tuple$System_Int32_System_Int32$$_get_Current
// Il2CppName: System.Collections.Generic.IEnumerator<System.Tuple<System.Int32,System.Int32>>.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Tuple_2<int, int>* (System::Diagnostics::Tracing::ActivityFilter::$GetFilterAsTuple$d__7::*)()>(&System::Diagnostics::Tracing::ActivityFilter::$GetFilterAsTuple$d__7::System_Collections_Generic_IEnumerator$System_Tuple$System_Int32_System_Int32$$_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::Tracing::ActivityFilter::$GetFilterAsTuple$d__7*), "System.Collections.Generic.IEnumerator<System.Tuple<System.Int32,System.Int32>>.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::Tracing::ActivityFilter::$GetFilterAsTuple$d__7::System_Collections_IEnumerator_Reset
// Il2CppName: System.Collections.IEnumerator.Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Diagnostics::Tracing::ActivityFilter::$GetFilterAsTuple$d__7::*)()>(&System::Diagnostics::Tracing::ActivityFilter::$GetFilterAsTuple$d__7::System_Collections_IEnumerator_Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::Tracing::ActivityFilter::$GetFilterAsTuple$d__7*), "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::Tracing::ActivityFilter::$GetFilterAsTuple$d__7::System_Collections_IEnumerator_get_Current
// Il2CppName: System.Collections.IEnumerator.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Diagnostics::Tracing::ActivityFilter::$GetFilterAsTuple$d__7::*)()>(&System::Diagnostics::Tracing::ActivityFilter::$GetFilterAsTuple$d__7::System_Collections_IEnumerator_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::Tracing::ActivityFilter::$GetFilterAsTuple$d__7*), "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::Tracing::ActivityFilter::$GetFilterAsTuple$d__7::System_Collections_Generic_IEnumerable$System_Tuple$System_Int32_System_Int32$$_GetEnumerator
// Il2CppName: System.Collections.Generic.IEnumerable<System.Tuple<System.Int32,System.Int32>>.GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerator_1<::System::Tuple_2<int, int>*>* (System::Diagnostics::Tracing::ActivityFilter::$GetFilterAsTuple$d__7::*)()>(&System::Diagnostics::Tracing::ActivityFilter::$GetFilterAsTuple$d__7::System_Collections_Generic_IEnumerable$System_Tuple$System_Int32_System_Int32$$_GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::Tracing::ActivityFilter::$GetFilterAsTuple$d__7*), "System.Collections.Generic.IEnumerable<System.Tuple<System.Int32,System.Int32>>.GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::Tracing::ActivityFilter::$GetFilterAsTuple$d__7::System_Collections_IEnumerable_GetEnumerator
// Il2CppName: System.Collections.IEnumerable.GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (System::Diagnostics::Tracing::ActivityFilter::$GetFilterAsTuple$d__7::*)()>(&System::Diagnostics::Tracing::ActivityFilter::$GetFilterAsTuple$d__7::System_Collections_IEnumerable_GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::Tracing::ActivityFilter::$GetFilterAsTuple$d__7*), "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};