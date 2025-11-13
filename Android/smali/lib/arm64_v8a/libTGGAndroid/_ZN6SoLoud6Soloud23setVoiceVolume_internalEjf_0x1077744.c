// 函数: _ZN6SoLoud6Soloud23setVoiceVolume_internalEjf
// 地址: 0x1077744
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t entry_x1

if (entry_x1 u>= 0x400)
    __assert2("..\..\ExternalCode\soloud\src\core\soloud_core_voiceops.cpp", 0x6a, 
        "void SoLoud::Soloud::setVoiceVolume_internal(unsigned int, float)", "aVoice < 1024")
else if (zx.d(*(arg1 + 0x10)) != 0)
    *(arg1 + 0x21e50) = 1
    void* x8_3 = *(arg1 + (zx.q(entry_x1) << 3) + 0x98)
    
    if (x8_3 == 0)
        return 
    
    *(x8_3 + 0x38) = arg2
    return SoLoud::Soloud::updateVoiceVolume_internal(arg1) __tailcall

return SoLoud::Soloud::updateVoiceVolume_internal(__assert2(
    "..\..\ExternalCode\soloud\src\core\soloud_core_voiceops.cpp", 0x6b, 
    "void SoLoud::Soloud::setVoiceVolume_internal(unsigned int, float)", "mInsideAudioThreadMutex"))
    __tailcall
