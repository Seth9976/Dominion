// 函数: stbtt_GetGlyphBitmapBoxSubpixel
// 地址: 0x1006fb4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint32_t* x19 = arg6
uint32_t* x20 = arg5
uint32_t* x21 = arg4
uint32_t* x22 = arg3
int128_t v8 = arg10
int128_t v10 = arg9
int128_t v9 = arg8
float v11 = arg7
int32_t result
int32_t x8_2
int32_t x9_2
int32_t x10_1
int32_t x11_2

if (*(arg1 + 0x4c) != 0)
    int64_t var_60_1 = 0
    int128_t var_90
    __builtin_memset(&var_90, 0, 0x28)
    var_90.d = 1
    result, x19, x20, x21, x22, v8, v9, v10, v11 = sub_100bc78(arg1, arg2, &var_90, v8, v9, v10)
    int128_t var_80
    
    if (result == 0)
        x10_1 = 0
    else
        x10_1 = var_80:8.d
    
    int64_t var_70
    
    x8_2 = result == 0 ? 0 : var_70.d
    
    if (result == 0)
        x9_2 = 0
    else
        x9_2 = var_80:0xc.d
    
    if (result == 0)
        x11_2 = 0
    else
        x11_2 = var_70:4.d
    
    if (x22 == 0)
        goto label_1007050
    
    goto label_100704c

result = sub_1006190(arg1, arg2)

if ((result & 0x80000000) != 0)
    if (x22 != 0)
        *x22 = 0
    
    if (x21 != 0)
        *x21 = 0
    
    if (x20 != 0)
        *x20 = 0
    
    if (x19 != 0)
        *x19 = 0
else
    void* x9_4 = *(arg1 + 8) + zx.q(result)
    x10_1 = sx.d((zx.d(*(x9_4 + 2)) << 8).w) | zx.d(*(x9_4 + 3))
    x8_2 = sx.d((zx.d(*(x9_4 + 4)) << 8).w) | zx.d(*(x9_4 + 5))
    x9_2 = sx.d((zx.d(*(x9_4 + 6)) << 8).w) | zx.d(*(x9_4 + 7))
    x11_2 = sx.d((zx.d(*(x9_4 + 8)) << 8).w) | zx.d(*(x9_4 + 9))
    
    if (x22 == 0)
        goto label_1007050
    
label_100704c:
    *x22 = vcvtms_s32_f32(float.s(x10_1) * v11 f+ v10.d)
label_1007050:
    
    if (x21 != 0)
        *x21 = vcvtms_s32_f32(float.s(neg.d(x11_2)) f* v9.d f+ v8.d)
    
    if (x20 != 0)
        *x20 = vcvtps_s32_f32(float.s(x9_2) * v11 f+ v10.d)
    
    if (x19 != 0)
        *x19 = vcvtps_s32_f32(float.s(neg.d(x8_2)) f* v9.d f+ v8.d)

return result
