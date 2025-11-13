// 函数: _ZN6SoLoud6Soloud18stopVoice_internalEj
// 地址: 0x10778ec
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t entry_x1

if (entry_x1 u>= 0x400)
    __assert2("..\..\ExternalCode\soloud\src\core\soloud_core_voiceops.cpp", 0x76, 
        "void SoLoud::Soloud::stopVoice_internal(unsigned int)", "aVoice < 1024")
else if (zx.d(*(arg1 + 0x10)) != 0)
    *(arg1 + 0x21e50) = 1
    int64_t* x8_2 = *(arg1 + (zx.q(entry_x1) << 3) + 0x98)
    
    if (x8_2 == 0)
        return 
    
    *(arg1 + (zx.q(entry_x1) << 3) + 0x98) = 0
    int32_t x9_2 = *(arg1 + 0x30)
    
    if (x9_2 != 0)
        int64_t i = 0
        
        do
            int64_t x11_1 = *(arg1 + 0x90)
            
            if (*(x11_1 + (i << 3)) == x8_2)
                *(x11_1 + (i << 3)) = 0
                x9_2 = *(arg1 + 0x30)
            
            i += 1
        while (i u< zx.q(x9_2))
    
    jump(*(*x8_2 + 8))

__assert2("..\..\ExternalCode\soloud\src\core\soloud_core_voiceops.cpp", 0x77, 
    "void SoLoud::Soloud::stopVoice_internal(unsigned int)", "mInsideAudioThreadMutex")
return SoLoud::Soloud::getVersion() __tailcall
