// 函数: _Z17MayDiscardExactlyi15DomChoiceAIHint
// 地址: 0xad8754
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

GameAssert((arg1 s> 0 ? 1 : 0).b)
CardsWhereType(0x3ea, 0, 0)
int32_t var_d08
int32_t x21_1

x21_1 = var_d08 s> arg1 ? arg1 : var_d08

int64_t entry_x8

if (x21_1 == 0)
    return memset(entry_x8, 0, 0xc84)

int64_t var_2620_1 = 0
int32_t var_2610
int32_t x20_1

if (var_d08 == 0)
    memset(&var_2610, 0, 0xc84)
    x20_1 = 0
else
    int32_t* x0_1
    int128_t v0_1
    x0_1, v0_1 = DomGetContext()
    int32_t var_78 = 0x10
    int128_t var_74_1 = 0.o
    int64_t var_64_1 = 0
    int32_t var_5c_1 = x21_1
    int64_t var_58
    __builtin_memset(&var_58, 0, 0x18)
    int64_t var_50_1 = *(x0_1 + 0x40)
    void var_1988
    CardID var_d00
    memcpy(&var_d00, &var_1988, 0xc84)
    uint64_t x2_1 = zx.q(x0_1[6])
    int32_t x8_2 = x0_1[7]
    DomGame* x0_3 = *(x0_1 + 8)
    var_2610 = *x0_1
    int32_t var_260c_1 = x8_2
    int32_t var_2638_1 = 0
    int32_t var_2640_1 = arg2
    int32_t var_2630_1 = 1
    int32_t* var_2648_1 = &var_78
    int32_t var_2650_1 = 0x17
    int32_t var_80
    int32_t var_80_1 =
        QueueChoiceCards(x0_3, &var_2610, x2_1, 1, &var_d00, zx.q(var_80), zx.q(x21_1), zx.q(x21_1))
    memcpy(&var_2610, &var_d00, 0xc84)
    int32_t var_1990
    x20_1 = var_1990

void* x0_9 = DomGetContext()
int32_t var_2640_2 = 0
int64_t var_2648_2 = 0
int32_t var_2650_2 = 0
DiscardCards(*(x0_9 + 8), zx.q(*(x0_9 + 0x18)), &var_2610, zx.q(x20_1), 0x3ea, 0xb, 7, 0)
return memcpy(entry_x8, &var_2610, 0xc84)
