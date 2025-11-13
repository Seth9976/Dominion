// 函数: _Z9SortRanksR10PlayerRankS0_
// 地址: 0xbdf9d0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8_1 = *arg1
int32_t x9 = *arg2

if (x8_1 s> x9)
    return 1

if (x8_1 s>= x9)
    return zx.q(*(arg1 + 4) s> *(arg2 + 4) ? 1 : 0)

return 0
