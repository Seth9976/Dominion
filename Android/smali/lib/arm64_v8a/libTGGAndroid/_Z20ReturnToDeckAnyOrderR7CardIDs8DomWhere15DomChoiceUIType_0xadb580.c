// 函数: _Z20ReturnToDeckAnyOrderR7CardIDs8DomWhere15DomChoiceUIType
// 地址: 0xadb580
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8 = *(arg1 + 0xc80)

if (x8 != 0)
    CardIDs& x19_1 = arg1
    int32_t x20_1 = arg2
    
    if (x8 == 1)
        int64_t i = 0
        
        do
            MoveToTopDeck(zx.q(*(x19_1 + (i << 2))), zx.q(x20_1), 0xb)
            i += 1
        while (i s< sx.q(*(x19_1 + 0xc80)))
    
    arg1 = CardWhat(*(DomGetContext() + 8), zx.q(*x19_1))
    int64_t x8_2 = zx.q(*(x19_1 + 0xc80))
    
    if (x8_2.d s> 1)
        int64_t x24_1 = 1
        
        do
            if ((CardIs(*(DomGetContext() + 8), zx.q(*(x19_1 + (x24_1 << 2))), zx.q(arg1.d)).d & 1)
                    == 0)
                int64_t x8_4 = zx.q(*(x19_1 + 0xc80))
                
                if (x20_1 != 0x3ee && x8_4.d s>= 1)
                    int64_t x24_2 = 0
                    
                    do
                        int32_t x22_3 = *(x19_1 + (x24_2 << 2))
                        void* x0_6 = DomGetContext()
                        int32_t x0_8 = CardOwner(*(x0_6 + 8), zx.q(x22_3))
                        int32_t var_98_1 = 0
                        int32_t var_a0
                        var_a0.q = 0
                        int32_t var_a8_1 = 0
                        int32_t var_b0_1 = 0
                        int64_t var_b8
                        var_b8.d = *(x0_6 + 0x48)
                        int32_t var_c0
                        var_c0.q = *(x0_6 + 0x40)
                        MoveCardTo(*(x0_6 + 8), zx.q(x0_8), zx.q(x22_3), zx.q(x20_1), 0xb, 0x3ee, 
                            0, 0)
                        x8_4 = sx.q(*(x19_1 + 0xc80))
                        x24_2 += 1
                    while (x24_2 s< x8_4)
                
                int64_t var_88_1 = 0
                
                if (x8_4.d != 0)
                    int32_t* x0_10
                    int128_t v0_1
                    x0_10, v0_1 = DomGetContext()
                    int32_t var_78 = arg3
                    int128_t var_74_1 = 0.o
                    int64_t var_64
                    __builtin_memset(&var_64, 0, 0x24)
                    int64_t var_54 = *(x0_10 + 0x40)
                    uint64_t x2_2 = zx.q(x0_10[6])
                    int32_t x9_2 = x0_10[7]
                    DomGame* x8_7 = *(x0_10 + 8)
                    int32_t var_38 = *x0_10
                    int32_t var_34_1 = x9_2
                    uint64_t x5_1 = zx.q(*(x19_1 + 0xc80))
                    int32_t var_a0_1 = 0
                    int32_t var_a8_2 = 4
                    int32_t var_b0_2 = 0x38
                    int32_t* var_b8_1 = &var_78
                    int32_t var_c0_1 = 0
                    QueueChoiceCards(x8_7, &var_38, x2_2, 2, x19_1, x5_1, zx.q(x5_1.d), 
                        zx.q(x5_1.d))
                    
                    if (*(x19_1 + 0xc80) s>= 1)
                        int64_t i_1 = 0
                        
                        do
                            int32_t x20_2 = *(x19_1 + (i_1 << 2))
                            void* x0_12 = DomGetContext()
                            int32_t x0_14 = CardOwner(*(x0_12 + 8), zx.q(x20_2))
                            int32_t var_98_2 = 0
                            var_a0_1.q = 0
                            int32_t var_a8_3 = 0
                            int32_t var_b0_3 = 0
                            var_b8_1.d = *(x0_12 + 0x48)
                            var_c0_1.q = *(x0_12 + 0x40)
                            MoveCardTo(*(x0_12 + 8), zx.q(x0_14), zx.q(x20_2), 0x3ee, 0xb, 0x3eb, 
                                2, 0)
                            i_1 += 1
                        while (i_1 s< sx.q(*(x19_1 + 0xc80)))
                
                goto label_adb668
            
            x8_2 = sx.q(*(x19_1 + 0xc80))
            x24_1 += 1
        while (x24_1 s< x8_2)
    
    if (x8_2.d s>= 1)
        int64_t i_2 = 0
        
        do
            MoveToTopDeck(zx.q(*(x19_1 + (i_2 << 2))), zx.q(x20_1), 0xb)
            i_2 += 1
        while (i_2 s< sx.q(*(x19_1 + 0xc80)))

label_adb668:
