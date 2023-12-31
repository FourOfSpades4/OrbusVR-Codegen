// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: CodeStage::AntiCheat::ObscuredTypes
namespace CodeStage::AntiCheat::ObscuredTypes {
  // Skipping declaration: RawEncryptedVector2 because it is already included!
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Vector3
  struct Vector3;
}
// Completed forward declares
// Type namespace: CodeStage.AntiCheat.ObscuredTypes
namespace CodeStage::AntiCheat::ObscuredTypes {
  // Forward declaring type: ObscuredVector2
  struct ObscuredVector2;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector2, "CodeStage.AntiCheat.ObscuredTypes", "ObscuredVector2");
// Type namespace: CodeStage.AntiCheat.ObscuredTypes
namespace CodeStage::AntiCheat::ObscuredTypes {
  // Size: 0x19
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: CodeStage.AntiCheat.ObscuredTypes.ObscuredVector2
  // [TokenAttribute] Offset: FFFFFFFF
  // [DefaultMemberAttribute] Offset: AC21AC
  struct ObscuredVector2/*, public ::System::ValueType*/ {
    public:
    // Nested type: ::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector2::RawEncryptedVector2
    struct RawEncryptedVector2;
    // Size: 0x8
    #pragma pack(push, 1)
    // WARNING Layout: Sequential may not be correctly taken into account!
    // Autogenerated type: CodeStage.AntiCheat.ObscuredTypes.ObscuredVector2/RawEncryptedVector2
    // [TokenAttribute] Offset: FFFFFFFF
    struct RawEncryptedVector2/*, public ::System::ValueType*/ {
      public:
      public:
      // public System.Int32 x
      // Size: 0x4
      // Offset: 0x0
      int x;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // public System.Int32 y
      // Size: 0x4
      // Offset: 0x4
      int y;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: RawEncryptedVector2
      constexpr RawEncryptedVector2(int x_ = {}, int y_ = {}) noexcept : x{x_}, y{y_} {}
      // Creating interface conversion operator: operator ::System::ValueType
      operator ::System::ValueType() noexcept {
        return *reinterpret_cast<::System::ValueType*>(this);
      }
      // Get instance field reference: public System.Int32 x
      [[deprecated("Use field access instead!")]] int& dyn_x();
      // Get instance field reference: public System.Int32 y
      [[deprecated("Use field access instead!")]] int& dyn_y();
    }; // CodeStage.AntiCheat.ObscuredTypes.ObscuredVector2/RawEncryptedVector2
    #pragma pack(pop)
    static check_size<sizeof(ObscuredVector2::RawEncryptedVector2), 4 + sizeof(int)> __CodeStage_AntiCheat_ObscuredTypes_ObscuredVector2_RawEncryptedVector2SizeCheck;
    static_assert(sizeof(ObscuredVector2::RawEncryptedVector2) == 0x8);
    public:
    // private System.Int32 currentCryptoKey
    // Size: 0x4
    // Offset: 0x0
    int currentCryptoKey;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private CodeStage.AntiCheat.ObscuredTypes.ObscuredVector2/RawEncryptedVector2 hiddenValue
    // Size: 0x8
    // Offset: 0x4
    ::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector2::RawEncryptedVector2 hiddenValue;
    // Field size check
    static_assert(sizeof(::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector2::RawEncryptedVector2) == 0x8);
    // private System.Boolean inited
    // Size: 0x1
    // Offset: 0xC
    bool inited;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: inited and: fakeValue
    char __padding2[0x3] = {};
    // private UnityEngine.Vector2 fakeValue
    // Size: 0x8
    // Offset: 0x10
    ::UnityEngine::Vector2 fakeValue;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector2) == 0x8);
    // private System.Boolean fakeValueActive
    // Size: 0x1
    // Offset: 0x18
    bool fakeValueActive;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating value type constructor for type: ObscuredVector2
    constexpr ObscuredVector2(int currentCryptoKey_ = {}, ::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector2::RawEncryptedVector2 hiddenValue_ = {}, bool inited_ = {}, ::UnityEngine::Vector2 fakeValue_ = {}, bool fakeValueActive_ = {}) noexcept : currentCryptoKey{currentCryptoKey_}, hiddenValue{hiddenValue_}, inited{inited_}, fakeValue{fakeValue_}, fakeValueActive{fakeValueActive_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get static field: static private System.Int32 cryptoKey
    static int _get_cryptoKey();
    // Set static field: static private System.Int32 cryptoKey
    static void _set_cryptoKey(int value);
    // Get static field: static private readonly UnityEngine.Vector2 zero
    static ::UnityEngine::Vector2 _get_zero();
    // Set static field: static private readonly UnityEngine.Vector2 zero
    static void _set_zero(::UnityEngine::Vector2 value);
    // Get instance field reference: private System.Int32 currentCryptoKey
    [[deprecated("Use field access instead!")]] int& dyn_currentCryptoKey();
    // Get instance field reference: private CodeStage.AntiCheat.ObscuredTypes.ObscuredVector2/RawEncryptedVector2 hiddenValue
    [[deprecated("Use field access instead!")]] ::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector2::RawEncryptedVector2& dyn_hiddenValue();
    // Get instance field reference: private System.Boolean inited
    [[deprecated("Use field access instead!")]] bool& dyn_inited();
    // Get instance field reference: private UnityEngine.Vector2 fakeValue
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector2& dyn_fakeValue();
    // Get instance field reference: private System.Boolean fakeValueActive
    [[deprecated("Use field access instead!")]] bool& dyn_fakeValueActive();
    // private System.Void .ctor(UnityEngine.Vector2 value)
    // Offset: 0xBBB3BC
    ObscuredVector2(::UnityEngine::Vector2 value);
    // public System.Void .ctor(System.Single x, System.Single y)
    // Offset: 0xBBB3C4
    ObscuredVector2(float x, float y);
    // public System.Single get_x()
    // Offset: 0xBBB3CC
    float get_x();
    // public System.Void set_x(System.Single value)
    // Offset: 0xBBB3D4
    void set_x(float value);
    // public System.Single get_y()
    // Offset: 0xBBB3DC
    float get_y();
    // public System.Void set_y(System.Single value)
    // Offset: 0xBBB3E4
    void set_y(float value);
    // public System.Single get_Item(System.Int32 index)
    // Offset: 0xBBB3EC
    float get_Item(int index);
    // public System.Void set_Item(System.Int32 index, System.Single value)
    // Offset: 0xBBB3F4
    void set_Item(int index, float value);
    // static public System.Void SetNewCryptoKey(System.Int32 newKey)
    // Offset: 0x225E9A0
    static void SetNewCryptoKey(int newKey);
    // static public CodeStage.AntiCheat.ObscuredTypes.ObscuredVector2/RawEncryptedVector2 Encrypt(UnityEngine.Vector2 value)
    // Offset: 0x225E23C
    static ::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector2::RawEncryptedVector2 Encrypt(::UnityEngine::Vector2 value);
    // static public CodeStage.AntiCheat.ObscuredTypes.ObscuredVector2/RawEncryptedVector2 Encrypt(UnityEngine.Vector2 value, System.Int32 key)
    // Offset: 0x225EA0C
    static ::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector2::RawEncryptedVector2 Encrypt(::UnityEngine::Vector2 value, int key);
    // static public CodeStage.AntiCheat.ObscuredTypes.ObscuredVector2/RawEncryptedVector2 Encrypt(System.Single x, System.Single y, System.Int32 key)
    // Offset: 0x225E394
    static ::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector2::RawEncryptedVector2 Encrypt(float x, float y, int key);
    // static public UnityEngine.Vector2 Decrypt(CodeStage.AntiCheat.ObscuredTypes.ObscuredVector2/RawEncryptedVector2 value)
    // Offset: 0x225EA88
    static ::UnityEngine::Vector2 Decrypt(::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector2::RawEncryptedVector2 value);
    // static public UnityEngine.Vector2 Decrypt(CodeStage.AntiCheat.ObscuredTypes.ObscuredVector2/RawEncryptedVector2 value, System.Int32 key)
    // Offset: 0x225EAF0
    static ::UnityEngine::Vector2 Decrypt(::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector2::RawEncryptedVector2 value, int key);
    // public System.Void ApplyNewCryptoKey()
    // Offset: 0xBBB3FC
    void ApplyNewCryptoKey();
    // public System.Void RandomizeCryptoKey()
    // Offset: 0xBBB404
    void RandomizeCryptoKey();
    // public CodeStage.AntiCheat.ObscuredTypes.ObscuredVector2/RawEncryptedVector2 GetEncrypted()
    // Offset: 0xBBB40C
    ::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector2::RawEncryptedVector2 GetEncrypted();
    // public System.Void SetEncrypted(CodeStage.AntiCheat.ObscuredTypes.ObscuredVector2/RawEncryptedVector2 encrypted)
    // Offset: 0xBBB434
    void SetEncrypted(::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector2::RawEncryptedVector2 encrypted);
    // public UnityEngine.Vector2 GetDecrypted()
    // Offset: 0xBBB43C
    ::UnityEngine::Vector2 GetDecrypted();
    // private UnityEngine.Vector2 InternalDecrypt()
    // Offset: 0xBBB444
    ::UnityEngine::Vector2 InternalDecrypt();
    // private System.Boolean CompareVectorsWithTolerance(UnityEngine.Vector2 vector1, UnityEngine.Vector2 vector2)
    // Offset: 0xBBB44C
    bool CompareVectorsWithTolerance(::UnityEngine::Vector2 vector1, ::UnityEngine::Vector2 vector2);
    // private System.Single InternalDecryptField(System.Int32 encrypted)
    // Offset: 0xBBB450
    float InternalDecryptField(int encrypted);
    // private System.Int32 InternalEncryptField(System.Single encrypted)
    // Offset: 0xBBB458
    int InternalEncryptField(float encrypted);
    // public System.String ToString(System.String format)
    // Offset: 0xBBB4BC
    ::StringW ToString(::StringW format);
    // static private System.Void .cctor()
    // Offset: 0x225F148
    static void _cctor();
    // public override System.Int32 GetHashCode()
    // Offset: 0xBBB45C
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
    // public override System.String ToString()
    // Offset: 0xBBB48C
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::StringW ToString();
  }; // CodeStage.AntiCheat.ObscuredTypes.ObscuredVector2
  #pragma pack(pop)
  static check_size<sizeof(ObscuredVector2), 24 + sizeof(bool)> __CodeStage_AntiCheat_ObscuredTypes_ObscuredVector2SizeCheck;
  static_assert(sizeof(ObscuredVector2) == 0x19);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector2::RawEncryptedVector2, "CodeStage.AntiCheat.ObscuredTypes", "ObscuredVector2/RawEncryptedVector2");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: CodeStage::AntiCheat::ObscuredTypes::ObscuredVector2::ObscuredVector2
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: CodeStage::AntiCheat::ObscuredTypes::ObscuredVector2::ObscuredVector2
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: CodeStage::AntiCheat::ObscuredTypes::ObscuredVector2::get_x
// Il2CppName: get_x
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (CodeStage::AntiCheat::ObscuredTypes::ObscuredVector2::*)()>(&CodeStage::AntiCheat::ObscuredTypes::ObscuredVector2::get_x)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(CodeStage::AntiCheat::ObscuredTypes::ObscuredVector2), "get_x", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: CodeStage::AntiCheat::ObscuredTypes::ObscuredVector2::set_x
// Il2CppName: set_x
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (CodeStage::AntiCheat::ObscuredTypes::ObscuredVector2::*)(float)>(&CodeStage::AntiCheat::ObscuredTypes::ObscuredVector2::set_x)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(CodeStage::AntiCheat::ObscuredTypes::ObscuredVector2), "set_x", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: CodeStage::AntiCheat::ObscuredTypes::ObscuredVector2::get_y
// Il2CppName: get_y
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (CodeStage::AntiCheat::ObscuredTypes::ObscuredVector2::*)()>(&CodeStage::AntiCheat::ObscuredTypes::ObscuredVector2::get_y)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(CodeStage::AntiCheat::ObscuredTypes::ObscuredVector2), "get_y", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: CodeStage::AntiCheat::ObscuredTypes::ObscuredVector2::set_y
// Il2CppName: set_y
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (CodeStage::AntiCheat::ObscuredTypes::ObscuredVector2::*)(float)>(&CodeStage::AntiCheat::ObscuredTypes::ObscuredVector2::set_y)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(CodeStage::AntiCheat::ObscuredTypes::ObscuredVector2), "set_y", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: CodeStage::AntiCheat::ObscuredTypes::ObscuredVector2::get_Item
// Il2CppName: get_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (CodeStage::AntiCheat::ObscuredTypes::ObscuredVector2::*)(int)>(&CodeStage::AntiCheat::ObscuredTypes::ObscuredVector2::get_Item)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(CodeStage::AntiCheat::ObscuredTypes::ObscuredVector2), "get_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: CodeStage::AntiCheat::ObscuredTypes::ObscuredVector2::set_Item
// Il2CppName: set_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (CodeStage::AntiCheat::ObscuredTypes::ObscuredVector2::*)(int, float)>(&CodeStage::AntiCheat::ObscuredTypes::ObscuredVector2::set_Item)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(CodeStage::AntiCheat::ObscuredTypes::ObscuredVector2), "set_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index, value});
  }
};
// Writing MetadataGetter for method: CodeStage::AntiCheat::ObscuredTypes::ObscuredVector2::SetNewCryptoKey
// Il2CppName: SetNewCryptoKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int)>(&CodeStage::AntiCheat::ObscuredTypes::ObscuredVector2::SetNewCryptoKey)> {
  static const MethodInfo* get() {
    static auto* newKey = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(CodeStage::AntiCheat::ObscuredTypes::ObscuredVector2), "SetNewCryptoKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{newKey});
  }
};
// Writing MetadataGetter for method: CodeStage::AntiCheat::ObscuredTypes::ObscuredVector2::Encrypt
// Il2CppName: Encrypt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector2::RawEncryptedVector2 (*)(::UnityEngine::Vector2)>(&CodeStage::AntiCheat::ObscuredTypes::ObscuredVector2::Encrypt)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(CodeStage::AntiCheat::ObscuredTypes::ObscuredVector2), "Encrypt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: CodeStage::AntiCheat::ObscuredTypes::ObscuredVector2::Encrypt
// Il2CppName: Encrypt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector2::RawEncryptedVector2 (*)(::UnityEngine::Vector2, int)>(&CodeStage::AntiCheat::ObscuredTypes::ObscuredVector2::Encrypt)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(CodeStage::AntiCheat::ObscuredTypes::ObscuredVector2), "Encrypt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, key});
  }
};
// Writing MetadataGetter for method: CodeStage::AntiCheat::ObscuredTypes::ObscuredVector2::Encrypt
// Il2CppName: Encrypt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector2::RawEncryptedVector2 (*)(float, float, int)>(&CodeStage::AntiCheat::ObscuredTypes::ObscuredVector2::Encrypt)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* y = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(CodeStage::AntiCheat::ObscuredTypes::ObscuredVector2), "Encrypt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, y, key});
  }
};
// Writing MetadataGetter for method: CodeStage::AntiCheat::ObscuredTypes::ObscuredVector2::Decrypt
// Il2CppName: Decrypt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (*)(::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector2::RawEncryptedVector2)>(&CodeStage::AntiCheat::ObscuredTypes::ObscuredVector2::Decrypt)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("CodeStage.AntiCheat.ObscuredTypes", "ObscuredVector2/RawEncryptedVector2")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(CodeStage::AntiCheat::ObscuredTypes::ObscuredVector2), "Decrypt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: CodeStage::AntiCheat::ObscuredTypes::ObscuredVector2::Decrypt
// Il2CppName: Decrypt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (*)(::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector2::RawEncryptedVector2, int)>(&CodeStage::AntiCheat::ObscuredTypes::ObscuredVector2::Decrypt)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("CodeStage.AntiCheat.ObscuredTypes", "ObscuredVector2/RawEncryptedVector2")->byval_arg;
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(CodeStage::AntiCheat::ObscuredTypes::ObscuredVector2), "Decrypt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, key});
  }
};
// Writing MetadataGetter for method: CodeStage::AntiCheat::ObscuredTypes::ObscuredVector2::ApplyNewCryptoKey
// Il2CppName: ApplyNewCryptoKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (CodeStage::AntiCheat::ObscuredTypes::ObscuredVector2::*)()>(&CodeStage::AntiCheat::ObscuredTypes::ObscuredVector2::ApplyNewCryptoKey)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(CodeStage::AntiCheat::ObscuredTypes::ObscuredVector2), "ApplyNewCryptoKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: CodeStage::AntiCheat::ObscuredTypes::ObscuredVector2::RandomizeCryptoKey
// Il2CppName: RandomizeCryptoKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (CodeStage::AntiCheat::ObscuredTypes::ObscuredVector2::*)()>(&CodeStage::AntiCheat::ObscuredTypes::ObscuredVector2::RandomizeCryptoKey)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(CodeStage::AntiCheat::ObscuredTypes::ObscuredVector2), "RandomizeCryptoKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: CodeStage::AntiCheat::ObscuredTypes::ObscuredVector2::GetEncrypted
// Il2CppName: GetEncrypted
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector2::RawEncryptedVector2 (CodeStage::AntiCheat::ObscuredTypes::ObscuredVector2::*)()>(&CodeStage::AntiCheat::ObscuredTypes::ObscuredVector2::GetEncrypted)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(CodeStage::AntiCheat::ObscuredTypes::ObscuredVector2), "GetEncrypted", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: CodeStage::AntiCheat::ObscuredTypes::ObscuredVector2::SetEncrypted
// Il2CppName: SetEncrypted
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (CodeStage::AntiCheat::ObscuredTypes::ObscuredVector2::*)(::CodeStage::AntiCheat::ObscuredTypes::ObscuredVector2::RawEncryptedVector2)>(&CodeStage::AntiCheat::ObscuredTypes::ObscuredVector2::SetEncrypted)> {
  static const MethodInfo* get() {
    static auto* encrypted = &::il2cpp_utils::GetClassFromName("CodeStage.AntiCheat.ObscuredTypes", "ObscuredVector2/RawEncryptedVector2")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(CodeStage::AntiCheat::ObscuredTypes::ObscuredVector2), "SetEncrypted", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{encrypted});
  }
};
// Writing MetadataGetter for method: CodeStage::AntiCheat::ObscuredTypes::ObscuredVector2::GetDecrypted
// Il2CppName: GetDecrypted
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (CodeStage::AntiCheat::ObscuredTypes::ObscuredVector2::*)()>(&CodeStage::AntiCheat::ObscuredTypes::ObscuredVector2::GetDecrypted)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(CodeStage::AntiCheat::ObscuredTypes::ObscuredVector2), "GetDecrypted", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: CodeStage::AntiCheat::ObscuredTypes::ObscuredVector2::InternalDecrypt
// Il2CppName: InternalDecrypt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (CodeStage::AntiCheat::ObscuredTypes::ObscuredVector2::*)()>(&CodeStage::AntiCheat::ObscuredTypes::ObscuredVector2::InternalDecrypt)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(CodeStage::AntiCheat::ObscuredTypes::ObscuredVector2), "InternalDecrypt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: CodeStage::AntiCheat::ObscuredTypes::ObscuredVector2::CompareVectorsWithTolerance
// Il2CppName: CompareVectorsWithTolerance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (CodeStage::AntiCheat::ObscuredTypes::ObscuredVector2::*)(::UnityEngine::Vector2, ::UnityEngine::Vector2)>(&CodeStage::AntiCheat::ObscuredTypes::ObscuredVector2::CompareVectorsWithTolerance)> {
  static const MethodInfo* get() {
    static auto* vector1 = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    static auto* vector2 = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(CodeStage::AntiCheat::ObscuredTypes::ObscuredVector2), "CompareVectorsWithTolerance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{vector1, vector2});
  }
};
// Writing MetadataGetter for method: CodeStage::AntiCheat::ObscuredTypes::ObscuredVector2::InternalDecryptField
// Il2CppName: InternalDecryptField
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (CodeStage::AntiCheat::ObscuredTypes::ObscuredVector2::*)(int)>(&CodeStage::AntiCheat::ObscuredTypes::ObscuredVector2::InternalDecryptField)> {
  static const MethodInfo* get() {
    static auto* encrypted = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(CodeStage::AntiCheat::ObscuredTypes::ObscuredVector2), "InternalDecryptField", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{encrypted});
  }
};
// Writing MetadataGetter for method: CodeStage::AntiCheat::ObscuredTypes::ObscuredVector2::InternalEncryptField
// Il2CppName: InternalEncryptField
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (CodeStage::AntiCheat::ObscuredTypes::ObscuredVector2::*)(float)>(&CodeStage::AntiCheat::ObscuredTypes::ObscuredVector2::InternalEncryptField)> {
  static const MethodInfo* get() {
    static auto* encrypted = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(CodeStage::AntiCheat::ObscuredTypes::ObscuredVector2), "InternalEncryptField", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{encrypted});
  }
};
// Writing MetadataGetter for method: CodeStage::AntiCheat::ObscuredTypes::ObscuredVector2::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (CodeStage::AntiCheat::ObscuredTypes::ObscuredVector2::*)(::StringW)>(&CodeStage::AntiCheat::ObscuredTypes::ObscuredVector2::ToString)> {
  static const MethodInfo* get() {
    static auto* format = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(CodeStage::AntiCheat::ObscuredTypes::ObscuredVector2), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{format});
  }
};
// Writing MetadataGetter for method: CodeStage::AntiCheat::ObscuredTypes::ObscuredVector2::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&CodeStage::AntiCheat::ObscuredTypes::ObscuredVector2::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(CodeStage::AntiCheat::ObscuredTypes::ObscuredVector2), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: CodeStage::AntiCheat::ObscuredTypes::ObscuredVector2::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (CodeStage::AntiCheat::ObscuredTypes::ObscuredVector2::*)()>(&CodeStage::AntiCheat::ObscuredTypes::ObscuredVector2::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(CodeStage::AntiCheat::ObscuredTypes::ObscuredVector2), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: CodeStage::AntiCheat::ObscuredTypes::ObscuredVector2::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (CodeStage::AntiCheat::ObscuredTypes::ObscuredVector2::*)()>(&CodeStage::AntiCheat::ObscuredTypes::ObscuredVector2::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(CodeStage::AntiCheat::ObscuredTypes::ObscuredVector2), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
