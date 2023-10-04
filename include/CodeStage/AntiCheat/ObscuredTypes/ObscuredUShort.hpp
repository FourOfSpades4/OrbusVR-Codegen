// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include <stdint.h>
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Including type: System.IFormattable
#include "System/IFormattable.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IFormatProvider
  class IFormatProvider;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct Il2CppObject;
// Completed il2cpp-utils forward declares
// Type namespace: CodeStage.AntiCheat.ObscuredTypes
namespace CodeStage::AntiCheat::ObscuredTypes {
  // Forward declaring type: ObscuredUShort
  struct ObscuredUShort;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::CodeStage::AntiCheat::ObscuredTypes::ObscuredUShort, "CodeStage.AntiCheat.ObscuredTypes", "ObscuredUShort");
// Type namespace: CodeStage.AntiCheat.ObscuredTypes
namespace CodeStage::AntiCheat::ObscuredTypes {
  // Size: 0x9
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: CodeStage.AntiCheat.ObscuredTypes.ObscuredUShort
  // [TokenAttribute] Offset: FFFFFFFF
  struct ObscuredUShort/*, public ::System::ValueType, public ::System::IEquatable_1<::CodeStage::AntiCheat::ObscuredTypes::ObscuredUShort>, public ::System::IFormattable*/ {
    public:
    public:
    // private System.UInt16 currentCryptoKey
    // Size: 0x2
    // Offset: 0x0
    uint16_t currentCryptoKey;
    // Field size check
    static_assert(sizeof(uint16_t) == 0x2);
    // private System.UInt16 hiddenValue
    // Size: 0x2
    // Offset: 0x2
    uint16_t hiddenValue;
    // Field size check
    static_assert(sizeof(uint16_t) == 0x2);
    // private System.Boolean inited
    // Size: 0x1
    // Offset: 0x4
    bool inited;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: inited and: fakeValue
    char __padding2[0x1] = {};
    // private System.UInt16 fakeValue
    // Size: 0x2
    // Offset: 0x6
    uint16_t fakeValue;
    // Field size check
    static_assert(sizeof(uint16_t) == 0x2);
    // private System.Boolean fakeValueActive
    // Size: 0x1
    // Offset: 0x8
    bool fakeValueActive;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating value type constructor for type: ObscuredUShort
    constexpr ObscuredUShort(uint16_t currentCryptoKey_ = {}, uint16_t hiddenValue_ = {}, bool inited_ = {}, uint16_t fakeValue_ = {}, bool fakeValueActive_ = {}) noexcept : currentCryptoKey{currentCryptoKey_}, hiddenValue{hiddenValue_}, inited{inited_}, fakeValue{fakeValue_}, fakeValueActive{fakeValueActive_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::System::IEquatable_1<::CodeStage::AntiCheat::ObscuredTypes::ObscuredUShort>
    operator ::System::IEquatable_1<::CodeStage::AntiCheat::ObscuredTypes::ObscuredUShort>() noexcept {
      return *reinterpret_cast<::System::IEquatable_1<::CodeStage::AntiCheat::ObscuredTypes::ObscuredUShort>*>(this);
    }
    // Creating interface conversion operator: operator ::System::IFormattable
    operator ::System::IFormattable() noexcept {
      return *reinterpret_cast<::System::IFormattable*>(this);
    }
    // Get static field: static private System.UInt16 cryptoKey
    static uint16_t _get_cryptoKey();
    // Set static field: static private System.UInt16 cryptoKey
    static void _set_cryptoKey(uint16_t value);
    // Get instance field reference: private System.UInt16 currentCryptoKey
    [[deprecated("Use field access instead!")]] uint16_t& dyn_currentCryptoKey();
    // Get instance field reference: private System.UInt16 hiddenValue
    [[deprecated("Use field access instead!")]] uint16_t& dyn_hiddenValue();
    // Get instance field reference: private System.Boolean inited
    [[deprecated("Use field access instead!")]] bool& dyn_inited();
    // Get instance field reference: private System.UInt16 fakeValue
    [[deprecated("Use field access instead!")]] uint16_t& dyn_fakeValue();
    // Get instance field reference: private System.Boolean fakeValueActive
    [[deprecated("Use field access instead!")]] bool& dyn_fakeValueActive();
    // private System.Void .ctor(System.UInt16 value)
    // Offset: 0xBBB1CC
    ObscuredUShort(uint16_t value);
    // static public System.Void SetNewCryptoKey(System.UInt16 newKey)
    // Offset: 0x225D88C
    static void SetNewCryptoKey(uint16_t newKey);
    // static public System.UInt16 EncryptDecrypt(System.UInt16 value)
    // Offset: 0x225D824
    static uint16_t EncryptDecrypt(uint16_t value);
    // static public System.UInt16 EncryptDecrypt(System.UInt16 value, System.UInt16 key)
    // Offset: 0x225D8F8
    static uint16_t EncryptDecrypt(uint16_t value, uint16_t key);
    // public System.Void ApplyNewCryptoKey()
    // Offset: 0xBBB1D4
    void ApplyNewCryptoKey();
    // public System.Void RandomizeCryptoKey()
    // Offset: 0xBBB1DC
    void RandomizeCryptoKey();
    // public System.UInt16 GetEncrypted()
    // Offset: 0xBBB1E4
    uint16_t GetEncrypted();
    // public System.Void SetEncrypted(System.UInt16 encrypted)
    // Offset: 0xBBB20C
    void SetEncrypted(uint16_t encrypted);
    // public System.UInt16 GetDecrypted()
    // Offset: 0xBBB214
    uint16_t GetDecrypted();
    // private System.UInt16 InternalDecrypt()
    // Offset: 0xBBB21C
    uint16_t InternalDecrypt();
    // public System.Boolean Equals(CodeStage.AntiCheat.ObscuredTypes.ObscuredUShort obj)
    // Offset: 0xBBB22C
    bool Equals(::CodeStage::AntiCheat::ObscuredTypes::ObscuredUShort obj);
    // public System.String ToString(System.String format)
    // Offset: 0xBBB268
    ::StringW ToString(::StringW format);
    // public System.String ToString(System.IFormatProvider provider)
    // Offset: 0xBBB2D0
    ::StringW ToString(::System::IFormatProvider* provider);
    // public System.String ToString(System.String format, System.IFormatProvider provider)
    // Offset: 0xBBB308
    ::StringW ToString(::StringW format, ::System::IFormatProvider* provider);
    // static private System.Void .cctor()
    // Offset: 0x225E108
    static void _cctor();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0xBBB224
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.String ToString()
    // Offset: 0xBBB238
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::StringW ToString();
    // public override System.Int32 GetHashCode()
    // Offset: 0xBBB2A0
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
  }; // CodeStage.AntiCheat.ObscuredTypes.ObscuredUShort
  #pragma pack(pop)
  static check_size<sizeof(ObscuredUShort), 8 + sizeof(bool)> __CodeStage_AntiCheat_ObscuredTypes_ObscuredUShortSizeCheck;
  static_assert(sizeof(ObscuredUShort) == 0x9);
  // static public CodeStage.AntiCheat.ObscuredTypes.ObscuredUShort op_Increment(CodeStage.AntiCheat.ObscuredTypes.ObscuredUShort input)
  // Offset: 0x225DD50
  ::CodeStage::AntiCheat::ObscuredTypes::ObscuredUShort operator++(const ::CodeStage::AntiCheat::ObscuredTypes::ObscuredUShort& input);
  // static public CodeStage.AntiCheat.ObscuredTypes.ObscuredUShort op_Decrement(CodeStage.AntiCheat.ObscuredTypes.ObscuredUShort input)
  // Offset: 0x225DE0C
  ::CodeStage::AntiCheat::ObscuredTypes::ObscuredUShort operator--(const ::CodeStage::AntiCheat::ObscuredTypes::ObscuredUShort& input);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: CodeStage::AntiCheat::ObscuredTypes::ObscuredUShort::ObscuredUShort
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: CodeStage::AntiCheat::ObscuredTypes::ObscuredUShort::SetNewCryptoKey
// Il2CppName: SetNewCryptoKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(uint16_t)>(&CodeStage::AntiCheat::ObscuredTypes::ObscuredUShort::SetNewCryptoKey)> {
  static const MethodInfo* get() {
    static auto* newKey = &::il2cpp_utils::GetClassFromName("System", "UInt16")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(CodeStage::AntiCheat::ObscuredTypes::ObscuredUShort), "SetNewCryptoKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{newKey});
  }
};
// Writing MetadataGetter for method: CodeStage::AntiCheat::ObscuredTypes::ObscuredUShort::EncryptDecrypt
// Il2CppName: EncryptDecrypt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint16_t (*)(uint16_t)>(&CodeStage::AntiCheat::ObscuredTypes::ObscuredUShort::EncryptDecrypt)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "UInt16")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(CodeStage::AntiCheat::ObscuredTypes::ObscuredUShort), "EncryptDecrypt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: CodeStage::AntiCheat::ObscuredTypes::ObscuredUShort::EncryptDecrypt
// Il2CppName: EncryptDecrypt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint16_t (*)(uint16_t, uint16_t)>(&CodeStage::AntiCheat::ObscuredTypes::ObscuredUShort::EncryptDecrypt)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "UInt16")->byval_arg;
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "UInt16")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(CodeStage::AntiCheat::ObscuredTypes::ObscuredUShort), "EncryptDecrypt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, key});
  }
};
// Writing MetadataGetter for method: CodeStage::AntiCheat::ObscuredTypes::ObscuredUShort::ApplyNewCryptoKey
// Il2CppName: ApplyNewCryptoKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (CodeStage::AntiCheat::ObscuredTypes::ObscuredUShort::*)()>(&CodeStage::AntiCheat::ObscuredTypes::ObscuredUShort::ApplyNewCryptoKey)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(CodeStage::AntiCheat::ObscuredTypes::ObscuredUShort), "ApplyNewCryptoKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: CodeStage::AntiCheat::ObscuredTypes::ObscuredUShort::RandomizeCryptoKey
// Il2CppName: RandomizeCryptoKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (CodeStage::AntiCheat::ObscuredTypes::ObscuredUShort::*)()>(&CodeStage::AntiCheat::ObscuredTypes::ObscuredUShort::RandomizeCryptoKey)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(CodeStage::AntiCheat::ObscuredTypes::ObscuredUShort), "RandomizeCryptoKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: CodeStage::AntiCheat::ObscuredTypes::ObscuredUShort::GetEncrypted
// Il2CppName: GetEncrypted
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint16_t (CodeStage::AntiCheat::ObscuredTypes::ObscuredUShort::*)()>(&CodeStage::AntiCheat::ObscuredTypes::ObscuredUShort::GetEncrypted)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(CodeStage::AntiCheat::ObscuredTypes::ObscuredUShort), "GetEncrypted", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: CodeStage::AntiCheat::ObscuredTypes::ObscuredUShort::SetEncrypted
// Il2CppName: SetEncrypted
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (CodeStage::AntiCheat::ObscuredTypes::ObscuredUShort::*)(uint16_t)>(&CodeStage::AntiCheat::ObscuredTypes::ObscuredUShort::SetEncrypted)> {
  static const MethodInfo* get() {
    static auto* encrypted = &::il2cpp_utils::GetClassFromName("System", "UInt16")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(CodeStage::AntiCheat::ObscuredTypes::ObscuredUShort), "SetEncrypted", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{encrypted});
  }
};
// Writing MetadataGetter for method: CodeStage::AntiCheat::ObscuredTypes::ObscuredUShort::GetDecrypted
// Il2CppName: GetDecrypted
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint16_t (CodeStage::AntiCheat::ObscuredTypes::ObscuredUShort::*)()>(&CodeStage::AntiCheat::ObscuredTypes::ObscuredUShort::GetDecrypted)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(CodeStage::AntiCheat::ObscuredTypes::ObscuredUShort), "GetDecrypted", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: CodeStage::AntiCheat::ObscuredTypes::ObscuredUShort::InternalDecrypt
// Il2CppName: InternalDecrypt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint16_t (CodeStage::AntiCheat::ObscuredTypes::ObscuredUShort::*)()>(&CodeStage::AntiCheat::ObscuredTypes::ObscuredUShort::InternalDecrypt)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(CodeStage::AntiCheat::ObscuredTypes::ObscuredUShort), "InternalDecrypt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: CodeStage::AntiCheat::ObscuredTypes::ObscuredUShort::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (CodeStage::AntiCheat::ObscuredTypes::ObscuredUShort::*)(::CodeStage::AntiCheat::ObscuredTypes::ObscuredUShort)>(&CodeStage::AntiCheat::ObscuredTypes::ObscuredUShort::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("CodeStage.AntiCheat.ObscuredTypes", "ObscuredUShort")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(CodeStage::AntiCheat::ObscuredTypes::ObscuredUShort), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: CodeStage::AntiCheat::ObscuredTypes::ObscuredUShort::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (CodeStage::AntiCheat::ObscuredTypes::ObscuredUShort::*)(::StringW)>(&CodeStage::AntiCheat::ObscuredTypes::ObscuredUShort::ToString)> {
  static const MethodInfo* get() {
    static auto* format = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(CodeStage::AntiCheat::ObscuredTypes::ObscuredUShort), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{format});
  }
};
// Writing MetadataGetter for method: CodeStage::AntiCheat::ObscuredTypes::ObscuredUShort::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (CodeStage::AntiCheat::ObscuredTypes::ObscuredUShort::*)(::System::IFormatProvider*)>(&CodeStage::AntiCheat::ObscuredTypes::ObscuredUShort::ToString)> {
  static const MethodInfo* get() {
    static auto* provider = &::il2cpp_utils::GetClassFromName("System", "IFormatProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(CodeStage::AntiCheat::ObscuredTypes::ObscuredUShort), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{provider});
  }
};
// Writing MetadataGetter for method: CodeStage::AntiCheat::ObscuredTypes::ObscuredUShort::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (CodeStage::AntiCheat::ObscuredTypes::ObscuredUShort::*)(::StringW, ::System::IFormatProvider*)>(&CodeStage::AntiCheat::ObscuredTypes::ObscuredUShort::ToString)> {
  static const MethodInfo* get() {
    static auto* format = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* provider = &::il2cpp_utils::GetClassFromName("System", "IFormatProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(CodeStage::AntiCheat::ObscuredTypes::ObscuredUShort), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{format, provider});
  }
};
// Writing MetadataGetter for method: CodeStage::AntiCheat::ObscuredTypes::ObscuredUShort::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&CodeStage::AntiCheat::ObscuredTypes::ObscuredUShort::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(CodeStage::AntiCheat::ObscuredTypes::ObscuredUShort), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: CodeStage::AntiCheat::ObscuredTypes::ObscuredUShort::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (CodeStage::AntiCheat::ObscuredTypes::ObscuredUShort::*)(::Il2CppObject*)>(&CodeStage::AntiCheat::ObscuredTypes::ObscuredUShort::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(CodeStage::AntiCheat::ObscuredTypes::ObscuredUShort), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: CodeStage::AntiCheat::ObscuredTypes::ObscuredUShort::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (CodeStage::AntiCheat::ObscuredTypes::ObscuredUShort::*)()>(&CodeStage::AntiCheat::ObscuredTypes::ObscuredUShort::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(CodeStage::AntiCheat::ObscuredTypes::ObscuredUShort), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: CodeStage::AntiCheat::ObscuredTypes::ObscuredUShort::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (CodeStage::AntiCheat::ObscuredTypes::ObscuredUShort::*)()>(&CodeStage::AntiCheat::ObscuredTypes::ObscuredUShort::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(CodeStage::AntiCheat::ObscuredTypes::ObscuredUShort), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: CodeStage::AntiCheat::ObscuredTypes::ObscuredUShort::operator++
// Il2CppName: op_Increment
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: CodeStage::AntiCheat::ObscuredTypes::ObscuredUShort::operator--
// Il2CppName: op_Decrement
// Cannot perform method pointer template specialization from operators!
