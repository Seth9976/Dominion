// 函数: _Z35CampaignKingdomCardmodSpecificPilesP11DomCardEnumP13CampaignPiece
// 地址: 0xa3a8f4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x23 = *(gCampaignSetup + 0x19a0)
int64_t x24 = sx.q(*(gCampaignSetup + 0x19a8))
int32_t x19 = *(x23 + (x24 << 0xb) + 0xc)
int32_t var_34

if (x19 != 0)
    int32_t x22_1
    
    if ((CardMod_HasSpecific(zx.q(x19), &var_34) & 1) == 0)
        x19 = 0
        x22_1 = *(x23 + (x24 << 0xb) + 0x10)
        
        if (x22_1 != 0)
        label_a3a970:
            
            if ((CardMod_HasSpecific(zx.q(x22_1), &var_34) & 1) != 0)
                uint64_t x8_5 = zx.q(x19) << 2
                *(arg1 + x8_5) = x22_1
                x19 += 1
                *(arg2 + x8_5) = var_34
            
            int32_t x22_2 = *(x23 + (x24 << 0xb) + 0x14)
            
            if (x22_2 != 0)
                if ((CardMod_HasSpecific(zx.q(x22_2), &var_34) & 1) != 0)
                    uint64_t x8_8 = zx.q(x19) << 2
                    *(arg1 + x8_8) = x22_2
                    x19 += 1
                    *(arg2 + x8_8) = var_34
                
                int32_t x22_3 = *(x23 + (x24 << 0xb) + 0x18)
                
                if (x22_3 != 0)
                    if ((CardMod_HasSpecific(zx.q(x22_3), &var_34) & 1) != 0)
                        uint64_t x8_11 = zx.q(x19) << 2
                        *(arg1 + x8_11) = x22_3
                        x19 += 1
                        *(arg2 + x8_11) = var_34
                    
                    int32_t x22_4 = *(x23 + (x24 << 0xb) + 0x1c)
                    
                    if (x22_4 != 0)
                        if ((CardMod_HasSpecific(zx.q(x22_4), &var_34) & 1) != 0)
                            uint64_t x8_14 = zx.q(x19) << 2
                            *(arg1 + x8_14) = x22_4
                            x19 += 1
                            *(arg2 + x8_14) = var_34
                        
                        int32_t x22_5 = *(x23 + (x24 << 0xb) + 0x20)
                        
                        if (x22_5 != 0)
                            if ((CardMod_HasSpecific(zx.q(x22_5), &var_34) & 1) != 0)
                                uint64_t x8_17 = zx.q(x19) << 2
                                *(arg1 + x8_17) = x22_5
                                x19 += 1
                                *(arg2 + x8_17) = var_34
                            
                            int32_t x22_6 = *(x23 + (x24 << 0xb) + 0x24)
                            
                            if (x22_6 != 0)
                                if ((CardMod_HasSpecific(zx.q(x22_6), &var_34) & 1) != 0)
                                    uint64_t x8_20 = zx.q(x19) << 2
                                    *(arg1 + x8_20) = x22_6
                                    x19 += 1
                                    *(arg2 + x8_20) = var_34
                                
                                int32_t x22_7 = *(x23 + (x24 << 0xb) + 0x28)
                                
                                if (x22_7 != 0)
                                    if ((CardMod_HasSpecific(zx.q(x22_7), &var_34) & 1) != 0)
                                        uint64_t x8_23 = zx.q(x19) << 2
                                        *(arg1 + x8_23) = x22_7
                                        x19 += 1
                                        *(arg2 + x8_23) = var_34
                                    
                                    int32_t x22_8 = *(x23 + (x24 << 0xb) + 0x2c)
                                    
                                    if (x22_8 != 0)
                                        if ((CardMod_HasSpecific(zx.q(x22_8), &var_34) & 1) != 0)
                                            uint64_t x8_26 = zx.q(x19) << 2
                                            *(arg1 + x8_26) = x22_8
                                            x19 += 1
                                            *(arg2 + x8_26) = var_34
                                        
                                        int32_t x22_9 = *(x23 + (x24 << 0xb) + 0x30)
                                        
                                        if (x22_9 != 0
                                                && (CardMod_HasSpecific(zx.q(x22_9), &var_34) & 1)
                                                != 0)
                                            uint64_t x8_29 = zx.q(x19) << 2
                                            *(arg1 + x8_29) = x22_9
                                            x19 += 1
                                            *(arg2 + x8_29) = var_34
    else
        *arg1 = x19
        x19 = 1
        *arg2 = var_34
        x22_1 = *(x23 + (x24 << 0xb) + 0x10)
        
        if (x22_1 != 0)
            goto label_a3a970
return zx.q(x19)
