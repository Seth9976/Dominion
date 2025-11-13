// 函数: _Z13MoveToTopDeck6CardID8DomWhere13CardMoveStyle
// 地址: 0xadb930
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x21 = arg2
int32_t x20 = arg1
void* x0 = DomGetContext()
int32_t x0_2 = CardOwner(*(x0 + 8), zx.q(x20))
int64_t x9 = *(x0 + 0x40)
DomGame* x8 = *(x0 + 8)
int32_t x10 = *(x0 + 0x48)
DomGame* x0_3
uint64_t x2
uint64_t x3
int64_t x6

if (x21 != 0x3ea)
    int32_t var_38_1 = 0
    int64_t var_40_1 = 0
    int32_t var_48_1 = 0
    int32_t var_50_1 = 0
    int32_t var_58_1 = x10
    x6 = 2
    int64_t var_60_1 = x9
    x0_3 = x8
    x2 = zx.q(x20)
    x3 = zx.q(x21)
else
    x3 = 0x3ea
    x6 = 4
    x0_3 = x8
    x2 = zx.q(x20)
    int32_t var_38 = 0
    int64_t var_40 = 0
    int32_t var_48 = 0
    int32_t var_50 = 0
    int32_t var_58 = x10
    int64_t var_60 = x9

return MoveCardTo(x0_3, zx.q(x0_2), x2, x3, zx.q(arg3), 0x3eb, x6, 0)
