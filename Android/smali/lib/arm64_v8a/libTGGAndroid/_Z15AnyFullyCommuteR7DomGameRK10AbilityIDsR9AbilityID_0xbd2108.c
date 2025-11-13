// 函数: _Z15AnyFullyCommuteR7DomGameRK10AbilityIDsR9AbilityID
// 地址: 0xbd2108
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(arg2 + 0x400) s>= 1)
    int64_t x22_1 = 0
    
    while (true)
        uint64_t x1 = zx.q(*(arg2 + (x22_1 << 2)))
        
        if ((x1 & 0x30) == 0)
            void* x0_2 = AbilityGetRegistered(arg1, x1)
            
            if (*(x0_2 + 0x4c) != 2 || (zx.d(*(x0_2 + 0x70)) & 1) == 0)
            label_bd218c:
                int32_t x24_1
                
                if (*(arg2 + 0x400) s>= 1)
                    int64_t x23_1 = 0
                    x24_1 = 1
                    
                    while (true)
                        if (x22_1 != x23_1)
                            int32_t x0_4 = AbilitiesCommute(arg1, zx.q(*(arg2 + (x22_1 << 2))), 
                                zx.q(*(arg2 + (x23_1 << 2))))
                            
                            if (x0_4 == 0 || x0_4 == 3)
                                x23_1 += 1
                                x24_1 = 0
                                
                                if (x23_1 s>= sx.q(*(arg2 + 0x400)))
                                    goto label_bd2140
                                
                                continue
                        
                        x23_1 += 1
                        
                        if (x23_1 s>= sx.q(*(arg2 + 0x400)))
                            break
                
                if (*(arg2 + 0x400) s< 1 || (x24_1 & 1) != 0)
                    *arg3 = *(arg2 + (x22_1 << 2))
                    return 1
        else if ((zx.d(*(AbilityGetStatic(arg1, x1) + 0xb4)) & 1) == 0)
            goto label_bd218c
        
    label_bd2140:
        x22_1 += 1
        
        if (x22_1 s>= sx.q(*(arg2 + 0x400)))
            break

return 0
