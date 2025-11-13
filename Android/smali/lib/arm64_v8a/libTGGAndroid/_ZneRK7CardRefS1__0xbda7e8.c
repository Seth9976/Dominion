// 函数: _ZneRK7CardRefS1_
// 地址: 0xbda7e8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8_1 = *arg1
int32_t x9 = *arg2

if (x8_1 == 0)
    if (x9 != 0)
        return 1
else if (x9 == 0)
    return 1

return zx.q(x8_1 != x9 ? 1 : 0) | zx.q(*(arg1 + 4) != *(arg2 + 4) ? 1 : 0)
