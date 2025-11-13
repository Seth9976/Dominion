// 函数: _Z13MayDiscardOne15DomChoiceUIType14DomChoiceFlags
// 地址: 0xad3e44
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

CardsWhereType(0x3ea, 0, 0)
int64_t var_1990 = 0
int32_t var_d00
int32_t x19_1

if (var_d00 == 0)
    x19_1 = 0
else
    int32_t* x0
    int128_t v0_1
    x0, v0_1 = DomGetContext()
    int32_t var_68 = arg1
    int128_t var_64_1 = 0.o
    int64_t var_54
    __builtin_memset(&var_54, 0, 0x24)
    int64_t var_44 = *(x0 + 0x40)
    void var_1980
    int32_t var_cf0
    memcpy(&var_cf0, &var_1980, 0xc84)
    DomGame* x0_2 = *(x0 + 8)
    int32_t var_cf8 = *x0
    int32_t var_cf4_1 = x0[7]
    int32_t var_19a0_1 = 0
    int32_t var_19a8_1 = arg2
    int32_t* var_19b8_1 = &var_68
    int32_t var_19b0_1 = 5
    int32_t var_19c0_1 = 0x17
    int32_t var_70
    int32_t x0_3 = QueueChoiceCards(x0_2, &var_cf8, zx.q(x0[6]), 1, &var_cf0, zx.q(var_70), 1, 0)
    
    if (x0_3 == 0)
        x19_1 = 0
    else
        x19_1 = var_cf0
        GameAssert((x0_3 == 1 ? 1 : 0).b)
        var_cf0 = x19_1
        
        if (x19_1 != 0)
            void* x0_5 = DomGetContext()
            int32_t var_19b0_2 = 0
            int64_t var_19b8_2 = 0
            int32_t var_19c0_2 = 0
            DiscardCards(*(x0_5 + 8), zx.q(*(x0_5 + 0x18)), &var_cf0, 1, 0x3ea, 0xb, 7, 0)

return zx.q(x19_1)
