// 函数: sub_a5b800
// 地址: 0xa5b800
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x19 = zx.q(*arg2)

if ((IsLandscape(zx.q(x19.d)) & 1) == 0)
    int32_t* x8_2 = *(*(gCampaignData + 0x50)
        + ((zx.q(*(gCampaignData + 0x58)) & (zx.q(x19.d s>> 4) | x19)) << 3))
    
    if (x8_2 != 0)
        int32_t* x10_3 = x8_2
        
        while (true)
            if (*x10_3 == x19.d)
                uint64_t x9_4 = zx.q(x10_3[4])
                
                if (x9_4.d s>= 1)
                    int32_t* x11_1 = *(x10_3 + 8)
                    
                    if (*x11_1 == 0x32)
                        break
                    
                    int64_t x10_5 = 0
                    int32_t i
                    
                    do
                        if (x9_4 - 1 == x10_5)
                            goto label_a5b89c
                        
                        i = x11_1[1 + x10_5]
                        x10_5 += 1
                    while (i != 0x32)
                    
                    if (x10_5 u< x9_4)
                        break
            else
                x10_3 = *(x10_3 + 0x18)
                
                if (x10_3 != 0)
                    continue
            
        label_a5b89c:
            int32_t* x10_6 = x8_2
            
            while (true)
                if (*x10_6 != x19.d)
                    x10_6 = *(x10_6 + 0x18)
                    
                    if (x10_6 != 0)
                        continue
                    
                    goto label_a5b908
                
                uint64_t x9_6 = zx.q(x10_6[4])
                
                if (x9_6.d s< 1)
                label_a5b908:
                    
                    while (*x8_2 != x19.d)
                        x8_2 = *(x8_2 + 0x18)
                        
                        if (x8_2 == 0)
                            return 0
                    
                    uint64_t x9_8 = zx.q(x8_2[4])
                    
                    if (x9_8.d s< 1)
                        break
                    
                    int32_t* x10_9 = *(x8_2 + 8)
                    
                    if (*x10_9 != 0x4b)
                        uint64_t x8_4 = 0
                        int32_t i_1
                        
                        do
                            if (x9_8 - 1 == x8_4)
                                x8_4 = x9_8
                                break
                            
                            i_1 = x10_9[1 + x8_4]
                            x8_4 += 1
                        while (i_1 != 0x4b)
                        return zx.q(x8_4 u< x9_8 ? 1 : 0)
                else
                    int32_t* x11_3 = *(x10_6 + 8)
                    
                    if (*x11_3 != 1)
                        int64_t x10_8 = 0
                        int32_t i_2
                        
                        do
                            if (x9_6 - 1 == x10_8)
                                goto label_a5b908
                            
                            i_2 = x11_3[1 + x10_8]
                            x10_8 += 1
                        while (i_2 != 1)
                        
                        if (x10_8 u>= x9_6)
                            goto label_a5b908
                
                return 1
            
            break

return 0
