// 函数: _Z12SetCardsFlagRK7CardIDs11DomCardFlagb
// 地址: 0xae382c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x8 = sx.q(*(arg1 + 0xc80))

if (x8.d == 0)
    return 

CardIDs const& x19_1 = arg1
int64_t i_1 = x8 << 2
int64_t i

do
    uint64_t x0 = zx.q(*x19_1)
    x19_1 += 4
    SetCardFlag(x0, zx.q(arg2), arg3 & 1)
    i = i_1
    i_1 -= 4
while (i != 4)
