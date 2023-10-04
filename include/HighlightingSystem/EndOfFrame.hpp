// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: HighlightingSystem
namespace HighlightingSystem {
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: WaitForEndOfFrame
  class WaitForEndOfFrame;
  // Forward declaring type: Coroutine
  class Coroutine;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: HighlightingSystem
namespace HighlightingSystem {
  // Forward declaring type: EndOfFrame
  class EndOfFrame;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::HighlightingSystem::EndOfFrame);
DEFINE_IL2CPP_ARG_TYPE(::HighlightingSystem::EndOfFrame*, "HighlightingSystem", "EndOfFrame");
// Type namespace: HighlightingSystem
namespace HighlightingSystem {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: HighlightingSystem.EndOfFrame
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExcludeFromDocsAttribute] Offset: FFFFFFFF
  class EndOfFrame : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::HighlightingSystem::EndOfFrame::OnEndOfFrame
    class OnEndOfFrame;
    // Nested type: ::HighlightingSystem::EndOfFrame::$EndOfFrameRoutine$d__11
    class $EndOfFrameRoutine$d__11;
    public:
    // private UnityEngine.WaitForEndOfFrame waitForEndOfFrame
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::WaitForEndOfFrame* waitForEndOfFrame;
    // Field size check
    static_assert(sizeof(::UnityEngine::WaitForEndOfFrame*) == 0x8);
    // private UnityEngine.Coroutine coroutine
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::Coroutine* coroutine;
    // Field size check
    static_assert(sizeof(::UnityEngine::Coroutine*) == 0x8);
    // private System.Collections.Generic.List`1<HighlightingSystem.EndOfFrame/OnEndOfFrame> listeners
    // Size: 0x8
    // Offset: 0x28
    ::System::Collections::Generic::List_1<::HighlightingSystem::EndOfFrame::OnEndOfFrame*>* listeners;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::HighlightingSystem::EndOfFrame::OnEndOfFrame*>*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get static field: static private HighlightingSystem.EndOfFrame _singleton
    static ::HighlightingSystem::EndOfFrame* _get__singleton();
    // Set static field: static private HighlightingSystem.EndOfFrame _singleton
    static void _set__singleton(::HighlightingSystem::EndOfFrame* value);
    // Get instance field reference: private UnityEngine.WaitForEndOfFrame waitForEndOfFrame
    [[deprecated("Use field access instead!")]] ::UnityEngine::WaitForEndOfFrame*& dyn_waitForEndOfFrame();
    // Get instance field reference: private UnityEngine.Coroutine coroutine
    [[deprecated("Use field access instead!")]] ::UnityEngine::Coroutine*& dyn_coroutine();
    // Get instance field reference: private System.Collections.Generic.List`1<HighlightingSystem.EndOfFrame/OnEndOfFrame> listeners
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::HighlightingSystem::EndOfFrame::OnEndOfFrame*>*& dyn_listeners();
    // static private HighlightingSystem.EndOfFrame get_singleton()
    // Offset: 0x15DC9D0
    static ::HighlightingSystem::EndOfFrame* get_singleton();
    // private System.Void OnEnable()
    // Offset: 0x15DCAE0
    void OnEnable();
    // private System.Void OnDisable()
    // Offset: 0x15DCB88
    void OnDisable();
    // static public System.Void AddListener(HighlightingSystem.EndOfFrame/OnEndOfFrame listener)
    // Offset: 0x15DCB9C
    static void AddListener(::HighlightingSystem::EndOfFrame::OnEndOfFrame* listener);
    // static public System.Void RemoveListener(HighlightingSystem.EndOfFrame/OnEndOfFrame listener)
    // Offset: 0x15DCC20
    static void RemoveListener(::HighlightingSystem::EndOfFrame::OnEndOfFrame* listener);
    // private System.Collections.IEnumerator EndOfFrameRoutine()
    // Offset: 0x15DCB14
    ::System::Collections::IEnumerator* EndOfFrameRoutine();
    // public System.Void .ctor()
    // Offset: 0x15DCD18
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EndOfFrame* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::HighlightingSystem::EndOfFrame::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EndOfFrame*, creationType>()));
    }
  }; // HighlightingSystem.EndOfFrame
  #pragma pack(pop)
  static check_size<sizeof(EndOfFrame), 40 + sizeof(::System::Collections::Generic::List_1<::HighlightingSystem::EndOfFrame::OnEndOfFrame*>*)> __HighlightingSystem_EndOfFrameSizeCheck;
  static_assert(sizeof(EndOfFrame) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HighlightingSystem::EndOfFrame::get_singleton
// Il2CppName: get_singleton
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HighlightingSystem::EndOfFrame* (*)()>(&HighlightingSystem::EndOfFrame::get_singleton)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HighlightingSystem::EndOfFrame*), "get_singleton", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HighlightingSystem::EndOfFrame::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HighlightingSystem::EndOfFrame::*)()>(&HighlightingSystem::EndOfFrame::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HighlightingSystem::EndOfFrame*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HighlightingSystem::EndOfFrame::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HighlightingSystem::EndOfFrame::*)()>(&HighlightingSystem::EndOfFrame::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HighlightingSystem::EndOfFrame*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HighlightingSystem::EndOfFrame::AddListener
// Il2CppName: AddListener
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::HighlightingSystem::EndOfFrame::OnEndOfFrame*)>(&HighlightingSystem::EndOfFrame::AddListener)> {
  static const MethodInfo* get() {
    static auto* listener = &::il2cpp_utils::GetClassFromName("HighlightingSystem", "EndOfFrame/OnEndOfFrame")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HighlightingSystem::EndOfFrame*), "AddListener", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{listener});
  }
};
// Writing MetadataGetter for method: HighlightingSystem::EndOfFrame::RemoveListener
// Il2CppName: RemoveListener
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::HighlightingSystem::EndOfFrame::OnEndOfFrame*)>(&HighlightingSystem::EndOfFrame::RemoveListener)> {
  static const MethodInfo* get() {
    static auto* listener = &::il2cpp_utils::GetClassFromName("HighlightingSystem", "EndOfFrame/OnEndOfFrame")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HighlightingSystem::EndOfFrame*), "RemoveListener", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{listener});
  }
};
// Writing MetadataGetter for method: HighlightingSystem::EndOfFrame::EndOfFrameRoutine
// Il2CppName: EndOfFrameRoutine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (HighlightingSystem::EndOfFrame::*)()>(&HighlightingSystem::EndOfFrame::EndOfFrameRoutine)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HighlightingSystem::EndOfFrame*), "EndOfFrameRoutine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HighlightingSystem::EndOfFrame::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
