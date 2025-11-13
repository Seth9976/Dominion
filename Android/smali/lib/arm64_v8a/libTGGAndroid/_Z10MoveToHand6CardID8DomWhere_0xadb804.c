// 函数: _Z10MoveToHand6CardID8DomWhere
// 地址: 0xadb804
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x20 = arg1
void* x0 = DomGetContext()
int32_t x0_2 = CardOwner(*(x0 + 8), zx.q(x20))
int32_t var_28 = 0
int64_t var_30 = 0
int32_t var_38 = 0
int32_t var_40 = 0
int32_t var_48 = *(x0 + 0x48)
int64_t var_50 = *(x0 + 0x40)
return MoveCardTo(*(x0 + 8), zx.q(x0_2), zx.q(x20), zx.q(arg2), 0xb, 0x3ea, 3, 0)
