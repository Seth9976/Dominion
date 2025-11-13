// 函数: sub_a5a570
// 地址: 0xa5a570
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(arg1 + 8) s>= 1)
    int32_t x20_1 = *arg2
    
    if (x20_1 == 0)
        int64_t x20_2 = 0
        int32_t x8_5 = *(gCampaignSetup + 0x19ac)
        
        while (true)
            uint64_t x10_7 = zx.q(*(gCampaignData + 8))
            int64_t x11_3 = *gCampaignData
            int32_t i = *(*(arg1 + 0x10) + (x20_2 << 2))
            *(gCampaignSetup + 0x19b0) = x8_5
            *(gCampaignSetup + 0x19ac) = 0
            int64_t* x10_9 = x11_3 + ((x10_7 & (zx.q(i) | zx.q(i s>> 4))) << 3)
            int32_t* x11_4
            
            do
                x11_4 = *x10_9
                x10_9 = &x11_4[4]
            while (*x11_4 != i)
            
            void* x9_14 = *(x11_4 + 8)
            int64_t x9_16
            
            if (*(x9_14 + 0x18) == 2)
                x9_16 = *(x9_14 + 0x20)
                
                if (x9_16 != 0)
                label_a5a7a0:
                    int32_t x0_3 = x9_16()
                    x8_5 = *(gCampaignSetup + 0x19b0)
                    *(gCampaignSetup + 0x19b0) = 0
                    *(gCampaignSetup + 0x19ac) = x8_5
                    
                    if ((x0_3 & 1) == 0)
                        return 0
                else
                    *(gCampaignSetup + 0x19ac) = x8_5
                    *(gCampaignSetup + 0x19b0) = 0
            else if (*(x9_14 + 0x288) == 2)
                x9_16 = *(x9_14 + 0x290)
                
                if (x9_16 != 0)
                    goto label_a5a7a0
                
                *(gCampaignSetup + 0x19ac) = x8_5
                *(gCampaignSetup + 0x19b0) = 0
            else if (*(x9_14 + 0x4f8) == 2)
                x9_16 = *(x9_14 + 0x500)
                
                if (x9_16 != 0)
                    goto label_a5a7a0
                
                *(gCampaignSetup + 0x19ac) = x8_5
                *(gCampaignSetup + 0x19b0) = 0
            else if (*(x9_14 + 0x768) != 2)
                *(gCampaignSetup + 0x19ac) = x8_5
                *(gCampaignSetup + 0x19b0) = 0
            else
                x9_16 = *(x9_14 + 0x770)
                
                if (x9_16 != 0)
                    goto label_a5a7a0
                
                *(gCampaignSetup + 0x19ac) = x8_5
                *(gCampaignSetup + 0x19b0) = 0
            x20_2 += 1
            
            if (x20_2 s>= sx.q(*(arg1 + 8)))
                return 1
    else
        int64_t x21_1 = 0
        
        while (true)
            uint64_t x25_1 = zx.q(*(*(arg1 + 0x10) + (x21_1 << 2)))
            
            if ((IsLandscape(zx.q(x20_1)) & 1) == 0)
                int32_t x8_3 = *(gCampaignSetup + 0x19ac)
                int64_t* x9_4 = *gCampaignData
                    + ((zx.q(*(gCampaignData + 8)) & (zx.q(x25_1.d s>> 4) | x25_1)) << 3)
                *(gCampaignSetup + 0x19ac) = x20_1
                *(gCampaignSetup + 0x19b0) = x8_3
                int32_t* x10_2
                
                do
                    x10_2 = *x9_4
                    x9_4 = &x10_2[4]
                while (*x10_2 != x25_1.d)
                
                void* x9_6 = *(x10_2 + 8)
                int64_t x9_8
                
                if (*(x9_6 + 0x18) != 2)
                    if (*(x9_6 + 0x288) == 2)
                        x9_8 = *(x9_6 + 0x290)
                        
                        if (x9_8 != 0)
                            goto label_a5a698
                        
                        goto label_a5a5b4
                    
                    if (*(x9_6 + 0x4f8) == 2)
                        x9_8 = *(x9_6 + 0x500)
                        
                        if (x9_8 != 0)
                            goto label_a5a698
                        
                        goto label_a5a5b4
                    
                    if (*(x9_6 + 0x768) != 2)
                        goto label_a5a5b4
                    
                    x9_8 = *(x9_6 + 0x770)
                    
                    if (x9_8 == 0)
                        goto label_a5a5b4
                    
                    goto label_a5a698
                
                x9_8 = *(x9_6 + 0x20)
                
                if (x9_8 != 0)
                label_a5a698:
                    int32_t x0_2 = x9_8()
                    int32_t x8_4 = *(gCampaignSetup + 0x19b0)
                    *(gCampaignSetup + 0x19b0) = 0
                    *(gCampaignSetup + 0x19ac) = x8_4
                    
                    if ((x0_2 & 1) != 0)
                        goto label_a5a5c0
                else
                label_a5a5b4:
                    *(gCampaignSetup + 0x19ac) = x8_3
                    *(gCampaignSetup + 0x19b0) = 0
                label_a5a5c0:
                    x21_1 += 1
                    
                    if (x21_1 s>= sx.q(*(arg1 + 8)))
                        break
                    
                    continue
            
            return 0

return 1
