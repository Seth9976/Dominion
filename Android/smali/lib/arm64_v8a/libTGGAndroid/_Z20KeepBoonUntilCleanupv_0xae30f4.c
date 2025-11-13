// 函数: _Z20KeepBoonUntilCleanupv
// 地址: 0xae30f4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

CardID* entry_x1
int32_t x0 = ThisCard(false, entry_x1)
int32_t x20 = *(DomGetContext() + 0x18)
void* x0_2 = DomGetContext()
int32_t var_28 = 0
int64_t var_30 = 0
int32_t var_38 = 0
int32_t var_40 = 0
int32_t var_48 = 0
int64_t var_50 = 0
MoveCardTo(*(x0_2 + 8), zx.q(x20), zx.q(x0), 0x3ee, 0xb, 0x463, 0, 0)
return CalcScores(*(x0_2 + 8)) __tailcall
