// 函数: _Z12TrashExactlyi
// 地址: 0xad3024
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t* x0 = DomGetContext()
CardID* entry_x8
int32_t x0_2 = CardsWhere(*(x0 + 8), zx.q(x0[6]), 0x3ea, entry_x8)
int32_t x21 = x0_2
*(entry_x8 + 0xc80) = x0_2

if (x0_2 s> arg1)
    uint64_t x2_1 = zx.q(x0[6])
    int32_t x8 = x0[7]
    DomGame* x0_3 = *(x0 + 8)
    int32_t var_28 = *x0
    int32_t var_24_1 = x8
    int128_t var_70
    __builtin_memset(&var_70, 0, 0x20)
    var_70.d = 0x12
    int128_t var_60
    __builtin_memset(&var_60:0xc, 0, 0x1c)
    int32_t var_80_1 = 0
    int32_t var_88_1 = 0
    int32_t var_90_1 = 7
    int128_t* var_98_1 = &var_70
    int32_t var_a0_1 = 9
    x21 = QueueChoiceCards(x0_3, &var_28, x2_1, 1, entry_x8, zx.q(x21), zx.q(arg1), zx.q(arg1))

int64_t result = TrashCards(*(x0 + 8), zx.q(x0[6]), entry_x8, x21, 0x3ea, 0x12, 0)
*(entry_x8 + 0xc80) = x21
return result
