// 函数: _Z38CampaignKingdomCardsForImbalancedStartP11DomCardEnum
// 地址: 0xa35168
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x22 = *(gCampaignSetup + 0x19a0)
int64_t x23 = sx.q(*(gCampaignSetup + 0x19a8))
int32_t x19 = *(x22 + (x23 << 0xb) + 0xc)

if (x19 != 0)
    int32_t x21_1
    
    if ((AllowedImbalanced(zx.q(x19)) & 1) == 0)
        x19 = 0
        x21_1 = *(x22 + (x23 << 0xb) + 0x10)
        
        if (x21_1 != 0)
        label_a351cc:
            
            if ((AllowedImbalanced(zx.q(x21_1)) & 1) != 0)
                *(arg1 + (zx.q(x19) << 2)) = x21_1
                x19 += 1
            
            int32_t x21_2 = *(x22 + (x23 << 0xb) + 0x14)
            
            if (x21_2 != 0)
                if ((AllowedImbalanced(zx.q(x21_2)) & 1) != 0)
                    *(arg1 + (zx.q(x19) << 2)) = x21_2
                    x19 += 1
                
                int32_t x21_3 = *(x22 + (x23 << 0xb) + 0x18)
                
                if (x21_3 != 0)
                    if ((AllowedImbalanced(zx.q(x21_3)) & 1) != 0)
                        *(arg1 + (zx.q(x19) << 2)) = x21_3
                        x19 += 1
                    
                    int32_t x21_4 = *(x22 + (x23 << 0xb) + 0x1c)
                    
                    if (x21_4 != 0)
                        if ((AllowedImbalanced(zx.q(x21_4)) & 1) != 0)
                            *(arg1 + (zx.q(x19) << 2)) = x21_4
                            x19 += 1
                        
                        int32_t x21_5 = *(x22 + (x23 << 0xb) + 0x20)
                        
                        if (x21_5 != 0)
                            if ((AllowedImbalanced(zx.q(x21_5)) & 1) != 0)
                                *(arg1 + (zx.q(x19) << 2)) = x21_5
                                x19 += 1
                            
                            int32_t x21_6 = *(x22 + (x23 << 0xb) + 0x24)
                            
                            if (x21_6 != 0)
                                if ((AllowedImbalanced(zx.q(x21_6)) & 1) != 0)
                                    *(arg1 + (zx.q(x19) << 2)) = x21_6
                                    x19 += 1
                                
                                int32_t x21_7 = *(x22 + (x23 << 0xb) + 0x28)
                                
                                if (x21_7 != 0)
                                    if ((AllowedImbalanced(zx.q(x21_7)) & 1) != 0)
                                        *(arg1 + (zx.q(x19) << 2)) = x21_7
                                        x19 += 1
                                    
                                    int32_t x21_8 = *(x22 + (x23 << 0xb) + 0x2c)
                                    
                                    if (x21_8 != 0)
                                        if ((AllowedImbalanced(zx.q(x21_8)) & 1) != 0)
                                            *(arg1 + (zx.q(x19) << 2)) = x21_8
                                            x19 += 1
                                        
                                        int32_t x21_9 = *(x22 + (x23 << 0xb) + 0x30)
                                        
                                        if (x21_9 != 0 && (AllowedImbalanced(zx.q(x21_9)) & 1) != 0)
                                            *(arg1 + (zx.q(x19) << 2)) = x21_9
                                            x19 += 1
    else
        *arg1 = x19
        x19 = 1
        x21_1 = *(x22 + (x23 << 0xb) + 0x10)
        
        if (x21_1 != 0)
            goto label_a351cc

return zx.q(x19)
