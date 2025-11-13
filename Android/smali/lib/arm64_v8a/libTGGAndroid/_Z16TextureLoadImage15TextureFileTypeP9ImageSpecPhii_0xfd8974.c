// 函数: _Z16TextureLoadImage15TextureFileTypeP9ImageSpecPhii
// 地址: 0xfd8974
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8 = (*(arg2 + 0x10)).d
int32_t x23 = arg1.d
int128_t var_50 = *arg2

if (arg5 != 1)
    arg1 = XMalloc(x8 * var_50:0xc.d)
    var_50.q = arg1

int32_t x21_1

if (x23 != 0xb)
    TextureLoadWithSTB(arg1, &var_50, arg3, arg4)
    x21_1 = 0
    
    if (arg5 != 1)
    label_fd8a04:
        
        if ((x21_1 & 1) == 0)
            int32_t x1_2 = var_50:8.d
            int32_t x2_2 = var_50:0xc.d
            int64_t x4 = *arg2
            int32_t x5_1 = x1_2 s/ arg5
            int32_t x6_1 = x2_2 s/ arg5
            *(arg2 + 8) = x5_1
            *(arg2 + 0xc) = x6_1
            *(arg2 + 0x10) = x8 s/ arg5
            stbir_resize_uint8(var_50.q, x1_2, x2_2, 0, x4, x5_1, x6_1, 0, 4)
            XFree(var_50.q)
else
    x21_1 = TextureLoadWithQOI(&var_50, arg3, arg4) ^ 1
    
    if (arg5 != 1)
        goto label_fd8a04

return zx.q(not.d(x21_1)) & 1
