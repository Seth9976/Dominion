// 函数: stbi_write_tga
// 地址: 0xfdcb8c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

FILE* fp
int128_t v0
int128_t v1
int128_t v2
int128_t v3
int128_t v4
int128_t v5
int128_t v6
int128_t v7
fp, v0, v1, v2, v3, v4, v5, v6, v7 = fopen(arg1, "wb")
int64_t (* var_40)(FILE* arg1, int64_t arg2, int32_t arg3) = sub_fe9728
FILE* fp_1 = fp
int32_t x19_1

if (fp == 0)
    x19_1 = 0
else
    x19_1 = sub_fdc7c4(&var_40, zx.q(arg2), zx.q(arg3), arg4, arg5, v0, v1, v2, v3, v4, v5, v6, v7)
    fclose(fp)

return zx.q(x19_1)
