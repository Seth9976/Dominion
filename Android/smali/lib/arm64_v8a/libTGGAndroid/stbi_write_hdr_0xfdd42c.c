// 函数: stbi_write_hdr
// 地址: 0xfdd42c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

FILE* fp = fopen(arg1, "wb")
int64_t (* var_40)(FILE* arg1, int64_t arg2, int32_t arg3) = sub_fe9728
FILE* fp_1 = fp
int32_t x19_1

if (fp == 0)
    x19_1 = 0
else
    x19_1 = sub_fdd2d8(&var_40, arg2, arg3, arg4, arg5)
    fclose(fp)

return zx.q(x19_1)
