// 函数: _Z9PassCardsR7DomGame9PlayerWhoS1_P6CardIDi
// 地址: 0xadc0cc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg5 s< 1)
    return 

CardID* x19_1 = arg4
uint64_t i_1 = zx.q(arg5)
uint64_t i

do
    int32_t var_48_1 = 0
    int64_t var_50_1 = 0
    int32_t var_58_1 = 1
    int32_t var_60_1 = 0
    int32_t var_68_1 = 0
    int64_t var_70_1 = 0
    MoveCardTo(arg1, zx.q(arg3), zx.q(*x19_1), 0x3ea, 0x10, 0x3ed, 0xa, 0)
    uint64_t x1_1 = zx.q(*x19_1)
    x19_1 += 4
    i = i_1
    i_1 -= 1
    *(CardGet(arg1, x1_1) + 0x30) = arg2
while (i != 1)
