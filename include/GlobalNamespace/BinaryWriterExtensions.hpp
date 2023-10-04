// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OvrAvatarDriver
#include "GlobalNamespace/OvrAvatarDriver.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: BinaryWriter
  class BinaryWriter;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Vector3 because it is already included!
  // Skipping declaration: Vector2 because it is already included!
  // Skipping declaration: Quaternion because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: BinaryWriterExtensions
  class BinaryWriterExtensions;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::BinaryWriterExtensions);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BinaryWriterExtensions*, "", "BinaryWriterExtensions");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: BinaryWriterExtensions
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExtensionAttribute] Offset: FFFFFFFF
  class BinaryWriterExtensions : public ::Il2CppObject {
    public:
    // static public System.Void Write(System.IO.BinaryWriter writer, OvrAvatarDriver/PoseFrame frame)
    // Offset: 0x12B3C00
    static void Write(::System::IO::BinaryWriter* writer, ::GlobalNamespace::OvrAvatarDriver::PoseFrame frame);
    // static public System.Void Write(System.IO.BinaryWriter writer, UnityEngine.Vector3 vec3)
    // Offset: 0x12B3D24
    static void Write(::System::IO::BinaryWriter* writer, ::UnityEngine::Vector3 vec3);
    // static public System.Void Write(System.IO.BinaryWriter writer, UnityEngine.Vector2 vec2)
    // Offset: 0x12B3FB0
    static void Write(::System::IO::BinaryWriter* writer, ::UnityEngine::Vector2 vec2);
    // static public System.Void Write(System.IO.BinaryWriter writer, UnityEngine.Quaternion quat)
    // Offset: 0x12B3DD8
    static void Write(::System::IO::BinaryWriter* writer, ::UnityEngine::Quaternion quat);
    // static public System.Void Write(System.IO.BinaryWriter writer, OvrAvatarDriver/ControllerPose pose)
    // Offset: 0x12B3EB4
    static void Write(::System::IO::BinaryWriter* writer, ::GlobalNamespace::OvrAvatarDriver::ControllerPose pose);
  }; // BinaryWriterExtensions
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BinaryWriterExtensions::Write
// Il2CppName: Write
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IO::BinaryWriter*, ::GlobalNamespace::OvrAvatarDriver::PoseFrame)>(&GlobalNamespace::BinaryWriterExtensions::Write)> {
  static const MethodInfo* get() {
    static auto* writer = &::il2cpp_utils::GetClassFromName("System.IO", "BinaryWriter")->byval_arg;
    static auto* frame = &::il2cpp_utils::GetClassFromName("", "OvrAvatarDriver/PoseFrame")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BinaryWriterExtensions*), "Write", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{writer, frame});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BinaryWriterExtensions::Write
// Il2CppName: Write
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IO::BinaryWriter*, ::UnityEngine::Vector3)>(&GlobalNamespace::BinaryWriterExtensions::Write)> {
  static const MethodInfo* get() {
    static auto* writer = &::il2cpp_utils::GetClassFromName("System.IO", "BinaryWriter")->byval_arg;
    static auto* vec3 = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BinaryWriterExtensions*), "Write", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{writer, vec3});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BinaryWriterExtensions::Write
// Il2CppName: Write
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IO::BinaryWriter*, ::UnityEngine::Vector2)>(&GlobalNamespace::BinaryWriterExtensions::Write)> {
  static const MethodInfo* get() {
    static auto* writer = &::il2cpp_utils::GetClassFromName("System.IO", "BinaryWriter")->byval_arg;
    static auto* vec2 = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BinaryWriterExtensions*), "Write", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{writer, vec2});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BinaryWriterExtensions::Write
// Il2CppName: Write
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IO::BinaryWriter*, ::UnityEngine::Quaternion)>(&GlobalNamespace::BinaryWriterExtensions::Write)> {
  static const MethodInfo* get() {
    static auto* writer = &::il2cpp_utils::GetClassFromName("System.IO", "BinaryWriter")->byval_arg;
    static auto* quat = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BinaryWriterExtensions*), "Write", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{writer, quat});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BinaryWriterExtensions::Write
// Il2CppName: Write
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IO::BinaryWriter*, ::GlobalNamespace::OvrAvatarDriver::ControllerPose)>(&GlobalNamespace::BinaryWriterExtensions::Write)> {
  static const MethodInfo* get() {
    static auto* writer = &::il2cpp_utils::GetClassFromName("System.IO", "BinaryWriter")->byval_arg;
    static auto* pose = &::il2cpp_utils::GetClassFromName("", "OvrAvatarDriver/ControllerPose")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BinaryWriterExtensions*), "Write", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{writer, pose});
  }
};
