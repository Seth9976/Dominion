// 函数: _Z31KingdomSelectImbalancedCategory15DomCardCategory
// 地址: 0xa35314
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg1
int32_t var_48[0xa]
int32_t x0_1 = CampaignKingdomCardsForImbalancedStart(&var_48)
ShuffleIntsN(gCampaignSetup, &var_48, x0_1, x0_1)

if (x0_1 s>= 1)
    int64_t i = 0
    
    do
        uint64_t result = zx.q(var_48[i])
        
        for (int32_t* j = *(*(gCampaignData + 0x50) +
                (((zx.q(result.d) | zx.q(result.d s>> 4)) & zx.q(*(gCampaignData + 0x58))) << 3)); j != 0; 
                j = *(j + 0x18))
            if (*j == result.d)
                uint64_t x12_4 = zx.q(j[4])
                
                if (x12_4.d s>= 1)
                    int32_t* x14_1 = *(j + 8)
                    int64_t x13_2
                    
                    if (*x14_1 != x19)
                        x13_2 = 0
                        int32_t x16_1
                        
                        do
                            if (x12_4 - 1 == x13_2)
                                goto label_a35370
                            
                            x16_1 = x14_1[1 + x13_2]
                            x13_2 += 1
                        while (x16_1 != x19)
                    
                    if (*x14_1 == x19 || x13_2 u< x12_4)
                        return result
                
                break
        
    label_a35370:
        i += 1
    while (i != zx.q(x0_1))

return 0
