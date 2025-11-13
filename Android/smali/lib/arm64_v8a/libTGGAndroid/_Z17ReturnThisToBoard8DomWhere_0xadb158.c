// 函数: _Z17ReturnThisToBoard8DomWhere
// 地址: 0xadb158
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

CardID* entry_x1
int32_t x0 = ThisCard(false, entry_x1)
void* x0_1 = DomGetContext()
int32_t x0_3 = BoardPileSource(*(x0_1 + 8), zx.q(x0))

if (x0_3 != 0)
    int32_t x0_5 = BoardPileWhere(*(x0_1 + 8), zx.q(x0_3))
    
    if (x0_5 != 0)
        int32_t var_28 = 0
        int64_t var_30 = 0
        int32_t var_38 = 0
        int32_t var_40 = 0
        int32_t var_48 = 0
        int64_t var_50 = 0
        int32_t x0_7 =
            MoveCardTo(*(x0_1 + 8), 0xffffffff, zx.q(x0), zx.q(arg1), 0x15, zx.q(x0_5), 0, 0)
        CalcScores(*(x0_1 + 8))
        return zx.q(x0_7) & 1

return 0
