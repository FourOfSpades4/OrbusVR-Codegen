// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Renderer
  class Renderer;
  // Forward declaring type: Material
  class Material;
  // Forward declaring type: Vector2
  struct Vector2;
  // Forward declaring type: RenderTextureDescriptor
  struct RenderTextureDescriptor;
  // Forward declaring type: FilterMode
  struct FilterMode;
  // Forward declaring type: Color
  struct Color;
}
// Forward declaring namespace: UnityEngine::Rendering
namespace UnityEngine::Rendering {
  // Forward declaring type: RenderTargetIdentifier
  struct RenderTargetIdentifier;
  // Forward declaring type: RenderBufferLoadAction
  struct RenderBufferLoadAction;
  // Forward declaring type: RenderBufferStoreAction
  struct RenderBufferStoreAction;
}
// Completed forward declares
// Type namespace: UnityEngine.Rendering
namespace UnityEngine::Rendering {
  // Forward declaring type: CommandBuffer
  class CommandBuffer;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Rendering::CommandBuffer);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::CommandBuffer*, "UnityEngine.Rendering", "CommandBuffer");
// Type namespace: UnityEngine.Rendering
namespace UnityEngine::Rendering {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Rendering.CommandBuffer
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: A707EC
  // [UsedByNativeCodeAttribute] Offset: A707EC
  // [NativeHeaderAttribute] Offset: A707EC
  // [NativeTypeAttribute] Offset: A707EC
  class CommandBuffer : public ::Il2CppObject/*, public ::System::IDisposable*/ {
    public:
    public:
    // System.IntPtr m_Ptr
    // Size: 0x8
    // Offset: 0x10
    ::System::IntPtr m_Ptr;
    // Field size check
    static_assert(sizeof(::System::IntPtr) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::IDisposable
    operator ::System::IDisposable() noexcept {
      return *reinterpret_cast<::System::IDisposable*>(this);
    }
    // Creating conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept {
      return m_Ptr;
    }
    // Get instance field reference: System.IntPtr m_Ptr
    [[deprecated("Use field access instead!")]] ::System::IntPtr& dyn_m_Ptr();
    // public System.Void .ctor()
    // Offset: 0x1F94AFC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CommandBuffer* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Rendering::CommandBuffer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CommandBuffer*, creationType>()));
    }
    // static private System.IntPtr InitBuffer()
    // Offset: 0x1F94B28
    static ::System::IntPtr InitBuffer();
    // private System.Void ReleaseBuffer()
    // Offset: 0x1F94B80
    void ReleaseBuffer();
    // public System.Void set_name(System.String value)
    // Offset: 0x1F94BEC
    void set_name(::StringW value);
    // public System.Void Clear()
    // Offset: 0x1F94C60
    void Clear();
    // private System.Void Internal_DrawRenderer(UnityEngine.Renderer renderer, UnityEngine.Material material, System.Int32 submeshIndex, System.Int32 shaderPass)
    // Offset: 0x1F94CCC
    void Internal_DrawRenderer(::UnityEngine::Renderer* renderer, ::UnityEngine::Material* material, int submeshIndex, int shaderPass);
    // private System.Void Blit_Identifier(ref UnityEngine.Rendering.RenderTargetIdentifier source, ref UnityEngine.Rendering.RenderTargetIdentifier dest, UnityEngine.Material mat, System.Int32 pass, UnityEngine.Vector2 scale, UnityEngine.Vector2 offset)
    // Offset: 0x1F94D68
    void Blit_Identifier(ByRef<::UnityEngine::Rendering::RenderTargetIdentifier> source, ByRef<::UnityEngine::Rendering::RenderTargetIdentifier> dest, ::UnityEngine::Material* mat, int pass, ::UnityEngine::Vector2 scale, ::UnityEngine::Vector2 offset);
    // private System.Void GetTemporaryRTWithDescriptor(System.Int32 nameID, UnityEngine.RenderTextureDescriptor desc, UnityEngine.FilterMode filter)
    // Offset: 0x1F94E48
    void GetTemporaryRTWithDescriptor(int nameID, ::UnityEngine::RenderTextureDescriptor desc, ::UnityEngine::FilterMode filter);
    // public System.Void GetTemporaryRT(System.Int32 nameID, UnityEngine.RenderTextureDescriptor desc, UnityEngine.FilterMode filter)
    // Offset: 0x1F94ED8
    void GetTemporaryRT(int nameID, ::UnityEngine::RenderTextureDescriptor desc, ::UnityEngine::FilterMode filter);
    // public System.Void ReleaseTemporaryRT(System.Int32 nameID)
    // Offset: 0x1F94F10
    void ReleaseTemporaryRT(int nameID);
    // public System.Void ClearRenderTarget(System.Boolean clearDepth, System.Boolean clearColor, UnityEngine.Color backgroundColor, System.Single depth)
    // Offset: 0x1F94F84
    void ClearRenderTarget(bool clearDepth, bool clearColor, ::UnityEngine::Color backgroundColor, float depth);
    // public System.Void ClearRenderTarget(System.Boolean clearDepth, System.Boolean clearColor, UnityEngine.Color backgroundColor)
    // Offset: 0x1F9505C
    void ClearRenderTarget(bool clearDepth, bool clearColor, ::UnityEngine::Color backgroundColor);
    // public System.Void SetGlobalFloat(System.Int32 nameID, System.Single value)
    // Offset: 0x1F95090
    void SetGlobalFloat(int nameID, float value);
    // public System.Void BeginSample(System.String name)
    // Offset: 0x1F9511C
    void BeginSample(::StringW name);
    // public System.Void EndSample(System.String name)
    // Offset: 0x1F95190
    void EndSample(::StringW name);
    // public System.Void SetRenderTarget(UnityEngine.Rendering.RenderTargetIdentifier rt)
    // Offset: 0x1F95204
    void SetRenderTarget(::UnityEngine::Rendering::RenderTargetIdentifier rt);
    // private System.Void SetRenderTargetSingle_Internal(UnityEngine.Rendering.RenderTargetIdentifier rt, UnityEngine.Rendering.RenderBufferLoadAction colorLoadAction, UnityEngine.Rendering.RenderBufferStoreAction colorStoreAction, UnityEngine.Rendering.RenderBufferLoadAction depthLoadAction, UnityEngine.Rendering.RenderBufferStoreAction depthStoreAction)
    // Offset: 0x1F9524C
    void SetRenderTargetSingle_Internal(::UnityEngine::Rendering::RenderTargetIdentifier rt, ::UnityEngine::Rendering::RenderBufferLoadAction colorLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction colorStoreAction, ::UnityEngine::Rendering::RenderBufferLoadAction depthLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction depthStoreAction);
    // public System.Void Dispose()
    // Offset: 0x1F953B8
    void Dispose();
    // private System.Void Dispose(System.Boolean disposing)
    // Offset: 0x1F9536C
    void Dispose(bool disposing);
    // public System.Void DrawRenderer(UnityEngine.Renderer renderer, UnityEngine.Material material, System.Int32 submeshIndex, System.Int32 shaderPass)
    // Offset: 0x1F9542C
    void DrawRenderer(::UnityEngine::Renderer* renderer, ::UnityEngine::Material* material, int submeshIndex, int shaderPass);
    // public System.Void DrawRenderer(UnityEngine.Renderer renderer, UnityEngine.Material material, System.Int32 submeshIndex)
    // Offset: 0x1F95610
    void DrawRenderer(::UnityEngine::Renderer* renderer, ::UnityEngine::Material* material, int submeshIndex);
    // public System.Void Blit(UnityEngine.Rendering.RenderTargetIdentifier source, UnityEngine.Rendering.RenderTargetIdentifier dest)
    // Offset: 0x1F95618
    void Blit(::UnityEngine::Rendering::RenderTargetIdentifier source, ::UnityEngine::Rendering::RenderTargetIdentifier dest);
    // public System.Void Blit(UnityEngine.Rendering.RenderTargetIdentifier source, UnityEngine.Rendering.RenderTargetIdentifier dest, UnityEngine.Material mat)
    // Offset: 0x1F956AC
    void Blit(::UnityEngine::Rendering::RenderTargetIdentifier source, ::UnityEngine::Rendering::RenderTargetIdentifier dest, ::UnityEngine::Material* mat);
    // private System.Void Blit_Identifier_Injected(ref UnityEngine.Rendering.RenderTargetIdentifier source, ref UnityEngine.Rendering.RenderTargetIdentifier dest, UnityEngine.Material mat, System.Int32 pass, ref UnityEngine.Vector2 scale, ref UnityEngine.Vector2 offset)
    // Offset: 0x1F94D94
    void Blit_Identifier_Injected(ByRef<::UnityEngine::Rendering::RenderTargetIdentifier> source, ByRef<::UnityEngine::Rendering::RenderTargetIdentifier> dest, ::UnityEngine::Material* mat, int pass, ByRef<::UnityEngine::Vector2> scale, ByRef<::UnityEngine::Vector2> offset);
    // private System.Void GetTemporaryRTWithDescriptor_Injected(System.Int32 nameID, ref UnityEngine.RenderTextureDescriptor desc, UnityEngine.FilterMode filter)
    // Offset: 0x1F94E4C
    void GetTemporaryRTWithDescriptor_Injected(int nameID, ByRef<::UnityEngine::RenderTextureDescriptor> desc, ::UnityEngine::FilterMode filter);
    // private System.Void ClearRenderTarget_Injected(System.Boolean clearDepth, System.Boolean clearColor, ref UnityEngine.Color backgroundColor, System.Single depth)
    // Offset: 0x1F94FB8
    void ClearRenderTarget_Injected(bool clearDepth, bool clearColor, ByRef<::UnityEngine::Color> backgroundColor, float depth);
    // private System.Void SetRenderTargetSingle_Internal_Injected(ref UnityEngine.Rendering.RenderTargetIdentifier rt, UnityEngine.Rendering.RenderBufferLoadAction colorLoadAction, UnityEngine.Rendering.RenderBufferStoreAction colorStoreAction, UnityEngine.Rendering.RenderBufferLoadAction depthLoadAction, UnityEngine.Rendering.RenderBufferStoreAction depthStoreAction)
    // Offset: 0x1F95250
    void SetRenderTargetSingle_Internal_Injected(ByRef<::UnityEngine::Rendering::RenderTargetIdentifier> rt, ::UnityEngine::Rendering::RenderBufferLoadAction colorLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction colorStoreAction, ::UnityEngine::Rendering::RenderBufferLoadAction depthLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction depthStoreAction);
    // protected override System.Void Finalize()
    // Offset: 0x1F952F4
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
  }; // UnityEngine.Rendering.CommandBuffer
  #pragma pack(pop)
  static check_size<sizeof(CommandBuffer), 16 + sizeof(::System::IntPtr)> __UnityEngine_Rendering_CommandBufferSizeCheck;
  static_assert(sizeof(CommandBuffer) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Rendering::CommandBuffer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Rendering::CommandBuffer::InitBuffer
// Il2CppName: InitBuffer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)()>(&UnityEngine::Rendering::CommandBuffer::InitBuffer)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::CommandBuffer*), "InitBuffer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::CommandBuffer::ReleaseBuffer
// Il2CppName: ReleaseBuffer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::CommandBuffer::*)()>(&UnityEngine::Rendering::CommandBuffer::ReleaseBuffer)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::CommandBuffer*), "ReleaseBuffer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::CommandBuffer::set_name
// Il2CppName: set_name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::CommandBuffer::*)(::StringW)>(&UnityEngine::Rendering::CommandBuffer::set_name)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::CommandBuffer*), "set_name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::CommandBuffer::Clear
// Il2CppName: Clear
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::CommandBuffer::*)()>(&UnityEngine::Rendering::CommandBuffer::Clear)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::CommandBuffer*), "Clear", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::CommandBuffer::Internal_DrawRenderer
// Il2CppName: Internal_DrawRenderer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::CommandBuffer::*)(::UnityEngine::Renderer*, ::UnityEngine::Material*, int, int)>(&UnityEngine::Rendering::CommandBuffer::Internal_DrawRenderer)> {
  static const MethodInfo* get() {
    static auto* renderer = &::il2cpp_utils::GetClassFromName("UnityEngine", "Renderer")->byval_arg;
    static auto* material = &::il2cpp_utils::GetClassFromName("UnityEngine", "Material")->byval_arg;
    static auto* submeshIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* shaderPass = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::CommandBuffer*), "Internal_DrawRenderer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{renderer, material, submeshIndex, shaderPass});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::CommandBuffer::Blit_Identifier
// Il2CppName: Blit_Identifier
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::CommandBuffer::*)(ByRef<::UnityEngine::Rendering::RenderTargetIdentifier>, ByRef<::UnityEngine::Rendering::RenderTargetIdentifier>, ::UnityEngine::Material*, int, ::UnityEngine::Vector2, ::UnityEngine::Vector2)>(&UnityEngine::Rendering::CommandBuffer::Blit_Identifier)> {
  static const MethodInfo* get() {
    static auto* source = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "RenderTargetIdentifier")->this_arg;
    static auto* dest = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "RenderTargetIdentifier")->this_arg;
    static auto* mat = &::il2cpp_utils::GetClassFromName("UnityEngine", "Material")->byval_arg;
    static auto* pass = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* scale = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::CommandBuffer*), "Blit_Identifier", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{source, dest, mat, pass, scale, offset});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::CommandBuffer::GetTemporaryRTWithDescriptor
// Il2CppName: GetTemporaryRTWithDescriptor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::CommandBuffer::*)(int, ::UnityEngine::RenderTextureDescriptor, ::UnityEngine::FilterMode)>(&UnityEngine::Rendering::CommandBuffer::GetTemporaryRTWithDescriptor)> {
  static const MethodInfo* get() {
    static auto* nameID = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* desc = &::il2cpp_utils::GetClassFromName("UnityEngine", "RenderTextureDescriptor")->byval_arg;
    static auto* filter = &::il2cpp_utils::GetClassFromName("UnityEngine", "FilterMode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::CommandBuffer*), "GetTemporaryRTWithDescriptor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{nameID, desc, filter});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::CommandBuffer::GetTemporaryRT
// Il2CppName: GetTemporaryRT
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::CommandBuffer::*)(int, ::UnityEngine::RenderTextureDescriptor, ::UnityEngine::FilterMode)>(&UnityEngine::Rendering::CommandBuffer::GetTemporaryRT)> {
  static const MethodInfo* get() {
    static auto* nameID = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* desc = &::il2cpp_utils::GetClassFromName("UnityEngine", "RenderTextureDescriptor")->byval_arg;
    static auto* filter = &::il2cpp_utils::GetClassFromName("UnityEngine", "FilterMode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::CommandBuffer*), "GetTemporaryRT", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{nameID, desc, filter});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::CommandBuffer::ReleaseTemporaryRT
// Il2CppName: ReleaseTemporaryRT
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::CommandBuffer::*)(int)>(&UnityEngine::Rendering::CommandBuffer::ReleaseTemporaryRT)> {
  static const MethodInfo* get() {
    static auto* nameID = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::CommandBuffer*), "ReleaseTemporaryRT", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{nameID});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::CommandBuffer::ClearRenderTarget
// Il2CppName: ClearRenderTarget
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::CommandBuffer::*)(bool, bool, ::UnityEngine::Color, float)>(&UnityEngine::Rendering::CommandBuffer::ClearRenderTarget)> {
  static const MethodInfo* get() {
    static auto* clearDepth = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* clearColor = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* backgroundColor = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    static auto* depth = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::CommandBuffer*), "ClearRenderTarget", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{clearDepth, clearColor, backgroundColor, depth});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::CommandBuffer::ClearRenderTarget
// Il2CppName: ClearRenderTarget
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::CommandBuffer::*)(bool, bool, ::UnityEngine::Color)>(&UnityEngine::Rendering::CommandBuffer::ClearRenderTarget)> {
  static const MethodInfo* get() {
    static auto* clearDepth = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* clearColor = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* backgroundColor = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::CommandBuffer*), "ClearRenderTarget", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{clearDepth, clearColor, backgroundColor});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::CommandBuffer::SetGlobalFloat
// Il2CppName: SetGlobalFloat
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::CommandBuffer::*)(int, float)>(&UnityEngine::Rendering::CommandBuffer::SetGlobalFloat)> {
  static const MethodInfo* get() {
    static auto* nameID = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::CommandBuffer*), "SetGlobalFloat", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{nameID, value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::CommandBuffer::BeginSample
// Il2CppName: BeginSample
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::CommandBuffer::*)(::StringW)>(&UnityEngine::Rendering::CommandBuffer::BeginSample)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::CommandBuffer*), "BeginSample", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::CommandBuffer::EndSample
// Il2CppName: EndSample
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::CommandBuffer::*)(::StringW)>(&UnityEngine::Rendering::CommandBuffer::EndSample)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::CommandBuffer*), "EndSample", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::CommandBuffer::SetRenderTarget
// Il2CppName: SetRenderTarget
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::CommandBuffer::*)(::UnityEngine::Rendering::RenderTargetIdentifier)>(&UnityEngine::Rendering::CommandBuffer::SetRenderTarget)> {
  static const MethodInfo* get() {
    static auto* rt = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "RenderTargetIdentifier")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::CommandBuffer*), "SetRenderTarget", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rt});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::CommandBuffer::SetRenderTargetSingle_Internal
// Il2CppName: SetRenderTargetSingle_Internal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::CommandBuffer::*)(::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction)>(&UnityEngine::Rendering::CommandBuffer::SetRenderTargetSingle_Internal)> {
  static const MethodInfo* get() {
    static auto* rt = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "RenderTargetIdentifier")->byval_arg;
    static auto* colorLoadAction = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "RenderBufferLoadAction")->byval_arg;
    static auto* colorStoreAction = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "RenderBufferStoreAction")->byval_arg;
    static auto* depthLoadAction = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "RenderBufferLoadAction")->byval_arg;
    static auto* depthStoreAction = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "RenderBufferStoreAction")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::CommandBuffer*), "SetRenderTargetSingle_Internal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rt, colorLoadAction, colorStoreAction, depthLoadAction, depthStoreAction});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::CommandBuffer::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::CommandBuffer::*)()>(&UnityEngine::Rendering::CommandBuffer::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::CommandBuffer*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::CommandBuffer::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::CommandBuffer::*)(bool)>(&UnityEngine::Rendering::CommandBuffer::Dispose)> {
  static const MethodInfo* get() {
    static auto* disposing = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::CommandBuffer*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{disposing});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::CommandBuffer::DrawRenderer
// Il2CppName: DrawRenderer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::CommandBuffer::*)(::UnityEngine::Renderer*, ::UnityEngine::Material*, int, int)>(&UnityEngine::Rendering::CommandBuffer::DrawRenderer)> {
  static const MethodInfo* get() {
    static auto* renderer = &::il2cpp_utils::GetClassFromName("UnityEngine", "Renderer")->byval_arg;
    static auto* material = &::il2cpp_utils::GetClassFromName("UnityEngine", "Material")->byval_arg;
    static auto* submeshIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* shaderPass = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::CommandBuffer*), "DrawRenderer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{renderer, material, submeshIndex, shaderPass});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::CommandBuffer::DrawRenderer
// Il2CppName: DrawRenderer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::CommandBuffer::*)(::UnityEngine::Renderer*, ::UnityEngine::Material*, int)>(&UnityEngine::Rendering::CommandBuffer::DrawRenderer)> {
  static const MethodInfo* get() {
    static auto* renderer = &::il2cpp_utils::GetClassFromName("UnityEngine", "Renderer")->byval_arg;
    static auto* material = &::il2cpp_utils::GetClassFromName("UnityEngine", "Material")->byval_arg;
    static auto* submeshIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::CommandBuffer*), "DrawRenderer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{renderer, material, submeshIndex});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::CommandBuffer::Blit
// Il2CppName: Blit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::CommandBuffer::*)(::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderTargetIdentifier)>(&UnityEngine::Rendering::CommandBuffer::Blit)> {
  static const MethodInfo* get() {
    static auto* source = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "RenderTargetIdentifier")->byval_arg;
    static auto* dest = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "RenderTargetIdentifier")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::CommandBuffer*), "Blit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{source, dest});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::CommandBuffer::Blit
// Il2CppName: Blit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::CommandBuffer::*)(::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Material*)>(&UnityEngine::Rendering::CommandBuffer::Blit)> {
  static const MethodInfo* get() {
    static auto* source = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "RenderTargetIdentifier")->byval_arg;
    static auto* dest = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "RenderTargetIdentifier")->byval_arg;
    static auto* mat = &::il2cpp_utils::GetClassFromName("UnityEngine", "Material")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::CommandBuffer*), "Blit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{source, dest, mat});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::CommandBuffer::Blit_Identifier_Injected
// Il2CppName: Blit_Identifier_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::CommandBuffer::*)(ByRef<::UnityEngine::Rendering::RenderTargetIdentifier>, ByRef<::UnityEngine::Rendering::RenderTargetIdentifier>, ::UnityEngine::Material*, int, ByRef<::UnityEngine::Vector2>, ByRef<::UnityEngine::Vector2>)>(&UnityEngine::Rendering::CommandBuffer::Blit_Identifier_Injected)> {
  static const MethodInfo* get() {
    static auto* source = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "RenderTargetIdentifier")->this_arg;
    static auto* dest = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "RenderTargetIdentifier")->this_arg;
    static auto* mat = &::il2cpp_utils::GetClassFromName("UnityEngine", "Material")->byval_arg;
    static auto* pass = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* scale = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->this_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::CommandBuffer*), "Blit_Identifier_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{source, dest, mat, pass, scale, offset});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::CommandBuffer::GetTemporaryRTWithDescriptor_Injected
// Il2CppName: GetTemporaryRTWithDescriptor_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::CommandBuffer::*)(int, ByRef<::UnityEngine::RenderTextureDescriptor>, ::UnityEngine::FilterMode)>(&UnityEngine::Rendering::CommandBuffer::GetTemporaryRTWithDescriptor_Injected)> {
  static const MethodInfo* get() {
    static auto* nameID = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* desc = &::il2cpp_utils::GetClassFromName("UnityEngine", "RenderTextureDescriptor")->this_arg;
    static auto* filter = &::il2cpp_utils::GetClassFromName("UnityEngine", "FilterMode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::CommandBuffer*), "GetTemporaryRTWithDescriptor_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{nameID, desc, filter});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::CommandBuffer::ClearRenderTarget_Injected
// Il2CppName: ClearRenderTarget_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::CommandBuffer::*)(bool, bool, ByRef<::UnityEngine::Color>, float)>(&UnityEngine::Rendering::CommandBuffer::ClearRenderTarget_Injected)> {
  static const MethodInfo* get() {
    static auto* clearDepth = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* clearColor = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* backgroundColor = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->this_arg;
    static auto* depth = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::CommandBuffer*), "ClearRenderTarget_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{clearDepth, clearColor, backgroundColor, depth});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::CommandBuffer::SetRenderTargetSingle_Internal_Injected
// Il2CppName: SetRenderTargetSingle_Internal_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::CommandBuffer::*)(ByRef<::UnityEngine::Rendering::RenderTargetIdentifier>, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction)>(&UnityEngine::Rendering::CommandBuffer::SetRenderTargetSingle_Internal_Injected)> {
  static const MethodInfo* get() {
    static auto* rt = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "RenderTargetIdentifier")->this_arg;
    static auto* colorLoadAction = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "RenderBufferLoadAction")->byval_arg;
    static auto* colorStoreAction = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "RenderBufferStoreAction")->byval_arg;
    static auto* depthLoadAction = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "RenderBufferLoadAction")->byval_arg;
    static auto* depthStoreAction = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "RenderBufferStoreAction")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::CommandBuffer*), "SetRenderTargetSingle_Internal_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rt, colorLoadAction, colorStoreAction, depthLoadAction, depthStoreAction});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::CommandBuffer::Finalize
// Il2CppName: Finalize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::CommandBuffer::*)()>(&UnityEngine::Rendering::CommandBuffer::Finalize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::CommandBuffer*), "Finalize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
