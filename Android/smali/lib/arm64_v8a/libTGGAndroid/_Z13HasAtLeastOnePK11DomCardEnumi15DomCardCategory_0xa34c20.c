// 函数: _Z13HasAtLeastOnePK11DomCardEnumi15DomCardCategory
// 地址: 0xa34c20
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg2 s>= 1)
    int64_t i = 0
    
    do
        int32_t x12_1 = *(arg1 + (i << 2))
        
        for (int32_t* j = *(*(gCampaignData + 0x50)
                + (((zx.q(x12_1) | zx.q(x12_1 s>> 4)) & zx.q(*(gCampaignData + 0x58))) << 3)); j != 0; 
                j = *(j + 0x18))
            if (*j == x12_1)
                uint64_t x12_2 = zx.q(j[4])
                
                if (x12_2.d s>= 1)
                    int32_t* x14_2 = *(j + 8)
                    int64_t x13_4
                    
                    if (*x14_2 != arg3)
                        x13_4 = 0
                        int32_t x16_1
                        
                        do
                            if (x12_2 - 1 == x13_4)
                                goto label_a34c44
                            
                            x16_1 = x14_2[1 + x13_4]
                            x13_4 += 1
                        while (x16_1 != arg3)
                    
                    if (*x14_2 == arg3 || x13_4 u< x12_2)
                        return 1
                
                break
        
    label_a34c44:
        i += 1
    while (i != zx.q(arg2))

return 0
