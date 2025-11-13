// 函数: stbtt_BakeFontBitmap
// 地址: 0x100b72c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg6
int64_t var_110 = 0
int32_t x21_1

if (stbtt_InitFont(&var_110, arg1, zx.q(arg2)) == 0)
    x21_1 = -1
else
    memset(arg3, 0, sx.q(arg5 * arg4))
    
    if (arg7 s< 1)
        x21_1 = 1
    else
        int64_t x25_1 = 0
        int64_t x23_1 = 0 - zx.q(arg7)
        int64_t var_130_1 = x23_1
        void* var_108
        int32_t var_ec
        void* x8_3 = var_108 + sx.q(var_ec)
        float* x26_1 = arg8 + 8
        int32_t fp_1 = 1
        int32_t x28_1 = 1
        int128_t v8
        v8.d = arg9.d f/ float.s((sx.d((zx.d(*(x8_3 + 4)) << 8).w) | zx.d(*(x8_3 + 5)))
            - (sx.d((zx.d(*(x8_3 + 6)) << 8).w) | zx.d(*(x8_3 + 7))))
        x21_1 = 1
        
        do
            int32_t x0_4
            int128_t v2_1
            int128_t v3_1
            x0_4, v2_1, v3_1 = stbtt_FindGlyphIndex(&var_110, zx.q(x19))
            v2_1.d = 0f
            v3_1.d = 0f
            int32_t temp0_1 = _byteswap(zx.d(*(var_108 + var_ec + 0x22)) << 0x10)
            int32_t x9_11
            
            if (temp0_1 s> x0_4)
                x9_11 = x0_4 << 2
            else
                x9_11 = (temp0_1 << 2) - 4
            
            int32_t var_e8
            uint32_t x8_11 = zx.d(*(var_108 + var_e8 + sx.q(x9_11)))
            int32_t var_118
            int32_t var_114
            float var_68
            float var_64
            int128_t v2_2
            int128_t v3_2
            v2_2, v3_2 = stbtt_GetGlyphBitmapBoxSubpixel(&var_110, zx.q(x0_4), &var_64, &var_68, 
                &var_114, &var_118, v8, v8, v2_1, v3_1)
            int32_t x2_3 = var_114 i- var_64
            int32_t x3_1 = var_118 i- var_68
            
            if (fp_1 + x2_3 + 1 s>= arg4)
                x28_1 = x21_1
            
            int32_t x27_1 = x28_1 + x3_1
            
            if (fp_1 + x2_3 + 1 s>= arg4)
                fp_1 = 1
            
            int32_t var_134
            
            if (x27_1 + 1 s>= arg5)
                var_134 = x25_1.d
                
                if (x27_1 + 1 s>= arg5)
                    x21_1 = var_134
                    break
            else
                int32_t x20_1 = fp_1 + x2_3
                
                if (x20_1 s>= arg4)
                    return stbtt_GetNumberOfFonts(__assert2(
                        "C:\x\ax2017\Engine\android\AndroidEngine\..\..\/ExternalCode/stb/stb_truetype.h", 
                        0xec9, 
                        "int stbtt_BakeFontBitmap_internal(unsigned char *, int, float, unsigned char *, "
                    "int, int, int, int, stbtt_bakedchar *)", 
                        "x+gw < pw", arg4)) __tailcall
                
                uint16_t x8_17 = (_byteswap(x8_11) u>> 0x10).w
                v2_2.d = 0f
                v3_2.d = 0f
                stbtt_MakeGlyphBitmapSubpixel(&var_110, arg3 + sx.q(fp_1) + sx.q(x28_1 * arg4), 
                    x2_3, x3_1, arg4, zx.q(x0_4), v8, v8, v2_2, v3_2)
                x26_1[-2].w = fp_1.w
                *(x26_1 - 6) = x28_1.w
                x26_1[-1].w = x20_1.w
                *(x26_1 - 2) = x27_1.w
                fp_1 = x20_1 + 1
                x23_1 = var_130_1
                *x26_1 = float.s(var_64)
                
                if (x27_1 s>= x21_1)
                    x21_1 = x27_1 + 1
                
                x26_1[1] = float.s(var_68)
                x26_1[2] = v8.d f* float.s(sx.d(x8_17))
                
                if (x27_1 + 1 s>= arg5)
                    x21_1 = var_134
                    break
            x25_1 -= 1
            x19 += 1
            x26_1 = &x26_1[5]
        while (x23_1 != x25_1)

return zx.q(x21_1)
