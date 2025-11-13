// 函数: _Z23XvsnprintfEnsureNewLinePciPKcSt9__va_list
// 地址: 0x1062068
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t v0 = *(arg4 + 0x10)
int128_t var_40 = *arg4
int128_t var_30 = v0
int64_t result = Xvsnprintf(arg1, arg2, arg3, &var_40)
int64_t x8 = sx.q(result.d)

if (zx.d(arg1[x8 - 1]) != 0xa)
    if (x8.d s>= arg2 - 1)
        arg1[x8 - 1] = 0xa
        return result
    
    *(arg1 + x8) = 0xa

return result
