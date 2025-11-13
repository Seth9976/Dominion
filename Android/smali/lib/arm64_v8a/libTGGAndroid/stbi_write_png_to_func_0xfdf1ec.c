// 函数: stbi_write_png_to_func
// 地址: 0xfdf1ec
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t var_24
int64_t result = stbi_write_png_to_mem(arg6, arg7, arg3, arg4, arg5, &var_24)

if (result == 0)
    return result

arg1(arg2, result, zx.q(var_24))
free(result)
return 1
