// 函数: stbtt_GetGlyphBitmapSubpixel
// 地址: 0x10083f0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t v10 = arg8
int64_t var_98
int32_t x0 = stbtt_GetGlyphShape(arg1, arg2, &var_98)
int128_t v11

if (arg7.d f== 0f)
    v11.d = v10.d
else
    v11.d = arg7.d

if (not(v10.d f!= 0f))
    v10 = v11
    
    if (not(v11.d f!= 0f))
        free(var_98)
        return 0

int32_t var_78
int32_t var_74
int32_t var_48
int32_t var_44
stbtt_GetGlyphBitmapBoxSubpixel(arg1, zx.q(arg2), &var_44, &var_48, &var_74, &var_78, v11, v10, 
    arg9, arg10)
int32_t x23_1 = var_48
int32_t x21_1 = var_44
int32_t x26_1 = var_74 - x21_1
int32_t x8_2 = var_78 - x23_1
int32_t var_90 = x26_1
int32_t var_8c_1 = x8_2

if (arg3 != 0)
    *arg3 = x26_1

if (arg4 != 0)
    *arg4 = x8_2

if (arg5 != 0)
    *arg5 = x21_1

if (arg6 != 0)
    *arg6 = x23_1

int64_t result = 0

if (x26_1 != 0 && x8_2 != 0)
    int64_t result_1
    int128_t v0_1
    result_1, v0_1 = malloc(sx.q(x8_2 * x26_1))
    result = result_1
    int64_t result_2 = result_1
    
    if (result_1 != 0)
        v0_1.d = float.s(0x3eb33333)
        int32_t var_88_1 = x26_1
        stbtt_Rasterize(&var_90, var_98, zx.q(x0), zx.q(x21_1), zx.q(x23_1), 1, v0_1, v11, v10, 
            arg9, arg10)

free(var_98)
return result
