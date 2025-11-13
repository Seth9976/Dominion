// 函数: _Z12CalcDropSlot8DomWhereR6DomGfxRK4Vec2
// 地址: 0xb921a0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x12 = zx.q(*(gDomClient + 0x205e8))

if (x12.d != 0)
    void* i_1 = *(gDomClient + 0x205e0)
    int32_t x8_1 = arg1
    int64_t x12_1 = i_1 + x12 * 0x21d8
    void* i = i_1
    
    do
        if (zx.d(*(i + 0x21d2)) != 0)
            if (i != 0xffffffff)
                int32_t x19_1 = 0
                
                do
                    if (*(i + 0x2c) == 0 && *(i + 0xa0) == *(arg2 + 0xa0) && *(i + 0xa4) == x8_1
                            && *(i + 0xc8)
                            == *(i_1 + zx.q(*(gDomClient + 0x1f8e4)) * 0x21d8 + 0x60))
                        x19_1 += 1
                    
                    if (i == 0)
                        i = i_1
                    else
                        i += 0x21d8
                    
                    if (i u>= x12_1)
                        break
                    
                    while (zx.d(*(i + 0x21d2)) == 0)
                        i += 0x21d8
                        
                        if (i u>= x12_1)
                            goto label_b92294
                while (i != 0xffffffff)
                
            label_b92294:
                
                if (x19_1 != 0)
                    float var_ca0
                    CalcDropSlotPoitions(&var_ca0, zx.q(x8_1), arg3, x19_1)
                    int32_t x8_2 = x19_1 - 1
                    
                    if (x19_1 s< 1)
                        x8_2 = 0
                    else
                        int32_t v0_1 = *arg3
                        int32_t x9_1
                        int32_t x10_2
                        
                        if (var_ca0 f<= v0_1)
                            uint64_t x9_2 = zx.q(x19_1)
                            int64_t x10_3 = 0
                            int64_t x13_1
                            float v1_1
                            
                            do
                                if (x9_2 - 1 == x10_3)
                                    return zx.q(x19_1 + not.d(x8_2))
                                
                                int32_t var_c9c[0x31f]
                                v1_1 = var_c9c[x10_3]
                                x13_1 = x10_3 + 1
                                x10_3 = x13_1
                            while (v1_1 f<= v0_1)
                            x9_1 = x13_1 u< x9_2 ? 1 : 0
                            
                            if (x13_1.d == 0)
                                x10_2 = 0
                            else
                                x10_2 = x13_1.d - 1
                        else
                            x10_2 = 0
                            x9_1 = 1
                        
                        if (x9_1 != 0)
                            x8_2 = x10_2
                    
                    return zx.q(x19_1 + not.d(x8_2))
            
            break
        
        i += 0x21d8
    while (i u< x12_1)

return 0
