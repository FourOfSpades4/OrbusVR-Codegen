// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: WebSocketSharp.Ext
#include "WebSocketSharp/Ext.hpp"
// Including type: System.Collections.Generic.IEnumerable`1
#include "System/Collections/Generic/IEnumerable_1.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Skipping declaration: IEnumerator because it is already included!
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::WebSocketSharp::Ext::$SplitHeaderValue$c__Iterator0);
DEFINE_IL2CPP_ARG_TYPE(::WebSocketSharp::Ext::$SplitHeaderValue$c__Iterator0*, "WebSocketSharp", "Ext/<SplitHeaderValue>c__Iterator0");
// Type namespace: WebSocketSharp
namespace WebSocketSharp {
  // Size: 0x58
  #pragma pack(push, 1)
  // Autogenerated type: WebSocketSharp.Ext/<SplitHeaderValue>c__Iterator0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: AC0828
  class Ext::$SplitHeaderValue$c__Iterator0 : public ::Il2CppObject/*, public ::System::Collections::Generic::IEnumerable_1<::StringW>, public ::System::Collections::Generic::IEnumerator_1<::StringW>*/ {
    public:
    public:
    // System.String value
    // Size: 0x8
    // Offset: 0x10
    ::StringW value;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // System.Int32 <len>__0
    // Size: 0x4
    // Offset: 0x18
    int $len$__0;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: $len$__0 and: separators
    char __padding1[0x4] = {};
    // System.Char[] separators
    // Size: 0x8
    // Offset: 0x20
    ::ArrayW<::Il2CppChar> separators;
    // Field size check
    static_assert(sizeof(::ArrayW<::Il2CppChar>) == 0x8);
    // System.String <seps>__1
    // Size: 0x8
    // Offset: 0x28
    ::StringW $seps$__1;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // System.Text.StringBuilder <buff>__2
    // Size: 0x8
    // Offset: 0x30
    ::System::Text::StringBuilder* $buff$__2;
    // Field size check
    static_assert(sizeof(::System::Text::StringBuilder*) == 0x8);
    // System.Boolean <escaped>__3
    // Size: 0x1
    // Offset: 0x38
    bool $escaped$__3;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // System.Boolean <quoted>__4
    // Size: 0x1
    // Offset: 0x39
    bool $quoted$__4;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: $quoted$__4 and: $i$__5
    char __padding6[0x2] = {};
    // System.Int32 <i>__5
    // Size: 0x4
    // Offset: 0x3C
    int $i$__5;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Char <c>__6
    // Size: 0x2
    // Offset: 0x40
    ::Il2CppChar $c$__6;
    // Field size check
    static_assert(sizeof(::Il2CppChar) == 0x2);
    // Padding between fields: $c$__6 and: $current
    char __padding8[0x6] = {};
    // System.String $current
    // Size: 0x8
    // Offset: 0x48
    ::StringW $current;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // System.Boolean $disposing
    // Size: 0x1
    // Offset: 0x50
    bool $disposing;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: $disposing and: $PC
    char __padding10[0x3] = {};
    // System.Int32 $PC
    // Size: 0x4
    // Offset: 0x54
    int $PC;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating interface conversion operator: operator ::System::Collections::Generic::IEnumerable_1<::StringW>
    operator ::System::Collections::Generic::IEnumerable_1<::StringW>() noexcept {
      return *reinterpret_cast<::System::Collections::Generic::IEnumerable_1<::StringW>*>(this);
    }
    // Creating interface conversion operator: operator ::System::Collections::Generic::IEnumerator_1<::StringW>
    operator ::System::Collections::Generic::IEnumerator_1<::StringW>() noexcept {
      return *reinterpret_cast<::System::Collections::Generic::IEnumerator_1<::StringW>*>(this);
    }
    // Get instance field reference: System.String value
    [[deprecated("Use field access instead!")]] ::StringW& dyn_value();
    // Get instance field reference: System.Int32 <len>__0
    [[deprecated("Use field access instead!")]] int& dyn_$len$__0();
    // Get instance field reference: System.Char[] separators
    [[deprecated("Use field access instead!")]] ::ArrayW<::Il2CppChar>& dyn_separators();
    // Get instance field reference: System.String <seps>__1
    [[deprecated("Use field access instead!")]] ::StringW& dyn_$seps$__1();
    // Get instance field reference: System.Text.StringBuilder <buff>__2
    [[deprecated("Use field access instead!")]] ::System::Text::StringBuilder*& dyn_$buff$__2();
    // Get instance field reference: System.Boolean <escaped>__3
    [[deprecated("Use field access instead!")]] bool& dyn_$escaped$__3();
    // Get instance field reference: System.Boolean <quoted>__4
    [[deprecated("Use field access instead!")]] bool& dyn_$quoted$__4();
    // Get instance field reference: System.Int32 <i>__5
    [[deprecated("Use field access instead!")]] int& dyn_$i$__5();
    // Get instance field reference: System.Char <c>__6
    [[deprecated("Use field access instead!")]] ::Il2CppChar& dyn_$c$__6();
    // Get instance field reference: System.String $current
    [[deprecated("Use field access instead!")]] ::StringW& dyn_$current();
    // Get instance field reference: System.Boolean $disposing
    [[deprecated("Use field access instead!")]] bool& dyn_$disposing();
    // Get instance field reference: System.Int32 $PC
    [[deprecated("Use field access instead!")]] int& dyn_$PC();
    // public System.Void .ctor()
    // Offset: 0x1F143F4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Ext::$SplitHeaderValue$c__Iterator0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::WebSocketSharp::Ext::$SplitHeaderValue$c__Iterator0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Ext::$SplitHeaderValue$c__Iterator0*, creationType>()));
    }
    // public System.Boolean MoveNext()
    // Offset: 0x1F15CD0
    bool MoveNext();
    // private System.String System.Collections.Generic.IEnumerator<string>.get_Current()
    // Offset: 0x1F15FE4
    ::StringW System_Collections_Generic_IEnumerator$string$_get_Current();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x1F15FEC
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
    // public System.Void Dispose()
    // Offset: 0x1F15FF4
    void Dispose();
    // public System.Void Reset()
    // Offset: 0x1F16008
    void Reset();
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0x1F16070
    ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
    // private System.Collections.Generic.IEnumerator`1<System.String> System.Collections.Generic.IEnumerable<string>.GetEnumerator()
    // Offset: 0x1F16074
    ::System::Collections::Generic::IEnumerator_1<::StringW>* System_Collections_Generic_IEnumerable$string$_GetEnumerator();
  }; // WebSocketSharp.Ext/<SplitHeaderValue>c__Iterator0
  #pragma pack(pop)
  static check_size<sizeof(Ext::$SplitHeaderValue$c__Iterator0), 84 + sizeof(int)> __WebSocketSharp_Ext_$SplitHeaderValue$c__Iterator0SizeCheck;
  static_assert(sizeof(Ext::$SplitHeaderValue$c__Iterator0) == 0x58);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: WebSocketSharp::Ext::$SplitHeaderValue$c__Iterator0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: WebSocketSharp::Ext::$SplitHeaderValue$c__Iterator0::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (WebSocketSharp::Ext::$SplitHeaderValue$c__Iterator0::*)()>(&WebSocketSharp::Ext::$SplitHeaderValue$c__Iterator0::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(WebSocketSharp::Ext::$SplitHeaderValue$c__Iterator0*), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: WebSocketSharp::Ext::$SplitHeaderValue$c__Iterator0::System_Collections_Generic_IEnumerator$string$_get_Current
// Il2CppName: System.Collections.Generic.IEnumerator<string>.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (WebSocketSharp::Ext::$SplitHeaderValue$c__Iterator0::*)()>(&WebSocketSharp::Ext::$SplitHeaderValue$c__Iterator0::System_Collections_Generic_IEnumerator$string$_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(WebSocketSharp::Ext::$SplitHeaderValue$c__Iterator0*), "System.Collections.Generic.IEnumerator<string>.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: WebSocketSharp::Ext::$SplitHeaderValue$c__Iterator0::System_Collections_IEnumerator_get_Current
// Il2CppName: System.Collections.IEnumerator.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (WebSocketSharp::Ext::$SplitHeaderValue$c__Iterator0::*)()>(&WebSocketSharp::Ext::$SplitHeaderValue$c__Iterator0::System_Collections_IEnumerator_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(WebSocketSharp::Ext::$SplitHeaderValue$c__Iterator0*), "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: WebSocketSharp::Ext::$SplitHeaderValue$c__Iterator0::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (WebSocketSharp::Ext::$SplitHeaderValue$c__Iterator0::*)()>(&WebSocketSharp::Ext::$SplitHeaderValue$c__Iterator0::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(WebSocketSharp::Ext::$SplitHeaderValue$c__Iterator0*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: WebSocketSharp::Ext::$SplitHeaderValue$c__Iterator0::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (WebSocketSharp::Ext::$SplitHeaderValue$c__Iterator0::*)()>(&WebSocketSharp::Ext::$SplitHeaderValue$c__Iterator0::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(WebSocketSharp::Ext::$SplitHeaderValue$c__Iterator0*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: WebSocketSharp::Ext::$SplitHeaderValue$c__Iterator0::System_Collections_IEnumerable_GetEnumerator
// Il2CppName: System.Collections.IEnumerable.GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (WebSocketSharp::Ext::$SplitHeaderValue$c__Iterator0::*)()>(&WebSocketSharp::Ext::$SplitHeaderValue$c__Iterator0::System_Collections_IEnumerable_GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(WebSocketSharp::Ext::$SplitHeaderValue$c__Iterator0*), "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: WebSocketSharp::Ext::$SplitHeaderValue$c__Iterator0::System_Collections_Generic_IEnumerable$string$_GetEnumerator
// Il2CppName: System.Collections.Generic.IEnumerable<string>.GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerator_1<::StringW>* (WebSocketSharp::Ext::$SplitHeaderValue$c__Iterator0::*)()>(&WebSocketSharp::Ext::$SplitHeaderValue$c__Iterator0::System_Collections_Generic_IEnumerable$string$_GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(WebSocketSharp::Ext::$SplitHeaderValue$c__Iterator0*), "System.Collections.Generic.IEnumerable<string>.GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
