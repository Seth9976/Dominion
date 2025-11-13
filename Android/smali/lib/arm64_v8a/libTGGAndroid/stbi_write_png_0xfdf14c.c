// 函数: stbi_write_png
// 地址: 0xfdf14c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t var_24
int64_t buf = stbi_write_png_to_mem(arg5, arg6, arg2, arg3, arg4, &var_24)
int32_t x20_1

if (buf == 0)
    x20_1 = 0
else
    FILE* fp = fopen(arg1, "wb")
    
    if (fp == 0)
        x20_1 = 0
    else
        x20_1 = 1
        fwrite(buf, 1, sx.q(var_24), fp)
        fclose(fp)
    
    free(buf)

return zx.q(x20_1)
