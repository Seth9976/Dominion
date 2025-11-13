// 函数: stbtt_PackFontRangesRenderIntoRects
// 地址: 0x10094f0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v14
int64_t var_a0 = v14
int64_t v13
int64_t var_90 = v13
int64_t v12
int64_t var_88 = v12
int64_t v11
int64_t var_80 = v11
int64_t v10
int64_t var_78 = v10
int64_t v9
int64_t var_70 = v9
int64_t v8 = *(arg1 + 0x24)
int32_t x22

if (arg4 s< 1)
    x22 = 1
else
    int64_t i = 0
    int32_t x14_1 = 0
    int32_t* var_e0_1 = arg3
    int32_t fp_1 = -1
    v9.d = fconvert.s(1f)
    x22 = 1
    
    do
        int128_t v0
        v0.d = arg3[i * 0xa]
        int128_t v1
        
        if (v0.d f<= 0f)
            v0.d = fneg(v0.d)
            v1.d = float.s(_byteswap(zx.d(*(*(arg2 + 8) + sx.q(*(arg2 + 0x1c)) + 0x12))) u>> 0x10)
        else
            void* x8_6 = *(arg2 + 8) + sx.q(*(arg2 + 0x24))
            v1.d = float.s((sx.d((zx.d(*(x8_6 + 4)) << 8).w) | zx.d(*(x8_6 + 5)))
                - (sx.d((zx.d(*(x8_6 + 6)) << 8).w) | zx.d(*(x8_6 + 7))))
        
        void* x8_17 = arg3 + i * 0x28
        uint32_t x9_7 = zx.d(*(x8_17 + 0x20))
        v10.d = v0.d f/ v1.d
        v11.d = 0f
        v12.d = 0f
        *(arg1 + 0x24) = x9_7
        uint32_t x8_18 = zx.d(*(x8_17 + 0x21))
        v0.d = float.s(x9_7)
        *(arg1 + 0x28) = x8_18
        
        if (x9_7 != 0)
            v1.d = float.s(1 - x9_7)
            v12.d = v1.d f/ (v0.d f+ v0.d)
        
        v1.d = float.s(x8_18)
        
        if (x8_18 != 0)
            v11.d = float.s(1 - x8_18) / (v1.d f+ v1.d)
        
        if (*(arg3 + i * 0x28 + 0x10) s>= 1)
            void* x8_21 = arg3 + i * 0x28
            int64_t x24_1 = 0
            int64_t j = 0
            v13.d = v9.d f/ v0.d
            v14.d = v9.d f/ v1.d
            int32_t* x20_1 = arg5 + 0xc + muls.dp.d(x14_1, 0x18)
            
            do
                if (x20_1[2] == 0)
                    x22 = 0
                else if (*x20_1 == 0)
                    if (*(arg1 + 0x20) == 0 && (fp_1 & 0x80000000) == 0 && x20_1[1] == 0)
                        void* x8_55 = *(x8_21 + 0x18)
                        int128_t* x9_22 = x8_55 + mulu.dp.d(fp_1, 0x1c)
                        v1 = *x9_22
                        int128_t* x8_56 = x8_55 + x24_1
                        *(x8_56 + 0xc) = *(x9_22 + 0xc)
                        *x8_56 = v1
                    else
                        x22 = 0
                else if (x20_1[1] == 0)
                    x22 = 0
                else
                    int64_t x8_30 = *(x8_21 + 8)
                    uint64_t x1
                    
                    if (x8_30 == 0)
                        x1 = zx.q(j.d + *(x8_21 + 4))
                    else
                        x1 = zx.q(*(x8_30 + (j << 2)))
                    
                    void* x26_1 = *(x8_21 + 0x18)
                    int32_t x0_1
                    int64_t v1_1
                    int128_t v3_1
                    x0_1, v1_1, v3_1 = stbtt_FindGlyphIndex(arg2, x1)
                    int32_t temp0_2 = *(arg1 + 0x1c)
                    v1_1.d = temp0_2
                    v1_1:4.d = temp0_2
                    int64_t v1_2 = *x20_1 - v1_1
                    *(x20_1 - 0xc) += v1_1
                    *x20_1 = v1_2
                    void* x8_35 = *(arg2 + 8)
                    int64_t v0_2
                    v0_2.d = *(arg1 + 0x24)
                    v1_2.d = *(arg1 + 0x28)
                    int64_t v2_1
                    v2_1.d = 0f
                    v3_1.d = 0f
                    void* x8_36 = x8_35 + *(arg2 + 0x28)
                    v0_2.d = float.s(v0_2.d)
                    v1_2.d = float.s(v1_2.d)
                    int32_t temp0_3 = _byteswap(zx.d(*(x8_35 + *(arg2 + 0x24) + 0x22)) << 0x10)
                    int32_t x9_16
                    
                    if (temp0_3 s> x0_1)
                        x9_16 = x0_1 << 2
                    else
                        x9_16 = (temp0_3 << 2) - 4
                    
                    uint32_t x25_1 = zx.d(*(x8_36 + sx.q(x9_16)))
                    v0_2.d = v10.d f* v0_2.d
                    v1_2.d = v10.d f* v1_2.d
                    void var_a8
                    void var_a4
                    int32_t var_98
                    int32_t var_94
                    int128_t v2_2
                    int128_t v3_2
                    v2_2, v3_2 = stbtt_GetGlyphBitmapBoxSubpixel(arg2, zx.q(x0_1), &var_94, 
                        &var_98, &var_a4, &var_a8, v0_2, v1_2, v2_1, v3_1)
                    int32_t x13_1 = *(arg1 + 0x24)
                    int32_t x14_3 = *(arg1 + 0x28)
                    int64_t x4_1 = sx.q(*(arg1 + 0x18))
                    v2_2.d = 0f
                    v3_2.d = 0f
                    v0, v1 = stbtt_MakeGlyphBitmapSubpixel(arg2, 
                        *(arg1 + 0x30) + x20_1[-3] + x4_1 * x20_1[-2], zx.q(*x20_1 - x13_1 + 1), 
                        zx.q(x20_1[1] - x14_3 + 1), x4_1, zx.q(x0_1), v10.d f* float.s(x13_1), 
                        v10.d f* float.s(x14_3), v2_2, v3_2)
                    int32_t x4_2 = *(arg1 + 0x24)
                    
                    if (x4_2 u>= 2)
                        int64_t x3_2 = sx.q(*(arg1 + 0x18))
                        x26_1, v0, v1, v8, v9, v10, v11, v12, v13, v14 = sub_1008f28(
                            *(arg1 + 0x30) + x20_1[-3] + x3_2 * x20_1[-2], *x20_1, x20_1[1], 
                            x3_2.d, x4_2)
                    
                    int32_t x4_3 = *(arg1 + 0x28)
                    
                    if (x4_3 u>= 2)
                        int64_t x3_3 = sx.q(*(arg1 + 0x18))
                        x25_1, fp_1, v0, v1, v8, v9, v10, v11, v12, v13, v14 = sub_10091ec(
                            *(arg1 + 0x30) + x20_1[-3] + x3_3 * x20_1[-2], *x20_1, x20_1[1], 
                            x3_3.d, x4_3)
                    
                    int16_t x8_43 = (x20_1[-3]).w
                    int16_t* x9_21 = x26_1 + x24_1
                    uint16_t x11_7 = (_byteswap(x25_1) u>> 0x10).w
                    *x9_21 = x8_43
                    v0.d = float.s(sx.d(x11_7))
                    v0.d = v10.d f* v0.d
                    x9_21[1] = (x20_1[-2]).w
                    
                    if (x0_1 == 0)
                        fp_1 = j.d
                    
                    x9_21[2] = (*x20_1).w + (x20_1[-3]).w
                    int16_t x8_47 = (x20_1[-2]).w
                    int16_t x10_8 = (x20_1[1]).w
                    *(x9_21 + 0x10) = v0.d
                    x9_21[3] = x10_8 + x8_47
                    v0.d = var_94
                    v0.d = float.s(v0.d)
                    v0.d = v13.d f* v0.d
                    v0.d = v12.d f+ v0.d
                    *(x9_21 + 8) = v0.d
                    v0.d = var_98
                    v0.d = float.s(v0.d)
                    v0.d = v14.d f* v0.d
                    v0.d = v11.d f+ v0.d
                    *(x9_21 + 0xc) = v0.d
                    v0.d = float.s(*x20_1 + var_94)
                    v0.d = v13.d f* v0.d
                    v0.d = v12.d f+ v0.d
                    *(x9_21 + 0x14) = v0.d
                    v0.d = float.s(x20_1[1] + var_98)
                    v0.d = v14.d f* v0.d
                    v0.d = v11.d f+ v0.d
                    *(x9_21 + 0x18) = v0.d
                
                j += 1
                x20_1 = &x20_1[6]
                x24_1 += 0x1c
            while (j s< sx.q(*(arg3 + i * 0x28 + 0x10)))
            
            arg3 = var_e0_1
            x14_1 += j.d
        
        i += 1
    while (i != zx.q(arg4))

*(arg1 + 0x24) = v8
return zx.q(x22)
