// 函数: _Z15SoundPlayParamsP11SoundParams
// 地址: 0xfa66b8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v9
int64_t var_40 = v9
int64_t v8
int64_t var_38 = v8
int64_t v0 = GameGetTimeUI()

if (*arg1 != 0)
    int64_t* x20_1 = *(arg1 + 0x18)
    v8 = v0
    int64_t* x8_1 = *x20_1
    void* x8_2
    
    if (x8_1 == 0)
        if (x20_1[1].d == 0x15)
            XString::GetString()
            XTrace("Unpreloaded sound %s")
        
        AssetCatalogLoadAsset(x20_1, false, true)
        x8_2 = **x20_1
        v0.d = *(x8_2 + 4)
        
        if (not(v0.d f== 0f))
            goto label_fa674c
    else
        x8_2 = *x8_1
        v0.d = *(x8_2 + 4)
        
        if (not(v0.d f== 0f))
        label_fa674c:
            int64_t x11_1 = *(arg1 + 0x18)
            void* i_2 = nullptr
            int32_t x15_1 = 0
            int64_t* x9_1 = *gpSoundGlobals
            uint64_t x10_1 = zx.q(x9_1[1].d)
            void* i_1
            void* x13_1
            
            while (true)
                if (i_2 == 0)
                    i_1 = *x9_1
                    i_2 = i_1
                    x13_1 = i_1 + (x10_1 << 7)
                    
                    if (i_2 u>= x13_1)
                        break
                else
                    i_1 = *x9_1
                    i_2 += 0x80
                    x13_1 = i_1 + (x10_1 << 7)
                    
                    if (i_2 u>= x13_1)
                        break
                
                while (true)
                    if (zx.d(*(i_2 + 0x7a)) != 0)
                        if (*(i_2 + 8) != x11_1)
                            break
                        
                        x15_1 += zx.d(*(i_2 + 0x72))
                        break
                    
                    i_2 += 0x80
                    
                    if (i_2 u>= x13_1)
                        goto label_fa67c0
            
        label_fa67c0:
            int32_t x14_1 = *(x8_2 + 8)
            
            if (x14_1 s< 1 || x15_1 s< x14_1)
                if (x10_1.d != 0)
                    void* i = i_1
                    void* i_3 = i_1
                    
                    do
                        if (zx.d(*(i + 0x7a)) == 0)
                            void* x14_2 = i + 0x80
                            
                            while (x14_2 u< x13_1)
                                uint32_t x15_2 = zx.d(*(x14_2 + 0x7a))
                                x14_2 += 0x80
                                
                                if (x15_2 != 0)
                                    i = x14_2 - 0x80
                                    i_3 = i_1
                                    goto label_fa6848
                            
                            break
                        
                    label_fa6848:
                        
                        if ((*i == *arg1 || *(i + 8) == x11_1) && zx.d(*(i + 0x72)) != 0)
                            v0.d = *(x8_2 + 0xc)
                            
                            if (not(v0.d f<= 0f) && not(v8.d f- *(i + 0x20) f>= v0.d))
                                return 0
                        
                        if (i == 0)
                            i_3 = i_1
                        
                        if (i == 0)
                            i = i_1
                        else
                            i += 0x80
                    while (i u< i_3 + (x10_1 << 7))
                
                if (*(x9_1 + 0x14) == *(x9_1 + 0xc))
                    *arg1
                    XString::operator char const*()
                    XTrace("Too many sounds, not playing %s")
                    return 0
                
                uint64_t x11_3 = zx.q(x9_1[2].d)
                int32_t x13_3
                
                if (x11_3.d != x10_1.d)
                    x13_3 = *(i_1 + (x11_3 << 7) + 0x78)
                    x10_1 = x11_3
                else
                    x13_3 = x10_1.d + 1
                    x9_1[1].d = x13_3
                
                void* x20_2 = i_1 + (x10_1 << 7)
                x9_1[2].d = x13_3
                __builtin_memset(x20_2, 0, 0x78)
                *(x20_2 + 0x78) = x11_3.d | x9_1[3].d << 0x10
                int32_t x10_5 = x9_1[3].d
                int32_t x10_6
                
                if (x10_5 == 0xffff)
                    x10_6 = 1
                else
                    x10_6 = x10_5 + 1
                
                *(x9_1 + 0x14) += 1
                x9_1[3].d = x10_6
                *x20_2 = *arg1
                *(x20_2 + 8) = *(arg1 + 0x18)
                v0.d = *(arg1 + 8)
                *(x20_2 + 0x50) = v0.d
                v0.d = *(arg1 + 0xc)
                *(x20_2 + 0x54) = v0.d
                *(x20_2 + 0x73) = *(arg1 + 0x21)
                *(x20_2 + 0x74) = *(arg1 + 0x22)
                *(x20_2 + 0x70) = *(arg1 + 0x20)
                int32_t x8_6 = *(x8_2 + 0x10)
                *(x20_2 + 0x4c) = 0x3f800000
                *(x20_2 + 0x30) = x8_6
                *(x20_2 + 0x75) = *(arg1 + 0x23)
                float v0_1
                float y
                float x
                v0_1, y, x = SoundCalcVolume(x20_2)
                *(x20_2 + 0x58) = v0_1
                *(x20_2 + 0x60) = 0x3f000000
                v9.d = *(arg1 + 8)
                float v0_2 = powf(float.s(0x3f879c7d), v9.d, y, x)
                
                if (not(v9.d f!= 0f))
                    v0_2 = fconvert.s(1f)
                
                *(x20_2 + 0x5c) = v0_2
                int64_t* x0_6 = *gSoundInterface
                uint64_t result
                
                if (((*(*x0_6 + 0x28))(x0_6, x20_2, arg1) & 1) == 0)
                    void* x8_10 = *gpSoundGlobals
                    result = 0
                    int32_t x10_7 = *(x8_10 + 0x10)
                    *(x8_10 + 0x10) = zx.d(*(x20_2 + 0x78))
                    *(x20_2 + 0x78) = x10_7
                    *(x8_10 + 0x14) -= 1
                else
                    result = zx.q(*(x20_2 + 0x78))
                    *(x20_2 + 0x20) = v8.d
                    *(x20_2 + 0x72) = 1
                
                return result

return 0
