// 函数: _Z42Bell_ImbalancedStart_AttackVsSameCost_Testv
// 地址: 0xa35c8c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void var_160
int32_t i_5 = CampaignKingdomCardsForImbalancedStart(&var_160)
int32_t x8 = *(gCampaignSetup + 0x2638)

if (x8 s>= 1 && i_5 s>= 1)
    int64_t x23_1 = 0
    
    while (true)
        int32_t i = *(gCampaignSetup + (x23_1 << 2) + 0x19b8)
        int32_t* x9_4 = *(*(gCampaignData + 0x50)
            + (((zx.q(i) | zx.q(i s>> 4)) & zx.q(*(gCampaignData + 0x58))) << 3))
        
        if (x9_4 != 0)
            int32_t* x11_2 = x9_4
            
            while (true)
                if (*x11_2 != i)
                    x11_2 = *(x11_2 + 0x18)
                    
                    if (x11_2 != 0)
                        continue
                    
                    goto label_a35d78
                
                uint64_t x10_3 = zx.q(x11_2[4])
                
                if (x10_3.d s< 1)
                label_a35d78:
                    
                    while (*x9_4 != i)
                        x9_4 = *(x9_4 + 0x18)
                        
                        if (x9_4 == 0)
                            goto label_a35ce0
                    
                    uint64_t x10_5 = zx.q(x9_4[4])
                    
                    if (x10_5.d s< 1)
                        break
                    
                    int32_t* x11_5 = *(x9_4 + 8)
                    
                    if (*x11_5 != 0x15)
                        int64_t x9_6 = 0
                        int32_t i_1
                        
                        do
                            if (x10_5 - 1 == x9_6)
                                goto label_a35ce0
                            
                            i_1 = x11_5[1 + x9_6]
                            x9_6 += 1
                        while (i_1 != 0x15)
                        
                        if (x9_6 u>= x10_5)
                            break
                else
                    int32_t* x12_1 = *(x11_2 + 8)
                    
                    if (*x12_1 != 6)
                        int64_t x11_4 = 0
                        int32_t i_2
                        
                        do
                            if (x10_3 - 1 == x11_4)
                                goto label_a35d78
                            
                            i_2 = x12_1[1 + x11_4]
                            x11_4 += 1
                        while (i_2 != 6)
                        
                        if (x11_4 u>= x10_3)
                            goto label_a35d78
                
                void* x26_1 = &var_160
                uint64_t i_4 = zx.q(i_5)
                uint64_t i_3
                
                do
                    int32_t x20_1 = *x26_1
                    void* x0_2 = DomDefGet(zx.q(i), 0x17)
                    void* x0_4 = DomDefGet(zx.q(x20_1), 0x17)
                    
                    if (*(x0_2 + 0xc4) == *(x0_4 + 0xc4))
                        return 1
                    
                    i_3 = i_4
                    i_4 -= 1
                    x26_1 += 4
                while (i_3 != 1)
                x8 = *(gCampaignSetup + 0x2638)
                break
        
    label_a35ce0:
        x23_1 += 1
        
        if (x23_1 s>= sx.q(x8))
            break

return zx.q(*(*(gCampaignSetup + 0x19a0) + (sx.q(*(gCampaignSetup + 0x19a8)) << 0xb) + 0x30) == 0
    ? 1 : 0)
