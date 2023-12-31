// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Including type: UnityEngine.TouchScreenKeyboardType
#include "UnityEngine/TouchScreenKeyboardType.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: TouchScreenKeyboard_InternalConstructorHelperArguments
  struct TouchScreenKeyboard_InternalConstructorHelperArguments;
  // Forward declaring type: RangeInt
  struct RangeInt;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: TouchScreenKeyboard
  class TouchScreenKeyboard;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::TouchScreenKeyboard);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TouchScreenKeyboard*, "UnityEngine", "TouchScreenKeyboard");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.TouchScreenKeyboard
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: A6F410
  // [NativeHeaderAttribute] Offset: A6F410
  class TouchScreenKeyboard : public ::Il2CppObject {
    public:
    // Nested type: ::UnityEngine::TouchScreenKeyboard::Status
    struct Status;
    public:
    // System.IntPtr m_Ptr
    // Size: 0x8
    // Offset: 0x10
    ::System::IntPtr m_Ptr;
    // Field size check
    static_assert(sizeof(::System::IntPtr) == 0x8);
    // [DebuggerBrowsableAttribute] Offset: 0xA72FA4
    // [CompilerGeneratedAttribute] Offset: 0xA72FA4
    // private readonly System.Boolean <canGetSelection>k__BackingField
    // Size: 0x1
    // Offset: 0x18
    bool canGetSelection;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [DebuggerBrowsableAttribute] Offset: 0xA72FE0
    // [CompilerGeneratedAttribute] Offset: 0xA72FE0
    // private readonly System.Boolean <canSetSelection>k__BackingField
    // Size: 0x1
    // Offset: 0x19
    bool canSetSelection;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: canSetSelection and: type
    char __padding2[0x2] = {};
    // [CompilerGeneratedAttribute] Offset: 0xA7301C
    // [DebuggerBrowsableAttribute] Offset: 0xA7301C
    // private readonly UnityEngine.TouchScreenKeyboardType <type>k__BackingField
    // Size: 0x4
    // Offset: 0x1C
    ::UnityEngine::TouchScreenKeyboardType type;
    // Field size check
    static_assert(sizeof(::UnityEngine::TouchScreenKeyboardType) == 0x4);
    public:
    // Get instance field reference: System.IntPtr m_Ptr
    [[deprecated("Use field access instead!")]] ::System::IntPtr& dyn_m_Ptr();
    // Get instance field reference: private readonly System.Boolean <canGetSelection>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$canGetSelection$k__BackingField();
    // Get instance field reference: private readonly System.Boolean <canSetSelection>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$canSetSelection$k__BackingField();
    // Get instance field reference: private readonly UnityEngine.TouchScreenKeyboardType <type>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::TouchScreenKeyboardType& dyn_$type$k__BackingField();
    // public System.Void .ctor(System.String text, UnityEngine.TouchScreenKeyboardType keyboardType, System.Boolean autocorrection, System.Boolean multiline, System.Boolean secure, System.Boolean alert, System.String textPlaceholder, System.Int32 characterLimit)
    // Offset: 0x1F9F88C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TouchScreenKeyboard* New_ctor(::StringW text, ::UnityEngine::TouchScreenKeyboardType keyboardType, bool autocorrection, bool multiline, bool secure, bool alert, ::StringW textPlaceholder, int characterLimit) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::TouchScreenKeyboard::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TouchScreenKeyboard*, creationType>(text, keyboardType, autocorrection, multiline, secure, alert, textPlaceholder, characterLimit)));
    }
    // static private System.Void Internal_Destroy(System.IntPtr ptr)
    // Offset: 0x1F9FA50
    static void Internal_Destroy(::System::IntPtr ptr);
    // private System.Void Destroy()
    // Offset: 0x1F9FABC
    void Destroy();
    // static private System.IntPtr TouchScreenKeyboard_InternalConstructorHelper(ref UnityEngine.TouchScreenKeyboard_InternalConstructorHelperArguments arguments, System.String text, System.String textPlaceholder)
    // Offset: 0x1F9F9CC
    static ::System::IntPtr TouchScreenKeyboard_InternalConstructorHelper(ByRef<::UnityEngine::TouchScreenKeyboard_InternalConstructorHelperArguments> arguments, ::StringW text, ::StringW textPlaceholder);
    // static public System.Boolean get_isSupported()
    // Offset: 0x1F9FBB8
    static bool get_isSupported();
    // static public UnityEngine.TouchScreenKeyboard Open(System.String text, UnityEngine.TouchScreenKeyboardType keyboardType, System.Boolean autocorrection, System.Boolean multiline, System.Boolean secure, System.Boolean alert, System.String textPlaceholder, System.Int32 characterLimit)
    // Offset: 0x1F9FC18
    static ::UnityEngine::TouchScreenKeyboard* Open(::StringW text, ::UnityEngine::TouchScreenKeyboardType keyboardType, bool autocorrection, bool multiline, bool secure, bool alert, ::StringW textPlaceholder, int characterLimit);
    // static public UnityEngine.TouchScreenKeyboard Open(System.String text, UnityEngine.TouchScreenKeyboardType keyboardType, System.Boolean autocorrection, System.Boolean multiline, System.Boolean secure)
    // Offset: 0x1F9FCD8
    static ::UnityEngine::TouchScreenKeyboard* Open(::StringW text, ::UnityEngine::TouchScreenKeyboardType keyboardType, bool autocorrection, bool multiline, bool secure);
    // public System.String get_text()
    // Offset: 0x1F9FD6C
    ::StringW get_text();
    // public System.Void set_text(System.String value)
    // Offset: 0x1F9FDD8
    void set_text(::StringW value);
    // static public System.Void set_hideInput(System.Boolean value)
    // Offset: 0x1F9FE4C
    static void set_hideInput(bool value);
    // public System.Boolean get_active()
    // Offset: 0x1F9FEB8
    bool get_active();
    // public System.Void set_active(System.Boolean value)
    // Offset: 0x1F9FF24
    void set_active(bool value);
    // public UnityEngine.TouchScreenKeyboard/Status get_status()
    // Offset: 0x1F9FF98
    ::UnityEngine::TouchScreenKeyboard::Status get_status();
    // public System.Void set_characterLimit(System.Int32 value)
    // Offset: 0x1FA0004
    void set_characterLimit(int value);
    // public System.Boolean get_canGetSelection()
    // Offset: 0x1FA0078
    bool get_canGetSelection();
    // public System.Boolean get_canSetSelection()
    // Offset: 0x1FA0080
    bool get_canSetSelection();
    // public UnityEngine.RangeInt get_selection()
    // Offset: 0x1FA0088
    ::UnityEngine::RangeInt get_selection();
    // public System.Void set_selection(UnityEngine.RangeInt value)
    // Offset: 0x1FA012C
    void set_selection(::UnityEngine::RangeInt value);
    // static private System.Void GetSelection(out System.Int32 start, out System.Int32 length)
    // Offset: 0x1FA00B8
    static void GetSelection(ByRef<int> start, ByRef<int> length);
    // static private System.Void SetSelection(System.Int32 start, System.Int32 length)
    // Offset: 0x1FA0208
    static void SetSelection(int start, int length);
    // protected override System.Void Finalize()
    // Offset: 0x1F9FB44
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
  }; // UnityEngine.TouchScreenKeyboard
  #pragma pack(pop)
  static check_size<sizeof(TouchScreenKeyboard), 28 + sizeof(::UnityEngine::TouchScreenKeyboardType)> __UnityEngine_TouchScreenKeyboardSizeCheck;
  static_assert(sizeof(TouchScreenKeyboard) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::TouchScreenKeyboard::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::TouchScreenKeyboard::Internal_Destroy
// Il2CppName: Internal_Destroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr)>(&UnityEngine::TouchScreenKeyboard::Internal_Destroy)> {
  static const MethodInfo* get() {
    static auto* ptr = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TouchScreenKeyboard*), "Internal_Destroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ptr});
  }
};
// Writing MetadataGetter for method: UnityEngine::TouchScreenKeyboard::Destroy
// Il2CppName: Destroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TouchScreenKeyboard::*)()>(&UnityEngine::TouchScreenKeyboard::Destroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TouchScreenKeyboard*), "Destroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TouchScreenKeyboard::TouchScreenKeyboard_InternalConstructorHelper
// Il2CppName: TouchScreenKeyboard_InternalConstructorHelper
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)(ByRef<::UnityEngine::TouchScreenKeyboard_InternalConstructorHelperArguments>, ::StringW, ::StringW)>(&UnityEngine::TouchScreenKeyboard::TouchScreenKeyboard_InternalConstructorHelper)> {
  static const MethodInfo* get() {
    static auto* arguments = &::il2cpp_utils::GetClassFromName("UnityEngine", "TouchScreenKeyboard_InternalConstructorHelperArguments")->this_arg;
    static auto* text = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* textPlaceholder = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TouchScreenKeyboard*), "TouchScreenKeyboard_InternalConstructorHelper", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{arguments, text, textPlaceholder});
  }
};
// Writing MetadataGetter for method: UnityEngine::TouchScreenKeyboard::get_isSupported
// Il2CppName: get_isSupported
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&UnityEngine::TouchScreenKeyboard::get_isSupported)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TouchScreenKeyboard*), "get_isSupported", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TouchScreenKeyboard::Open
// Il2CppName: Open
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::TouchScreenKeyboard* (*)(::StringW, ::UnityEngine::TouchScreenKeyboardType, bool, bool, bool, bool, ::StringW, int)>(&UnityEngine::TouchScreenKeyboard::Open)> {
  static const MethodInfo* get() {
    static auto* text = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* keyboardType = &::il2cpp_utils::GetClassFromName("UnityEngine", "TouchScreenKeyboardType")->byval_arg;
    static auto* autocorrection = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* multiline = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* secure = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* alert = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* textPlaceholder = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* characterLimit = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TouchScreenKeyboard*), "Open", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{text, keyboardType, autocorrection, multiline, secure, alert, textPlaceholder, characterLimit});
  }
};
// Writing MetadataGetter for method: UnityEngine::TouchScreenKeyboard::Open
// Il2CppName: Open
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::TouchScreenKeyboard* (*)(::StringW, ::UnityEngine::TouchScreenKeyboardType, bool, bool, bool)>(&UnityEngine::TouchScreenKeyboard::Open)> {
  static const MethodInfo* get() {
    static auto* text = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* keyboardType = &::il2cpp_utils::GetClassFromName("UnityEngine", "TouchScreenKeyboardType")->byval_arg;
    static auto* autocorrection = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* multiline = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* secure = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TouchScreenKeyboard*), "Open", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{text, keyboardType, autocorrection, multiline, secure});
  }
};
// Writing MetadataGetter for method: UnityEngine::TouchScreenKeyboard::get_text
// Il2CppName: get_text
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::TouchScreenKeyboard::*)()>(&UnityEngine::TouchScreenKeyboard::get_text)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TouchScreenKeyboard*), "get_text", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TouchScreenKeyboard::set_text
// Il2CppName: set_text
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TouchScreenKeyboard::*)(::StringW)>(&UnityEngine::TouchScreenKeyboard::set_text)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TouchScreenKeyboard*), "set_text", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::TouchScreenKeyboard::set_hideInput
// Il2CppName: set_hideInput
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&UnityEngine::TouchScreenKeyboard::set_hideInput)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TouchScreenKeyboard*), "set_hideInput", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::TouchScreenKeyboard::get_active
// Il2CppName: get_active
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::TouchScreenKeyboard::*)()>(&UnityEngine::TouchScreenKeyboard::get_active)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TouchScreenKeyboard*), "get_active", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TouchScreenKeyboard::set_active
// Il2CppName: set_active
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TouchScreenKeyboard::*)(bool)>(&UnityEngine::TouchScreenKeyboard::set_active)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TouchScreenKeyboard*), "set_active", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::TouchScreenKeyboard::get_status
// Il2CppName: get_status
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::TouchScreenKeyboard::Status (UnityEngine::TouchScreenKeyboard::*)()>(&UnityEngine::TouchScreenKeyboard::get_status)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TouchScreenKeyboard*), "get_status", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TouchScreenKeyboard::set_characterLimit
// Il2CppName: set_characterLimit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TouchScreenKeyboard::*)(int)>(&UnityEngine::TouchScreenKeyboard::set_characterLimit)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TouchScreenKeyboard*), "set_characterLimit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::TouchScreenKeyboard::get_canGetSelection
// Il2CppName: get_canGetSelection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::TouchScreenKeyboard::*)()>(&UnityEngine::TouchScreenKeyboard::get_canGetSelection)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TouchScreenKeyboard*), "get_canGetSelection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TouchScreenKeyboard::get_canSetSelection
// Il2CppName: get_canSetSelection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::TouchScreenKeyboard::*)()>(&UnityEngine::TouchScreenKeyboard::get_canSetSelection)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TouchScreenKeyboard*), "get_canSetSelection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TouchScreenKeyboard::get_selection
// Il2CppName: get_selection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::RangeInt (UnityEngine::TouchScreenKeyboard::*)()>(&UnityEngine::TouchScreenKeyboard::get_selection)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TouchScreenKeyboard*), "get_selection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TouchScreenKeyboard::set_selection
// Il2CppName: set_selection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TouchScreenKeyboard::*)(::UnityEngine::RangeInt)>(&UnityEngine::TouchScreenKeyboard::set_selection)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "RangeInt")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TouchScreenKeyboard*), "set_selection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::TouchScreenKeyboard::GetSelection
// Il2CppName: GetSelection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<int>, ByRef<int>)>(&UnityEngine::TouchScreenKeyboard::GetSelection)> {
  static const MethodInfo* get() {
    static auto* start = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TouchScreenKeyboard*), "GetSelection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{start, length});
  }
};
// Writing MetadataGetter for method: UnityEngine::TouchScreenKeyboard::SetSelection
// Il2CppName: SetSelection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int, int)>(&UnityEngine::TouchScreenKeyboard::SetSelection)> {
  static const MethodInfo* get() {
    static auto* start = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TouchScreenKeyboard*), "SetSelection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{start, length});
  }
};
// Writing MetadataGetter for method: UnityEngine::TouchScreenKeyboard::Finalize
// Il2CppName: Finalize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TouchScreenKeyboard::*)()>(&UnityEngine::TouchScreenKeyboard::Finalize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TouchScreenKeyboard*), "Finalize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
