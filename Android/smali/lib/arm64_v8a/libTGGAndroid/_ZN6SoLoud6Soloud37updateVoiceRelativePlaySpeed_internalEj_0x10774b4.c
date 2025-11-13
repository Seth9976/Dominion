// 函数: _ZN6SoLoud6Soloud37updateVoiceRelativePlaySpeed_internalEj
// 地址: 0x10774b4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t entry_x1

if (entry_x1 u>= 0x400)
    __assert2("..\..\ExternalCode\soloud\src\core\soloud_core_voiceops.cpp", 0x8e, 
        "void SoLoud::Soloud::updateVoiceRelativePlaySpeed_internal(unsigned int)", "aVoice < 1024")
else if (zx.d(*(arg1 + 0x10)) != 0)
    uint64_t x8_2 = arg1 + (zx.q(entry_x1) << 3)
    void* x9 = *(x8_2 + 0x98)
    *(x9 + 0x50) = *(arg1 + mulu.dp.d(entry_x1, 0x78) + 0x2e84) * *(x9 + 0x4c)
    void* x8_3 = *(x8_2 + 0x98)
    *(x8_3 + 0x44) = *(x8_3 + 0x40) * *(x8_3 + 0x50)
    return 

uint32_t x0
int32_t x1
x0, x1 = __assert2("..\..\ExternalCode\soloud\src\core\soloud_core_voiceops.cpp", 0x8f, 
    "void SoLoud::Soloud::updateVoiceRelativePlaySpeed_internal(unsigned int)", 
    "mInsideAudioThreadMutex")
return SoLoud::Soloud::setVoicePause_internal(x0, x1) __tailcall
