// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: FMOD
namespace FMOD {
  // Forward declaring type: DSP_TYPE
  struct DSP_TYPE;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::FMOD::DSP_TYPE, "FMOD", "DSP_TYPE");
// Type namespace: FMOD
namespace FMOD {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: FMOD.DSP_TYPE
  // [TokenAttribute] Offset: FFFFFFFF
  struct DSP_TYPE/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: DSP_TYPE
    constexpr DSP_TYPE(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public FMOD.DSP_TYPE UNKNOWN
    static constexpr const int UNKNOWN = 0;
    // Get static field: static public FMOD.DSP_TYPE UNKNOWN
    static ::FMOD::DSP_TYPE _get_UNKNOWN();
    // Set static field: static public FMOD.DSP_TYPE UNKNOWN
    static void _set_UNKNOWN(::FMOD::DSP_TYPE value);
    // static field const value: static public FMOD.DSP_TYPE MIXER
    static constexpr const int MIXER = 1;
    // Get static field: static public FMOD.DSP_TYPE MIXER
    static ::FMOD::DSP_TYPE _get_MIXER();
    // Set static field: static public FMOD.DSP_TYPE MIXER
    static void _set_MIXER(::FMOD::DSP_TYPE value);
    // static field const value: static public FMOD.DSP_TYPE OSCILLATOR
    static constexpr const int OSCILLATOR = 2;
    // Get static field: static public FMOD.DSP_TYPE OSCILLATOR
    static ::FMOD::DSP_TYPE _get_OSCILLATOR();
    // Set static field: static public FMOD.DSP_TYPE OSCILLATOR
    static void _set_OSCILLATOR(::FMOD::DSP_TYPE value);
    // static field const value: static public FMOD.DSP_TYPE LOWPASS
    static constexpr const int LOWPASS = 3;
    // Get static field: static public FMOD.DSP_TYPE LOWPASS
    static ::FMOD::DSP_TYPE _get_LOWPASS();
    // Set static field: static public FMOD.DSP_TYPE LOWPASS
    static void _set_LOWPASS(::FMOD::DSP_TYPE value);
    // static field const value: static public FMOD.DSP_TYPE ITLOWPASS
    static constexpr const int ITLOWPASS = 4;
    // Get static field: static public FMOD.DSP_TYPE ITLOWPASS
    static ::FMOD::DSP_TYPE _get_ITLOWPASS();
    // Set static field: static public FMOD.DSP_TYPE ITLOWPASS
    static void _set_ITLOWPASS(::FMOD::DSP_TYPE value);
    // static field const value: static public FMOD.DSP_TYPE HIGHPASS
    static constexpr const int HIGHPASS = 5;
    // Get static field: static public FMOD.DSP_TYPE HIGHPASS
    static ::FMOD::DSP_TYPE _get_HIGHPASS();
    // Set static field: static public FMOD.DSP_TYPE HIGHPASS
    static void _set_HIGHPASS(::FMOD::DSP_TYPE value);
    // static field const value: static public FMOD.DSP_TYPE ECHO
    static constexpr const int ECHO = 6;
    // Get static field: static public FMOD.DSP_TYPE ECHO
    static ::FMOD::DSP_TYPE _get_ECHO();
    // Set static field: static public FMOD.DSP_TYPE ECHO
    static void _set_ECHO(::FMOD::DSP_TYPE value);
    // static field const value: static public FMOD.DSP_TYPE FADER
    static constexpr const int FADER = 7;
    // Get static field: static public FMOD.DSP_TYPE FADER
    static ::FMOD::DSP_TYPE _get_FADER();
    // Set static field: static public FMOD.DSP_TYPE FADER
    static void _set_FADER(::FMOD::DSP_TYPE value);
    // static field const value: static public FMOD.DSP_TYPE FLANGE
    static constexpr const int FLANGE = 8;
    // Get static field: static public FMOD.DSP_TYPE FLANGE
    static ::FMOD::DSP_TYPE _get_FLANGE();
    // Set static field: static public FMOD.DSP_TYPE FLANGE
    static void _set_FLANGE(::FMOD::DSP_TYPE value);
    // static field const value: static public FMOD.DSP_TYPE DISTORTION
    static constexpr const int DISTORTION = 9;
    // Get static field: static public FMOD.DSP_TYPE DISTORTION
    static ::FMOD::DSP_TYPE _get_DISTORTION();
    // Set static field: static public FMOD.DSP_TYPE DISTORTION
    static void _set_DISTORTION(::FMOD::DSP_TYPE value);
    // static field const value: static public FMOD.DSP_TYPE NORMALIZE
    static constexpr const int NORMALIZE = 10;
    // Get static field: static public FMOD.DSP_TYPE NORMALIZE
    static ::FMOD::DSP_TYPE _get_NORMALIZE();
    // Set static field: static public FMOD.DSP_TYPE NORMALIZE
    static void _set_NORMALIZE(::FMOD::DSP_TYPE value);
    // static field const value: static public FMOD.DSP_TYPE LIMITER
    static constexpr const int LIMITER = 11;
    // Get static field: static public FMOD.DSP_TYPE LIMITER
    static ::FMOD::DSP_TYPE _get_LIMITER();
    // Set static field: static public FMOD.DSP_TYPE LIMITER
    static void _set_LIMITER(::FMOD::DSP_TYPE value);
    // static field const value: static public FMOD.DSP_TYPE PARAMEQ
    static constexpr const int PARAMEQ = 12;
    // Get static field: static public FMOD.DSP_TYPE PARAMEQ
    static ::FMOD::DSP_TYPE _get_PARAMEQ();
    // Set static field: static public FMOD.DSP_TYPE PARAMEQ
    static void _set_PARAMEQ(::FMOD::DSP_TYPE value);
    // static field const value: static public FMOD.DSP_TYPE PITCHSHIFT
    static constexpr const int PITCHSHIFT = 13;
    // Get static field: static public FMOD.DSP_TYPE PITCHSHIFT
    static ::FMOD::DSP_TYPE _get_PITCHSHIFT();
    // Set static field: static public FMOD.DSP_TYPE PITCHSHIFT
    static void _set_PITCHSHIFT(::FMOD::DSP_TYPE value);
    // static field const value: static public FMOD.DSP_TYPE CHORUS
    static constexpr const int CHORUS = 14;
    // Get static field: static public FMOD.DSP_TYPE CHORUS
    static ::FMOD::DSP_TYPE _get_CHORUS();
    // Set static field: static public FMOD.DSP_TYPE CHORUS
    static void _set_CHORUS(::FMOD::DSP_TYPE value);
    // static field const value: static public FMOD.DSP_TYPE VSTPLUGIN
    static constexpr const int VSTPLUGIN = 15;
    // Get static field: static public FMOD.DSP_TYPE VSTPLUGIN
    static ::FMOD::DSP_TYPE _get_VSTPLUGIN();
    // Set static field: static public FMOD.DSP_TYPE VSTPLUGIN
    static void _set_VSTPLUGIN(::FMOD::DSP_TYPE value);
    // static field const value: static public FMOD.DSP_TYPE WINAMPPLUGIN
    static constexpr const int WINAMPPLUGIN = 16;
    // Get static field: static public FMOD.DSP_TYPE WINAMPPLUGIN
    static ::FMOD::DSP_TYPE _get_WINAMPPLUGIN();
    // Set static field: static public FMOD.DSP_TYPE WINAMPPLUGIN
    static void _set_WINAMPPLUGIN(::FMOD::DSP_TYPE value);
    // static field const value: static public FMOD.DSP_TYPE ITECHO
    static constexpr const int ITECHO = 17;
    // Get static field: static public FMOD.DSP_TYPE ITECHO
    static ::FMOD::DSP_TYPE _get_ITECHO();
    // Set static field: static public FMOD.DSP_TYPE ITECHO
    static void _set_ITECHO(::FMOD::DSP_TYPE value);
    // static field const value: static public FMOD.DSP_TYPE COMPRESSOR
    static constexpr const int COMPRESSOR = 18;
    // Get static field: static public FMOD.DSP_TYPE COMPRESSOR
    static ::FMOD::DSP_TYPE _get_COMPRESSOR();
    // Set static field: static public FMOD.DSP_TYPE COMPRESSOR
    static void _set_COMPRESSOR(::FMOD::DSP_TYPE value);
    // static field const value: static public FMOD.DSP_TYPE SFXREVERB
    static constexpr const int SFXREVERB = 19;
    // Get static field: static public FMOD.DSP_TYPE SFXREVERB
    static ::FMOD::DSP_TYPE _get_SFXREVERB();
    // Set static field: static public FMOD.DSP_TYPE SFXREVERB
    static void _set_SFXREVERB(::FMOD::DSP_TYPE value);
    // static field const value: static public FMOD.DSP_TYPE LOWPASS_SIMPLE
    static constexpr const int LOWPASS_SIMPLE = 20;
    // Get static field: static public FMOD.DSP_TYPE LOWPASS_SIMPLE
    static ::FMOD::DSP_TYPE _get_LOWPASS_SIMPLE();
    // Set static field: static public FMOD.DSP_TYPE LOWPASS_SIMPLE
    static void _set_LOWPASS_SIMPLE(::FMOD::DSP_TYPE value);
    // static field const value: static public FMOD.DSP_TYPE DELAY
    static constexpr const int DELAY = 21;
    // Get static field: static public FMOD.DSP_TYPE DELAY
    static ::FMOD::DSP_TYPE _get_DELAY();
    // Set static field: static public FMOD.DSP_TYPE DELAY
    static void _set_DELAY(::FMOD::DSP_TYPE value);
    // static field const value: static public FMOD.DSP_TYPE TREMOLO
    static constexpr const int TREMOLO = 22;
    // Get static field: static public FMOD.DSP_TYPE TREMOLO
    static ::FMOD::DSP_TYPE _get_TREMOLO();
    // Set static field: static public FMOD.DSP_TYPE TREMOLO
    static void _set_TREMOLO(::FMOD::DSP_TYPE value);
    // static field const value: static public FMOD.DSP_TYPE LADSPAPLUGIN
    static constexpr const int LADSPAPLUGIN = 23;
    // Get static field: static public FMOD.DSP_TYPE LADSPAPLUGIN
    static ::FMOD::DSP_TYPE _get_LADSPAPLUGIN();
    // Set static field: static public FMOD.DSP_TYPE LADSPAPLUGIN
    static void _set_LADSPAPLUGIN(::FMOD::DSP_TYPE value);
    // static field const value: static public FMOD.DSP_TYPE SEND
    static constexpr const int SEND = 24;
    // Get static field: static public FMOD.DSP_TYPE SEND
    static ::FMOD::DSP_TYPE _get_SEND();
    // Set static field: static public FMOD.DSP_TYPE SEND
    static void _set_SEND(::FMOD::DSP_TYPE value);
    // static field const value: static public FMOD.DSP_TYPE RETURN
    static constexpr const int RETURN = 25;
    // Get static field: static public FMOD.DSP_TYPE RETURN
    static ::FMOD::DSP_TYPE _get_RETURN();
    // Set static field: static public FMOD.DSP_TYPE RETURN
    static void _set_RETURN(::FMOD::DSP_TYPE value);
    // static field const value: static public FMOD.DSP_TYPE HIGHPASS_SIMPLE
    static constexpr const int HIGHPASS_SIMPLE = 26;
    // Get static field: static public FMOD.DSP_TYPE HIGHPASS_SIMPLE
    static ::FMOD::DSP_TYPE _get_HIGHPASS_SIMPLE();
    // Set static field: static public FMOD.DSP_TYPE HIGHPASS_SIMPLE
    static void _set_HIGHPASS_SIMPLE(::FMOD::DSP_TYPE value);
    // static field const value: static public FMOD.DSP_TYPE PAN
    static constexpr const int PAN = 27;
    // Get static field: static public FMOD.DSP_TYPE PAN
    static ::FMOD::DSP_TYPE _get_PAN();
    // Set static field: static public FMOD.DSP_TYPE PAN
    static void _set_PAN(::FMOD::DSP_TYPE value);
    // static field const value: static public FMOD.DSP_TYPE THREE_EQ
    static constexpr const int THREE_EQ = 28;
    // Get static field: static public FMOD.DSP_TYPE THREE_EQ
    static ::FMOD::DSP_TYPE _get_THREE_EQ();
    // Set static field: static public FMOD.DSP_TYPE THREE_EQ
    static void _set_THREE_EQ(::FMOD::DSP_TYPE value);
    // static field const value: static public FMOD.DSP_TYPE FFT
    static constexpr const int FFT = 29;
    // Get static field: static public FMOD.DSP_TYPE FFT
    static ::FMOD::DSP_TYPE _get_FFT();
    // Set static field: static public FMOD.DSP_TYPE FFT
    static void _set_FFT(::FMOD::DSP_TYPE value);
    // static field const value: static public FMOD.DSP_TYPE LOUDNESS_METER
    static constexpr const int LOUDNESS_METER = 30;
    // Get static field: static public FMOD.DSP_TYPE LOUDNESS_METER
    static ::FMOD::DSP_TYPE _get_LOUDNESS_METER();
    // Set static field: static public FMOD.DSP_TYPE LOUDNESS_METER
    static void _set_LOUDNESS_METER(::FMOD::DSP_TYPE value);
    // static field const value: static public FMOD.DSP_TYPE ENVELOPEFOLLOWER
    static constexpr const int ENVELOPEFOLLOWER = 31;
    // Get static field: static public FMOD.DSP_TYPE ENVELOPEFOLLOWER
    static ::FMOD::DSP_TYPE _get_ENVELOPEFOLLOWER();
    // Set static field: static public FMOD.DSP_TYPE ENVELOPEFOLLOWER
    static void _set_ENVELOPEFOLLOWER(::FMOD::DSP_TYPE value);
    // static field const value: static public FMOD.DSP_TYPE CONVOLUTIONREVERB
    static constexpr const int CONVOLUTIONREVERB = 32;
    // Get static field: static public FMOD.DSP_TYPE CONVOLUTIONREVERB
    static ::FMOD::DSP_TYPE _get_CONVOLUTIONREVERB();
    // Set static field: static public FMOD.DSP_TYPE CONVOLUTIONREVERB
    static void _set_CONVOLUTIONREVERB(::FMOD::DSP_TYPE value);
    // static field const value: static public FMOD.DSP_TYPE CHANNELMIX
    static constexpr const int CHANNELMIX = 33;
    // Get static field: static public FMOD.DSP_TYPE CHANNELMIX
    static ::FMOD::DSP_TYPE _get_CHANNELMIX();
    // Set static field: static public FMOD.DSP_TYPE CHANNELMIX
    static void _set_CHANNELMIX(::FMOD::DSP_TYPE value);
    // static field const value: static public FMOD.DSP_TYPE TRANSCEIVER
    static constexpr const int TRANSCEIVER = 34;
    // Get static field: static public FMOD.DSP_TYPE TRANSCEIVER
    static ::FMOD::DSP_TYPE _get_TRANSCEIVER();
    // Set static field: static public FMOD.DSP_TYPE TRANSCEIVER
    static void _set_TRANSCEIVER(::FMOD::DSP_TYPE value);
    // static field const value: static public FMOD.DSP_TYPE OBJECTPAN
    static constexpr const int OBJECTPAN = 35;
    // Get static field: static public FMOD.DSP_TYPE OBJECTPAN
    static ::FMOD::DSP_TYPE _get_OBJECTPAN();
    // Set static field: static public FMOD.DSP_TYPE OBJECTPAN
    static void _set_OBJECTPAN(::FMOD::DSP_TYPE value);
    // static field const value: static public FMOD.DSP_TYPE MULTIBAND_EQ
    static constexpr const int MULTIBAND_EQ = 36;
    // Get static field: static public FMOD.DSP_TYPE MULTIBAND_EQ
    static ::FMOD::DSP_TYPE _get_MULTIBAND_EQ();
    // Set static field: static public FMOD.DSP_TYPE MULTIBAND_EQ
    static void _set_MULTIBAND_EQ(::FMOD::DSP_TYPE value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // FMOD.DSP_TYPE
  #pragma pack(pop)
  static check_size<sizeof(DSP_TYPE), 0 + sizeof(int)> __FMOD_DSP_TYPESizeCheck;
  static_assert(sizeof(DSP_TYPE) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
