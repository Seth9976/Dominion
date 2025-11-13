// 函数: _Z24FilterTriggeredAbilitiesR7DomGameR10AbilityIDsRKS1_9AbilityID
// 地址: 0xbd8914
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(arg2 + 0x400) s< 1)
    return 

DomGame& x22_1 = arg1
int32_t x23_1 = 0

while (true)
    if (*(arg3 + 0x400) s>= 1)
        int64_t x27_1 = 0
        int64_t x26_1 = sx.q(x23_1)
        
        while (true)
            arg1 = AbilityCanTriggerMultipleTimes(x22_1, zx.q(*(arg2 + (x26_1 << 2))))
            
            if (arg1.d u> 5)
                pthread_kill(pthread_self(), 6)
                DomGame* x0_3
                AbilityIDs* x1_2
                int64_t x2_1
                x0_3, x1_2, x2_1 = XNoReturn()
                return MarkAbilityTriggered(x0_3, x1_2, x2_1) __tailcall
            
            switch (arg1.d)
                case 0, 3
                    if ((AbilitiesAreSameTypeCardTarget(x22_1, zx.q(*(arg2 + (x26_1 << 2))), 
                            zx.q(*(arg3 + (x27_1 << 2)))).d & 1) == 0)
                        goto label_bd89b4
                    
                label_bd8960:
                    x23_1 -= 1
                    int64_t x8_2 = sx.q(*(arg2 + 0x400)) - 1
                    *(arg2 + 0x400) = x8_2.d
                    *(arg2 + (x26_1 << 2)) = *(arg2 + (x8_2 << 2))
                    break
                case 1, 2
                    int32_t x9_2 = *(arg2 + (x26_1 << 2))
                    int32_t x8_8 = *(arg3 + (x27_1 << 2))
                    int32_t x10_2 = x8_8 & 0x30
                    
                    if ((x9_2 & 0x30) == 0)
                        if ((x8_8 ^ x9_2) u> 0x3f || x10_2 != 0)
                            goto label_bd89b4
                        
                        goto label_bd8960
                    
                    if (x10_2 == 0)
                        goto label_bd89b4
                    
                    int32_t x10_3 = x8_8 ^ x9_2
                    
                    if ((x10_3 & 0x3ffcf) != 0)
                        goto label_bd89b4
                    
                    if (x9_2 == x8_8)
                        goto label_bd8960
                    
                    int32_t x9_3 = x9_2 u>> 4 & 3
                    
                    if (x9_3 == 3 || x10_3 u>> 0x12 != 0 || x9_3 == 2 || (x8_8 & 0x20) != 0)
                        goto label_bd89b4
                    
                    goto label_bd8960
                case 4
                label_bd89b4:
                    x27_1 += 1
                    
                    if (x27_1 s>= sx.q(*(arg3 + 0x400)))
                        break
                    
                    continue
                case 5
                    int32_t x8_9 = *(arg2 + (x26_1 << 2))
                    
                    if (x8_9 == arg4 || x8_9 != *(arg3 + (x27_1 << 2)))
                        goto label_bd89b4
                    
                    goto label_bd8960
    
    x23_1 += 1
    
    if (x23_1 s>= *(arg2 + 0x400))
        break
