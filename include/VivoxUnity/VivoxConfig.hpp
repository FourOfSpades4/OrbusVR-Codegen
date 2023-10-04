// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: vx_sdk_config_t
  class vx_sdk_config_t;
  // Forward declaring type: vx_log_level
  struct vx_log_level;
}
// Forward declaring namespace: VivoxUnity
namespace VivoxUnity {
  // Forward declaring type: MediaCodecType
  struct MediaCodecType;
}
// Completed forward declares
// Type namespace: VivoxUnity
namespace VivoxUnity {
  // Forward declaring type: VivoxConfig
  class VivoxConfig;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VivoxUnity::VivoxConfig);
DEFINE_IL2CPP_ARG_TYPE(::VivoxUnity::VivoxConfig*, "VivoxUnity", "VivoxConfig");
// Type namespace: VivoxUnity
namespace VivoxUnity {
  // Size: 0x19
  #pragma pack(push, 1)
  // Autogenerated type: VivoxUnity.VivoxConfig
  // [TokenAttribute] Offset: FFFFFFFF
  class VivoxConfig : public ::Il2CppObject {
    public:
    public:
    // private vx_sdk_config_t vx_sdk_config
    // Size: 0x8
    // Offset: 0x10
    ::GlobalNamespace::vx_sdk_config_t* vx_sdk_config;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::vx_sdk_config_t*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xABDC88
    // private System.Boolean <SkipPrepareForVivox>k__BackingField
    // Size: 0x1
    // Offset: 0x18
    bool SkipPrepareForVivox;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: private vx_sdk_config_t vx_sdk_config
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::vx_sdk_config_t*& dyn_vx_sdk_config();
    // Get instance field reference: private System.Boolean <SkipPrepareForVivox>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$SkipPrepareForVivox$k__BackingField();
    // public vx_sdk_config_t ToVx_Sdk_Config()
    // Offset: 0x12DA304
    ::GlobalNamespace::vx_sdk_config_t* ToVx_Sdk_Config();
    // public System.Int32 get_CodecThreads()
    // Offset: 0x12DA30C
    int get_CodecThreads();
    // public System.Void set_CodecThreads(System.Int32 value)
    // Offset: 0x12DA33C
    void set_CodecThreads(int value);
    // public System.Int32 get_VoiceThreads()
    // Offset: 0x12DA374
    int get_VoiceThreads();
    // public System.Void set_VoiceThreads(System.Int32 value)
    // Offset: 0x12DA3A4
    void set_VoiceThreads(int value);
    // public System.Int32 get_WebThreads()
    // Offset: 0x12DA3DC
    int get_WebThreads();
    // public System.Void set_WebThreads(System.Int32 value)
    // Offset: 0x12DA40C
    void set_WebThreads(int value);
    // public System.Int32 get_RenderSourceQueueDepthMax()
    // Offset: 0x12DA444
    int get_RenderSourceQueueDepthMax();
    // public System.Void set_RenderSourceQueueDepthMax(System.Int32 value)
    // Offset: 0x12DA474
    void set_RenderSourceQueueDepthMax(int value);
    // public System.Int32 get_RenderSourceInitialBufferCount()
    // Offset: 0x12DA4AC
    int get_RenderSourceInitialBufferCount();
    // public System.Void set_RenderSourceInitialBufferCount(System.Int32 value)
    // Offset: 0x12DA4DC
    void set_RenderSourceInitialBufferCount(int value);
    // public System.Int32 get_UpstreamJitterFrameCount()
    // Offset: 0x12DA514
    int get_UpstreamJitterFrameCount();
    // public System.Void set_UpstreamJitterFrameCount(System.Int32 value)
    // Offset: 0x12DA544
    void set_UpstreamJitterFrameCount(int value);
    // public System.Int32 get_MaxLoginsPerUser()
    // Offset: 0x12DA57C
    int get_MaxLoginsPerUser();
    // public System.Void set_MaxLoginsPerUser(System.Int32 value)
    // Offset: 0x12DA5AC
    void set_MaxLoginsPerUser(int value);
    // public vx_log_level get_InitialLogLevel()
    // Offset: 0x12DA5E4
    ::GlobalNamespace::vx_log_level get_InitialLogLevel();
    // public System.Void set_InitialLogLevel(vx_log_level value)
    // Offset: 0x12DA614
    void set_InitialLogLevel(::GlobalNamespace::vx_log_level value);
    // public System.Boolean get_DisableDevicePolling()
    // Offset: 0x12DA64C
    bool get_DisableDevicePolling();
    // public System.Void set_DisableDevicePolling(System.Boolean value)
    // Offset: 0x12DA6D8
    void set_DisableDevicePolling(bool value);
    // public System.Boolean get_ForceCaptureSilence()
    // Offset: 0x12DA770
    bool get_ForceCaptureSilence();
    // public System.Void set_ForceCaptureSilence(System.Boolean value)
    // Offset: 0x12DA7FC
    void set_ForceCaptureSilence(bool value);
    // public System.Boolean get_EnableAdvancedAutoLevels()
    // Offset: 0x12DA894
    bool get_EnableAdvancedAutoLevels();
    // public System.Void set_EnableAdvancedAutoLevels(System.Boolean value)
    // Offset: 0x12DA920
    void set_EnableAdvancedAutoLevels(bool value);
    // public System.Int32 get_CaptureDeviceBufferSizeIntervals()
    // Offset: 0x12DA9B8
    int get_CaptureDeviceBufferSizeIntervals();
    // public System.Void set_CaptureDeviceBufferSizeIntervals(System.Int32 value)
    // Offset: 0x12DA9E8
    void set_CaptureDeviceBufferSizeIntervals(int value);
    // public System.Int32 get_RenderDeviceBufferSizeIntervals()
    // Offset: 0x12DAA20
    int get_RenderDeviceBufferSizeIntervals();
    // public System.Void set_RenderDeviceBufferSizeIntervals(System.Int32 value)
    // Offset: 0x12DAA50
    void set_RenderDeviceBufferSizeIntervals(int value);
    // public System.Boolean get_DisableAudioDucking()
    // Offset: 0x12DAA88
    bool get_DisableAudioDucking();
    // public System.Void set_DisableAudioDucking(System.Boolean value)
    // Offset: 0x12DAB14
    void set_DisableAudioDucking(bool value);
    // public System.Boolean get_EnableDtx()
    // Offset: 0x12DABAC
    bool get_EnableDtx();
    // public System.Void set_EnableDtx(System.Boolean value)
    // Offset: 0x12DAC38
    void set_EnableDtx(bool value);
    // public VivoxUnity.MediaCodecType get_DefaultCodecsMask()
    // Offset: 0x12DACD0
    ::VivoxUnity::MediaCodecType get_DefaultCodecsMask();
    // public System.Void set_DefaultCodecsMask(VivoxUnity.MediaCodecType value)
    // Offset: 0x12DAD00
    void set_DefaultCodecsMask(::VivoxUnity::MediaCodecType value);
    // public System.Boolean get_EnableFastNetworkChangeDetection()
    // Offset: 0x12DAD38
    bool get_EnableFastNetworkChangeDetection();
    // public System.Void set_EnableFastNetworkChangeDetection(System.Boolean value)
    // Offset: 0x12DADC4
    void set_EnableFastNetworkChangeDetection(bool value);
    // public System.Int32 get_UseOsProxySettings()
    // Offset: 0x12DAE5C
    int get_UseOsProxySettings();
    // public System.Void set_UseOsProxySettings(System.Int32 value)
    // Offset: 0x12DAE8C
    void set_UseOsProxySettings(int value);
    // public System.Boolean get_DynamicVoiceProcessingSwitching()
    // Offset: 0x12DAEC4
    bool get_DynamicVoiceProcessingSwitching();
    // public System.Void set_DynamicVoiceProcessingSwitching(System.Boolean value)
    // Offset: 0x12DAF50
    void set_DynamicVoiceProcessingSwitching(bool value);
    // public System.Int32 get_NeverRtpTimeoutMs()
    // Offset: 0x12DAFE8
    int get_NeverRtpTimeoutMs();
    // public System.Void set_NeverRtpTimeoutMs(System.Int32 value)
    // Offset: 0x12DB018
    void set_NeverRtpTimeoutMs(int value);
    // public System.Int32 get_LostRtpTimeoutMs()
    // Offset: 0x12DB050
    int get_LostRtpTimeoutMs();
    // public System.Void set_LostRtpTimeoutMs(System.Int32 value)
    // Offset: 0x12DB080
    void set_LostRtpTimeoutMs(int value);
    // public System.Boolean get_SkipPrepareForVivox()
    // Offset: 0x12DB0B8
    bool get_SkipPrepareForVivox();
    // public System.Void set_SkipPrepareForVivox(System.Boolean value)
    // Offset: 0x12DB0C0
    void set_SkipPrepareForVivox(bool value);
    // public System.Void .ctor()
    // Offset: 0x12DB0CC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static VivoxConfig* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VivoxUnity::VivoxConfig::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<VivoxConfig*, creationType>()));
    }
  }; // VivoxUnity.VivoxConfig
  #pragma pack(pop)
  static check_size<sizeof(VivoxConfig), 24 + sizeof(bool)> __VivoxUnity_VivoxConfigSizeCheck;
  static_assert(sizeof(VivoxConfig) == 0x19);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VivoxUnity::VivoxConfig::ToVx_Sdk_Config
// Il2CppName: ToVx_Sdk_Config
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::vx_sdk_config_t* (VivoxUnity::VivoxConfig::*)()>(&VivoxUnity::VivoxConfig::ToVx_Sdk_Config)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VivoxUnity::VivoxConfig*), "ToVx_Sdk_Config", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VivoxUnity::VivoxConfig::get_CodecThreads
// Il2CppName: get_CodecThreads
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (VivoxUnity::VivoxConfig::*)()>(&VivoxUnity::VivoxConfig::get_CodecThreads)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VivoxUnity::VivoxConfig*), "get_CodecThreads", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VivoxUnity::VivoxConfig::set_CodecThreads
// Il2CppName: set_CodecThreads
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VivoxUnity::VivoxConfig::*)(int)>(&VivoxUnity::VivoxConfig::set_CodecThreads)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VivoxUnity::VivoxConfig*), "set_CodecThreads", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VivoxUnity::VivoxConfig::get_VoiceThreads
// Il2CppName: get_VoiceThreads
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (VivoxUnity::VivoxConfig::*)()>(&VivoxUnity::VivoxConfig::get_VoiceThreads)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VivoxUnity::VivoxConfig*), "get_VoiceThreads", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VivoxUnity::VivoxConfig::set_VoiceThreads
// Il2CppName: set_VoiceThreads
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VivoxUnity::VivoxConfig::*)(int)>(&VivoxUnity::VivoxConfig::set_VoiceThreads)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VivoxUnity::VivoxConfig*), "set_VoiceThreads", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VivoxUnity::VivoxConfig::get_WebThreads
// Il2CppName: get_WebThreads
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (VivoxUnity::VivoxConfig::*)()>(&VivoxUnity::VivoxConfig::get_WebThreads)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VivoxUnity::VivoxConfig*), "get_WebThreads", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VivoxUnity::VivoxConfig::set_WebThreads
// Il2CppName: set_WebThreads
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VivoxUnity::VivoxConfig::*)(int)>(&VivoxUnity::VivoxConfig::set_WebThreads)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VivoxUnity::VivoxConfig*), "set_WebThreads", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VivoxUnity::VivoxConfig::get_RenderSourceQueueDepthMax
// Il2CppName: get_RenderSourceQueueDepthMax
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (VivoxUnity::VivoxConfig::*)()>(&VivoxUnity::VivoxConfig::get_RenderSourceQueueDepthMax)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VivoxUnity::VivoxConfig*), "get_RenderSourceQueueDepthMax", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VivoxUnity::VivoxConfig::set_RenderSourceQueueDepthMax
// Il2CppName: set_RenderSourceQueueDepthMax
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VivoxUnity::VivoxConfig::*)(int)>(&VivoxUnity::VivoxConfig::set_RenderSourceQueueDepthMax)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VivoxUnity::VivoxConfig*), "set_RenderSourceQueueDepthMax", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VivoxUnity::VivoxConfig::get_RenderSourceInitialBufferCount
// Il2CppName: get_RenderSourceInitialBufferCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (VivoxUnity::VivoxConfig::*)()>(&VivoxUnity::VivoxConfig::get_RenderSourceInitialBufferCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VivoxUnity::VivoxConfig*), "get_RenderSourceInitialBufferCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VivoxUnity::VivoxConfig::set_RenderSourceInitialBufferCount
// Il2CppName: set_RenderSourceInitialBufferCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VivoxUnity::VivoxConfig::*)(int)>(&VivoxUnity::VivoxConfig::set_RenderSourceInitialBufferCount)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VivoxUnity::VivoxConfig*), "set_RenderSourceInitialBufferCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VivoxUnity::VivoxConfig::get_UpstreamJitterFrameCount
// Il2CppName: get_UpstreamJitterFrameCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (VivoxUnity::VivoxConfig::*)()>(&VivoxUnity::VivoxConfig::get_UpstreamJitterFrameCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VivoxUnity::VivoxConfig*), "get_UpstreamJitterFrameCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VivoxUnity::VivoxConfig::set_UpstreamJitterFrameCount
// Il2CppName: set_UpstreamJitterFrameCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VivoxUnity::VivoxConfig::*)(int)>(&VivoxUnity::VivoxConfig::set_UpstreamJitterFrameCount)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VivoxUnity::VivoxConfig*), "set_UpstreamJitterFrameCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VivoxUnity::VivoxConfig::get_MaxLoginsPerUser
// Il2CppName: get_MaxLoginsPerUser
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (VivoxUnity::VivoxConfig::*)()>(&VivoxUnity::VivoxConfig::get_MaxLoginsPerUser)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VivoxUnity::VivoxConfig*), "get_MaxLoginsPerUser", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VivoxUnity::VivoxConfig::set_MaxLoginsPerUser
// Il2CppName: set_MaxLoginsPerUser
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VivoxUnity::VivoxConfig::*)(int)>(&VivoxUnity::VivoxConfig::set_MaxLoginsPerUser)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VivoxUnity::VivoxConfig*), "set_MaxLoginsPerUser", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VivoxUnity::VivoxConfig::get_InitialLogLevel
// Il2CppName: get_InitialLogLevel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::vx_log_level (VivoxUnity::VivoxConfig::*)()>(&VivoxUnity::VivoxConfig::get_InitialLogLevel)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VivoxUnity::VivoxConfig*), "get_InitialLogLevel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VivoxUnity::VivoxConfig::set_InitialLogLevel
// Il2CppName: set_InitialLogLevel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VivoxUnity::VivoxConfig::*)(::GlobalNamespace::vx_log_level)>(&VivoxUnity::VivoxConfig::set_InitialLogLevel)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "vx_log_level")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VivoxUnity::VivoxConfig*), "set_InitialLogLevel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VivoxUnity::VivoxConfig::get_DisableDevicePolling
// Il2CppName: get_DisableDevicePolling
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (VivoxUnity::VivoxConfig::*)()>(&VivoxUnity::VivoxConfig::get_DisableDevicePolling)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VivoxUnity::VivoxConfig*), "get_DisableDevicePolling", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VivoxUnity::VivoxConfig::set_DisableDevicePolling
// Il2CppName: set_DisableDevicePolling
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VivoxUnity::VivoxConfig::*)(bool)>(&VivoxUnity::VivoxConfig::set_DisableDevicePolling)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VivoxUnity::VivoxConfig*), "set_DisableDevicePolling", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VivoxUnity::VivoxConfig::get_ForceCaptureSilence
// Il2CppName: get_ForceCaptureSilence
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (VivoxUnity::VivoxConfig::*)()>(&VivoxUnity::VivoxConfig::get_ForceCaptureSilence)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VivoxUnity::VivoxConfig*), "get_ForceCaptureSilence", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VivoxUnity::VivoxConfig::set_ForceCaptureSilence
// Il2CppName: set_ForceCaptureSilence
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VivoxUnity::VivoxConfig::*)(bool)>(&VivoxUnity::VivoxConfig::set_ForceCaptureSilence)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VivoxUnity::VivoxConfig*), "set_ForceCaptureSilence", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VivoxUnity::VivoxConfig::get_EnableAdvancedAutoLevels
// Il2CppName: get_EnableAdvancedAutoLevels
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (VivoxUnity::VivoxConfig::*)()>(&VivoxUnity::VivoxConfig::get_EnableAdvancedAutoLevels)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VivoxUnity::VivoxConfig*), "get_EnableAdvancedAutoLevels", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VivoxUnity::VivoxConfig::set_EnableAdvancedAutoLevels
// Il2CppName: set_EnableAdvancedAutoLevels
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VivoxUnity::VivoxConfig::*)(bool)>(&VivoxUnity::VivoxConfig::set_EnableAdvancedAutoLevels)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VivoxUnity::VivoxConfig*), "set_EnableAdvancedAutoLevels", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VivoxUnity::VivoxConfig::get_CaptureDeviceBufferSizeIntervals
// Il2CppName: get_CaptureDeviceBufferSizeIntervals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (VivoxUnity::VivoxConfig::*)()>(&VivoxUnity::VivoxConfig::get_CaptureDeviceBufferSizeIntervals)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VivoxUnity::VivoxConfig*), "get_CaptureDeviceBufferSizeIntervals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VivoxUnity::VivoxConfig::set_CaptureDeviceBufferSizeIntervals
// Il2CppName: set_CaptureDeviceBufferSizeIntervals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VivoxUnity::VivoxConfig::*)(int)>(&VivoxUnity::VivoxConfig::set_CaptureDeviceBufferSizeIntervals)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VivoxUnity::VivoxConfig*), "set_CaptureDeviceBufferSizeIntervals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VivoxUnity::VivoxConfig::get_RenderDeviceBufferSizeIntervals
// Il2CppName: get_RenderDeviceBufferSizeIntervals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (VivoxUnity::VivoxConfig::*)()>(&VivoxUnity::VivoxConfig::get_RenderDeviceBufferSizeIntervals)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VivoxUnity::VivoxConfig*), "get_RenderDeviceBufferSizeIntervals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VivoxUnity::VivoxConfig::set_RenderDeviceBufferSizeIntervals
// Il2CppName: set_RenderDeviceBufferSizeIntervals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VivoxUnity::VivoxConfig::*)(int)>(&VivoxUnity::VivoxConfig::set_RenderDeviceBufferSizeIntervals)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VivoxUnity::VivoxConfig*), "set_RenderDeviceBufferSizeIntervals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VivoxUnity::VivoxConfig::get_DisableAudioDucking
// Il2CppName: get_DisableAudioDucking
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (VivoxUnity::VivoxConfig::*)()>(&VivoxUnity::VivoxConfig::get_DisableAudioDucking)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VivoxUnity::VivoxConfig*), "get_DisableAudioDucking", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VivoxUnity::VivoxConfig::set_DisableAudioDucking
// Il2CppName: set_DisableAudioDucking
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VivoxUnity::VivoxConfig::*)(bool)>(&VivoxUnity::VivoxConfig::set_DisableAudioDucking)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VivoxUnity::VivoxConfig*), "set_DisableAudioDucking", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VivoxUnity::VivoxConfig::get_EnableDtx
// Il2CppName: get_EnableDtx
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (VivoxUnity::VivoxConfig::*)()>(&VivoxUnity::VivoxConfig::get_EnableDtx)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VivoxUnity::VivoxConfig*), "get_EnableDtx", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VivoxUnity::VivoxConfig::set_EnableDtx
// Il2CppName: set_EnableDtx
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VivoxUnity::VivoxConfig::*)(bool)>(&VivoxUnity::VivoxConfig::set_EnableDtx)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VivoxUnity::VivoxConfig*), "set_EnableDtx", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VivoxUnity::VivoxConfig::get_DefaultCodecsMask
// Il2CppName: get_DefaultCodecsMask
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VivoxUnity::MediaCodecType (VivoxUnity::VivoxConfig::*)()>(&VivoxUnity::VivoxConfig::get_DefaultCodecsMask)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VivoxUnity::VivoxConfig*), "get_DefaultCodecsMask", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VivoxUnity::VivoxConfig::set_DefaultCodecsMask
// Il2CppName: set_DefaultCodecsMask
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VivoxUnity::VivoxConfig::*)(::VivoxUnity::MediaCodecType)>(&VivoxUnity::VivoxConfig::set_DefaultCodecsMask)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("VivoxUnity", "MediaCodecType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VivoxUnity::VivoxConfig*), "set_DefaultCodecsMask", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VivoxUnity::VivoxConfig::get_EnableFastNetworkChangeDetection
// Il2CppName: get_EnableFastNetworkChangeDetection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (VivoxUnity::VivoxConfig::*)()>(&VivoxUnity::VivoxConfig::get_EnableFastNetworkChangeDetection)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VivoxUnity::VivoxConfig*), "get_EnableFastNetworkChangeDetection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VivoxUnity::VivoxConfig::set_EnableFastNetworkChangeDetection
// Il2CppName: set_EnableFastNetworkChangeDetection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VivoxUnity::VivoxConfig::*)(bool)>(&VivoxUnity::VivoxConfig::set_EnableFastNetworkChangeDetection)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VivoxUnity::VivoxConfig*), "set_EnableFastNetworkChangeDetection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VivoxUnity::VivoxConfig::get_UseOsProxySettings
// Il2CppName: get_UseOsProxySettings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (VivoxUnity::VivoxConfig::*)()>(&VivoxUnity::VivoxConfig::get_UseOsProxySettings)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VivoxUnity::VivoxConfig*), "get_UseOsProxySettings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VivoxUnity::VivoxConfig::set_UseOsProxySettings
// Il2CppName: set_UseOsProxySettings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VivoxUnity::VivoxConfig::*)(int)>(&VivoxUnity::VivoxConfig::set_UseOsProxySettings)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VivoxUnity::VivoxConfig*), "set_UseOsProxySettings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VivoxUnity::VivoxConfig::get_DynamicVoiceProcessingSwitching
// Il2CppName: get_DynamicVoiceProcessingSwitching
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (VivoxUnity::VivoxConfig::*)()>(&VivoxUnity::VivoxConfig::get_DynamicVoiceProcessingSwitching)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VivoxUnity::VivoxConfig*), "get_DynamicVoiceProcessingSwitching", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VivoxUnity::VivoxConfig::set_DynamicVoiceProcessingSwitching
// Il2CppName: set_DynamicVoiceProcessingSwitching
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VivoxUnity::VivoxConfig::*)(bool)>(&VivoxUnity::VivoxConfig::set_DynamicVoiceProcessingSwitching)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VivoxUnity::VivoxConfig*), "set_DynamicVoiceProcessingSwitching", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VivoxUnity::VivoxConfig::get_NeverRtpTimeoutMs
// Il2CppName: get_NeverRtpTimeoutMs
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (VivoxUnity::VivoxConfig::*)()>(&VivoxUnity::VivoxConfig::get_NeverRtpTimeoutMs)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VivoxUnity::VivoxConfig*), "get_NeverRtpTimeoutMs", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VivoxUnity::VivoxConfig::set_NeverRtpTimeoutMs
// Il2CppName: set_NeverRtpTimeoutMs
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VivoxUnity::VivoxConfig::*)(int)>(&VivoxUnity::VivoxConfig::set_NeverRtpTimeoutMs)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VivoxUnity::VivoxConfig*), "set_NeverRtpTimeoutMs", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VivoxUnity::VivoxConfig::get_LostRtpTimeoutMs
// Il2CppName: get_LostRtpTimeoutMs
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (VivoxUnity::VivoxConfig::*)()>(&VivoxUnity::VivoxConfig::get_LostRtpTimeoutMs)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VivoxUnity::VivoxConfig*), "get_LostRtpTimeoutMs", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VivoxUnity::VivoxConfig::set_LostRtpTimeoutMs
// Il2CppName: set_LostRtpTimeoutMs
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VivoxUnity::VivoxConfig::*)(int)>(&VivoxUnity::VivoxConfig::set_LostRtpTimeoutMs)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VivoxUnity::VivoxConfig*), "set_LostRtpTimeoutMs", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VivoxUnity::VivoxConfig::get_SkipPrepareForVivox
// Il2CppName: get_SkipPrepareForVivox
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (VivoxUnity::VivoxConfig::*)()>(&VivoxUnity::VivoxConfig::get_SkipPrepareForVivox)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VivoxUnity::VivoxConfig*), "get_SkipPrepareForVivox", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VivoxUnity::VivoxConfig::set_SkipPrepareForVivox
// Il2CppName: set_SkipPrepareForVivox
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VivoxUnity::VivoxConfig::*)(bool)>(&VivoxUnity::VivoxConfig::set_SkipPrepareForVivox)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VivoxUnity::VivoxConfig*), "set_SkipPrepareForVivox", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VivoxUnity::VivoxConfig::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
