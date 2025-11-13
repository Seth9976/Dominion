// 函数: _Z13SortScoreCard11DomCardEnumS_
// 地址: 0xc01544
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg2
int32_t x0 = SortClass(arg1)
int32_t x0_2 = SortClass(zx.q(x19))

if (x0 s< x0_2)
    return 1

if (x0 s<= x0_2)
    return SortCardsByCostNameRev(zx.q(arg1.d), zx.q(x19)) __tailcall

return 0
