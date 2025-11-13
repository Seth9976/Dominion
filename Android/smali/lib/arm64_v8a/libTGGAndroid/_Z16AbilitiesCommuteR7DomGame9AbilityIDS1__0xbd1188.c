// 函数: _Z16AbilitiesCommuteR7DomGame9AbilityIDS1_
// 地址: 0xbd1188
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x21 = arg2 & 0xffffffff
int64_t x22 = arg3
int32_t x20
int32_t x8_1

if ((arg2 & 0x30) == 0)
    x8_1 = *(AbilityGetRegistered(arg1, x21) + 0x94)
    x20 = 1
    
    if (x8_1 != 0x38)
    label_bd11ec:
        
        if (x8_1 != 0x44)
            int64_t x22_1 = x22 & 0xffffffff
            int32_t x8_4
            
            if ((x22 & 0x30) == 0)
                x8_4 = *(AbilityGetRegistered(arg1, x22_1) + 0x94)
                x20 = 1
                
                if (x8_4 != 0x38)
                label_bd123c:
                    
                    if (x8_4 != 0x44)
                        if ((SingleAbilityDontCommuteCheck(arg1, x21, x22_1) & 1) != 0)
                            x20 = 0
                        else if (AbilityCommutesWithSelf(arg1, x21, x22_1) != 1)
                            if (AbilityCommutesWithSelf(arg1, x21, x22_1) != 2)
                                int32_t var_b4[0x19]
                                int32_t x0_13 = GetCharacteristics(arg1, x21, &var_b4)
                                AbilityCharacteristic var_118
                                DomGame* x0_15 = GetCharacteristics(arg1, x22_1, &var_118)
                                x20 = 0
                                
                                if (x0_13 != 0 && x0_15.d != 0)
                                    x20 = 1
                                    
                                    if (x0_13 s>= 1 && x0_15.d s>= 1)
                                        int64_t x22_2 = 0
                                        uint64_t x23_1 = zx.q(x0_15.d)
                                        x20 = 1
                                    label_bd131c:
                                        int32_t x19_1 = var_b4[x22_2]
                                        AbilityCharacteristic* x25_1 = &var_118
                                        uint64_t x26_1 = x23_1
                                        
                                        while (true)
                                            x0_15 = AbilityCharacterticsCommute(x0_15, zx.q(x19_1), 
                                                zx.q(*x25_1))
                                            
                                            if (x0_15.d - 2 u< 2)
                                                bool z_1
                                                
                                                if (x20 != x0_15.d)
                                                    z_1 = x20 == 1
                                                else
                                                    z_1 = true
                                                
                                                if (z_1)
                                                    x20 = x0_15.d
                                            else if (x0_15.d != 1)
                                                if (x0_15.d == 0)
                                                    x20 = x0_15.d
                                                    break
                                                
                                                pthread_kill(pthread_self(), 6)
                                                DomGame* x0_17
                                                int64_t x1_8
                                                int64_t x2_6
                                                x0_17, x1_8, x2_6 = XNoReturn()
                                                return AbilitiesCommute_Old(x0_17, x1_8, x2_6)
                                                    __tailcall
                                            
                                            uint64_t temp0_1 = x26_1
                                            x26_1 -= 1
                                            x25_1 += 4
                                            
                                            if (temp0_1 == 1)
                                                x22_2 += 1
                                                
                                                if (x22_2 == zx.q(x0_13))
                                                    goto label_bd12b0
                                                
                                                goto label_bd131c
                            else
                                x20 = 0
                        else
                            x20 = 1
            else
                x8_4 = *(AbilityGetStatic(arg1, x22_1) + 0xb8)
                x20 = 1
                
                if (x8_4 != 0x38)
                    goto label_bd123c
else
    x8_1 = *(AbilityGetStatic(arg1, x21) + 0xb8)
    x20 = 1
    
    if (x8_1 != 0x38)
        goto label_bd11ec
label_bd12b0:
return zx.q(x20)
