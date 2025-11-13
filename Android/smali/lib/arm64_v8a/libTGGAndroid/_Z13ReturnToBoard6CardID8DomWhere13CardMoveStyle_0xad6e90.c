// 函数: _Z13ReturnToBoard6CardID8DomWhere13CardMoveStyle
// 地址: 0xad6e90
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x22 = arg1
void* x0 = DomGetContext()
int32_t x0_2 = BoardPileSource(*(x0 + 8), zx.q(x22))

if (x0_2 != 0)
    int32_t x0_4 = BoardPileWhere(*(x0 + 8), zx.q(x0_2))
    
    if (x0_4 != 0)
        int32_t var_38_1 = 0
        int64_t var_40_1 = 0
        int32_t var_48_1 = 0
        int32_t var_50_1 = 0
        int32_t var_58_1 = 0
        int64_t var_60_1 = 0
        int32_t x0_6 =
            MoveCardTo(*(x0 + 8), 0xffffffff, zx.q(x22), zx.q(arg2), zx.q(arg3), zx.q(x0_4), 0, 0)
        CalcScores(*(x0 + 8))
        return zx.q(x0_6) & 1

return 0
