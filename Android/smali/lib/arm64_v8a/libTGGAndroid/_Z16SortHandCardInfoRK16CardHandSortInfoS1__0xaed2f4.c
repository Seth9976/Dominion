// 函数: _Z16SortHandCardInfoRK16CardHandSortInfoS1_
// 地址: 0xaed2f4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x0 = zx.q(*arg1)
int32_t x8 = *arg2

if (x0.d != x8)
    return SortHandCards(x0, zx.q(x8)) __tailcall

return zx.q(*(arg1 + 4) s< *(arg2 + 4) ? 1 : 0)
