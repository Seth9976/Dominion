// 函数: sub_a59dc4
// 地址: 0xa59dc4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = *arg2

if ((CanDoCardStamp(zx.q(*(arg1 + 8)), zx.q(x19)) & 1) == 0)
    return 0

return (zx.q(IsLandscape(zx.q(x19))) ^ 1) & 1
