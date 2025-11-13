// 函数: _ZN6SoLoud6Soloud22setVoicePause_internalEji
// 地址: 0x1077544
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg2 u>= 0x400)
    __assert2("..\..\ExternalCode\soloud\src\core\soloud_core_voiceops.cpp", 0x33, 
        "void SoLoud::Soloud::setVoicePause_internal(unsigned int, int)", "aVoice < 1024")
else if (zx.d(*(arg1 + 0x10)) != 0)
    *(arg1 + 0x21e50) = 1
    void* x9 = *(arg1 + (zx.q(arg2) << 3) + 0x98)
    
    if (x9 != 0)
        *(x9 + 0x124) = 0
        void* x8_4 = *(arg1 + (zx.q(arg2) << 3) + 0x98)
        int32_t entry_x2
        *(x8_4 + 0x10) = (0xfffffffb & *(x8_4 + 0x10)) | (entry_x2 != 0 ? 1 : 0) << 2
    
    return 

uint32_t x0
float v0
x0, v0 = __assert2("..\..\ExternalCode\soloud\src\core\soloud_core_voiceops.cpp", 0x34, 
    "void SoLoud::Soloud::setVoicePause_internal(unsigned int, int)", "mInsideAudioThreadMutex")
return SoLoud::Soloud::setVoicePan_internal(x0, v0) __tailcall
