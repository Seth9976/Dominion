// 函数: stbtt_PackFontRangesGatherRects
// 地址: 0x1008cfc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v8
int64_t var_70 = v8
int32_t x21

if (arg4 s< 1)
    x21 = 0
else
    int64_t i = 0
    x21 = 0
    int32_t x25_1 = 0
    
    do
        float v0 = arg3[i * 0xa]
        float v1
        
        if (v0 <= 0f)
            v0 = fneg(v0)
            v1 = float.s(_byteswap(zx.d(*(*(arg2 + 8) + sx.q(*(arg2 + 0x1c)) + 0x12))) u>> 0x10)
        else
            void* x8_5 = *(arg2 + 8) + sx.q(*(arg2 + 0x24))
            v1 = float.s((sx.d((zx.d(*(x8_5 + 4)) << 8).w) | zx.d(*(x8_5 + 5)))
                - (sx.d((zx.d(*(x8_5 + 6)) << 8).w) | zx.d(*(x8_5 + 7))))
        
        int32_t x9_8 = *(arg3 + i * 0x28 + 0x10)
        v8.d = v0 / v1
        *(arg3 + i * 0x28 + 0x20) = (*(arg1 + 0x24)).b
        *(arg3 + i * 0x28 + 0x21) = (*(arg1 + 0x28)).b
        
        if (x9_8 s>= 1)
            void* x8_18 = arg3 + i * 0x28
            int64_t j = 0
            int64_t* x27_1 = arg5 + 0xc + muls.dp.d(x21, 0x18)
            
            do
                int64_t x8_31 = *(x8_18 + 8)
                uint64_t x1
                int128_t v2_1
                int128_t v3_1
                
                if (x8_31 == 0)
                    int32_t x0_4
                    x0_4, v2_1, v3_1 = stbtt_FindGlyphIndex(arg2, zx.q(j.d + *(x8_18 + 4)))
                    x1 = zx.q(x0_4)
                    
                    if (x0_4 != 0)
                        goto label_1008e24
                else
                    int32_t x0_2
                    x0_2, v2_1, v3_1 = stbtt_FindGlyphIndex(arg2, zx.q(*(x8_31 + (j << 2))))
                    x1 = zx.q(x0_2)
                    
                    if (x0_2 != 0)
                        goto label_1008e24
                
                if ((*(arg1 + 0x20) | x25_1) == 0)
                    x25_1 = 1
                label_1008e24:
                    v2_1.d = 0f
                    v3_1.d = 0f
                    int32_t var_78
                    int32_t var_74
                    int32_t var_68
                    int32_t var_64
                    stbtt_GetGlyphBitmapBoxSubpixel(arg2, x1, &var_64, &var_68, &var_74, &var_78, 
                        v8.d f* float.s(*(arg1 + 0x24)), v8.d f* float.s(*(arg1 + 0x28)), v2_1, 
                        v3_1)
                    *x27_1 = var_74 + not.d(var_64) + *(arg1 + 0x1c) + *(arg1 + 0x24)
                    *(x27_1 + 4) = var_78 + not.d(var_68) + *(arg1 + 0x1c) + *(arg1 + 0x28)
                else
                    *x27_1 = 0
                
                j += 1
                x27_1 = &x27_1[3]
            while (j s< sx.q(*(arg3 + i * 0x28 + 0x10)))
            
            x21 += j.d
        
        i += 1
    while (i != zx.q(arg4))

return zx.q(x21)
