// 函数: _Z12MoveToBottomRK7CardIDs8DomWhereS2_
// 地址: 0xadba80
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(arg1 + 0xc80) s< 1)
    return 

int64_t i = 0

do
    int32_t x22_1 = *(arg1 + (i << 2))
    void* x0 = DomGetContext()
    int32_t x0_2 = CardOwner(*(x0 + 8), zx.q(x22_1))
    int32_t var_48_1 = 0
    int64_t var_50_1 = 0
    int32_t var_58_1 = 0
    int32_t var_60_1 = 0
    int32_t var_68_1 = *(x0 + 0x48)
    int64_t var_70_1 = *(x0 + 0x40)
    MoveCardTo(*(x0 + 8), zx.q(x0_2), zx.q(x22_1), zx.q(arg2), 0xb, zx.q(arg3), 2, 0xffffffff)
    i += 1
while (i s< sx.q(*(arg1 + 0xc80)))
