// 函数: _Z19ChooseCardsDistinctRK7CardIDsii14ActiveSetStyle15DomChoiceUIType15DomChoiceAIHint
// 地址: 0xae1c80
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

DomGame* x26 = *(DomGetContext() + 8)
int32_t var_d30 = 0
int64_t x8 = sx.q(*(arg1 + 0xc80))
int64_t entry_x8

if (x8.d != 0)
    CardIDs const& i = arg1
    int32_t var_19b0[0x254]
    
    do
        int32_t x27_1 = *i
        int32_t x0_4 = CardWhat(*(DomGetContext() + 8), zx.q(x27_1))
        int64_t x8_1 = sx.q(var_d30)
        
        if (x8_1.d != 0)
            int32_t (* x22_1)[0x254] = &var_19b0
            int64_t j_1 = x8_1 << 2
            int64_t j
            
            do
                uint64_t x1_1 = zx.q(*x22_1)
                x22_1 = &(*x22_1)[1]
                
                if (CardWhat(x26, x1_1) == x0_4)
                    goto label_ae1d08
                
                j = j_1
                j_1 -= 4
            while (j != 4)
            x8_1 = zx.q(var_d30)
        
        GameAssert((x8_1.d s< 0x320 ? 1 : 0).b)
        int64_t x8_2 = sx.q(var_d30)
        var_d30 = x8_2.d + 1
        var_19b0[x8_2] = x27_1
    label_ae1d08:
        i += 4
    while (i != arg1 + (x8 << 2))
    
    if (var_d30 != 0)
        int32_t x19_1 = *(arg1 + 0xc80)
        int32_t x25_1
        
        x25_1 = var_d30 s< arg3 ? var_d30 : arg3
        
        int32_t x24_1
        
        x24_1 = var_d30 s< arg2 ? var_d30 : arg2
        
        int32_t* x0_7 = DomGetContext()
        int32_t var_98 = arg5
        int32_t var_94_1 = 0
        CardIDs const& var_90_1 = arg1
        int64_t var_88_1 = 0
        int32_t var_80_1 = x19_1
        int64_t var_7c
        __builtin_memset(&var_7c, 0, 0x1c)
        int64_t var_74 = *(x0_7 + 0x40)
        CardID var_d20
        memcpy(&var_d20, &var_19b0, 0xc84)
        DomGame* x0_9 = *(x0_7 + 8)
        int32_t var_d28 = *x0_7
        int32_t var_d24_1 = x0_7[7]
        int32_t var_19e0_1 = 0
        int32_t var_19e8_1 = 0
        int32_t var_19f0_1 = arg6
        int32_t* var_19f8_1 = &var_98
        int32_t var_1a00_1 = arg4
        int32_t var_a0
        int32_t var_a0_1 = QueueChoiceCards(x0_9, &var_d28, zx.q(x0_7[6]), 1, &var_d20, 
            zx.q(var_a0), zx.q(x25_1), zx.q(x24_1))
        return memcpy(entry_x8, &var_d20, 0xc84)

return memset(entry_x8, 0, 0xc84)
