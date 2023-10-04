// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: FMOD
namespace FMOD {
  // Forward declaring type: RESULT
  struct RESULT;
}
// Forward declaring namespace: FMOD::Studio
namespace FMOD::Studio {
  // Forward declaring type: PARAMETER_DESCRIPTION
  struct PARAMETER_DESCRIPTION;
}
// Completed forward declares
// Type namespace: FMOD.Studio
namespace FMOD::Studio {
  // Forward declaring type: ParameterInstance
  struct ParameterInstance;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::FMOD::Studio::ParameterInstance, "FMOD.Studio", "ParameterInstance");
// Type namespace: FMOD.Studio
namespace FMOD::Studio {
  // Size: 0x8
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: FMOD.Studio.ParameterInstance
  // [TokenAttribute] Offset: FFFFFFFF
  struct ParameterInstance/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.IntPtr handle
    // Size: 0x8
    // Offset: 0x0
    ::System::IntPtr handle;
    // Field size check
    static_assert(sizeof(::System::IntPtr) == 0x8);
    public:
    // Creating value type constructor for type: ParameterInstance
    constexpr ParameterInstance(::System::IntPtr handle_ = {}) noexcept : handle{handle_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept {
      return handle;
    }
    // Get instance field reference: public System.IntPtr handle
    [[deprecated("Use field access instead!")]] ::System::IntPtr& dyn_handle();
    // public FMOD.RESULT getDescription(out FMOD.Studio.PARAMETER_DESCRIPTION description)
    // Offset: 0xBBE30C
    ::FMOD::RESULT getDescription(ByRef<::FMOD::Studio::PARAMETER_DESCRIPTION> description);
    // public FMOD.RESULT getValue(out System.Single value)
    // Offset: 0xBBE314
    ::FMOD::RESULT getValue(ByRef<float> value);
    // public FMOD.RESULT setValue(System.Single value)
    // Offset: 0xBBE31C
    ::FMOD::RESULT setValue(float value);
    // static private System.Boolean FMOD_Studio_ParameterInstance_IsValid(System.IntPtr parameter)
    // Offset: 0x22EDAD8
    static bool FMOD_Studio_ParameterInstance_IsValid(::System::IntPtr parameter);
    // static private FMOD.RESULT FMOD_Studio_ParameterInstance_GetDescription(System.IntPtr parameter, out FMOD.Studio.PARAMETER_DESCRIPTION description)
    // Offset: 0x22ED8C4
    static ::FMOD::RESULT FMOD_Studio_ParameterInstance_GetDescription(::System::IntPtr parameter, ByRef<::FMOD::Studio::PARAMETER_DESCRIPTION> description);
    // static private FMOD.RESULT FMOD_Studio_ParameterInstance_GetValue(System.IntPtr parameter, out System.Single value)
    // Offset: 0x22ED978
    static ::FMOD::RESULT FMOD_Studio_ParameterInstance_GetValue(::System::IntPtr parameter, ByRef<float> value);
    // static private FMOD.RESULT FMOD_Studio_ParameterInstance_SetValue(System.IntPtr parameter, System.Single value)
    // Offset: 0x22EDA2C
    static ::FMOD::RESULT FMOD_Studio_ParameterInstance_SetValue(::System::IntPtr parameter, float value);
    // public System.Boolean hasHandle()
    // Offset: 0xBBE324
    bool hasHandle();
    // public System.Void clearHandle()
    // Offset: 0xBBE32C
    void clearHandle();
    // public System.Boolean isValid()
    // Offset: 0xBBE370
    bool isValid();
  }; // FMOD.Studio.ParameterInstance
  #pragma pack(pop)
  static check_size<sizeof(ParameterInstance), 0 + sizeof(::System::IntPtr)> __FMOD_Studio_ParameterInstanceSizeCheck;
  static_assert(sizeof(ParameterInstance) == 0x8);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: FMOD::Studio::ParameterInstance::getDescription
// Il2CppName: getDescription
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::FMOD::RESULT (FMOD::Studio::ParameterInstance::*)(ByRef<::FMOD::Studio::PARAMETER_DESCRIPTION>)>(&FMOD::Studio::ParameterInstance::getDescription)> {
  static const MethodInfo* get() {
    static auto* description = &::il2cpp_utils::GetClassFromName("FMOD.Studio", "PARAMETER_DESCRIPTION")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(FMOD::Studio::ParameterInstance), "getDescription", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{description});
  }
};
// Writing MetadataGetter for method: FMOD::Studio::ParameterInstance::getValue
// Il2CppName: getValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::FMOD::RESULT (FMOD::Studio::ParameterInstance::*)(ByRef<float>)>(&FMOD::Studio::ParameterInstance::getValue)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(FMOD::Studio::ParameterInstance), "getValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: FMOD::Studio::ParameterInstance::setValue
// Il2CppName: setValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::FMOD::RESULT (FMOD::Studio::ParameterInstance::*)(float)>(&FMOD::Studio::ParameterInstance::setValue)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(FMOD::Studio::ParameterInstance), "setValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: FMOD::Studio::ParameterInstance::FMOD_Studio_ParameterInstance_IsValid
// Il2CppName: FMOD_Studio_ParameterInstance_IsValid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::IntPtr)>(&FMOD::Studio::ParameterInstance::FMOD_Studio_ParameterInstance_IsValid)> {
  static const MethodInfo* get() {
    static auto* parameter = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(FMOD::Studio::ParameterInstance), "FMOD_Studio_ParameterInstance_IsValid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{parameter});
  }
};
// Writing MetadataGetter for method: FMOD::Studio::ParameterInstance::FMOD_Studio_ParameterInstance_GetDescription
// Il2CppName: FMOD_Studio_ParameterInstance_GetDescription
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::FMOD::RESULT (*)(::System::IntPtr, ByRef<::FMOD::Studio::PARAMETER_DESCRIPTION>)>(&FMOD::Studio::ParameterInstance::FMOD_Studio_ParameterInstance_GetDescription)> {
  static const MethodInfo* get() {
    static auto* parameter = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* description = &::il2cpp_utils::GetClassFromName("FMOD.Studio", "PARAMETER_DESCRIPTION")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(FMOD::Studio::ParameterInstance), "FMOD_Studio_ParameterInstance_GetDescription", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{parameter, description});
  }
};
// Writing MetadataGetter for method: FMOD::Studio::ParameterInstance::FMOD_Studio_ParameterInstance_GetValue
// Il2CppName: FMOD_Studio_ParameterInstance_GetValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::FMOD::RESULT (*)(::System::IntPtr, ByRef<float>)>(&FMOD::Studio::ParameterInstance::FMOD_Studio_ParameterInstance_GetValue)> {
  static const MethodInfo* get() {
    static auto* parameter = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(FMOD::Studio::ParameterInstance), "FMOD_Studio_ParameterInstance_GetValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{parameter, value});
  }
};
// Writing MetadataGetter for method: FMOD::Studio::ParameterInstance::FMOD_Studio_ParameterInstance_SetValue
// Il2CppName: FMOD_Studio_ParameterInstance_SetValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::FMOD::RESULT (*)(::System::IntPtr, float)>(&FMOD::Studio::ParameterInstance::FMOD_Studio_ParameterInstance_SetValue)> {
  static const MethodInfo* get() {
    static auto* parameter = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(FMOD::Studio::ParameterInstance), "FMOD_Studio_ParameterInstance_SetValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{parameter, value});
  }
};
// Writing MetadataGetter for method: FMOD::Studio::ParameterInstance::hasHandle
// Il2CppName: hasHandle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (FMOD::Studio::ParameterInstance::*)()>(&FMOD::Studio::ParameterInstance::hasHandle)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(FMOD::Studio::ParameterInstance), "hasHandle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: FMOD::Studio::ParameterInstance::clearHandle
// Il2CppName: clearHandle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (FMOD::Studio::ParameterInstance::*)()>(&FMOD::Studio::ParameterInstance::clearHandle)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(FMOD::Studio::ParameterInstance), "clearHandle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: FMOD::Studio::ParameterInstance::isValid
// Il2CppName: isValid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (FMOD::Studio::ParameterInstance::*)()>(&FMOD::Studio::ParameterInstance::isValid)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(FMOD::Studio::ParameterInstance), "isValid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
