// 函数: sub_a58f48
// 地址: 0xa58f48
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x19 = zx.q(*arg2)

if ((IsLandscape(zx.q(x19.d)) & 1) == 0)
    uint64_t x8_2 = zx.q(**(arg1 + 8))
    
    if (x8_2.d s>= 1)
        int32_t* i_2 = *(*(gCampaignData + 0x50)
            + ((zx.q(*(gCampaignData + 0x58)) & (zx.q(x19.d s>> 4) | x19)) << 3))
        
        if (i_2 != 0)
            int64_t x10_4 = **(arg1 + 0x10)
            
            if (x19.d != 0xd0d)
                int64_t x11_4 = 0
                
                do
                    int32_t x12_2 = *(x10_4 + (x11_4 << 2))
                    int32_t* i = i_2
                    
                    do
                        if (*i == x19.d)
                            uint64_t x13_4 = zx.q(i[4])
                            
                            if (x13_4.d s< 1)
                                goto label_a59040
                            
                            int32_t* x15_3 = *(i + 8)
                            
                            if (*x15_3 == x12_2)
                                goto label_a590c0_1
                            
                            int64_t x14_4 = 0
                            int32_t x17_2
                            
                            do
                                if (x13_4 - 1 == x14_4)
                                    goto label_a59040
                                
                                x17_2 = x15_3[1 + x14_4]
                                x14_4 += 1
                            while (x17_2 != x12_2)
                            
                            if (x14_4 u>= x13_4)
                                goto label_a59040
                            
                            goto label_a590c0_1
                        
                        i = *(i + 0x18)
                    while (i != 0)
                    
                label_a59040:
                    x11_4 += 1
                while (x11_4 != x8_2)
            else
                int64_t x11_3 = 0
                
                do
                    int32_t x12_1 = *(x10_4 + (x11_3 << 2))
                    int32_t* i_1 = i_2
                    
                    do
                        if (*i_1 == 0xd0d)
                            uint64_t x13_2 = zx.q(i_1[4])
                            
                            if (x13_2.d s>= 1)
                                int32_t* x15_1 = *(i_1 + 8)
                                
                                if (*x15_1 != x12_1)
                                    int64_t x14_2 = 0
                                    int32_t x17_1
                                    
                                    do
                                        if (x13_2 - 1 == x14_2)
                                            goto label_a58fb8
                                        
                                        x17_1 = x15_1[1 + x14_2]
                                        x14_2 += 1
                                    while (x17_1 != x12_1)
                                    
                                    if (x12_1 != 0xe && x14_2 u< x13_2)
                                    label_a590c0:
                                        return 1
                                else if (x12_1 != 0xe)
                                label_a590c0_1:
                                    return 1
                            
                            break
                        
                        i_1 = *(i_1 + 0x18)
                    while (i_1 != 0)
                    
                label_a58fb8:
                    x11_3 += 1
                while (x11_3 != x8_2)

return 0
