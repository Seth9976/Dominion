// 函数: _Z11AppendCardsRK7DomGameR11DomLogEventPK6CardIDi
// 地址: 0xc0d2cc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg4 s< 1)
    return 

CardID const* x19_1 = arg3
uint64_t i_1 = zx.q(arg4)
uint64_t i

do
    uint64_t x1 = zx.q(*x19_1)
    x19_1 += 4
    AppendCard(arg2, zx.q(CardWhat(arg1, x1)))
    i = i_1
    i_1 -= 1
while (i != 1)
