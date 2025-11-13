// 函数: _Z23XCallocAllowingZeroSizei
// 地址: 0x10624a4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg1 == 0)
    return 0

int64_t bytes = sx.q(arg1)
int64_t result = malloc(bytes)
memset(result, 0, bytes)
return result
