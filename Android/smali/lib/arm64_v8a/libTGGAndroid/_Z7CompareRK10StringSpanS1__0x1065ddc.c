// 函数: _Z7CompareRK10StringSpanS1_
// 地址: 0x1065ddc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x2 = *(arg1 + 8)

if (x2 != *(arg2 + 8))
    return 0

return zx.q(strncmp(*arg1, *arg2, x2) == 0 ? 1 : 0)
