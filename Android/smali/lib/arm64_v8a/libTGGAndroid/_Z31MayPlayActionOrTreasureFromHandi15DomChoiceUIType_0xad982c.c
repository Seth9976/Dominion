// 函数: _Z31MayPlayActionOrTreasureFromHandi15DomChoiceUIType
// 地址: 0xad982c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

GetPlayableFromHand(6, 0)
int64_t var_19a8
__builtin_memset(&var_19a8, 0, 0x18)
int32_t var_d10
int32_t x20_1

if (var_d10 == 0)
    x20_1 = 0
else
    int32_t x23_1
    
    x23_1 = arg1 s> 1 ? 0x35 : 0xb
    
    int32_t* x0
    int128_t v0_1
    x0, v0_1 = DomGetContext()
    v0_1 = var_19a8.o
    int32_t var_78 = arg2
    int128_t var_74_1 = v0_1
    int64_t var_64
    __builtin_memset(&var_64, 0, 0x24)
    int64_t var_54 = *(x0 + 0x40)
    void var_1990
    int32_t var_d00
    memcpy(&var_d00, &var_1990, 0xc84)
    DomGame* x0_2 = *(x0 + 8)
    int32_t var_d08 = *x0
    int32_t var_d04_1 = x0[7]
    int32_t var_19b0_1 = 0
    int32_t var_19b8_1 = 0
    int32_t var_19c0_1 = x23_1
    int32_t* var_19c8_1 = &var_78
    int32_t var_19d0_1 = 1
    int32_t var_80
    int32_t x0_3
    CardID* x1_2
    x0_3, x1_2 = QueueChoiceCards(x0_2, &var_d08, zx.q(x0[6]), 1, &var_d00, zx.q(var_80), 1, 0)
    
    if (x0_3 == 0)
        x20_1 = 0
    else
        x20_1 = var_d00
        
        if (x20_1 != 0)
            if (arg1 != 1)
                PlayCard(zx.q(x20_1), arg1, zx.q(ThisCard(false, x1_2)), 0)
            else
                void* x0_4 = DomGetContext()
                DomGame* x19_1 = *(x0_4 + 8)
                int32_t x21_2 = *(x0_4 + 0x18)
                var_d00.q = ToCardRef(x19_1, zx.q(x20_1))
                var_78.q = 0
                var_19a8 = 0
                PlayCard(x19_1, zx.q(x21_2), &var_d00, &var_78, &var_19a8, 0)

return zx.q(x20_1)
