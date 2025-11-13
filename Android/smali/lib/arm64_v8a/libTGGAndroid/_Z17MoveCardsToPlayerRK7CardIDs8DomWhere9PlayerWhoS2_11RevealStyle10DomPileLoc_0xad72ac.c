// 函数: _Z17MoveCardsToPlayerRK7CardIDs8DomWhere9PlayerWhoS2_11RevealStyle10DomPileLoc
// 地址: 0xad72ac
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(arg1 + 0xc80) s< 1)
    return 

int64_t i = 0

do
    int32_t x25_1 = *(arg1 + (i << 2))
    void* x0 = DomGetContext()
    int32_t var_58_1 = 0
    int64_t var_60_1 = 0
    int32_t var_68_1 = 0
    int32_t var_70_1 = 0
    int32_t var_78_1 = 0
    int64_t var_80_1 = 0
    MoveCardTo(*(x0 + 8), zx.q(arg3), zx.q(x25_1), zx.q(arg2), 0xb, zx.q(arg4), zx.q(arg5), arg6)
    CalcScores(*(x0 + 8))
    i += 1
while (i s< sx.q(*(arg1 + 0xc80)))
