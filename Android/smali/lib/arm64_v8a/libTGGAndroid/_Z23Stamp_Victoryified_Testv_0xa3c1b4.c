// 函数: _Z23Stamp_Victoryified_Testv
// 地址: 0xa3c1b4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8 = zx.q(*(gCampaignSetup + 0x19ac))

if (x8.d != 0)
    for (int32_t* i = *(*(gCampaignData + 0x50)
            + ((zx.q(*(gCampaignData + 0x58)) & (zx.q(x8.d s>> 4) | x8)) << 3)); i != 0; i = *(i + 0x18))
        if (*i == x8.d)
            uint64_t x8_1 = zx.q(i[4])
            
            if (x8_1.d s>= 1)
                int32_t* x10_4 = *(i + 8)
                int64_t x9_3
                
                if (*x10_4 != 5)
                    x9_3 = 0
                    int32_t j
                    
                    do
                        if (x8_1 - 1 == x9_3)
                            return 1
                        
                        j = x10_4[1 + x9_3]
                        x9_3 += 1
                    while (j != 5)
                
                if (*x10_4 == 5 || x9_3 u< x8_1)
                    return 0
            
            break

return 1
