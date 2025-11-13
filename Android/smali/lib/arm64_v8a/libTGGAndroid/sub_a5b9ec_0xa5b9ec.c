// 函数: sub_a5b9ec
// 地址: 0xa5b9ec
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x19 = zx.q(*arg2)

if ((IsLandscape(zx.q(x19.d)) & 1) == 0)
    int32_t* i_1 = *(*(gCampaignData + 0x50)
        + ((zx.q(*(gCampaignData + 0x58)) & (zx.q(x19.d s>> 4) | x19)) << 3))
    
    if (i_1 != 0)
        int32_t* i_2 = i_1
        
        while (true)
            if (*i_2 == x19.d)
                uint64_t x9_4 = zx.q(i_2[4])
                
                if (x9_4.d s>= 1)
                    int32_t* x11_1 = *(i_2 + 8)
                    
                    if (*x11_1 == 0x32)
                        break
                    
                    int64_t x10_4 = 0
                    int32_t i
                    
                    do
                        if (x9_4 - 1 == x10_4)
                            goto label_a5ba98
                        
                        i = x11_1[1 + x10_4]
                        x10_4 += 1
                    while (i != 0x32)
                    
                    if (x10_4 u< x9_4)
                        break
            else
                i_2 = *(i_2 + 0x18)
                
                if (i_2 != 0)
                    continue
            
        label_a5ba98:
            
            do
                if (*i_1 == x19.d)
                    uint64_t x9_6 = zx.q(i_1[4])
                    
                    if (x9_6.d s< 1)
                        break
                    
                    int32_t* x10_5 = *(i_1 + 8)
                    
                    if (*x10_5 == 0x4d)
                        return 1
                    
                    uint64_t x8_3 = 0
                    int32_t j
                    
                    do
                        if (x9_6 - 1 == x8_3)
                            x8_3 = x9_6
                            break
                        
                        j = x10_5[1 + x8_3]
                        x8_3 += 1
                    while (j != 0x4d)
                    return zx.q(x8_3 u< x9_6 ? 1 : 0)
                
                i_1 = *(i_1 + 0x18)
            while (i_1 != 0)
            
            break

return 0
