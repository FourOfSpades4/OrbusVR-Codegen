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
// Including type: CodeStage.AntiCheat.Common.ACTkByte8
#include "CodeStage/AntiCheat/Common/ACTkByte8.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: CodeStage::AntiCheat::ObscuredTypes
namespace CodeStage::AntiCheat::ObscuredTypes {
}
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
  // Forward declaring type: ObscuredDouble
  struct ObscuredDouble;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::CodeStage::AntiCheat::ObscuredTypes::ObscuredDouble, "CodeStage.AntiCheat.ObscuredTypes", "ObscuredDouble");
// Type namespace: CodeStage.AntiCheat.ObscuredTypes
namespace CodeStage::AntiCheat::ObscuredTypes {
  // Size: 0x29
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: CodeStage.AntiCheat.ObscuredTypes.ObscuredDouble
  // [TokenAttribute] Offset: FFFFFFFF
  struct ObscuredDouble/*, public ::System::ValueType, public ::System::IEquatable_1<::CodeStage::AntiCheat::ObscuredTypes::ObscuredDouble>, public ::System::IFormattable*/ {
    public:
    // Nested type: ::CodeStage::AntiCheat::ObscuredTypes::ObscuredDouble::DoubleLongBytesUnion
    struct DoubleLongBytesUnion;
    public:
    // private System.Int64 currentCryptoKey
    // Size: 0x8
    // Offset: 0x0
    int64_t currentCryptoKey;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // private CodeStage.AntiCheat.Common.ACTkByte8 hiddenValue
    // Size: 0x8
    // Offset: 0x8
    ::CodeStage::AntiCheat::Common::ACTkByte8 hiddenValue;
    // Field size check
    static_assert(sizeof(::CodeStage::AntiCheat::Common::ACTkByte8) == 0x8);
    // [FormerlySerializedAsAttribute] Offset: 0xAC6520
    // private System.Byte[] hiddenValueOld
    // Size: 0x8
    // Offset: 0x10
    ::ArrayW<uint8_t> hiddenValueOld;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // private System.Boolean inited
    // Size: 0x1
    // Offset: 0x18
    bool inited;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: inited and: fakeValue
    char __padding3[0x7] = {};
    // private System.Double fakeValue
    // Size: 0x8
    // Offset: 0x20
    double fakeValue;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    // private System.Boolean fakeValueActive
    // Size: 0x1
    // Offset: 0x28
    bool fakeValueActive;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating value type constructor for type: ObscuredDouble
    constexpr ObscuredDouble(int64_t currentCryptoKey_ = {}, ::CodeStage::AntiCheat::Common::ACTkByte8 hiddenValue_ = {}, ::ArrayW<uint8_t> hiddenValueOld_ = ::ArrayW<uint8_t>(static_cast<void*>(nullptr)), bool inited_ = {}, double fakeValue_ = {}, bool fakeValueActive_ = {}) noexcept : currentCryptoKey{currentCryptoKey_}, hiddenValue{hiddenValue_}, hiddenValueOld{hiddenValueOld_}, inited{inited_}, fakeValue{fakeValue_}, fakeValueActive{fakeValueActive_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::System::IEquatable_1<::CodeStage::AntiCheat::ObscuredTypes::ObscuredDouble>
    operator ::System::IEquatable_1<::CodeStage::AntiCheat::ObscuredTypes::ObscuredDouble>() noexcept {
      return *reinterpret_cast<::System::IEquatable_1<::CodeStage::AntiCheat::ObscuredTypes::ObscuredDouble>*>(this);
    }
    // Creating interface conversion operator: operator ::System::IFormattable
    operator ::System::IFormattable() noexcept {
      return *reinterpret_cast<::System::IFormattable*>(this);
    }
    // Get static field: static private System.Int64 cryptoKey
    static int64_t _get_cryptoKey();
    // Set static field: static private System.Int64 cryptoKey
    static void _set_cryptoKey(int64_t value);
    // Get instance field reference: private System.Int64 currentCryptoKey
    [[deprecated("Use field access instead!")]] int64_t& dyn_currentCryptoKey();
    // Get instance field reference: private CodeStage.AntiCheat.Common.ACTkByte8 hiddenValue
    [[deprecated("Use field access instead!")]] ::CodeStage::AntiCheat::Common::ACTkByte8& dyn_hiddenValue();
    // Get instance field reference: private System.Byte[] hiddenValueOld
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn_hiddenValueOld();
    // Get instance field reference: private System.Boolean inited
    [[deprecated("Use field access instead!")]] bool& dyn_inited();
    // Get instance field reference: private System.Double fakeValue
    [[deprecated("Use field access instead!")]] double& dyn_fakeValue();
    // Get instance field reference: private System.Boolean fakeValueActive
    [[deprecated("Use field access instead!")]] bool& dyn_fakeValueActive();
    // private System.Void .ctor(System.Double value)
    // Offset: 0xBB1558
    ObscuredDouble(double value);
    // static public System.Void SetNewCryptoKey(System.Int64 newKey)
    // Offset: 0x1E69EC8
    static void SetNewCryptoKey(int64_t newKey);
    // static public System.Int64 Encrypt(System.Double value)
    // Offset: 0x1E69F34
    static int64_t Encrypt(double value);
    // static public System.Int64 Encrypt(System.Double value, System.Int64 key)
    // Offset: 0x1E69FB0
    static int64_t Encrypt(double value, int64_t key);
    // static private CodeStage.AntiCheat.Common.ACTkByte8 InternalEncrypt(System.Double value)
    // Offset: 0x1E69E58
    static ::CodeStage::AntiCheat::Common::ACTkByte8 InternalEncrypt(double value);
    // static private CodeStage.AntiCheat.Common.ACTkByte8 InternalEncrypt(System.Double value, System.Int64 key)
    // Offset: 0x1E69FBC
    static ::CodeStage::AntiCheat::Common::ACTkByte8 InternalEncrypt(double value, int64_t key);
    // static public System.Double Decrypt(System.Int64 value)
    // Offset: 0x1E6A040
    static double Decrypt(int64_t value);
    // static public System.Double Decrypt(System.Int64 value, System.Int64 key)
    // Offset: 0x1E6A0B4
    static double Decrypt(int64_t value, int64_t key);
    // public System.Void ApplyNewCryptoKey()
    // Offset: 0xBB1560
    void ApplyNewCryptoKey();
    // public System.Void RandomizeCryptoKey()
    // Offset: 0xBB1568
    void RandomizeCryptoKey();
    // public System.Int64 GetEncrypted()
    // Offset: 0xBB1570
    int64_t GetEncrypted();
    // public System.Void SetEncrypted(System.Int64 encrypted)
    // Offset: 0xBB1598
    void SetEncrypted(int64_t encrypted);
    // public System.Double GetDecrypted()
    // Offset: 0xBB15A0
    double GetDecrypted();
    // private System.Double InternalDecrypt()
    // Offset: 0xBB15A8
    double InternalDecrypt();
    // public System.String ToString(System.String format)
    // Offset: 0xBB15E0
    ::StringW ToString(::StringW format);
    // public System.String ToString(System.IFormatProvider provider)
    // Offset: 0xBB1618
    ::StringW ToString(::System::IFormatProvider* provider);
    // public System.String ToString(System.String format, System.IFormatProvider provider)
    // Offset: 0xBB1650
    ::StringW ToString(::StringW format, ::System::IFormatProvider* provider);
    // public System.Boolean Equals(CodeStage.AntiCheat.ObscuredTypes.ObscuredDouble obj)
    // Offset: 0xBB16A0
    bool Equals(::CodeStage::AntiCheat::ObscuredTypes::ObscuredDouble obj);
    // static private System.Void .cctor()
    // Offset: 0x1E6A824
    static void _cctor();
    // public override System.String ToString()
    // Offset: 0xBB15B0
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::StringW ToString();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0xBB1698
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0xBB16E0
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
  }; // CodeStage.AntiCheat.ObscuredTypes.ObscuredDouble
  #pragma pack(pop)
  static check_size<sizeof(ObscuredDouble), 40 + sizeof(bool)> __CodeStage_AntiCheat_ObscuredTypes_ObscuredDoubleSizeCheck;
  static_assert(sizeof(ObscuredDouble) == 0x29);
  // static public CodeStage.AntiCheat.ObscuredTypes.ObscuredDouble op_Increment(CodeStage.AntiCheat.ObscuredTypes.ObscuredDouble input)
  // Offset: 0x1E6A4A0
  ::CodeStage::AntiCheat::ObscuredTypes::ObscuredDouble operator++(const ::CodeStage::AntiCheat::ObscuredTypes::ObscuredDouble& input);
  // static public CodeStage.AntiCheat.ObscuredTypes.ObscuredDouble op_Decrement(CodeStage.AntiCheat.ObscuredTypes.ObscuredDouble input)
  // Offset: 0x1E6A56C
  ::CodeStage::AntiCheat::ObscuredTypes::ObscuredDouble operator--(const ::CodeStage::AntiCheat::ObscuredTypes::ObscuredDouble& input);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: CodeStage::AntiCheat::ObscuredTypes::ObscuredDouble::ObscuredDouble
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: CodeStage::AntiCheat::ObscuredTypes::ObscuredDouble::SetNewCryptoKey
// Il2CppName: SetNewCryptoKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int64_t)>(&CodeStage::AntiCheat::ObscuredTypes::ObscuredDouble::SetNewCryptoKey)> {
  static const MethodInfo* get() {
    static auto* newKey = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(CodeStage::AntiCheat::ObscuredTypes::ObscuredDouble), "SetNewCryptoKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{newKey});
  }
};
// Writing MetadataGetter for method: CodeStage::AntiCheat::ObscuredTypes::ObscuredDouble::Encrypt
// Il2CppName: Encrypt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (*)(double)>(&CodeStage::AntiCheat::ObscuredTypes::ObscuredDouble::Encrypt)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(CodeStage::AntiCheat::ObscuredTypes::ObscuredDouble), "Encrypt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: CodeStage::AntiCheat::ObscuredTypes::ObscuredDouble::Encrypt
// Il2CppName: Encrypt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (*)(double, int64_t)>(&CodeStage::AntiCheat::ObscuredTypes::ObscuredDouble::Encrypt)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(CodeStage::AntiCheat::ObscuredTypes::ObscuredDouble), "Encrypt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, key});
  }
};
// Writing MetadataGetter for method: CodeStage::AntiCheat::ObscuredTypes::ObscuredDouble::InternalEncrypt
// Il2CppName: InternalEncrypt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::CodeStage::AntiCheat::Common::ACTkByte8 (*)(double)>(&CodeStage::AntiCheat::ObscuredTypes::ObscuredDouble::InternalEncrypt)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(CodeStage::AntiCheat::ObscuredTypes::ObscuredDouble), "InternalEncrypt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: CodeStage::AntiCheat::ObscuredTypes::ObscuredDouble::InternalEncrypt
// Il2CppName: InternalEncrypt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::CodeStage::AntiCheat::Common::ACTkByte8 (*)(double, int64_t)>(&CodeStage::AntiCheat::ObscuredTypes::ObscuredDouble::InternalEncrypt)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(CodeStage::AntiCheat::ObscuredTypes::ObscuredDouble), "InternalEncrypt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, key});
  }
};
// Writing MetadataGetter for method: CodeStage::AntiCheat::ObscuredTypes::ObscuredDouble::Decrypt
// Il2CppName: Decrypt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double (*)(int64_t)>(&CodeStage::AntiCheat::ObscuredTypes::ObscuredDouble::Decrypt)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(CodeStage::AntiCheat::ObscuredTypes::ObscuredDouble), "Decrypt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: CodeStage::AntiCheat::ObscuredTypes::ObscuredDouble::Decrypt
// Il2CppName: Decrypt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double (*)(int64_t, int64_t)>(&CodeStage::AntiCheat::ObscuredTypes::ObscuredDouble::Decrypt)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(CodeStage::AntiCheat::ObscuredTypes::ObscuredDouble), "Decrypt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, key});
  }
};
// Writing MetadataGetter for method: CodeStage::AntiCheat::ObscuredTypes::ObscuredDouble::ApplyNewCryptoKey
// Il2CppName: ApplyNewCryptoKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (CodeStage::AntiCheat::ObscuredTypes::ObscuredDouble::*)()>(&CodeStage::AntiCheat::ObscuredTypes::ObscuredDouble::ApplyNewCryptoKey)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(CodeStage::AntiCheat::ObscuredTypes::ObscuredDouble), "ApplyNewCryptoKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: CodeStage::AntiCheat::ObscuredTypes::ObscuredDouble::RandomizeCryptoKey
// Il2CppName: RandomizeCryptoKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (CodeStage::AntiCheat::ObscuredTypes::ObscuredDouble::*)()>(&CodeStage::AntiCheat::ObscuredTypes::ObscuredDouble::RandomizeCryptoKey)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(CodeStage::AntiCheat::ObscuredTypes::ObscuredDouble), "RandomizeCryptoKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: CodeStage::AntiCheat::ObscuredTypes::ObscuredDouble::GetEncrypted
// Il2CppName: GetEncrypted
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (CodeStage::AntiCheat::ObscuredTypes::ObscuredDouble::*)()>(&CodeStage::AntiCheat::ObscuredTypes::ObscuredDouble::GetEncrypted)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(CodeStage::AntiCheat::ObscuredTypes::ObscuredDouble), "GetEncrypted", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: CodeStage::AntiCheat::ObscuredTypes::ObscuredDouble::SetEncrypted
// Il2CppName: SetEncrypted
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (CodeStage::AntiCheat::ObscuredTypes::ObscuredDouble::*)(int64_t)>(&CodeStage::AntiCheat::ObscuredTypes::ObscuredDouble::SetEncrypted)> {
  static const MethodInfo* get() {
    static auto* encrypted = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(CodeStage::AntiCheat::ObscuredTypes::ObscuredDouble), "SetEncrypted", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{encrypted});
  }
};
// Writing MetadataGetter for method: CodeStage::AntiCheat::ObscuredTypes::ObscuredDouble::GetDecrypted
// Il2CppName: GetDecrypted
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double (CodeStage::AntiCheat::ObscuredTypes::ObscuredDouble::*)()>(&CodeStage::AntiCheat::ObscuredTypes::ObscuredDouble::GetDecrypted)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(CodeStage::AntiCheat::ObscuredTypes::ObscuredDouble), "GetDecrypted", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: CodeStage::AntiCheat::ObscuredTypes::ObscuredDouble::InternalDecrypt
// Il2CppName: InternalDecrypt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double (CodeStage::AntiCheat::ObscuredTypes::ObscuredDouble::*)()>(&CodeStage::AntiCheat::ObscuredTypes::ObscuredDouble::InternalDecrypt)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(CodeStage::AntiCheat::ObscuredTypes::ObscuredDouble), "InternalDecrypt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: CodeStage::AntiCheat::ObscuredTypes::ObscuredDouble::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (CodeStage::AntiCheat::ObscuredTypes::ObscuredDouble::*)(::StringW)>(&CodeStage::AntiCheat::ObscuredTypes::ObscuredDouble::ToString)> {
  static const MethodInfo* get() {
    static auto* format = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(CodeStage::AntiCheat::ObscuredTypes::ObscuredDouble), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{format});
  }
};
// Writing MetadataGetter for method: CodeStage::AntiCheat::ObscuredTypes::ObscuredDouble::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (CodeStage::AntiCheat::ObscuredTypes::ObscuredDouble::*)(::System::IFormatProvider*)>(&CodeStage::AntiCheat::ObscuredTypes::ObscuredDouble::ToString)> {
  static const MethodInfo* get() {
    static auto* provider = &::il2cpp_utils::GetClassFromName("System", "IFormatProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(CodeStage::AntiCheat::ObscuredTypes::ObscuredDouble), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{provider});
  }
};
// Writing MetadataGetter for method: CodeStage::AntiCheat::ObscuredTypes::ObscuredDouble::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (CodeStage::AntiCheat::ObscuredTypes::ObscuredDouble::*)(::StringW, ::System::IFormatProvider*)>(&CodeStage::AntiCheat::ObscuredTypes::ObscuredDouble::ToString)> {
  static const MethodInfo* get() {
    static auto* format = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* provider = &::il2cpp_utils::GetClassFromName("System", "IFormatProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(CodeStage::AntiCheat::ObscuredTypes::ObscuredDouble), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{format, provider});
  }
};
// Writing MetadataGetter for method: CodeStage::AntiCheat::ObscuredTypes::ObscuredDouble::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (CodeStage::AntiCheat::ObscuredTypes::ObscuredDouble::*)(::CodeStage::AntiCheat::ObscuredTypes::ObscuredDouble)>(&CodeStage::AntiCheat::ObscuredTypes::ObscuredDouble::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("CodeStage.AntiCheat.ObscuredTypes", "ObscuredDouble")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(CodeStage::AntiCheat::ObscuredTypes::ObscuredDouble), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: CodeStage::AntiCheat::ObscuredTypes::ObscuredDouble::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&CodeStage::AntiCheat::ObscuredTypes::ObscuredDouble::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(CodeStage::AntiCheat::ObscuredTypes::ObscuredDouble), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: CodeStage::AntiCheat::ObscuredTypes::ObscuredDouble::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (CodeStage::AntiCheat::ObscuredTypes::ObscuredDouble::*)()>(&CodeStage::AntiCheat::ObscuredTypes::ObscuredDouble::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(CodeStage::AntiCheat::ObscuredTypes::ObscuredDouble), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: CodeStage::AntiCheat::ObscuredTypes::ObscuredDouble::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (CodeStage::AntiCheat::ObscuredTypes::ObscuredDouble::*)(::Il2CppObject*)>(&CodeStage::AntiCheat::ObscuredTypes::ObscuredDouble::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(CodeStage::AntiCheat::ObscuredTypes::ObscuredDouble), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: CodeStage::AntiCheat::ObscuredTypes::ObscuredDouble::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (CodeStage::AntiCheat::ObscuredTypes::ObscuredDouble::*)()>(&CodeStage::AntiCheat::ObscuredTypes::ObscuredDouble::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(CodeStage::AntiCheat::ObscuredTypes::ObscuredDouble), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: CodeStage::AntiCheat::ObscuredTypes::ObscuredDouble::operator++
// Il2CppName: op_Increment
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: CodeStage::AntiCheat::ObscuredTypes::ObscuredDouble::operator--
// Il2CppName: op_Decrement
// Cannot perform method pointer template specialization from operators!
