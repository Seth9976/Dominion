// 函数: stbtt_MakeGlyphBitmapSubpixel
// 地址: 0x100856c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t var_70
int32_t x0 = stbtt_GetGlyphShape(arg1, zx.q(arg6), &var_70)
int32_t var_68
int32_t var_64
stbtt_GetGlyphBitmapBoxSubpixel(arg1, zx.q(arg6), &var_64, &var_68, 0, 0, arg7, arg8, arg9, arg10)
int64_t var_78 = arg2
int32_t var_88 = arg3
int32_t var_84 = arg4
int32_t var_80 = arg5
int64_t x20_1

if (arg3 == 0 || arg4 == 0)
    x20_1 = var_70
else
    x20_1 = var_70
    int128_t v0_1
    v0_1.d = float.s(0x3eb33333)
    stbtt_Rasterize(&var_88, x20_1, zx.q(x0), zx.q(var_64), zx.q(var_68), 1, v0_1, arg7, arg8, 
        arg9, arg10)

return free(x20_1)
