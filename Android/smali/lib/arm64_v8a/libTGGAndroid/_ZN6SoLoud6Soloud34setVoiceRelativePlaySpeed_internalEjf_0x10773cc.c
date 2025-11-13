// 函数: _ZN6SoLoud6Soloud34setVoiceRelativePlaySpeed_internalEjf
// 地址: 0x10773cc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t entry_x1

if (entry_x1 u>= 0x400)
    __assert2("..\..\ExternalCode\soloud\src\core\soloud_core_voiceops.cpp", 0x21, 
        "SoLoud::result SoLoud::Soloud::setVoiceRelativePlaySpeed_internal(unsigned int, float)", 
        "aVoice < 1024")
    __assert2("..\..\ExternalCode\soloud\src\core\soloud_core_voiceops.cpp", 0x22, 
        "SoLoud::result SoLoud::Soloud::setVoiceRelativePlaySpeed_internal(unsigned int, float)", 
        "mInsideAudioThreadMutex")
else if (zx.d(*(arg1 + 0x10)) == 0)
    __assert2("..\..\ExternalCode\soloud\src\core\soloud_core_voiceops.cpp", 0x22, 
        "SoLoud::result SoLoud::Soloud::setVoiceRelativePlaySpeed_internal(unsigned int, float)", 
        "mInsideAudioThreadMutex")
else
    if (arg2 <= 0f)
        return 1
    
    void* const x8_2 = *(arg1 + (zx.q(entry_x1) << 3) + 0x98)
    
    if (x8_2 == 0)
        return zx.q(x8_2.d)
    
    *(x8_2 + 0x4c) = arg2
    
    if (zx.d(*(arg1 + 0x10)) != 0)
        void* x11_1 = *(arg1 + (zx.q(entry_x1) << 3) + 0x98)
        *(x11_1 + 0x50) = *(arg1 + zx.q(entry_x1) * 0x78 + 0x2e84) * *(x11_1 + 0x4c)
        void* x9_3 = *(arg1 + (zx.q(entry_x1) << 3) + 0x98)
        *(x9_3 + 0x44) = *(x9_3 + 0x40) * *(x9_3 + 0x50)
        return zx.q(nullptr.d)

return SoLoud::Soloud::updateVoiceRelativePlaySpeed_internal(__assert2(
    "..\..\ExternalCode\soloud\src\core\soloud_core_voiceops.cpp", 0x8f, 
    "void SoLoud::Soloud::updateVoiceRelativePlaySpeed_internal(unsigned int)", 
    "mInsideAudioThreadMutex")) __tailcall
