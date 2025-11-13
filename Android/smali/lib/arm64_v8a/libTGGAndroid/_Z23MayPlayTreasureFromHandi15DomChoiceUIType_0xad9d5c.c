// 函数: _Z23MayPlayTreasureFromHandi15DomChoiceUIType
// 地址: 0xad9d5c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

GetPlayableFromHand(2, 0)
int64_t var_19a0 = 0
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
    int32_t var_78 = arg2
    int128_t var_74_1 = 0.o
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
            PlayCard(zx.q(x20_1), arg1, zx.q(ThisCard(false, x1_2)), 0)

return zx.q(x20_1)
