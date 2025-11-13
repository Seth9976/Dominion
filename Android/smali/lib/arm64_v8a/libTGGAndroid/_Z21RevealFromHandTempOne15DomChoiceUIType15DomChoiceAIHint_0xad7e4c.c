// 函数: _Z21RevealFromHandTempOne15DomChoiceUIType15DomChoiceAIHint
// 地址: 0xad7e4c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

CardsWhereType(0x3ea, 0, 0)
int64_t var_2610 = 0
int32_t var_cf8

if (var_cf8 != 0)
    int32_t* x0
    int128_t v0_1
    x0, v0_1 = DomGetContext()
    int32_t var_68 = arg1
    int128_t var_64_1 = 0.o
    int64_t var_54
    __builtin_memset(&var_54, 0, 0x24)
    int64_t var_44 = *(x0 + 0x40)
    void var_1978
    CardID var_cf0
    memcpy(&var_cf0, &var_1978, 0xc84)
    uint64_t x2_1 = zx.q(x0[6])
    int32_t x8_2 = x0[7]
    DomGame* x0_2 = *(x0 + 8)
    int32_t var_2600 = *x0
    int32_t var_25fc_1 = x8_2
    int32_t var_2620_1 = 0
    int32_t var_2628_1 = 0
    int32_t var_2630_1 = arg2
    int32_t* var_2638_1 = &var_68
    int32_t var_2640_1 = 0x20
    int32_t var_70
    int32_t var_70_1 = QueueChoiceCards(x0_2, &var_2600, x2_1, 1, &var_cf0, zx.q(var_70), 1, 1)
    memcpy(&var_2600, &var_cf0, 0xc84)
    int32_t var_1980
    
    if (var_1980 != 0)
        void* x0_5 = DomGetContext()
        RevealTemp(*(x0_5 + 8), &var_2600, 0x3ea, *(x0_5 + 0x40), zx.q(*(x0_5 + 0x48)), 0, 0)
        return zx.q(var_2600)

return 0
