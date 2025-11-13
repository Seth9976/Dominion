// 函数: sub_ae58a8
// 地址: 0xae58a8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0 = DomGetContext()
GameAssert((*(x0 + 0x58) != 0 ? 1 : 0).b)
int32_t x19_1 = *(x0 + 0x58)
int32_t x20 = *(CardGet(*(DomGetContext() + 8), zx.q(x19_1)) + 0x14)
void* x0_5 = DomGetContext()
int32_t x0_7 = CardOwner(*(x0_5 + 8), zx.q(x19_1))
int32_t var_28 = 0
int64_t var_30 = 0
int32_t var_38 = 0
int32_t var_40 = 0
int32_t var_48 = *(x0_5 + 0x48)
int64_t var_50 = *(x0_5 + 0x40)
return MoveCardTo(*(x0_5 + 8), zx.q(x0_7), zx.q(x19_1), zx.q(x20), 0xb, 0x3eb, 3, 0)
