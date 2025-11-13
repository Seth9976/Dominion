// 函数: _Z12MayPlayOneOfRK7CardIDs15DomChoiceUIType15DomChoiceAIHint
// 地址: 0xae4ffc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t var_d20
__builtin_memset(&var_d20, 0, 0x18)
int32_t var_d00
int32_t var_78
int32_t x0_3

if (*(arg1 + 0xc80) != 0)
    int32_t* x0
    int128_t v0_1
    x0, v0_1 = DomGetContext()
    v0_1 = var_d20.o
    var_78 = arg2
    int128_t var_74_1 = v0_1
    int64_t var_64
    __builtin_memset(&var_64, 0, 0x24)
    int64_t var_54 = *(x0 + 0x40)
    memcpy(&var_d00, arg1, 0xc84)
    uint64_t x2 = zx.q(x0[6])
    int32_t x8_2 = x0[7]
    DomGame* x0_2 = *(x0 + 8)
    int32_t var_d08 = *x0
    int32_t var_d04_1 = x8_2
    int32_t var_d30_1 = 0
    int32_t var_d38_1 = 0
    int32_t var_d40_1 = arg3
    int32_t* var_d48_1 = &var_78
    int32_t var_d50_1 = 1
    int32_t var_80
    x0_3 = QueueChoiceCards(x0_2, &var_d08, x2, 1, &var_d00, zx.q(var_80), 1, 0)

int32_t x19_2

if (*(arg1 + 0xc80) == 0 || x0_3 == 0)
    x19_2 = 0
else
    x19_2 = var_d00
    GameAssert((x0_3 == 1 ? 1 : 0).b)
    void* x0_5 = DomGetContext()
    DomGame* x20_2 = *(x0_5 + 8)
    int32_t x21_2 = *(x0_5 + 0x18)
    var_d00.q = ToCardRef(x20_2, zx.q(x19_2))
    var_78.q = 0
    var_d20 = 0
    PlayCard(x20_2, zx.q(x21_2), &var_d00, &var_78, &var_d20, 0)

return zx.q(x19_2)
