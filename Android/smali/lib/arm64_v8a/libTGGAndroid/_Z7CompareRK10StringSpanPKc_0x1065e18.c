// 函数: _Z7CompareRK10StringSpanPKc
// 地址: 0x1065e18
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

size_t x0_1 = strlen(arg2)

if (*(arg1 + 8) != x0_1)
    return 0

return zx.q(strncmp(*arg1, arg2, x0_1) == 0 ? 1 : 0)
