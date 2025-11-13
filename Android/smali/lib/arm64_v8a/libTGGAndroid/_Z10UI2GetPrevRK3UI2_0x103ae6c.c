// 函数: _Z10UI2GetPrevRK3UI2
// 地址: 0x103ae6c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x10 = zx.q(*(gUI2 + 8))

if (x10.d != 0)
    void* x8_1 = *gUI2
    int32_t x9_1 = *(arg1 + 0x19a0)
    int64_t x10_1 = x8_1 + x10 * 0x19a8
    void* x12_1 = x8_1
    
    while (true)
        if (zx.d(*(x12_1 + 0x19a2)) == 0)
            x12_1 += 0x19a8
            
            if (x12_1 u>= x10_1)
                break
        else
            int32_t x13_2 = *(x12_1 + 0x1970)
            
            if (x13_2 != 0)
                int32_t x14_1 = *(x12_1 + 0x1870)
                int32_t x16_3
                
                if (x14_1 == x9_1)
                    x16_3 = 0
                else
                    uint64_t x15_1 = 0
                    int32_t x17_1
                    
                    do
                        if (x13_2 == x15_1.d + 1)
                            goto label_103aef8
                        
                        x15_1 = zx.q(x15_1.d + 1)
                        x17_1 = *(x12_1 + (x15_1 << 0x20 s>> 0x1e) + 0x1870)
                        x16_3 = x14_1
                        x14_1 = x17_1
                    while (x17_1 != x9_1)
                
                if (x16_3 != 0)
                    return x8_1 + mulu.dp.d(x16_3 & 0xffff, 0x19a8)
                
                break
            
        label_103aef8:
            
            if (x12_1 == 0)
                x12_1 = x8_1
            else
                x12_1 += 0x19a8
            
            if (x12_1 u>= x10_1)
                break

return 0
