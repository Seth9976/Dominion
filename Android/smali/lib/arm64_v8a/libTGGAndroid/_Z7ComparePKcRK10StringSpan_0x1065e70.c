// 函数: _Z7ComparePKcRK10StringSpan
// 地址: 0x1065e70
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

size_t x0 = strlen(arg1)

if (*(arg2 + 8) != x0)
    return 0

return zx.q(strncmp(*arg2, arg1, x0) == 0 ? 1 : 0)
