// 函数: _Z11MoveCardsToRK7CardIDs8DomWhereS2_11RevealStyle10DomPileLoc12MoveLogStyle13CardMoveStyle
// 地址: 0xad71d4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(arg1 + 0xc80) s< 1)
    return 

int64_t i = 0

do
    int32_t x26_1 = *(arg1 + (i << 2))
    void* x0 = DomGetContext()
    int32_t x0_2 = CardOwner(*(x0 + 8), zx.q(x26_1))
    int32_t var_68_1 = 0
    int64_t var_70_1 = 0
    int32_t var_78_1 = arg6
    int32_t var_80_1 = 0
    int32_t var_88_1 = *(x0 + 0x48)
    int64_t var_90_1 = *(x0 + 0x40)
    MoveCardTo(*(x0 + 8), zx.q(x0_2), zx.q(x26_1), zx.q(arg2), zx.q(arg7), zx.q(arg3), zx.q(arg4), 
        arg5)
    i += 1
while (i s< sx.q(*(arg1 + 0xc80)))
