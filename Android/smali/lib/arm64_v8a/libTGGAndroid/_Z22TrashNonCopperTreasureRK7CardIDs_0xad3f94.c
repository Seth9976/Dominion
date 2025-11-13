// 函数: _Z22TrashNonCopperTreasureRK7CardIDs
// 地址: 0xad3f94
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

CardIDs const& x21 = arg1
int32_t* x0 = DomGetContext()
CardID* entry_x8
int64_t result = memset(entry_x8, 0, 0xc84)
int64_t x8 = sx.q(*(x21 + 0xc80))

if (x8.d != 0)
    int64_t i_1 = x8 << 2
    int64_t i
    
    do
        int32_t x22_1 = *x21
        result = CardIs(*(DomGetContext() + 8), zx.q(x22_1), 2)
        
        if ((result.d & 1) != 0)
            result = CardIs(*(DomGetContext() + 8), zx.q(x22_1), 0x104)
            
            if ((result.d & 1) == 0)
                result = GameAssert((*(entry_x8 + 0xc80) s< 0x320 ? 1 : 0).b)
                int64_t x8_2 = sx.q(*(entry_x8 + 0xc80))
                *(entry_x8 + 0xc80) = x8_2.d + 1
                *(entry_x8 + (x8_2 << 2)) = x22_1
        
        i = i_1
        i_1 -= 4
        x21 += 4
    while (i != 4)
    uint64_t x5_1 = zx.q(*(entry_x8 + 0xc80))
    
    if (x5_1.d s> 1)
        uint64_t x2_1 = zx.q(x0[6])
        int32_t x8_3 = x0[7]
        DomGame* x0_7 = *(x0 + 8)
        int32_t var_38 = *x0
        int32_t var_34_1 = x8_3
        int128_t var_70
        __builtin_memset(&var_70, 0, 0x20)
        var_70.d = 0x12
        int128_t var_60
        __builtin_memset(&var_60:0xc, 0, 0x1c)
        int32_t var_80_1 = 0
        int32_t var_88_1 = 0
        int32_t var_90_1 = 0
        int128_t* var_98_1 = &var_70
        int32_t var_a0_1 = 9
        result = GameAssert((QueueChoiceCards(x0_7, &var_38, x2_1, 1, entry_x8, x5_1, 1, 1) == 1 ? 1
            : 0).b)
        *(entry_x8 + 0xc80) = 1

return result
