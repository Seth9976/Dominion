// 函数: sub_9fdb9c
// 地址: 0x9fdb9c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (zx.d(*(sx.q(*(arg2 + 0xb4)) * 0x84 + 0x14a76cc)) == 0)
    int32_t x22_1 = *(arg3 + 0x58)
    int32_t x8_7 = *(arg3 + 0x5c)
    uint64_t x23_1 = zx.q(*(arg3 + 0x60))
    
    if (x8_7 == 3)
        x23_1 = zx.q(AbilitySourceCard(arg1, x23_1))
        
        if (*(arg2 + 0xd8) s>= 1)
        label_9fdd80:
            int64_t x28_1 = 0
            int64_t fp_1 = 0
            
            while (true)
                DomYield var_d80
                YldCopy(&var_d80, arg3)
                sub_9f5644(arg1, &var_d80, *(arg2 + 0xd0) + x28_1)
                uint64_t x8_19 = zx.q(*(arg3 + 4) - 1)
                int32_t var_d0c
                int32_t var_d08
                uint64_t x0_2
                uint64_t x1_1
                uint64_t x2
                CardID* x3_1
                uint64_t x4_1
                DomOKTypeEnum* x5_1
                uint64_t x6_1
                uint64_t x7_1
                int32_t v0_1
                
                if (x8_19.d u<= 8)
                    switch (x8_19)
                        case 0
                            x0_2 = zx.q(*(arg2 + 0xb4))
                            x2 = zx.q(*(arg3 + 0x48))
                            x4_1 = zx.q(var_d0c)
                            char var_1a18_3 = 0
                        label_9fde8c:
                            int32_t var_1a20_3 = x23_1.d
                            int32_t var_1a28_3 = 0
                        label_9fe01c:
                            x1_1 = zx.q(x22_1)
                            x3_1 = &var_d08
                            int32_t var_1a30_5 = 0
                            goto label_9fe028
                        case 1
                            x0_2 = zx.q(*(arg2 + 0xb4))
                            x2 = zx.q(*(arg3 + 0x48))
                            x4_1 = zx.q(var_d0c)
                            char var_1a18_4 = 1
                            goto label_9fde8c
                        case 2
                            x4_1 = zx.q(var_d0c)
                            x0_2 = zx.q(*(arg2 + 0xb4))
                            x2 = zx.q(*(arg3 + 0x48))
                            int32_t var_78
                            int32_t x8_23
                            
                            switch (var_78)
                                case 2
                                    x8_23 = 1
                                    goto label_9fe010
                                case 0x3ea
                                    x8_23 = 7
                                    goto label_9fe010
                                case 0x3eb
                                    x8_23 = 8
                                    goto label_9fe010
                                case 0x3ec
                                    x8_23 = 9
                                label_9fe010:
                                    char var_1a18_7 = 0
                                    int32_t var_1a20_6 = x23_1.d
                                    int32_t var_1a28_6 = x8_23
                                    goto label_9fe01c
                                case 0x452
                                    x8_23 = 0xb
                                    goto label_9fe010
                                case 0x475
                                    x8_23 = 0x14
                                    goto label_9fe010
                        case 3
                            x0_2 = zx.q(*(arg2 + 0xb4))
                            x2 = zx.q(*(arg3 + 0x48))
                            x6_1 = zx.q(var_d0c)
                            char var_1a18_5 = 0
                            int32_t var_1a20_4 = x23_1.d
                            int32_t var_1a28_4 = 0
                            int32_t var_1a30_3 = 0
                            x1_1 = zx.q(x22_1)
                            x3_1 = nullptr
                            x4_1 = 0
                            x5_1 = &var_d08
                            x7_1 = 0
                        label_9fddd4:
                            v0_1 = ComputePolicy(x0_2, x1_1, x2, x3_1, x4_1, x5_1, x6_1, x7_1)
                        label_9fdddc:
                            fp_1 += 1
                            *(*(arg2 + 0xd0) + x28_1 + 0x54) = v0_1
                            x28_1 += 0x70
                            
                            if (fp_1 s>= sx.q(*(arg2 + 0xd8)))
                                break
                            
                            continue
                        case 4, 8
                            x0_2 = zx.q(*(arg2 + 0xb4))
                            x2 = zx.q(*(arg3 + 0x48))
                            char var_1a18_2 = 0
                            int32_t var_1a20_2 = x23_1.d
                            int32_t var_1a28_2 = 0
                            int32_t var_1a30_2 = var_d0c + 1
                            x1_1 = zx.q(x22_1)
                            x3_1 = nullptr
                            x4_1 = 0
                        label_9fe028:
                            x5_1 = nullptr
                            x6_1 = 0
                            x7_1 = 0
                            goto label_9fddd4
                        case 5
                            CardID var_1a00
                            int32_t x25_1
                            int32_t x26_1
                            
                            if (var_d0c s< 1)
                                x26_1 = 0
                                x25_1 = 0
                            else
                                int32_t x0_6 = AbilitySource(arg1, zx.q(var_d08))
                                uint64_t x27_1 = zx.q(var_d08)
                                x25_1 = x0_6
                                int32_t var_d2c
                                int32_t x0_8 =
                                    AbilityGetAssociatedCards(arg1, zx.q(var_d2c), x27_1, &var_1a00)
                                x26_1 = x0_8
                                
                                if (x0_8 s<= 0 && AbilitySource(arg1, x27_1) == 0x1121)
                                    x26_1 = CardsAtCard(arg1, zx.q(AbilitySourceCard(arg1, x27_1)), 
                                        &var_1a00)
                            
                            char var_1a18_6 = 0
                            int32_t var_1a20_5 = x23_1.d
                            int32_t var_1a28_5 = 0
                            int32_t var_1a30_4 = 0
                            v0_1 = ComputePolicy(zx.q(*(arg2 + 0xb4)), zx.q(x22_1), 
                                zx.q(*(arg3 + 0x48)), &var_1a00, zx.q(x26_1), nullptr, 0, 
                                zx.q(x25_1))
                            goto label_9fdddc
                        case 6, 7
                            x0_2 = zx.q(*(arg2 + 0xb4))
                            x2 = zx.q(*(arg3 + 0x48))
                            
                            if (var_d0c s> 0)
                                x7_1 = zx.q(var_d08)
                            else
                                x7_1 = 0
                            
                            x1_1 = zx.q(x22_1)
                            x3_1 = nullptr
                            x4_1 = 0
                            x5_1 = nullptr
                            x6_1 = 0
                            char var_1a18_1 = 0
                            int32_t var_1a20_1 = x23_1.d
                            int32_t var_1a28_1 = 0
                            int32_t var_1a30_1 = 0
                            goto label_9fddd4
                pthread_kill(pthread_self(), 6)
                DomGame* x0_19
                int64_t x1_11
                int64_t x2_6
                float v0_2
                x0_19, x1_11, x2_6, v0_2 = XNoReturn()
                return MCTS_AdjustPriors(x0_19, x1_11, x2_6, v0_2) __tailcall
    else
        if (x8_7 != 2)
            x23_1 = 0
        
        if (*(arg2 + 0xd8) s>= 1)
            goto label_9fdd80
else
    int32_t x8_3 = *(arg3 + 0x48)
    
    if (x8_3 != 2)
    label_9fdc30:
        
        if (x8_3 != 1)
        label_9fdcb0:
            
            if (x8_3 != 0x2d)
            label_9fdcfc:
                
                if (x8_3 == 0x18)
                    int32_t x10_7 = *(arg2 + 0xd8)
                    
                    if (x10_7 s>= 1)
                        int64_t x8_11 = 0
                        int64_t i = 0
                        
                        do
                            void* x12_4 = *(arg2 + 0xd0) + x8_11
                            
                            if (*(x12_4 + 0x18) == 0)
                                *(x12_4 + 0x54) = *(x12_4 + 0x54) + float.s(0x3dcccccd)
                                x10_7 = *(arg2 + 0xd8)
                            
                            i += 1
                            x8_11 += 0x70
                        while (i s< sx.q(x10_7))
            else if (*(arg2 + 0xd8) s>= 1)
                int64_t x8_10 = 0
                int64_t i_1 = 0
                
                do
                    i_1 += 1
                    void* x10_5 = *(arg2 + 0xd0) + x8_10
                    x8_10 += 0x70
                    *(x10_5 + 0x54) = float.s(**(x10_5 + 0x10))
                while (i_1 s< sx.q(*(arg2 + 0xd8)))
                
                x8_3 = *(arg3 + 0x48)
                goto label_9fdcfc
        else
            int32_t x8_6 = *(arg2 + 0xd8)
            
            if (x8_6 s>= 1)
                int64_t x9_1 = 0
                int64_t i_2 = 0
                
                do
                    void* x12_2 = *(arg2 + 0xd0) + x9_1
                    
                    if (*(x12_2 + 0x18) == 0)
                        *(x12_2 + 0x54) = 0xbf800000
                        x8_6 = *(arg2 + 0xd8)
                    
                    i_2 += 1
                    x9_1 += 0x70
                while (i_2 s< sx.q(x8_6))
                
                x8_3 = *(arg3 + 0x48)
                goto label_9fdcb0
    else if (*(arg2 + 0xd8) s>= 1)
        int64_t x8_5 = 0
        int64_t i_3 = 0
        
        do
            i_3 += 1
            void* x10_2 = *(arg2 + 0xd0) + x8_5
            x8_5 += 0x70
            *(x10_2 + 0x54) = float.s(*(x10_2 + 0x18))
        while (i_3 s< sx.q(*(arg2 + 0xd8)))
        
        x8_3 = *(arg3 + 0x48)
        goto label_9fdc30

return sub_a0a3d0(arg1, arg2, arg3)
