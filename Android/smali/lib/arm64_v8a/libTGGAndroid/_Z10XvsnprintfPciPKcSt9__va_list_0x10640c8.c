// 函数: _Z10XvsnprintfPciPKcSt9__va_list
// 地址: 0x10640c8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t var_40 = *arg4
int128_t var_30 = *(arg4 + 0x10)
int64_t result = vsnprintf(arg1, sx.q(arg2), arg3)

if (result.d != 0xffffffff)
    return result

arg1[sx.q(arg2) - 1] = 0
return sx.q(arg2) - 1
