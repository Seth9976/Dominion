// 函数: _ZN6SoLoud6Soloud12mix_internalEjj
// 地址: 0x107212c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

double v1
v1.d = *(arg1 + 0x209c)
int64_t v8
v8.d = *(arg1 + 0x20b8)
double v0
v0.d = float.s(arg2)
int32_t x8 = *(arg1 + 0x20f4)
v1.d = float.s(v1.d)
v0.d = v0.d f/ v1.d
double v10 = fconvert.d(v0.d)
float* x19 = arg1
v0 = *(arg1 + 0x20f8) + v10
float v9 = v8.d
*(arg1 + 0x20f8) = v0
*(arg1 + 0x2100) = 0

if (x8 != 0)
    v0 = SoLoud::Fader::get(v0)
    v9 = v0.d
    x19[0x82e] = v0.d

void* x0_1 = *(x19 + 8)

if (x0_1 != 0)
    SoLoud::Thread::lockMutex(x0_1)

if (zx.d(x19[4].b) != 0)
    __assert2("..\..\ExternalCode\soloud\src\core\soloud.cpp", 0x902, 
        "void SoLoud::Soloud::lockAudioMutex_internal()", "!mInsideAudioThreadMutex")
else
    x19[4].b = 1
    
    if (x19[0xd] s>= 1)
        int64_t i = 0
        
        do
            void* x25_1 = &x19[i * 2]
            void* x8_4 = *(x25_1 + 0x98)
            
            if (x8_4 != 0 && (zx.d(*(x8_4 + 0x10)) & 4) == 0)
                *(x8_4 + 0x158) = 0
                
                if (x19[0x83d] s>= 1)
                    *(*(x25_1 + 0x98) + 0x158) = 1
                
                void* x8_7 = *(x25_1 + 0x98)
                *(x8_7 + 0x58) = *(x8_7 + 0x58) + v10
                void* x8_8 = *(x25_1 + 0x98)
                v0.d = *(x8_8 + 0x50)
                *(x8_8 + 0x60) = *(x8_8 + 0x60) + v10 * fconvert.d(v0.d)
                void* x8_9 = *(x25_1 + 0x98)
                
                if (*(x8_9 + 0xf4) s>= 1)
                    SoLoud::Soloud::setVoiceRelativePlaySpeed_internal(x19.d, 
                        SoLoud::Fader::get(*(x8_9 + 0x58)))
                    x8_9 = *(x25_1 + 0x98)
                
                if (*(x8_9 + 0xc4) s>= 1)
                    *(*(x25_1 + 0x98) + 0x38) = SoLoud::Fader::get(*(x8_9 + 0x58))
                    *(*(x25_1 + 0x98) + 0x158) = 1
                    SoLoud::Soloud::updateVoiceVolume_internal(x19.d)
                    x19[0x8794].b = 1
                    x8_9 = *(x25_1 + 0x98)
                
                if (*(x8_9 + 0x94) s>= 1)
                    SoLoud::Soloud::setVoicePan_internal(x19.d, SoLoud::Fader::get(*(x8_9 + 0x58)))
                    *(*(x25_1 + 0x98) + 0x158) = 1
                    x8_9 = *(x25_1 + 0x98)
                
                if (*(x8_9 + 0x124) == 0)
                label_10722fc:
                    
                    if (*(x8_9 + 0x154) != 0)
                    label_1072308:
                        SoLoud::Fader::get(*(x8_9 + 0x58))
                        void* x8_13 = *(x25_1 + 0x98)
                        
                        if (*(x8_13 + 0x154) == 0xffffffff)
                            *(x8_13 + 0x154) = 0
                            SoLoud::Soloud::stopVoice_internal(x19.d)
                else
                    SoLoud::Fader::get(*(x8_9 + 0x58))
                    x8_9 = *(x25_1 + 0x98)
                    
                    if (*(x8_9 + 0x124) != 0xffffffff)
                        goto label_10722fc
                    
                    *(x8_9 + 0x124) = 0
                    SoLoud::Soloud::setVoicePause_internal(x19.d, i.d)
                    x8_9 = *(x25_1 + 0x98)
                    
                    if (*(x8_9 + 0x154) != 0)
                        goto label_1072308
            
            i += 1
        while (i s< sx.q(x19[0xd]))
    
    if (zx.d(x19[0x8794].b) != 0)
        SoLoud::Soloud::calcActiveVoices_internal()
    
    v0.d = x19[0x827]
    x19[0x826]
    v0.d = float.s(v0.d)
    int32_t entry_x2
    SoLoud::Soloud::mixBus_internal(x19, (*(x19 + 0x58)).d, arg2, zx.q(entry_x2), 
        (*(x19 + 0x38)).d, 0, x19[0x828], v0.d)
    int64_t* x0_14 = *(x19 + 0x2148)
    int128_t v1_1
    
    if (x0_14 != 0)
        v1_1.q = *(x19 + 0x20f8)
        (*(*x0_14 + 0x10))(x0_14, *(x19 + 0x58), zx.q(arg2), zx.q(entry_x2), zx.q(x19[0x828]), 
            float.s(x19[0x827]), v1_1)
    
    int64_t* x0_15 = *(x19 + 0x2150)
    
    if (x0_15 != 0)
        v1_1.q = *(x19 + 0x20f8)
        (*(*x0_15 + 0x10))(x0_15, *(x19 + 0x58), zx.q(arg2), zx.q(entry_x2), zx.q(x19[0x828]), 
            float.s(x19[0x827]), v1_1)
    
    int64_t* x0_16 = *(x19 + 0x2158)
    
    if (x0_16 != 0)
        v1_1.q = *(x19 + 0x20f8)
        (*(*x0_16 + 0x10))(x0_16, *(x19 + 0x58), zx.q(arg2), zx.q(entry_x2), zx.q(x19[0x828]), 
            float.s(x19[0x827]), v1_1)
    
    int64_t* x0_17 = *(x19 + 0x2160)
    
    if (x0_17 != 0)
        v1_1.q = *(x19 + 0x20f8)
        (*(*x0_17 + 0x10))(x0_17, *(x19 + 0x58), zx.q(arg2), zx.q(entry_x2), zx.q(x19[0x828]), 
            float.s(x19[0x827]), v1_1)
    
    int64_t* x0_18 = *(x19 + 0x2168)
    
    if (x0_18 != 0)
        v1_1.q = *(x19 + 0x20f8)
        (*(*x0_18 + 0x10))(x0_18, *(x19 + 0x58), zx.q(arg2), zx.q(entry_x2), zx.q(x19[0x828]), 
            float.s(x19[0x827]), v1_1)
    
    int64_t* x0_19 = *(x19 + 0x2170)
    
    if (x0_19 != 0)
        v1_1.q = *(x19 + 0x20f8)
        (*(*x0_19 + 0x10))(x0_19, *(x19 + 0x58), zx.q(arg2), zx.q(entry_x2), zx.q(x19[0x828]), 
            float.s(x19[0x827]), v1_1)
    
    int64_t* x0_20 = *(x19 + 0x2178)
    
    if (x0_20 != 0)
        v1_1.q = *(x19 + 0x20f8)
        (*(*x0_20 + 0x10))(x0_20, *(x19 + 0x58), zx.q(arg2), zx.q(entry_x2), zx.q(x19[0x828]), 
            float.s(x19[0x827]), v1_1)
    
    int64_t* x0_21 = *(x19 + 0x2180)
    
    if (x0_21 != 0)
        v1_1.q = *(x19 + 0x20f8)
        (*(*x0_21 + 0x10))(x0_21, *(x19 + 0x58), zx.q(arg2), zx.q(entry_x2), zx.q(x19[0x828]), 
            float.s(x19[0x827]), v1_1)
    
    if (zx.d(x19[4].b) != 0)
        void* x0_22 = *(x19 + 8)
        x19[4].b = 0
        
        if (x0_22 != 0)
            SoLoud::Thread::unlockMutex(x0_22)
        
        uint64_t result = SoLoud::Soloud::clip_internal(x19, &x19[0x16], (&x19[0xe]).d, v8.d, v9)
        
        if ((zx.d(x19[0x82d].b) & 2) != 0)
            __builtin_memset(&x19[0x862], 0, 0x20)
            uint64_t j_4 = zx.q(x19[0x828])
            float v0_6
            float v1_3
            float v2_1
            
            if (arg2 u<= 0xff)
                if (j_4.d s<= 0)
                    return memset(&x19[0x86a], 0, 0x400)
                
                int64_t x10_2 = *(x19 + 0x38)
                
                for (int64_t i_1 = 0; i_1 != 0x100; i_1 += 1)
                    void* x15_2 = &x19[i_1]
                    int64_t x13_2 = 0
                    *(x15_2 + 0x21a8) = 0
                    v0_6 = 0f
                    uint64_t j_3 = j_4
                    void* x17_1 = &x19[0x862]
                    uint64_t j
                    
                    do
                        result = zx.q(i_1.d u% arg2 + x13_2.d * entry_x2)
                        v1_3 = *(x10_2 + (zx.q(result.d) << 2))
                        v2_1 = fabs(v1_3)
                        
                        if (not(*x17_1 f>= v2_1))
                            *x17_1 = v2_1
                            v0_6 = *(x15_2 + 0x21a8)
                        
                        v0_6 = v1_3 + v0_6
                        x13_2 += 1
                        j = j_3
                        j_3 -= 1
                        x17_1 += 4
                        *(x15_2 + 0x21a8) = v0_6
                    while (j != 1)
            else
                if (j_4.d s<= 0)
                    return memset(&x19[0x86a], 0, 0x400)
                
                int64_t x10_1 = *(x19 + 0x38)
                
                for (int64_t i_2 = 0; i_2 != 0x100; i_2 += 1)
                    void* x14_1 = &x19[i_2]
                    *(x14_1 + 0x21a8) = 0
                    v0_6 = 0f
                    uint64_t j_2 = j_4
                    int32_t x15_1 = i_2.d
                    void* x16_1 = &x19[0x862]
                    uint64_t j_1
                    
                    do
                        v1_3 = *(x10_1 + (zx.q(x15_1) << 2))
                        v2_1 = fabs(v1_3)
                        
                        if (not(*x16_1 f>= v2_1))
                            *x16_1 = v2_1
                            v0_6 = *(x14_1 + 0x21a8)
                        
                        v0_6 = v1_3 + v0_6
                        x16_1 += 4
                        j_1 = j_2
                        j_2 -= 1
                        x15_1 += entry_x2
                        *(x14_1 + 0x21a8) = v0_6
                    while (j_1 != 1)
        
        return result

float* x0_25
uint32_t x1_15
x0_25, x1_15 = __assert2("..\..\ExternalCode\soloud\src\core\soloud.cpp", 0x908, 
    "void SoLoud::Soloud::unlockAudioMutex_internal()", "mInsideAudioThreadMutex")
return SoLoud::Soloud::mix(x0_25, x1_15) __tailcall
