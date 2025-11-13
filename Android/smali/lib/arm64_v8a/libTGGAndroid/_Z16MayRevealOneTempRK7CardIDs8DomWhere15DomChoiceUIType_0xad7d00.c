// 函数: _Z16MayRevealOneTempRK7CardIDs8DomWhere15DomChoiceUIType
// 地址: 0xad7d00
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t var_1998 = 0
int32_t var_1988
int32_t var_d08

if (*(arg1 + 0xc80) == 0)
    memset(&var_1988, 0, 0xc84)
else
    int32_t* x0
    int128_t v0_1
    x0, v0_1 = DomGetContext()
    int32_t var_78 = arg3
    int128_t var_74_1 = 0.o
    int64_t var_64
    __builtin_memset(&var_64, 0, 0x24)
    int64_t var_54 = *(x0 + 0x40)
    CardID var_d00
    memcpy(&var_d00, arg1, 0xc84)
    uint64_t x2 = zx.q(x0[6])
    int32_t x8_2 = x0[7]
    DomGame* x0_2 = *(x0 + 8)
    var_1988 = *x0
    int32_t var_1984_1 = x8_2
    int32_t var_19b0_1 = 0
    int32_t var_19b8_1 = 0
    int32_t* var_19c8_1 = &var_78
    int32_t var_19c0_1 = 0x11
    int32_t var_19d0_1 = 0x20
    int32_t var_80
    int32_t var_80_1 = QueueChoiceCards(x0_2, &var_1988, x2, 1, &var_d00, zx.q(var_80), 1, 0)
    memcpy(&var_1988, &var_d00, 0xc84)
    
    if (var_d08 != 0)
        void* x0_5 = DomGetContext()
        RevealTemp(*(x0_5 + 8), &var_1988, zx.q(arg2), *(x0_5 + 0x40), zx.q(*(x0_5 + 0x48)), 0, 0)

if (var_d08 == 0)
    return 0

return zx.q(var_1988)
