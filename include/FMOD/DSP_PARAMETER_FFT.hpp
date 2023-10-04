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
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Type namespace: FMOD
namespace FMOD {
  // Forward declaring type: DSP_PARAMETER_FFT
  struct DSP_PARAMETER_FFT;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::FMOD::DSP_PARAMETER_FFT, "FMOD", "DSP_PARAMETER_FFT");
// Type namespace: FMOD
namespace FMOD {
  // Size: 0x10
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: FMOD.DSP_PARAMETER_FFT
  // [TokenAttribute] Offset: FFFFFFFF
  struct DSP_PARAMETER_FFT/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.Int32 length
    // Size: 0x4
    // Offset: 0x0
    int length;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 numchannels
    // Size: 0x4
    // Offset: 0x4
    int numchannels;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.IntPtr[] spectrum_internal
    // Size: 0x8
    // Offset: 0x8
    ::ArrayW<::System::IntPtr> spectrum_internal;
    // Field size check
    static_assert(sizeof(::ArrayW<::System::IntPtr>) == 0x8);
    public:
    // Creating value type constructor for type: DSP_PARAMETER_FFT
    constexpr DSP_PARAMETER_FFT(int length_ = {}, int numchannels_ = {}, ::ArrayW<::System::IntPtr> spectrum_internal_ = ::ArrayW<::System::IntPtr>(static_cast<void*>(nullptr))) noexcept : length{length_}, numchannels{numchannels_}, spectrum_internal{spectrum_internal_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public System.Int32 length
    [[deprecated("Use field access instead!")]] int& dyn_length();
    // Get instance field reference: public System.Int32 numchannels
    [[deprecated("Use field access instead!")]] int& dyn_numchannels();
    // Get instance field reference: private System.IntPtr[] spectrum_internal
    [[deprecated("Use field access instead!")]] ::ArrayW<::System::IntPtr>& dyn_spectrum_internal();
    // public System.Single[][] get_spectrum()
    // Offset: 0xBBD11C
    ::ArrayW<::ArrayW<float>> get_spectrum();
  }; // FMOD.DSP_PARAMETER_FFT
  #pragma pack(pop)
  static check_size<sizeof(DSP_PARAMETER_FFT), 8 + sizeof(::ArrayW<::System::IntPtr>)> __FMOD_DSP_PARAMETER_FFTSizeCheck;
  static_assert(sizeof(DSP_PARAMETER_FFT) == 0x10);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: FMOD::DSP_PARAMETER_FFT::get_spectrum
// Il2CppName: get_spectrum
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::ArrayW<float>> (FMOD::DSP_PARAMETER_FFT::*)()>(&FMOD::DSP_PARAMETER_FFT::get_spectrum)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(FMOD::DSP_PARAMETER_FFT), "get_spectrum", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};