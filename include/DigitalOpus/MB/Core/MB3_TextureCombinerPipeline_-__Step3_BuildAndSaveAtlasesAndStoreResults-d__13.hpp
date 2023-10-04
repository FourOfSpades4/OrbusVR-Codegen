// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: DigitalOpus.MB.Core.MB3_TextureCombinerPipeline
#include "DigitalOpus/MB/Core/MB3_TextureCombinerPipeline.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
// Including type: DigitalOpus.MB.Core.MB2_LogLevel
#include "DigitalOpus/MB/Core/MB2_LogLevel.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: DigitalOpus::MB::Core
namespace DigitalOpus::MB::Core {
  // Forward declaring type: MB_ITextureCombinerPacker
  class MB_ITextureCombinerPacker;
  // Forward declaring type: ProgressUpdateDelegate
  class ProgressUpdateDelegate;
  // Forward declaring type: MB3_TextureCombiner
  class MB3_TextureCombiner;
  // Forward declaring type: AtlasPackingResult
  class AtlasPackingResult;
  // Forward declaring type: MB2_EditorMethodsInterface
  class MB2_EditorMethodsInterface;
}
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MB_AtlasesAndRects
  class MB_AtlasesAndRects;
}
// Forward declaring namespace: System::Diagnostics
namespace System::Diagnostics {
  // Forward declaring type: Stopwatch
  class Stopwatch;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Texture2D
  class Texture2D;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline::$__Step3_BuildAndSaveAtlasesAndStoreResults$d__13);
DEFINE_IL2CPP_ARG_TYPE(::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline::$__Step3_BuildAndSaveAtlasesAndStoreResults$d__13*, "DigitalOpus.MB.Core", "MB3_TextureCombinerPipeline/<__Step3_BuildAndSaveAtlasesAndStoreResults>d__13");
// Type namespace: DigitalOpus.MB.Core
namespace DigitalOpus::MB::Core {
  // Size: 0x78
  #pragma pack(push, 1)
  // Autogenerated type: DigitalOpus.MB.Core.MB3_TextureCombinerPipeline/<__Step3_BuildAndSaveAtlasesAndStoreResults>d__13
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: AD1988
  class MB3_TextureCombinerPipeline::$__Step3_BuildAndSaveAtlasesAndStoreResults$d__13 : public ::Il2CppObject/*, public ::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*/ {
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
    // private System.Object <>2__current
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppObject* $$2__current;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // public DigitalOpus.MB.Core.MB3_TextureCombinerPipeline/TexturePipelineData data
    // Size: 0x8
    // Offset: 0x20
    ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline::TexturePipelineData* data;
    // Field size check
    static_assert(sizeof(::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline::TexturePipelineData*) == 0x8);
    // public DigitalOpus.MB.Core.MB2_LogLevel LOG_LEVEL
    // Size: 0x4
    // Offset: 0x28
    ::DigitalOpus::MB::Core::MB2_LogLevel LOG_LEVEL;
    // Field size check
    static_assert(sizeof(::DigitalOpus::MB::Core::MB2_LogLevel) == 0x4);
    // Padding between fields: LOG_LEVEL and: packer
    char __padding3[0x4] = {};
    // public DigitalOpus.MB.Core.MB_ITextureCombinerPacker packer
    // Size: 0x8
    // Offset: 0x30
    ::DigitalOpus::MB::Core::MB_ITextureCombinerPacker* packer;
    // Field size check
    static_assert(sizeof(::DigitalOpus::MB::Core::MB_ITextureCombinerPacker*) == 0x8);
    // public DigitalOpus.MB.Core.ProgressUpdateDelegate progressInfo
    // Size: 0x8
    // Offset: 0x38
    ::DigitalOpus::MB::Core::ProgressUpdateDelegate* progressInfo;
    // Field size check
    static_assert(sizeof(::DigitalOpus::MB::Core::ProgressUpdateDelegate*) == 0x8);
    // public DigitalOpus.MB.Core.MB3_TextureCombiner combiner
    // Size: 0x8
    // Offset: 0x40
    ::DigitalOpus::MB::Core::MB3_TextureCombiner* combiner;
    // Field size check
    static_assert(sizeof(::DigitalOpus::MB::Core::MB3_TextureCombiner*) == 0x8);
    // public DigitalOpus.MB.Core.AtlasPackingResult atlasPackingResult
    // Size: 0x8
    // Offset: 0x48
    ::DigitalOpus::MB::Core::AtlasPackingResult* atlasPackingResult;
    // Field size check
    static_assert(sizeof(::DigitalOpus::MB::Core::AtlasPackingResult*) == 0x8);
    // public DigitalOpus.MB.Core.MB2_EditorMethodsInterface textureEditorMethods
    // Size: 0x8
    // Offset: 0x50
    ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface* textureEditorMethods;
    // Field size check
    static_assert(sizeof(::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*) == 0x8);
    // public System.Text.StringBuilder report
    // Size: 0x8
    // Offset: 0x58
    ::System::Text::StringBuilder* report;
    // Field size check
    static_assert(sizeof(::System::Text::StringBuilder*) == 0x8);
    // public MB_AtlasesAndRects resultAtlasesAndRects
    // Size: 0x8
    // Offset: 0x60
    ::GlobalNamespace::MB_AtlasesAndRects* resultAtlasesAndRects;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::MB_AtlasesAndRects*) == 0x8);
    // private System.Diagnostics.Stopwatch <sw>5__2
    // Size: 0x8
    // Offset: 0x68
    ::System::Diagnostics::Stopwatch* $sw$5__2;
    // Field size check
    static_assert(sizeof(::System::Diagnostics::Stopwatch*) == 0x8);
    // private UnityEngine.Texture2D[] <atlases>5__3
    // Size: 0x8
    // Offset: 0x70
    ::ArrayW<::UnityEngine::Texture2D*> $atlases$5__3;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Texture2D*>) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>
    operator ::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>() noexcept {
      return *reinterpret_cast<::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*>(this);
    }
    // Get instance field reference: private System.Int32 <>1__state
    [[deprecated("Use field access instead!")]] int& dyn_$$1__state();
    // Get instance field reference: private System.Object <>2__current
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn_$$2__current();
    // Get instance field reference: public DigitalOpus.MB.Core.MB3_TextureCombinerPipeline/TexturePipelineData data
    [[deprecated("Use field access instead!")]] ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline::TexturePipelineData*& dyn_data();
    // Get instance field reference: public DigitalOpus.MB.Core.MB2_LogLevel LOG_LEVEL
    [[deprecated("Use field access instead!")]] ::DigitalOpus::MB::Core::MB2_LogLevel& dyn_LOG_LEVEL();
    // Get instance field reference: public DigitalOpus.MB.Core.MB_ITextureCombinerPacker packer
    [[deprecated("Use field access instead!")]] ::DigitalOpus::MB::Core::MB_ITextureCombinerPacker*& dyn_packer();
    // Get instance field reference: public DigitalOpus.MB.Core.ProgressUpdateDelegate progressInfo
    [[deprecated("Use field access instead!")]] ::DigitalOpus::MB::Core::ProgressUpdateDelegate*& dyn_progressInfo();
    // Get instance field reference: public DigitalOpus.MB.Core.MB3_TextureCombiner combiner
    [[deprecated("Use field access instead!")]] ::DigitalOpus::MB::Core::MB3_TextureCombiner*& dyn_combiner();
    // Get instance field reference: public DigitalOpus.MB.Core.AtlasPackingResult atlasPackingResult
    [[deprecated("Use field access instead!")]] ::DigitalOpus::MB::Core::AtlasPackingResult*& dyn_atlasPackingResult();
    // Get instance field reference: public DigitalOpus.MB.Core.MB2_EditorMethodsInterface textureEditorMethods
    [[deprecated("Use field access instead!")]] ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*& dyn_textureEditorMethods();
    // Get instance field reference: public System.Text.StringBuilder report
    [[deprecated("Use field access instead!")]] ::System::Text::StringBuilder*& dyn_report();
    // Get instance field reference: public MB_AtlasesAndRects resultAtlasesAndRects
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::MB_AtlasesAndRects*& dyn_resultAtlasesAndRects();
    // Get instance field reference: private System.Diagnostics.Stopwatch <sw>5__2
    [[deprecated("Use field access instead!")]] ::System::Diagnostics::Stopwatch*& dyn_$sw$5__2();
    // Get instance field reference: private UnityEngine.Texture2D[] <atlases>5__3
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::Texture2D*>& dyn_$atlases$5__3();
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0xF33378
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MB3_TextureCombinerPipeline::$__Step3_BuildAndSaveAtlasesAndStoreResults$d__13* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline::$__Step3_BuildAndSaveAtlasesAndStoreResults$d__13::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MB3_TextureCombinerPipeline::$__Step3_BuildAndSaveAtlasesAndStoreResults$d__13*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0xF333A4
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0xF333A8
    bool MoveNext();
    // private System.Object System.Collections.Generic.IEnumerator<System.Object>.get_Current()
    // Offset: 0xF3467C
    ::Il2CppObject* System_Collections_Generic_IEnumerator$System_Object$_get_Current();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0xF34684
    void System_Collections_IEnumerator_Reset();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0xF346EC
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
  }; // DigitalOpus.MB.Core.MB3_TextureCombinerPipeline/<__Step3_BuildAndSaveAtlasesAndStoreResults>d__13
  #pragma pack(pop)
  static check_size<sizeof(MB3_TextureCombinerPipeline::$__Step3_BuildAndSaveAtlasesAndStoreResults$d__13), 112 + sizeof(::ArrayW<::UnityEngine::Texture2D*>)> __DigitalOpus_MB_Core_MB3_TextureCombinerPipeline_$__Step3_BuildAndSaveAtlasesAndStoreResults$d__13SizeCheck;
  static_assert(sizeof(MB3_TextureCombinerPipeline::$__Step3_BuildAndSaveAtlasesAndStoreResults$d__13) == 0x78);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MB3_TextureCombinerPipeline::$__Step3_BuildAndSaveAtlasesAndStoreResults$d__13::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MB3_TextureCombinerPipeline::$__Step3_BuildAndSaveAtlasesAndStoreResults$d__13::System_IDisposable_Dispose
// Il2CppName: System.IDisposable.Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (DigitalOpus::MB::Core::MB3_TextureCombinerPipeline::$__Step3_BuildAndSaveAtlasesAndStoreResults$d__13::*)()>(&DigitalOpus::MB::Core::MB3_TextureCombinerPipeline::$__Step3_BuildAndSaveAtlasesAndStoreResults$d__13::System_IDisposable_Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MB3_TextureCombinerPipeline::$__Step3_BuildAndSaveAtlasesAndStoreResults$d__13*), "System.IDisposable.Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MB3_TextureCombinerPipeline::$__Step3_BuildAndSaveAtlasesAndStoreResults$d__13::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (DigitalOpus::MB::Core::MB3_TextureCombinerPipeline::$__Step3_BuildAndSaveAtlasesAndStoreResults$d__13::*)()>(&DigitalOpus::MB::Core::MB3_TextureCombinerPipeline::$__Step3_BuildAndSaveAtlasesAndStoreResults$d__13::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MB3_TextureCombinerPipeline::$__Step3_BuildAndSaveAtlasesAndStoreResults$d__13*), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MB3_TextureCombinerPipeline::$__Step3_BuildAndSaveAtlasesAndStoreResults$d__13::System_Collections_Generic_IEnumerator$System_Object$_get_Current
// Il2CppName: System.Collections.Generic.IEnumerator<System.Object>.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (DigitalOpus::MB::Core::MB3_TextureCombinerPipeline::$__Step3_BuildAndSaveAtlasesAndStoreResults$d__13::*)()>(&DigitalOpus::MB::Core::MB3_TextureCombinerPipeline::$__Step3_BuildAndSaveAtlasesAndStoreResults$d__13::System_Collections_Generic_IEnumerator$System_Object$_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MB3_TextureCombinerPipeline::$__Step3_BuildAndSaveAtlasesAndStoreResults$d__13*), "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MB3_TextureCombinerPipeline::$__Step3_BuildAndSaveAtlasesAndStoreResults$d__13::System_Collections_IEnumerator_Reset
// Il2CppName: System.Collections.IEnumerator.Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (DigitalOpus::MB::Core::MB3_TextureCombinerPipeline::$__Step3_BuildAndSaveAtlasesAndStoreResults$d__13::*)()>(&DigitalOpus::MB::Core::MB3_TextureCombinerPipeline::$__Step3_BuildAndSaveAtlasesAndStoreResults$d__13::System_Collections_IEnumerator_Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MB3_TextureCombinerPipeline::$__Step3_BuildAndSaveAtlasesAndStoreResults$d__13*), "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MB3_TextureCombinerPipeline::$__Step3_BuildAndSaveAtlasesAndStoreResults$d__13::System_Collections_IEnumerator_get_Current
// Il2CppName: System.Collections.IEnumerator.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (DigitalOpus::MB::Core::MB3_TextureCombinerPipeline::$__Step3_BuildAndSaveAtlasesAndStoreResults$d__13::*)()>(&DigitalOpus::MB::Core::MB3_TextureCombinerPipeline::$__Step3_BuildAndSaveAtlasesAndStoreResults$d__13::System_Collections_IEnumerator_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MB3_TextureCombinerPipeline::$__Step3_BuildAndSaveAtlasesAndStoreResults$d__13*), "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
