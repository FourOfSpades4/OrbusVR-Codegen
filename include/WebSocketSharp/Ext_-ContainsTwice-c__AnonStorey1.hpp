// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: WebSocketSharp.Ext
#include "WebSocketSharp/Ext.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::WebSocketSharp::Ext::$ContainsTwice$c__AnonStorey1);
DEFINE_IL2CPP_ARG_TYPE(::WebSocketSharp::Ext::$ContainsTwice$c__AnonStorey1*, "WebSocketSharp", "Ext/<ContainsTwice>c__AnonStorey1");
// Type namespace: WebSocketSharp
namespace WebSocketSharp {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: WebSocketSharp.Ext/<ContainsTwice>c__AnonStorey1
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: AC07F8
  class Ext::$ContainsTwice$c__AnonStorey1 : public ::Il2CppObject {
    public:
    public:
    // System.Int32 len
    // Size: 0x4
    // Offset: 0x10
    int len;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: len and: values
    char __padding0[0x4] = {};
    // System.String[] values
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<::StringW> values;
    // Field size check
    static_assert(sizeof(::ArrayW<::StringW>) == 0x8);
    // System.Func`2<System.Int32,System.Boolean> contains
    // Size: 0x8
    // Offset: 0x20
    ::System::Func_2<int, bool>* contains;
    // Field size check
    static_assert(sizeof(::System::Func_2<int, bool>*) == 0x8);
    public:
    // Get instance field reference: System.Int32 len
    [[deprecated("Use field access instead!")]] int& dyn_len();
    // Get instance field reference: System.String[] values
    [[deprecated("Use field access instead!")]] ::ArrayW<::StringW>& dyn_values();
    // Get instance field reference: System.Func`2<System.Int32,System.Boolean> contains
    [[deprecated("Use field access instead!")]] ::System::Func_2<int, bool>*& dyn_contains();
    // public System.Void .ctor()
    // Offset: 0x1F12960
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Ext::$ContainsTwice$c__AnonStorey1* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::WebSocketSharp::Ext::$ContainsTwice$c__AnonStorey1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Ext::$ContainsTwice$c__AnonStorey1*, creationType>()));
    }
    // System.Boolean <>m__0(System.Int32 idx)
    // Offset: 0x1F154D8
    bool $$m__0(int idx);
  }; // WebSocketSharp.Ext/<ContainsTwice>c__AnonStorey1
  #pragma pack(pop)
  static check_size<sizeof(Ext::$ContainsTwice$c__AnonStorey1), 32 + sizeof(::System::Func_2<int, bool>*)> __WebSocketSharp_Ext_$ContainsTwice$c__AnonStorey1SizeCheck;
  static_assert(sizeof(Ext::$ContainsTwice$c__AnonStorey1) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: WebSocketSharp::Ext::$ContainsTwice$c__AnonStorey1::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: WebSocketSharp::Ext::$ContainsTwice$c__AnonStorey1::$$m__0
// Il2CppName: <>m__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (WebSocketSharp::Ext::$ContainsTwice$c__AnonStorey1::*)(int)>(&WebSocketSharp::Ext::$ContainsTwice$c__AnonStorey1::$$m__0)> {
  static const MethodInfo* get() {
    static auto* idx = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(WebSocketSharp::Ext::$ContainsTwice$c__AnonStorey1*), "<>m__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{idx});
  }
};
