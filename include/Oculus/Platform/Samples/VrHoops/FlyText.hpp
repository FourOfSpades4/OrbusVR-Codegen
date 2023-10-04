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
// Type namespace: Oculus.Platform.Samples.VrHoops
namespace Oculus::Platform::Samples::VrHoops {
  // Forward declaring type: FlyText
  class FlyText;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Platform::Samples::VrHoops::FlyText);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Samples::VrHoops::FlyText*, "Oculus.Platform.Samples.VrHoops", "FlyText");
// Type namespace: Oculus.Platform.Samples.VrHoops
namespace Oculus::Platform::Samples::VrHoops {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.Samples.VrHoops.FlyText
  // [TokenAttribute] Offset: FFFFFFFF
  class FlyText : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private readonly UnityEngine.Vector3 m_movePerFrame
    // Size: 0xC
    // Offset: 0x18
    ::UnityEngine::Vector3 m_movePerFrame;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private System.Single m_eol
    // Size: 0x4
    // Offset: 0x24
    float m_eol;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // static field const value: static private System.Single LIFESPAN
    static constexpr const float LIFESPAN = 3;
    // Get static field: static private System.Single LIFESPAN
    static float _get_LIFESPAN();
    // Set static field: static private System.Single LIFESPAN
    static void _set_LIFESPAN(float value);
    // Get instance field reference: private readonly UnityEngine.Vector3 m_movePerFrame
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_m_movePerFrame();
    // Get instance field reference: private System.Single m_eol
    [[deprecated("Use field access instead!")]] float& dyn_m_eol();
    // private System.Void Start()
    // Offset: 0x1535CDC
    void Start();
    // private System.Void Update()
    // Offset: 0x1535DAC
    void Update();
    // public System.Void .ctor()
    // Offset: 0x1535F10
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FlyText* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Platform::Samples::VrHoops::FlyText::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FlyText*, creationType>()));
    }
  }; // Oculus.Platform.Samples.VrHoops.FlyText
  #pragma pack(pop)
  static check_size<sizeof(FlyText), 36 + sizeof(float)> __Oculus_Platform_Samples_VrHoops_FlyTextSizeCheck;
  static_assert(sizeof(FlyText) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::Samples::VrHoops::FlyText::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::Samples::VrHoops::FlyText::*)()>(&Oculus::Platform::Samples::VrHoops::FlyText::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Samples::VrHoops::FlyText*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Samples::VrHoops::FlyText::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::Samples::VrHoops::FlyText::*)()>(&Oculus::Platform::Samples::VrHoops::FlyText::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Samples::VrHoops::FlyText*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Samples::VrHoops::FlyText::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
