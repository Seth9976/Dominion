// 函数: _Z21Stamp_Discounted_Testv
// 地址: 0xa3bfbc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8 = zx.q(*(gCampaignSetup + 0x19ac))

if (x8.d != 0)
    int32_t* x9_2 = *(*(gCampaignData + 0x50)
        + ((zx.q(*(gCampaignData + 0x58)) & (zx.q(x8.d s>> 4) | x8)) << 3))
    
    if (x9_2 != 0)
        int32_t* x11_3 = x9_2
        
        while (true)
            if (*x11_3 != x8.d)
                x11_3 = *(x11_3 + 0x18)
                
                if (x11_3 != 0)
                    continue
                
                goto label_a3c054
            
            uint64_t x10_4 = zx.q(x11_3[4])
            
            if (x10_4.d s< 1)
            label_a3c054:
                int32_t* x11_6 = x9_2
                
                while (*x11_6 != x8.d)
                    x11_6 = *(x11_6 + 0x18)
                    
                    if (x11_6 == 0)
                        return 1
                
                uint64_t x10_6 = zx.q(x11_6[4])
                
                if (x10_6.d s< 1)
                    break
                
                int32_t* x12_3 = *(x11_6 + 8)
                
                if (*x12_3 != 3)
                    int64_t x11_8 = 0
                    int32_t i
                    
                    do
                        if (x10_6 - 1 == x11_8)
                            return 1
                        
                        i = x12_3[1 + x11_8]
                        x11_8 += 1
                    while (i != 3)
                    
                    if (x11_8 u>= x10_6)
                        break
                
                while (*x9_2 != x8.d)
                    x9_2 = *(x9_2 + 0x18)
                    
                    if (x9_2 == 0)
                        return 0
                
                uint64_t x8_1 = zx.q(x9_2[4])
                
                if (x8_1.d s>= 1)
                    int32_t* x10_8 = *(x9_2 + 8)
                    
                    if (*x10_8 == 0x59)
                        break
                    
                    int64_t x9_4 = 0
                    int32_t i_1
                    
                    do
                        if (x8_1 - 1 == x9_4)
                            return 0
                        
                        i_1 = x10_8[1 + x9_4]
                        x9_4 += 1
                    while (i_1 != 0x59)
                    
                    if (x9_4 u< x8_1)
                        break
            else
                int32_t* x12_1 = *(x11_3 + 8)
                
                if (*x12_1 != 0x4f)
                    int64_t x11_5 = 0
                    int32_t i_2
                    
                    do
                        if (x10_4 - 1 == x11_5)
                            goto label_a3c054
                        
                        i_2 = x12_1[1 + x11_5]
                        x11_5 += 1
                    while (i_2 != 0x4f)
                    
                    if (x11_5 u>= x10_4)
                        goto label_a3c054
            
            return 0

return 1
