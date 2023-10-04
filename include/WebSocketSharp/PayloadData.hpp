// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Collections.Generic.IEnumerable`1
#include "System/Collections/Generic/IEnumerable_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: WebSocketSharp
namespace WebSocketSharp {
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerator`1<T>
  template<typename T>
  class IEnumerator_1;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: WebSocketSharp
namespace WebSocketSharp {
  // Forward declaring type: PayloadData
  class PayloadData;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::WebSocketSharp::PayloadData);
DEFINE_IL2CPP_ARG_TYPE(::WebSocketSharp::PayloadData*, "WebSocketSharp", "PayloadData");
// Type namespace: WebSocketSharp
namespace WebSocketSharp {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: WebSocketSharp.PayloadData
  // [TokenAttribute] Offset: FFFFFFFF
  class PayloadData : public ::Il2CppObject/*, public ::System::Collections::Generic::IEnumerable_1<uint8_t>*/ {
    public:
    // Nested type: ::WebSocketSharp::PayloadData::$GetEnumerator$c__Iterator0
    class $GetEnumerator$c__Iterator0;
    public:
    // private System.Byte[] _data
    // Size: 0x8
    // Offset: 0x10
    ::ArrayW<uint8_t> data;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // private System.Int64 _extDataLength
    // Size: 0x8
    // Offset: 0x18
    int64_t extDataLength;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // private System.Int64 _length
    // Size: 0x8
    // Offset: 0x20
    int64_t length;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::Collections::Generic::IEnumerable_1<uint8_t>
    operator ::System::Collections::Generic::IEnumerable_1<uint8_t>() noexcept {
      return *reinterpret_cast<::System::Collections::Generic::IEnumerable_1<uint8_t>*>(this);
    }
    // Get static field: static public readonly WebSocketSharp.PayloadData Empty
    static ::WebSocketSharp::PayloadData* _get_Empty();
    // Set static field: static public readonly WebSocketSharp.PayloadData Empty
    static void _set_Empty(::WebSocketSharp::PayloadData* value);
    // Get static field: static public readonly System.UInt64 MaxLength
    static uint64_t _get_MaxLength();
    // Set static field: static public readonly System.UInt64 MaxLength
    static void _set_MaxLength(uint64_t value);
    // Get instance field reference: private System.Byte[] _data
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn__data();
    // Get instance field reference: private System.Int64 _extDataLength
    [[deprecated("Use field access instead!")]] int64_t& dyn__extDataLength();
    // Get instance field reference: private System.Int64 _length
    [[deprecated("Use field access instead!")]] int64_t& dyn__length();
    // static private System.Void .cctor()
    // Offset: 0x1F21E84
    static void _cctor();
    // System.Void .ctor()
    // Offset: 0x1F21EF4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PayloadData* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::WebSocketSharp::PayloadData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PayloadData*, creationType>()));
    }
    // System.Void .ctor(System.Byte[] data)
    // Offset: 0x1F11BB0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PayloadData* New_ctor(::ArrayW<uint8_t> data) {
      static auto ___internal__logger = ::Logger::get().WithContext("::WebSocketSharp::PayloadData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PayloadData*, creationType>(data)));
    }
    // System.Void .ctor(System.Byte[] data, System.Int64 length)
    // Offset: 0x1F21F70
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PayloadData* New_ctor(::ArrayW<uint8_t> data, int64_t length) {
      static auto ___internal__logger = ::Logger::get().WithContext("::WebSocketSharp::PayloadData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PayloadData*, creationType>(data, length)));
    }
    // System.Boolean get_IncludesReservedCloseStatusCode()
    // Offset: 0x1F21FAC
    bool get_IncludesReservedCloseStatusCode();
    // public System.Byte[] get_ApplicationData()
    // Offset: 0x1F116E8
    ::ArrayW<uint8_t> get_ApplicationData();
    // public System.UInt64 get_Length()
    // Offset: 0x1F22068
    uint64_t get_Length();
    // System.Void Mask(System.Byte[] key)
    // Offset: 0x1F22070
    void Mask(::ArrayW<uint8_t> key);
    // public System.Collections.Generic.IEnumerator`1<System.Byte> GetEnumerator()
    // Offset: 0x1F22188
    ::System::Collections::Generic::IEnumerator_1<uint8_t>* GetEnumerator();
    // public System.Byte[] ToArray()
    // Offset: 0x1F22200
    ::ArrayW<uint8_t> ToArray();
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0x1F22274
    ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
    // public override System.String ToString()
    // Offset: 0x1F22208
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::StringW ToString();
  }; // WebSocketSharp.PayloadData
  #pragma pack(pop)
  static check_size<sizeof(PayloadData), 32 + sizeof(int64_t)> __WebSocketSharp_PayloadDataSizeCheck;
  static_assert(sizeof(PayloadData) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: WebSocketSharp::PayloadData::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&WebSocketSharp::PayloadData::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(WebSocketSharp::PayloadData*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: WebSocketSharp::PayloadData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: WebSocketSharp::PayloadData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: WebSocketSharp::PayloadData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: WebSocketSharp::PayloadData::get_IncludesReservedCloseStatusCode
// Il2CppName: get_IncludesReservedCloseStatusCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (WebSocketSharp::PayloadData::*)()>(&WebSocketSharp::PayloadData::get_IncludesReservedCloseStatusCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(WebSocketSharp::PayloadData*), "get_IncludesReservedCloseStatusCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: WebSocketSharp::PayloadData::get_ApplicationData
// Il2CppName: get_ApplicationData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (WebSocketSharp::PayloadData::*)()>(&WebSocketSharp::PayloadData::get_ApplicationData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(WebSocketSharp::PayloadData*), "get_ApplicationData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: WebSocketSharp::PayloadData::get_Length
// Il2CppName: get_Length
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (WebSocketSharp::PayloadData::*)()>(&WebSocketSharp::PayloadData::get_Length)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(WebSocketSharp::PayloadData*), "get_Length", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: WebSocketSharp::PayloadData::Mask
// Il2CppName: Mask
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (WebSocketSharp::PayloadData::*)(::ArrayW<uint8_t>)>(&WebSocketSharp::PayloadData::Mask)> {
  static const MethodInfo* get() {
    static auto* key = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(WebSocketSharp::PayloadData*), "Mask", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key});
  }
};
// Writing MetadataGetter for method: WebSocketSharp::PayloadData::GetEnumerator
// Il2CppName: GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerator_1<uint8_t>* (WebSocketSharp::PayloadData::*)()>(&WebSocketSharp::PayloadData::GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(WebSocketSharp::PayloadData*), "GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: WebSocketSharp::PayloadData::ToArray
// Il2CppName: ToArray
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (WebSocketSharp::PayloadData::*)()>(&WebSocketSharp::PayloadData::ToArray)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(WebSocketSharp::PayloadData*), "ToArray", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: WebSocketSharp::PayloadData::System_Collections_IEnumerable_GetEnumerator
// Il2CppName: System.Collections.IEnumerable.GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (WebSocketSharp::PayloadData::*)()>(&WebSocketSharp::PayloadData::System_Collections_IEnumerable_GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(WebSocketSharp::PayloadData*), "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: WebSocketSharp::PayloadData::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (WebSocketSharp::PayloadData::*)()>(&WebSocketSharp::PayloadData::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(WebSocketSharp::PayloadData*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
