// 函数: _ZneRK11XStringSpanS1_
// 地址: 0x9e6960
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x2 = *(arg1 + 8)

if (x2 != *(arg2 + 8))
    return 1

return zx.q(strncmp(*arg1, *arg2, x2) != 0 ? 1 : 0)
