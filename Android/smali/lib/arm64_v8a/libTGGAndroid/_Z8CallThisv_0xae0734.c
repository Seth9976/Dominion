// 函数: _Z8CallThisv
// 地址: 0xae0734
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

CardID* entry_x1
int32_t x0 = ThisCard(false, entry_x1)
void* x0_1 = DomGetContext()
int32_t x0_3 = CardOwner(*(x0_1 + 8), zx.q(x0))
int32_t var_28 = 0
int64_t var_30 = 0
int32_t var_38 = 0
int32_t var_40 = 0
int32_t var_48 = *(x0_1 + 0x48)
int64_t var_50 = *(x0_1 + 0x40)
return MoveCardTo(*(x0_1 + 8), zx.q(x0_3), zx.q(x0), 0x461, 0x16, 0x3e9, 0, 0)
