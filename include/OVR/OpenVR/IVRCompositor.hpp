// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: OVR::OpenVR
namespace OVR::OpenVR {
}
// Completed forward declares
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Forward declaring type: IVRCompositor
  struct IVRCompositor;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRCompositor, "OVR.OpenVR", "IVRCompositor");
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0x158
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: OVR.OpenVR.IVRCompositor
  // [TokenAttribute] Offset: FFFFFFFF
  struct IVRCompositor/*, public ::System::ValueType*/ {
    public:
    // Nested type: ::OVR::OpenVR::IVRCompositor::_SetTrackingSpace
    class _SetTrackingSpace;
    // Nested type: ::OVR::OpenVR::IVRCompositor::_GetTrackingSpace
    class _GetTrackingSpace;
    // Nested type: ::OVR::OpenVR::IVRCompositor::_WaitGetPoses
    class _WaitGetPoses;
    // Nested type: ::OVR::OpenVR::IVRCompositor::_GetLastPoses
    class _GetLastPoses;
    // Nested type: ::OVR::OpenVR::IVRCompositor::_GetLastPoseForTrackedDeviceIndex
    class _GetLastPoseForTrackedDeviceIndex;
    // Nested type: ::OVR::OpenVR::IVRCompositor::_Submit
    class _Submit;
    // Nested type: ::OVR::OpenVR::IVRCompositor::_ClearLastSubmittedFrame
    class _ClearLastSubmittedFrame;
    // Nested type: ::OVR::OpenVR::IVRCompositor::_PostPresentHandoff
    class _PostPresentHandoff;
    // Nested type: ::OVR::OpenVR::IVRCompositor::_GetFrameTiming
    class _GetFrameTiming;
    // Nested type: ::OVR::OpenVR::IVRCompositor::_GetFrameTimings
    class _GetFrameTimings;
    // Nested type: ::OVR::OpenVR::IVRCompositor::_GetFrameTimeRemaining
    class _GetFrameTimeRemaining;
    // Nested type: ::OVR::OpenVR::IVRCompositor::_GetCumulativeStats
    class _GetCumulativeStats;
    // Nested type: ::OVR::OpenVR::IVRCompositor::_FadeToColor
    class _FadeToColor;
    // Nested type: ::OVR::OpenVR::IVRCompositor::_GetCurrentFadeColor
    class _GetCurrentFadeColor;
    // Nested type: ::OVR::OpenVR::IVRCompositor::_FadeGrid
    class _FadeGrid;
    // Nested type: ::OVR::OpenVR::IVRCompositor::_GetCurrentGridAlpha
    class _GetCurrentGridAlpha;
    // Nested type: ::OVR::OpenVR::IVRCompositor::_SetSkyboxOverride
    class _SetSkyboxOverride;
    // Nested type: ::OVR::OpenVR::IVRCompositor::_ClearSkyboxOverride
    class _ClearSkyboxOverride;
    // Nested type: ::OVR::OpenVR::IVRCompositor::_CompositorBringToFront
    class _CompositorBringToFront;
    // Nested type: ::OVR::OpenVR::IVRCompositor::_CompositorGoToBack
    class _CompositorGoToBack;
    // Nested type: ::OVR::OpenVR::IVRCompositor::_CompositorQuit
    class _CompositorQuit;
    // Nested type: ::OVR::OpenVR::IVRCompositor::_IsFullscreen
    class _IsFullscreen;
    // Nested type: ::OVR::OpenVR::IVRCompositor::_GetCurrentSceneFocusProcess
    class _GetCurrentSceneFocusProcess;
    // Nested type: ::OVR::OpenVR::IVRCompositor::_GetLastFrameRenderer
    class _GetLastFrameRenderer;
    // Nested type: ::OVR::OpenVR::IVRCompositor::_CanRenderScene
    class _CanRenderScene;
    // Nested type: ::OVR::OpenVR::IVRCompositor::_ShowMirrorWindow
    class _ShowMirrorWindow;
    // Nested type: ::OVR::OpenVR::IVRCompositor::_HideMirrorWindow
    class _HideMirrorWindow;
    // Nested type: ::OVR::OpenVR::IVRCompositor::_IsMirrorWindowVisible
    class _IsMirrorWindowVisible;
    // Nested type: ::OVR::OpenVR::IVRCompositor::_CompositorDumpImages
    class _CompositorDumpImages;
    // Nested type: ::OVR::OpenVR::IVRCompositor::_ShouldAppRenderWithLowResources
    class _ShouldAppRenderWithLowResources;
    // Nested type: ::OVR::OpenVR::IVRCompositor::_ForceInterleavedReprojectionOn
    class _ForceInterleavedReprojectionOn;
    // Nested type: ::OVR::OpenVR::IVRCompositor::_ForceReconnectProcess
    class _ForceReconnectProcess;
    // Nested type: ::OVR::OpenVR::IVRCompositor::_SuspendRendering
    class _SuspendRendering;
    // Nested type: ::OVR::OpenVR::IVRCompositor::_GetMirrorTextureD3D11
    class _GetMirrorTextureD3D11;
    // Nested type: ::OVR::OpenVR::IVRCompositor::_ReleaseMirrorTextureD3D11
    class _ReleaseMirrorTextureD3D11;
    // Nested type: ::OVR::OpenVR::IVRCompositor::_GetMirrorTextureGL
    class _GetMirrorTextureGL;
    // Nested type: ::OVR::OpenVR::IVRCompositor::_ReleaseSharedGLTexture
    class _ReleaseSharedGLTexture;
    // Nested type: ::OVR::OpenVR::IVRCompositor::_LockGLSharedTextureForAccess
    class _LockGLSharedTextureForAccess;
    // Nested type: ::OVR::OpenVR::IVRCompositor::_UnlockGLSharedTextureForAccess
    class _UnlockGLSharedTextureForAccess;
    // Nested type: ::OVR::OpenVR::IVRCompositor::_GetVulkanInstanceExtensionsRequired
    class _GetVulkanInstanceExtensionsRequired;
    // Nested type: ::OVR::OpenVR::IVRCompositor::_GetVulkanDeviceExtensionsRequired
    class _GetVulkanDeviceExtensionsRequired;
    // Nested type: ::OVR::OpenVR::IVRCompositor::_SetExplicitTimingMode
    class _SetExplicitTimingMode;
    // Nested type: ::OVR::OpenVR::IVRCompositor::_SubmitExplicitTimingData
    class _SubmitExplicitTimingData;
    public:
    // OVR.OpenVR.IVRCompositor/_SetTrackingSpace SetTrackingSpace
    // Size: 0x8
    // Offset: 0x0
    ::OVR::OpenVR::IVRCompositor::_SetTrackingSpace* SetTrackingSpace;
    // Field size check
    static_assert(sizeof(::OVR::OpenVR::IVRCompositor::_SetTrackingSpace*) == 0x8);
    // OVR.OpenVR.IVRCompositor/_GetTrackingSpace GetTrackingSpace
    // Size: 0x8
    // Offset: 0x8
    ::OVR::OpenVR::IVRCompositor::_GetTrackingSpace* GetTrackingSpace;
    // Field size check
    static_assert(sizeof(::OVR::OpenVR::IVRCompositor::_GetTrackingSpace*) == 0x8);
    // OVR.OpenVR.IVRCompositor/_WaitGetPoses WaitGetPoses
    // Size: 0x8
    // Offset: 0x10
    ::OVR::OpenVR::IVRCompositor::_WaitGetPoses* WaitGetPoses;
    // Field size check
    static_assert(sizeof(::OVR::OpenVR::IVRCompositor::_WaitGetPoses*) == 0x8);
    // OVR.OpenVR.IVRCompositor/_GetLastPoses GetLastPoses
    // Size: 0x8
    // Offset: 0x18
    ::OVR::OpenVR::IVRCompositor::_GetLastPoses* GetLastPoses;
    // Field size check
    static_assert(sizeof(::OVR::OpenVR::IVRCompositor::_GetLastPoses*) == 0x8);
    // OVR.OpenVR.IVRCompositor/_GetLastPoseForTrackedDeviceIndex GetLastPoseForTrackedDeviceIndex
    // Size: 0x8
    // Offset: 0x20
    ::OVR::OpenVR::IVRCompositor::_GetLastPoseForTrackedDeviceIndex* GetLastPoseForTrackedDeviceIndex;
    // Field size check
    static_assert(sizeof(::OVR::OpenVR::IVRCompositor::_GetLastPoseForTrackedDeviceIndex*) == 0x8);
    // OVR.OpenVR.IVRCompositor/_Submit Submit
    // Size: 0x8
    // Offset: 0x28
    ::OVR::OpenVR::IVRCompositor::_Submit* Submit;
    // Field size check
    static_assert(sizeof(::OVR::OpenVR::IVRCompositor::_Submit*) == 0x8);
    // OVR.OpenVR.IVRCompositor/_ClearLastSubmittedFrame ClearLastSubmittedFrame
    // Size: 0x8
    // Offset: 0x30
    ::OVR::OpenVR::IVRCompositor::_ClearLastSubmittedFrame* ClearLastSubmittedFrame;
    // Field size check
    static_assert(sizeof(::OVR::OpenVR::IVRCompositor::_ClearLastSubmittedFrame*) == 0x8);
    // OVR.OpenVR.IVRCompositor/_PostPresentHandoff PostPresentHandoff
    // Size: 0x8
    // Offset: 0x38
    ::OVR::OpenVR::IVRCompositor::_PostPresentHandoff* PostPresentHandoff;
    // Field size check
    static_assert(sizeof(::OVR::OpenVR::IVRCompositor::_PostPresentHandoff*) == 0x8);
    // OVR.OpenVR.IVRCompositor/_GetFrameTiming GetFrameTiming
    // Size: 0x8
    // Offset: 0x40
    ::OVR::OpenVR::IVRCompositor::_GetFrameTiming* GetFrameTiming;
    // Field size check
    static_assert(sizeof(::OVR::OpenVR::IVRCompositor::_GetFrameTiming*) == 0x8);
    // OVR.OpenVR.IVRCompositor/_GetFrameTimings GetFrameTimings
    // Size: 0x8
    // Offset: 0x48
    ::OVR::OpenVR::IVRCompositor::_GetFrameTimings* GetFrameTimings;
    // Field size check
    static_assert(sizeof(::OVR::OpenVR::IVRCompositor::_GetFrameTimings*) == 0x8);
    // OVR.OpenVR.IVRCompositor/_GetFrameTimeRemaining GetFrameTimeRemaining
    // Size: 0x8
    // Offset: 0x50
    ::OVR::OpenVR::IVRCompositor::_GetFrameTimeRemaining* GetFrameTimeRemaining;
    // Field size check
    static_assert(sizeof(::OVR::OpenVR::IVRCompositor::_GetFrameTimeRemaining*) == 0x8);
    // OVR.OpenVR.IVRCompositor/_GetCumulativeStats GetCumulativeStats
    // Size: 0x8
    // Offset: 0x58
    ::OVR::OpenVR::IVRCompositor::_GetCumulativeStats* GetCumulativeStats;
    // Field size check
    static_assert(sizeof(::OVR::OpenVR::IVRCompositor::_GetCumulativeStats*) == 0x8);
    // OVR.OpenVR.IVRCompositor/_FadeToColor FadeToColor
    // Size: 0x8
    // Offset: 0x60
    ::OVR::OpenVR::IVRCompositor::_FadeToColor* FadeToColor;
    // Field size check
    static_assert(sizeof(::OVR::OpenVR::IVRCompositor::_FadeToColor*) == 0x8);
    // OVR.OpenVR.IVRCompositor/_GetCurrentFadeColor GetCurrentFadeColor
    // Size: 0x8
    // Offset: 0x68
    ::OVR::OpenVR::IVRCompositor::_GetCurrentFadeColor* GetCurrentFadeColor;
    // Field size check
    static_assert(sizeof(::OVR::OpenVR::IVRCompositor::_GetCurrentFadeColor*) == 0x8);
    // OVR.OpenVR.IVRCompositor/_FadeGrid FadeGrid
    // Size: 0x8
    // Offset: 0x70
    ::OVR::OpenVR::IVRCompositor::_FadeGrid* FadeGrid;
    // Field size check
    static_assert(sizeof(::OVR::OpenVR::IVRCompositor::_FadeGrid*) == 0x8);
    // OVR.OpenVR.IVRCompositor/_GetCurrentGridAlpha GetCurrentGridAlpha
    // Size: 0x8
    // Offset: 0x78
    ::OVR::OpenVR::IVRCompositor::_GetCurrentGridAlpha* GetCurrentGridAlpha;
    // Field size check
    static_assert(sizeof(::OVR::OpenVR::IVRCompositor::_GetCurrentGridAlpha*) == 0x8);
    // OVR.OpenVR.IVRCompositor/_SetSkyboxOverride SetSkyboxOverride
    // Size: 0x8
    // Offset: 0x80
    ::OVR::OpenVR::IVRCompositor::_SetSkyboxOverride* SetSkyboxOverride;
    // Field size check
    static_assert(sizeof(::OVR::OpenVR::IVRCompositor::_SetSkyboxOverride*) == 0x8);
    // OVR.OpenVR.IVRCompositor/_ClearSkyboxOverride ClearSkyboxOverride
    // Size: 0x8
    // Offset: 0x88
    ::OVR::OpenVR::IVRCompositor::_ClearSkyboxOverride* ClearSkyboxOverride;
    // Field size check
    static_assert(sizeof(::OVR::OpenVR::IVRCompositor::_ClearSkyboxOverride*) == 0x8);
    // OVR.OpenVR.IVRCompositor/_CompositorBringToFront CompositorBringToFront
    // Size: 0x8
    // Offset: 0x90
    ::OVR::OpenVR::IVRCompositor::_CompositorBringToFront* CompositorBringToFront;
    // Field size check
    static_assert(sizeof(::OVR::OpenVR::IVRCompositor::_CompositorBringToFront*) == 0x8);
    // OVR.OpenVR.IVRCompositor/_CompositorGoToBack CompositorGoToBack
    // Size: 0x8
    // Offset: 0x98
    ::OVR::OpenVR::IVRCompositor::_CompositorGoToBack* CompositorGoToBack;
    // Field size check
    static_assert(sizeof(::OVR::OpenVR::IVRCompositor::_CompositorGoToBack*) == 0x8);
    // OVR.OpenVR.IVRCompositor/_CompositorQuit CompositorQuit
    // Size: 0x8
    // Offset: 0xA0
    ::OVR::OpenVR::IVRCompositor::_CompositorQuit* CompositorQuit;
    // Field size check
    static_assert(sizeof(::OVR::OpenVR::IVRCompositor::_CompositorQuit*) == 0x8);
    // OVR.OpenVR.IVRCompositor/_IsFullscreen IsFullscreen
    // Size: 0x8
    // Offset: 0xA8
    ::OVR::OpenVR::IVRCompositor::_IsFullscreen* IsFullscreen;
    // Field size check
    static_assert(sizeof(::OVR::OpenVR::IVRCompositor::_IsFullscreen*) == 0x8);
    // OVR.OpenVR.IVRCompositor/_GetCurrentSceneFocusProcess GetCurrentSceneFocusProcess
    // Size: 0x8
    // Offset: 0xB0
    ::OVR::OpenVR::IVRCompositor::_GetCurrentSceneFocusProcess* GetCurrentSceneFocusProcess;
    // Field size check
    static_assert(sizeof(::OVR::OpenVR::IVRCompositor::_GetCurrentSceneFocusProcess*) == 0x8);
    // OVR.OpenVR.IVRCompositor/_GetLastFrameRenderer GetLastFrameRenderer
    // Size: 0x8
    // Offset: 0xB8
    ::OVR::OpenVR::IVRCompositor::_GetLastFrameRenderer* GetLastFrameRenderer;
    // Field size check
    static_assert(sizeof(::OVR::OpenVR::IVRCompositor::_GetLastFrameRenderer*) == 0x8);
    // OVR.OpenVR.IVRCompositor/_CanRenderScene CanRenderScene
    // Size: 0x8
    // Offset: 0xC0
    ::OVR::OpenVR::IVRCompositor::_CanRenderScene* CanRenderScene;
    // Field size check
    static_assert(sizeof(::OVR::OpenVR::IVRCompositor::_CanRenderScene*) == 0x8);
    // OVR.OpenVR.IVRCompositor/_ShowMirrorWindow ShowMirrorWindow
    // Size: 0x8
    // Offset: 0xC8
    ::OVR::OpenVR::IVRCompositor::_ShowMirrorWindow* ShowMirrorWindow;
    // Field size check
    static_assert(sizeof(::OVR::OpenVR::IVRCompositor::_ShowMirrorWindow*) == 0x8);
    // OVR.OpenVR.IVRCompositor/_HideMirrorWindow HideMirrorWindow
    // Size: 0x8
    // Offset: 0xD0
    ::OVR::OpenVR::IVRCompositor::_HideMirrorWindow* HideMirrorWindow;
    // Field size check
    static_assert(sizeof(::OVR::OpenVR::IVRCompositor::_HideMirrorWindow*) == 0x8);
    // OVR.OpenVR.IVRCompositor/_IsMirrorWindowVisible IsMirrorWindowVisible
    // Size: 0x8
    // Offset: 0xD8
    ::OVR::OpenVR::IVRCompositor::_IsMirrorWindowVisible* IsMirrorWindowVisible;
    // Field size check
    static_assert(sizeof(::OVR::OpenVR::IVRCompositor::_IsMirrorWindowVisible*) == 0x8);
    // OVR.OpenVR.IVRCompositor/_CompositorDumpImages CompositorDumpImages
    // Size: 0x8
    // Offset: 0xE0
    ::OVR::OpenVR::IVRCompositor::_CompositorDumpImages* CompositorDumpImages;
    // Field size check
    static_assert(sizeof(::OVR::OpenVR::IVRCompositor::_CompositorDumpImages*) == 0x8);
    // OVR.OpenVR.IVRCompositor/_ShouldAppRenderWithLowResources ShouldAppRenderWithLowResources
    // Size: 0x8
    // Offset: 0xE8
    ::OVR::OpenVR::IVRCompositor::_ShouldAppRenderWithLowResources* ShouldAppRenderWithLowResources;
    // Field size check
    static_assert(sizeof(::OVR::OpenVR::IVRCompositor::_ShouldAppRenderWithLowResources*) == 0x8);
    // OVR.OpenVR.IVRCompositor/_ForceInterleavedReprojectionOn ForceInterleavedReprojectionOn
    // Size: 0x8
    // Offset: 0xF0
    ::OVR::OpenVR::IVRCompositor::_ForceInterleavedReprojectionOn* ForceInterleavedReprojectionOn;
    // Field size check
    static_assert(sizeof(::OVR::OpenVR::IVRCompositor::_ForceInterleavedReprojectionOn*) == 0x8);
    // OVR.OpenVR.IVRCompositor/_ForceReconnectProcess ForceReconnectProcess
    // Size: 0x8
    // Offset: 0xF8
    ::OVR::OpenVR::IVRCompositor::_ForceReconnectProcess* ForceReconnectProcess;
    // Field size check
    static_assert(sizeof(::OVR::OpenVR::IVRCompositor::_ForceReconnectProcess*) == 0x8);
    // OVR.OpenVR.IVRCompositor/_SuspendRendering SuspendRendering
    // Size: 0x8
    // Offset: 0x100
    ::OVR::OpenVR::IVRCompositor::_SuspendRendering* SuspendRendering;
    // Field size check
    static_assert(sizeof(::OVR::OpenVR::IVRCompositor::_SuspendRendering*) == 0x8);
    // OVR.OpenVR.IVRCompositor/_GetMirrorTextureD3D11 GetMirrorTextureD3D11
    // Size: 0x8
    // Offset: 0x108
    ::OVR::OpenVR::IVRCompositor::_GetMirrorTextureD3D11* GetMirrorTextureD3D11;
    // Field size check
    static_assert(sizeof(::OVR::OpenVR::IVRCompositor::_GetMirrorTextureD3D11*) == 0x8);
    // OVR.OpenVR.IVRCompositor/_ReleaseMirrorTextureD3D11 ReleaseMirrorTextureD3D11
    // Size: 0x8
    // Offset: 0x110
    ::OVR::OpenVR::IVRCompositor::_ReleaseMirrorTextureD3D11* ReleaseMirrorTextureD3D11;
    // Field size check
    static_assert(sizeof(::OVR::OpenVR::IVRCompositor::_ReleaseMirrorTextureD3D11*) == 0x8);
    // OVR.OpenVR.IVRCompositor/_GetMirrorTextureGL GetMirrorTextureGL
    // Size: 0x8
    // Offset: 0x118
    ::OVR::OpenVR::IVRCompositor::_GetMirrorTextureGL* GetMirrorTextureGL;
    // Field size check
    static_assert(sizeof(::OVR::OpenVR::IVRCompositor::_GetMirrorTextureGL*) == 0x8);
    // OVR.OpenVR.IVRCompositor/_ReleaseSharedGLTexture ReleaseSharedGLTexture
    // Size: 0x8
    // Offset: 0x120
    ::OVR::OpenVR::IVRCompositor::_ReleaseSharedGLTexture* ReleaseSharedGLTexture;
    // Field size check
    static_assert(sizeof(::OVR::OpenVR::IVRCompositor::_ReleaseSharedGLTexture*) == 0x8);
    // OVR.OpenVR.IVRCompositor/_LockGLSharedTextureForAccess LockGLSharedTextureForAccess
    // Size: 0x8
    // Offset: 0x128
    ::OVR::OpenVR::IVRCompositor::_LockGLSharedTextureForAccess* LockGLSharedTextureForAccess;
    // Field size check
    static_assert(sizeof(::OVR::OpenVR::IVRCompositor::_LockGLSharedTextureForAccess*) == 0x8);
    // OVR.OpenVR.IVRCompositor/_UnlockGLSharedTextureForAccess UnlockGLSharedTextureForAccess
    // Size: 0x8
    // Offset: 0x130
    ::OVR::OpenVR::IVRCompositor::_UnlockGLSharedTextureForAccess* UnlockGLSharedTextureForAccess;
    // Field size check
    static_assert(sizeof(::OVR::OpenVR::IVRCompositor::_UnlockGLSharedTextureForAccess*) == 0x8);
    // OVR.OpenVR.IVRCompositor/_GetVulkanInstanceExtensionsRequired GetVulkanInstanceExtensionsRequired
    // Size: 0x8
    // Offset: 0x138
    ::OVR::OpenVR::IVRCompositor::_GetVulkanInstanceExtensionsRequired* GetVulkanInstanceExtensionsRequired;
    // Field size check
    static_assert(sizeof(::OVR::OpenVR::IVRCompositor::_GetVulkanInstanceExtensionsRequired*) == 0x8);
    // OVR.OpenVR.IVRCompositor/_GetVulkanDeviceExtensionsRequired GetVulkanDeviceExtensionsRequired
    // Size: 0x8
    // Offset: 0x140
    ::OVR::OpenVR::IVRCompositor::_GetVulkanDeviceExtensionsRequired* GetVulkanDeviceExtensionsRequired;
    // Field size check
    static_assert(sizeof(::OVR::OpenVR::IVRCompositor::_GetVulkanDeviceExtensionsRequired*) == 0x8);
    // OVR.OpenVR.IVRCompositor/_SetExplicitTimingMode SetExplicitTimingMode
    // Size: 0x8
    // Offset: 0x148
    ::OVR::OpenVR::IVRCompositor::_SetExplicitTimingMode* SetExplicitTimingMode;
    // Field size check
    static_assert(sizeof(::OVR::OpenVR::IVRCompositor::_SetExplicitTimingMode*) == 0x8);
    // OVR.OpenVR.IVRCompositor/_SubmitExplicitTimingData SubmitExplicitTimingData
    // Size: 0x8
    // Offset: 0x150
    ::OVR::OpenVR::IVRCompositor::_SubmitExplicitTimingData* SubmitExplicitTimingData;
    // Field size check
    static_assert(sizeof(::OVR::OpenVR::IVRCompositor::_SubmitExplicitTimingData*) == 0x8);
    public:
    // Creating value type constructor for type: IVRCompositor
    constexpr IVRCompositor(::OVR::OpenVR::IVRCompositor::_SetTrackingSpace* SetTrackingSpace_ = {}, ::OVR::OpenVR::IVRCompositor::_GetTrackingSpace* GetTrackingSpace_ = {}, ::OVR::OpenVR::IVRCompositor::_WaitGetPoses* WaitGetPoses_ = {}, ::OVR::OpenVR::IVRCompositor::_GetLastPoses* GetLastPoses_ = {}, ::OVR::OpenVR::IVRCompositor::_GetLastPoseForTrackedDeviceIndex* GetLastPoseForTrackedDeviceIndex_ = {}, ::OVR::OpenVR::IVRCompositor::_Submit* Submit_ = {}, ::OVR::OpenVR::IVRCompositor::_ClearLastSubmittedFrame* ClearLastSubmittedFrame_ = {}, ::OVR::OpenVR::IVRCompositor::_PostPresentHandoff* PostPresentHandoff_ = {}, ::OVR::OpenVR::IVRCompositor::_GetFrameTiming* GetFrameTiming_ = {}, ::OVR::OpenVR::IVRCompositor::_GetFrameTimings* GetFrameTimings_ = {}, ::OVR::OpenVR::IVRCompositor::_GetFrameTimeRemaining* GetFrameTimeRemaining_ = {}, ::OVR::OpenVR::IVRCompositor::_GetCumulativeStats* GetCumulativeStats_ = {}, ::OVR::OpenVR::IVRCompositor::_FadeToColor* FadeToColor_ = {}, ::OVR::OpenVR::IVRCompositor::_GetCurrentFadeColor* GetCurrentFadeColor_ = {}, ::OVR::OpenVR::IVRCompositor::_FadeGrid* FadeGrid_ = {}, ::OVR::OpenVR::IVRCompositor::_GetCurrentGridAlpha* GetCurrentGridAlpha_ = {}, ::OVR::OpenVR::IVRCompositor::_SetSkyboxOverride* SetSkyboxOverride_ = {}, ::OVR::OpenVR::IVRCompositor::_ClearSkyboxOverride* ClearSkyboxOverride_ = {}, ::OVR::OpenVR::IVRCompositor::_CompositorBringToFront* CompositorBringToFront_ = {}, ::OVR::OpenVR::IVRCompositor::_CompositorGoToBack* CompositorGoToBack_ = {}, ::OVR::OpenVR::IVRCompositor::_CompositorQuit* CompositorQuit_ = {}, ::OVR::OpenVR::IVRCompositor::_IsFullscreen* IsFullscreen_ = {}, ::OVR::OpenVR::IVRCompositor::_GetCurrentSceneFocusProcess* GetCurrentSceneFocusProcess_ = {}, ::OVR::OpenVR::IVRCompositor::_GetLastFrameRenderer* GetLastFrameRenderer_ = {}, ::OVR::OpenVR::IVRCompositor::_CanRenderScene* CanRenderScene_ = {}, ::OVR::OpenVR::IVRCompositor::_ShowMirrorWindow* ShowMirrorWindow_ = {}, ::OVR::OpenVR::IVRCompositor::_HideMirrorWindow* HideMirrorWindow_ = {}, ::OVR::OpenVR::IVRCompositor::_IsMirrorWindowVisible* IsMirrorWindowVisible_ = {}, ::OVR::OpenVR::IVRCompositor::_CompositorDumpImages* CompositorDumpImages_ = {}, ::OVR::OpenVR::IVRCompositor::_ShouldAppRenderWithLowResources* ShouldAppRenderWithLowResources_ = {}, ::OVR::OpenVR::IVRCompositor::_ForceInterleavedReprojectionOn* ForceInterleavedReprojectionOn_ = {}, ::OVR::OpenVR::IVRCompositor::_ForceReconnectProcess* ForceReconnectProcess_ = {}, ::OVR::OpenVR::IVRCompositor::_SuspendRendering* SuspendRendering_ = {}, ::OVR::OpenVR::IVRCompositor::_GetMirrorTextureD3D11* GetMirrorTextureD3D11_ = {}, ::OVR::OpenVR::IVRCompositor::_ReleaseMirrorTextureD3D11* ReleaseMirrorTextureD3D11_ = {}, ::OVR::OpenVR::IVRCompositor::_GetMirrorTextureGL* GetMirrorTextureGL_ = {}, ::OVR::OpenVR::IVRCompositor::_ReleaseSharedGLTexture* ReleaseSharedGLTexture_ = {}, ::OVR::OpenVR::IVRCompositor::_LockGLSharedTextureForAccess* LockGLSharedTextureForAccess_ = {}, ::OVR::OpenVR::IVRCompositor::_UnlockGLSharedTextureForAccess* UnlockGLSharedTextureForAccess_ = {}, ::OVR::OpenVR::IVRCompositor::_GetVulkanInstanceExtensionsRequired* GetVulkanInstanceExtensionsRequired_ = {}, ::OVR::OpenVR::IVRCompositor::_GetVulkanDeviceExtensionsRequired* GetVulkanDeviceExtensionsRequired_ = {}, ::OVR::OpenVR::IVRCompositor::_SetExplicitTimingMode* SetExplicitTimingMode_ = {}, ::OVR::OpenVR::IVRCompositor::_SubmitExplicitTimingData* SubmitExplicitTimingData_ = {}) noexcept : SetTrackingSpace{SetTrackingSpace_}, GetTrackingSpace{GetTrackingSpace_}, WaitGetPoses{WaitGetPoses_}, GetLastPoses{GetLastPoses_}, GetLastPoseForTrackedDeviceIndex{GetLastPoseForTrackedDeviceIndex_}, Submit{Submit_}, ClearLastSubmittedFrame{ClearLastSubmittedFrame_}, PostPresentHandoff{PostPresentHandoff_}, GetFrameTiming{GetFrameTiming_}, GetFrameTimings{GetFrameTimings_}, GetFrameTimeRemaining{GetFrameTimeRemaining_}, GetCumulativeStats{GetCumulativeStats_}, FadeToColor{FadeToColor_}, GetCurrentFadeColor{GetCurrentFadeColor_}, FadeGrid{FadeGrid_}, GetCurrentGridAlpha{GetCurrentGridAlpha_}, SetSkyboxOverride{SetSkyboxOverride_}, ClearSkyboxOverride{ClearSkyboxOverride_}, CompositorBringToFront{CompositorBringToFront_}, CompositorGoToBack{CompositorGoToBack_}, CompositorQuit{CompositorQuit_}, IsFullscreen{IsFullscreen_}, GetCurrentSceneFocusProcess{GetCurrentSceneFocusProcess_}, GetLastFrameRenderer{GetLastFrameRenderer_}, CanRenderScene{CanRenderScene_}, ShowMirrorWindow{ShowMirrorWindow_}, HideMirrorWindow{HideMirrorWindow_}, IsMirrorWindowVisible{IsMirrorWindowVisible_}, CompositorDumpImages{CompositorDumpImages_}, ShouldAppRenderWithLowResources{ShouldAppRenderWithLowResources_}, ForceInterleavedReprojectionOn{ForceInterleavedReprojectionOn_}, ForceReconnectProcess{ForceReconnectProcess_}, SuspendRendering{SuspendRendering_}, GetMirrorTextureD3D11{GetMirrorTextureD3D11_}, ReleaseMirrorTextureD3D11{ReleaseMirrorTextureD3D11_}, GetMirrorTextureGL{GetMirrorTextureGL_}, ReleaseSharedGLTexture{ReleaseSharedGLTexture_}, LockGLSharedTextureForAccess{LockGLSharedTextureForAccess_}, UnlockGLSharedTextureForAccess{UnlockGLSharedTextureForAccess_}, GetVulkanInstanceExtensionsRequired{GetVulkanInstanceExtensionsRequired_}, GetVulkanDeviceExtensionsRequired{GetVulkanDeviceExtensionsRequired_}, SetExplicitTimingMode{SetExplicitTimingMode_}, SubmitExplicitTimingData{SubmitExplicitTimingData_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: OVR.OpenVR.IVRCompositor/_SetTrackingSpace SetTrackingSpace
    [[deprecated("Use field access instead!")]] ::OVR::OpenVR::IVRCompositor::_SetTrackingSpace*& dyn_SetTrackingSpace();
    // Get instance field reference: OVR.OpenVR.IVRCompositor/_GetTrackingSpace GetTrackingSpace
    [[deprecated("Use field access instead!")]] ::OVR::OpenVR::IVRCompositor::_GetTrackingSpace*& dyn_GetTrackingSpace();
    // Get instance field reference: OVR.OpenVR.IVRCompositor/_WaitGetPoses WaitGetPoses
    [[deprecated("Use field access instead!")]] ::OVR::OpenVR::IVRCompositor::_WaitGetPoses*& dyn_WaitGetPoses();
    // Get instance field reference: OVR.OpenVR.IVRCompositor/_GetLastPoses GetLastPoses
    [[deprecated("Use field access instead!")]] ::OVR::OpenVR::IVRCompositor::_GetLastPoses*& dyn_GetLastPoses();
    // Get instance field reference: OVR.OpenVR.IVRCompositor/_GetLastPoseForTrackedDeviceIndex GetLastPoseForTrackedDeviceIndex
    [[deprecated("Use field access instead!")]] ::OVR::OpenVR::IVRCompositor::_GetLastPoseForTrackedDeviceIndex*& dyn_GetLastPoseForTrackedDeviceIndex();
    // Get instance field reference: OVR.OpenVR.IVRCompositor/_Submit Submit
    [[deprecated("Use field access instead!")]] ::OVR::OpenVR::IVRCompositor::_Submit*& dyn_Submit();
    // Get instance field reference: OVR.OpenVR.IVRCompositor/_ClearLastSubmittedFrame ClearLastSubmittedFrame
    [[deprecated("Use field access instead!")]] ::OVR::OpenVR::IVRCompositor::_ClearLastSubmittedFrame*& dyn_ClearLastSubmittedFrame();
    // Get instance field reference: OVR.OpenVR.IVRCompositor/_PostPresentHandoff PostPresentHandoff
    [[deprecated("Use field access instead!")]] ::OVR::OpenVR::IVRCompositor::_PostPresentHandoff*& dyn_PostPresentHandoff();
    // Get instance field reference: OVR.OpenVR.IVRCompositor/_GetFrameTiming GetFrameTiming
    [[deprecated("Use field access instead!")]] ::OVR::OpenVR::IVRCompositor::_GetFrameTiming*& dyn_GetFrameTiming();
    // Get instance field reference: OVR.OpenVR.IVRCompositor/_GetFrameTimings GetFrameTimings
    [[deprecated("Use field access instead!")]] ::OVR::OpenVR::IVRCompositor::_GetFrameTimings*& dyn_GetFrameTimings();
    // Get instance field reference: OVR.OpenVR.IVRCompositor/_GetFrameTimeRemaining GetFrameTimeRemaining
    [[deprecated("Use field access instead!")]] ::OVR::OpenVR::IVRCompositor::_GetFrameTimeRemaining*& dyn_GetFrameTimeRemaining();
    // Get instance field reference: OVR.OpenVR.IVRCompositor/_GetCumulativeStats GetCumulativeStats
    [[deprecated("Use field access instead!")]] ::OVR::OpenVR::IVRCompositor::_GetCumulativeStats*& dyn_GetCumulativeStats();
    // Get instance field reference: OVR.OpenVR.IVRCompositor/_FadeToColor FadeToColor
    [[deprecated("Use field access instead!")]] ::OVR::OpenVR::IVRCompositor::_FadeToColor*& dyn_FadeToColor();
    // Get instance field reference: OVR.OpenVR.IVRCompositor/_GetCurrentFadeColor GetCurrentFadeColor
    [[deprecated("Use field access instead!")]] ::OVR::OpenVR::IVRCompositor::_GetCurrentFadeColor*& dyn_GetCurrentFadeColor();
    // Get instance field reference: OVR.OpenVR.IVRCompositor/_FadeGrid FadeGrid
    [[deprecated("Use field access instead!")]] ::OVR::OpenVR::IVRCompositor::_FadeGrid*& dyn_FadeGrid();
    // Get instance field reference: OVR.OpenVR.IVRCompositor/_GetCurrentGridAlpha GetCurrentGridAlpha
    [[deprecated("Use field access instead!")]] ::OVR::OpenVR::IVRCompositor::_GetCurrentGridAlpha*& dyn_GetCurrentGridAlpha();
    // Get instance field reference: OVR.OpenVR.IVRCompositor/_SetSkyboxOverride SetSkyboxOverride
    [[deprecated("Use field access instead!")]] ::OVR::OpenVR::IVRCompositor::_SetSkyboxOverride*& dyn_SetSkyboxOverride();
    // Get instance field reference: OVR.OpenVR.IVRCompositor/_ClearSkyboxOverride ClearSkyboxOverride
    [[deprecated("Use field access instead!")]] ::OVR::OpenVR::IVRCompositor::_ClearSkyboxOverride*& dyn_ClearSkyboxOverride();
    // Get instance field reference: OVR.OpenVR.IVRCompositor/_CompositorBringToFront CompositorBringToFront
    [[deprecated("Use field access instead!")]] ::OVR::OpenVR::IVRCompositor::_CompositorBringToFront*& dyn_CompositorBringToFront();
    // Get instance field reference: OVR.OpenVR.IVRCompositor/_CompositorGoToBack CompositorGoToBack
    [[deprecated("Use field access instead!")]] ::OVR::OpenVR::IVRCompositor::_CompositorGoToBack*& dyn_CompositorGoToBack();
    // Get instance field reference: OVR.OpenVR.IVRCompositor/_CompositorQuit CompositorQuit
    [[deprecated("Use field access instead!")]] ::OVR::OpenVR::IVRCompositor::_CompositorQuit*& dyn_CompositorQuit();
    // Get instance field reference: OVR.OpenVR.IVRCompositor/_IsFullscreen IsFullscreen
    [[deprecated("Use field access instead!")]] ::OVR::OpenVR::IVRCompositor::_IsFullscreen*& dyn_IsFullscreen();
    // Get instance field reference: OVR.OpenVR.IVRCompositor/_GetCurrentSceneFocusProcess GetCurrentSceneFocusProcess
    [[deprecated("Use field access instead!")]] ::OVR::OpenVR::IVRCompositor::_GetCurrentSceneFocusProcess*& dyn_GetCurrentSceneFocusProcess();
    // Get instance field reference: OVR.OpenVR.IVRCompositor/_GetLastFrameRenderer GetLastFrameRenderer
    [[deprecated("Use field access instead!")]] ::OVR::OpenVR::IVRCompositor::_GetLastFrameRenderer*& dyn_GetLastFrameRenderer();
    // Get instance field reference: OVR.OpenVR.IVRCompositor/_CanRenderScene CanRenderScene
    [[deprecated("Use field access instead!")]] ::OVR::OpenVR::IVRCompositor::_CanRenderScene*& dyn_CanRenderScene();
    // Get instance field reference: OVR.OpenVR.IVRCompositor/_ShowMirrorWindow ShowMirrorWindow
    [[deprecated("Use field access instead!")]] ::OVR::OpenVR::IVRCompositor::_ShowMirrorWindow*& dyn_ShowMirrorWindow();
    // Get instance field reference: OVR.OpenVR.IVRCompositor/_HideMirrorWindow HideMirrorWindow
    [[deprecated("Use field access instead!")]] ::OVR::OpenVR::IVRCompositor::_HideMirrorWindow*& dyn_HideMirrorWindow();
    // Get instance field reference: OVR.OpenVR.IVRCompositor/_IsMirrorWindowVisible IsMirrorWindowVisible
    [[deprecated("Use field access instead!")]] ::OVR::OpenVR::IVRCompositor::_IsMirrorWindowVisible*& dyn_IsMirrorWindowVisible();
    // Get instance field reference: OVR.OpenVR.IVRCompositor/_CompositorDumpImages CompositorDumpImages
    [[deprecated("Use field access instead!")]] ::OVR::OpenVR::IVRCompositor::_CompositorDumpImages*& dyn_CompositorDumpImages();
    // Get instance field reference: OVR.OpenVR.IVRCompositor/_ShouldAppRenderWithLowResources ShouldAppRenderWithLowResources
    [[deprecated("Use field access instead!")]] ::OVR::OpenVR::IVRCompositor::_ShouldAppRenderWithLowResources*& dyn_ShouldAppRenderWithLowResources();
    // Get instance field reference: OVR.OpenVR.IVRCompositor/_ForceInterleavedReprojectionOn ForceInterleavedReprojectionOn
    [[deprecated("Use field access instead!")]] ::OVR::OpenVR::IVRCompositor::_ForceInterleavedReprojectionOn*& dyn_ForceInterleavedReprojectionOn();
    // Get instance field reference: OVR.OpenVR.IVRCompositor/_ForceReconnectProcess ForceReconnectProcess
    [[deprecated("Use field access instead!")]] ::OVR::OpenVR::IVRCompositor::_ForceReconnectProcess*& dyn_ForceReconnectProcess();
    // Get instance field reference: OVR.OpenVR.IVRCompositor/_SuspendRendering SuspendRendering
    [[deprecated("Use field access instead!")]] ::OVR::OpenVR::IVRCompositor::_SuspendRendering*& dyn_SuspendRendering();
    // Get instance field reference: OVR.OpenVR.IVRCompositor/_GetMirrorTextureD3D11 GetMirrorTextureD3D11
    [[deprecated("Use field access instead!")]] ::OVR::OpenVR::IVRCompositor::_GetMirrorTextureD3D11*& dyn_GetMirrorTextureD3D11();
    // Get instance field reference: OVR.OpenVR.IVRCompositor/_ReleaseMirrorTextureD3D11 ReleaseMirrorTextureD3D11
    [[deprecated("Use field access instead!")]] ::OVR::OpenVR::IVRCompositor::_ReleaseMirrorTextureD3D11*& dyn_ReleaseMirrorTextureD3D11();
    // Get instance field reference: OVR.OpenVR.IVRCompositor/_GetMirrorTextureGL GetMirrorTextureGL
    [[deprecated("Use field access instead!")]] ::OVR::OpenVR::IVRCompositor::_GetMirrorTextureGL*& dyn_GetMirrorTextureGL();
    // Get instance field reference: OVR.OpenVR.IVRCompositor/_ReleaseSharedGLTexture ReleaseSharedGLTexture
    [[deprecated("Use field access instead!")]] ::OVR::OpenVR::IVRCompositor::_ReleaseSharedGLTexture*& dyn_ReleaseSharedGLTexture();
    // Get instance field reference: OVR.OpenVR.IVRCompositor/_LockGLSharedTextureForAccess LockGLSharedTextureForAccess
    [[deprecated("Use field access instead!")]] ::OVR::OpenVR::IVRCompositor::_LockGLSharedTextureForAccess*& dyn_LockGLSharedTextureForAccess();
    // Get instance field reference: OVR.OpenVR.IVRCompositor/_UnlockGLSharedTextureForAccess UnlockGLSharedTextureForAccess
    [[deprecated("Use field access instead!")]] ::OVR::OpenVR::IVRCompositor::_UnlockGLSharedTextureForAccess*& dyn_UnlockGLSharedTextureForAccess();
    // Get instance field reference: OVR.OpenVR.IVRCompositor/_GetVulkanInstanceExtensionsRequired GetVulkanInstanceExtensionsRequired
    [[deprecated("Use field access instead!")]] ::OVR::OpenVR::IVRCompositor::_GetVulkanInstanceExtensionsRequired*& dyn_GetVulkanInstanceExtensionsRequired();
    // Get instance field reference: OVR.OpenVR.IVRCompositor/_GetVulkanDeviceExtensionsRequired GetVulkanDeviceExtensionsRequired
    [[deprecated("Use field access instead!")]] ::OVR::OpenVR::IVRCompositor::_GetVulkanDeviceExtensionsRequired*& dyn_GetVulkanDeviceExtensionsRequired();
    // Get instance field reference: OVR.OpenVR.IVRCompositor/_SetExplicitTimingMode SetExplicitTimingMode
    [[deprecated("Use field access instead!")]] ::OVR::OpenVR::IVRCompositor::_SetExplicitTimingMode*& dyn_SetExplicitTimingMode();
    // Get instance field reference: OVR.OpenVR.IVRCompositor/_SubmitExplicitTimingData SubmitExplicitTimingData
    [[deprecated("Use field access instead!")]] ::OVR::OpenVR::IVRCompositor::_SubmitExplicitTimingData*& dyn_SubmitExplicitTimingData();
  }; // OVR.OpenVR.IVRCompositor
  #pragma pack(pop)
  static check_size<sizeof(IVRCompositor), 336 + sizeof(::OVR::OpenVR::IVRCompositor::_SubmitExplicitTimingData*)> __OVR_OpenVR_IVRCompositorSizeCheck;
  static_assert(sizeof(IVRCompositor) == 0x158);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
