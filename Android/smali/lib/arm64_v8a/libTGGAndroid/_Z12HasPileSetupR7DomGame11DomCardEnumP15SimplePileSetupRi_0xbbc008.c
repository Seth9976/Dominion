// 函数: _Z12HasPileSetupR7DomGame11DomCardEnumP15SimplePileSetupRi
// 地址: 0xbbc008
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x22 = *(arg1 + 0xd50)
int32_t x8_4 = (arg2 + (x22 << 0x10)) s% 0x3e5
int32_t* x9_1 = *(&data_1838a20 + (sx.q(x8_4) << 3))
int32_t x21 = arg2
void* x0_3
int32_t x8_6

if (x9_1 != 0)
    while (*x9_1 != x21 || x9_1[1] != x22)
        x9_1 = *(x9_1 + 0x10)
        
        if (x9_1 == 0)
            goto label_bbc06c
    
    x0_3 = *(x9_1 + 8)
    *arg4 = 0
    x8_6 = *(x0_3 + 0xe0)
    
    if (x8_6 != 0)
        goto label_bbc0e4
else
label_bbc06c:
    DomDefGetSlow(zx.q(x21), zx.q(x22))
    int32_t* x0_1 = malloc(0x18)
    int64_t x8_5 = sx.q(x8_4) << 3
    int64_t x9_2 = *(&data_1838a20 + x8_5)
    *x0_1 = x21
    x0_1[1] = x22
    *(&data_1838a20 + x8_5) = x0_1
    *(x0_1 + 0x10) = x9_2
    int128_t v0
    int128_t v1
    int128_t v2
    int128_t v3
    x0_3, v0, v1, v2, v3 = DomDefGetSlow(zx.q(x21), zx.q(x22))
    *(x0_1 + 8) = x0_3
    *arg4 = 0
    x8_6 = *(x0_3 + 0xe0)
    
    if (x8_6 != 0)
    label_bbc0e4:
        
        if (x8_6 == 0xb)
            *arg4 = 1
            *arg3 = *(x0_3 + 0xf8)
            v0 = *(x0_3 + 0x108)
            v2 = *(x0_3 + 0x138)
            v3 = *(x0_3 + 0x118)
            *(arg3 + 0x30) = *(x0_3 + 0x128)
            *(arg3 + 0x40) = v2
            *(arg3 + 0x10) = v0
            *(arg3 + 0x20) = v3
            v1 = *(x0_3 + 0x168)
            int64_t x8_11 = *(x0_3 + 0x178)
            v2 = *(x0_3 + 0x148)
            *(arg3 + 0x60) = *(x0_3 + 0x158)
            *(arg3 + 0x70) = v1
            *(arg3 + 0x80) = x8_11
            *(arg3 + 0x50) = v2
        
        int32_t x8_12 = *(x0_3 + 0x1a0)
        int32_t x8_13
        
        if (x8_12 == 0xb)
            int64_t x8_14 = sx.q(*arg4)
            *arg4 = x8_14.d + 1
            int128_t* x8_15 = arg3 + x8_14 * 0x88
            *x8_15 = *(x0_3 + 0x1b8)
            v0 = *(x0_3 + 0x1c8)
            v2 = *(x0_3 + 0x1f8)
            v3 = *(x0_3 + 0x1d8)
            x8_15[3] = *(x0_3 + 0x1e8)
            x8_15[4] = v2
            x8_15[1] = v0
            x8_15[2] = v3
            v1 = *(x0_3 + 0x228)
            int64_t x9_11 = *(x0_3 + 0x238)
            v2 = *(x0_3 + 0x208)
            x8_15[6] = *(x0_3 + 0x218)
            x8_15[7] = v1
            x8_15[8].q = x9_11
            x8_15[5] = v2
            x8_13 = *(x0_3 + 0x260)
            
            if (x8_13 != 0)
            label_bbc1e0:
                
                if (x8_13 == 0xb)
                    int64_t x8_16 = sx.q(*arg4)
                    *arg4 = x8_16.d + 1
                    int128_t* x8_17 = arg3 + x8_16 * 0x88
                    *x8_17 = *(x0_3 + 0x278)
                    v0 = *(x0_3 + 0x288)
                    v2 = *(x0_3 + 0x2b8)
                    v3 = *(x0_3 + 0x298)
                    x8_17[3] = *(x0_3 + 0x2a8)
                    x8_17[4] = v2
                    x8_17[1] = v0
                    x8_17[2] = v3
                    v1 = *(x0_3 + 0x2e8)
                    int64_t x9_17 = *(x0_3 + 0x2f8)
                    v2 = *(x0_3 + 0x2c8)
                    x8_17[6] = *(x0_3 + 0x2d8)
                    x8_17[7] = v1
                    x8_17[8].q = x9_17
                    x8_17[5] = v2
                
                int32_t x8_18 = *(x0_3 + 0x320)
                
                if (x8_18 != 0)
                    if (x8_18 == 0xb)
                        int64_t x8_19 = sx.q(*arg4)
                        *arg4 = x8_19.d + 1
                        int128_t* x8_20 = arg3 + x8_19 * 0x88
                        *x8_20 = *(x0_3 + 0x338)
                        v0 = *(x0_3 + 0x348)
                        v2 = *(x0_3 + 0x378)
                        v3 = *(x0_3 + 0x358)
                        x8_20[3] = *(x0_3 + 0x368)
                        x8_20[4] = v2
                        x8_20[1] = v0
                        x8_20[2] = v3
                        v1 = *(x0_3 + 0x3a8)
                        int64_t x9_23 = *(x0_3 + 0x3b8)
                        v2 = *(x0_3 + 0x388)
                        x8_20[6] = *(x0_3 + 0x398)
                        x8_20[7] = v1
                        x8_20[8].q = x9_23
                        x8_20[5] = v2
                    
                    int32_t x8_21 = *(x0_3 + 0x3e0)
                    
                    if (x8_21 != 0)
                        if (x8_21 == 0xb)
                            int64_t x8_22 = sx.q(*arg4)
                            *arg4 = x8_22.d + 1
                            int128_t* x8_23 = arg3 + x8_22 * 0x88
                            *x8_23 = *(x0_3 + 0x3f8)
                            v0 = *(x0_3 + 0x408)
                            v2 = *(x0_3 + 0x438)
                            v3 = *(x0_3 + 0x418)
                            x8_23[3] = *(x0_3 + 0x428)
                            x8_23[4] = v2
                            x8_23[1] = v0
                            x8_23[2] = v3
                            v1 = *(x0_3 + 0x468)
                            int64_t x9_29 = *(x0_3 + 0x478)
                            v2 = *(x0_3 + 0x448)
                            x8_23[6] = *(x0_3 + 0x458)
                            x8_23[7] = v1
                            x8_23[8].q = x9_29
                            x8_23[5] = v2
                        
                        int32_t x8_24 = *(x0_3 + 0x4a0)
                        
                        if (x8_24 != 0)
                            if (x8_24 == 0xb)
                                int64_t x8_25 = sx.q(*arg4)
                                *arg4 = x8_25.d + 1
                                int128_t* x8_26 = arg3 + x8_25 * 0x88
                                *x8_26 = *(x0_3 + 0x4b8)
                                v0 = *(x0_3 + 0x4c8)
                                v2 = *(x0_3 + 0x4f8)
                                v3 = *(x0_3 + 0x4d8)
                                x8_26[3] = *(x0_3 + 0x4e8)
                                x8_26[4] = v2
                                x8_26[1] = v0
                                x8_26[2] = v3
                                v1 = *(x0_3 + 0x528)
                                int64_t x9_35 = *(x0_3 + 0x538)
                                v2 = *(x0_3 + 0x508)
                                x8_26[6] = *(x0_3 + 0x518)
                                x8_26[7] = v1
                                x8_26[8].q = x9_35
                                x8_26[5] = v2
                            
                            int32_t x8_27 = *(x0_3 + 0x560)
                            
                            if (x8_27 != 0)
                                if (x8_27 == 0xb)
                                    int64_t x8_28 = sx.q(*arg4)
                                    *arg4 = x8_28.d + 1
                                    int128_t* x8_29 = arg3 + x8_28 * 0x88
                                    *x8_29 = *(x0_3 + 0x578)
                                    v0 = *(x0_3 + 0x588)
                                    v2 = *(x0_3 + 0x5b8)
                                    v3 = *(x0_3 + 0x598)
                                    x8_29[3] = *(x0_3 + 0x5a8)
                                    x8_29[4] = v2
                                    x8_29[1] = v0
                                    x8_29[2] = v3
                                    v1 = *(x0_3 + 0x5e8)
                                    int64_t x9_41 = *(x0_3 + 0x5f8)
                                    v2 = *(x0_3 + 0x5c8)
                                    x8_29[6] = *(x0_3 + 0x5d8)
                                    x8_29[7] = v1
                                    x8_29[8].q = x9_41
                                    x8_29[5] = v2
                                
                                if (*(x0_3 + 0x620) == 0xb)
                                    int64_t x8_31 = sx.q(*arg4)
                                    *arg4 = x8_31.d + 1
                                    int128_t* x8_32 = arg3 + x8_31 * 0x88
                                    *x8_32 = *(x0_3 + 0x638)
                                    v0 = *(x0_3 + 0x648)
                                    v2 = *(x0_3 + 0x678)
                                    v3 = *(x0_3 + 0x658)
                                    x8_32[3] = *(x0_3 + 0x668)
                                    x8_32[4] = v2
                                    x8_32[1] = v0
                                    x8_32[2] = v3
                                    v0 = *(x0_3 + 0x6a8)
                                    v2 = *(x0_3 + 0x688)
                                    x8_32[8].q = *(x0_3 + 0x6b8)
                                    x8_32[6] = *(x0_3 + 0x698)
                                    x8_32[7] = v0
                                    x8_32[5] = v2
        else if (x8_12 != 0)
            x8_13 = *(x0_3 + 0x260)
            
            if (x8_13 != 0)
                goto label_bbc1e0
return zx.q(*arg4 s> 0 ? 1 : 0)
