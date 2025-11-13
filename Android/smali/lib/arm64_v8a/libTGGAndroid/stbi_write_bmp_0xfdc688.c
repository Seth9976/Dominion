// 函数: stbi_write_bmp
// 地址: 0xfdc688
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

FILE* fp
int64_t x1
int64_t x2
int128_t v0
int128_t v1
int128_t v2
int128_t v3
int128_t v4
int128_t v5
int128_t v6
int128_t v7
fp, x1, x2, v0, v1, v2, v3, v4, v5, v6, v7 = fopen(arg1, "wb")
int64_t (* var_40)(FILE* arg1, int64_t arg2, int32_t arg3) = sub_fe9728
FILE* fp_1 = fp
int32_t x19_1

if (fp == 0)
    x19_1 = 0
else
    int32_t x8_1 = arg2 & 3
    int32_t var_78_1 = 0x18
    int32_t var_98_1 = 0x28
    int32_t var_80_1 = 1
    int32_t var_c0_1 = 0x4d
    int32_t var_a0_1 = 0x36
    int32_t var_48_1 = 0
    int32_t var_50_1 = 0
    int32_t var_58_1 = 0
    int32_t var_60_1 = 0
    int32_t var_68_1 = 0
    int32_t var_70_1 = 0
    int32_t var_88_1 = arg3
    int32_t var_90_1 = arg2
    int32_t var_a8_1 = 0
    int32_t var_b0_1 = 0
    int32_t var_c8_1 = 0x42
    int32_t var_b8_1 = (x8_1 + arg2 * 3) * arg3 + 0x36
    x19_1 = sub_fe92b4(&var_40, x1, x2, arg2, arg3, arg4, 1, arg5, v0, v1, v2, v3, v4, v5, v6, v7, 
        0, x8_1, "11 4 22 44 44 22 444444")
    fclose(fp)

return zx.q(x19_1)
