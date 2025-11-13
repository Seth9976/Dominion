// 函数: _ZN6SoLoud6Soloud20setVoicePan_internalEjf
// 地址: 0x10775d8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t entry_x1

if (entry_x1 u>= 0x400)
    __assert2("..\..\ExternalCode\soloud\src\core\soloud_core_voiceops.cpp", 0x47, 
        "void SoLoud::Soloud::setVoicePan_internal(unsigned int, float)", "aVoice < 1024")
else if (zx.d(*(arg1 + 0x10)) != 0)
    int64_t* x19_1 = arg1 + (zx.q(entry_x1) << 3) + 0x98
    void* x8_2 = *x19_1
    
    if (x8_2 != 0)
        *(x8_2 + 0x14) = arg2
        double cosx
        double sinx
        sincos(&sinx, &cosx, 
            (((fconvert.d(arg2 + fconvert.s(1f))).d.q f* 3.1415926535897931).d.q
                f* fconvert.d(0.25)).d.q)
        double sinx_1 = sinx
        double v0
        v0.d = fconvert.s(cosx)
        *(*x19_1 + 0x18) = v0.d
        sinx_1.d = fconvert.s(sinx_1)
        *(*x19_1 + 0x1c) = sinx_1.d
        void* x8_5 = *x19_1
        int32_t x9_1 = *(x8_5 + 0x48)
        
        if (x9_1 != 4)
            if (x9_1 == 6)
                goto label_10776d0
            
            goto label_1077660
        
        *(x8_5 + 0x20) = v0.d
        *(*x19_1 + 0x24) = sinx_1.d
        x8_5 = *x19_1
        x9_1 = *(x8_5 + 0x48)
        
        if (x9_1 != 6)
        label_1077660:
            
            if (x9_1 == 8)
            label_1077670:
                *(x8_5 + 0x20) = 0x3f3504f3
                *(*x19_1 + 0x24) = 0x3f800000
                *(*x19_1 + 0x28) = v0.d
                *(*x19_1 + 0x2c) = sinx_1.d
                *(*x19_1 + 0x30) = v0.d
                *(*x19_1 + 0x34) = sinx_1.d
        else
        label_10776d0:
            *(x8_5 + 0x20) = 0x3f3504f3
            *(*x19_1 + 0x24) = 0x3f800000
            *(*x19_1 + 0x28) = v0.d
            *(*x19_1 + 0x2c) = sinx_1.d
            x8_5 = *x19_1
            
            if (*(x8_5 + 0x48) == 8)
                goto label_1077670
    
    return 

uint32_t x0_1
float v0_1
x0_1, v0_1 = __assert2("..\..\ExternalCode\soloud\src\core\soloud_core_voiceops.cpp", 0x48, 
    "void SoLoud::Soloud::setVoicePan_internal(unsigned int, float)", "mInsideAudioThreadMutex")
return SoLoud::Soloud::setVoiceVolume_internal(x0_1, v0_1) __tailcall
