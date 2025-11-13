// 函数: _Z9RollTableR9RandomPCGPK13WeightedTableI13CampaignPieceEi
// 地址: 0xa2f590
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg3 s>= 1)
    int64_t x25_1 = 0
    int32_t x22_1 = 0
    uint64_t x23_1 = zx.q(arg3)
    
    do
        int32_t i = *(arg2 + (x25_1 << 3) + 4)
        int64_t* x9_3 =
            *gCampaignData + (((zx.q(i) | zx.q(i s>> 4)) & zx.q(*(gCampaignData + 8))) << 3)
        int32_t* x10_2
        
        do
            x10_2 = *x9_3
            x9_3 = &x10_2[4]
        while (*x10_2 != i)
        
        int32_t* x28_1 = *(x10_2 + 8)
        int64_t x8_6
        
        if (x28_1[6] != 2)
            if (x28_1[0xa2] == 2)
                x8_6 = *(x28_1 + 0x290)
                
                if (x8_6 != 0)
                    goto label_a2f6a8
                
                goto label_a2f6b4
            
            if (x28_1[0x13e] == 2)
                x8_6 = *(x28_1 + 0x500)
                
                if (x8_6 != 0)
                    goto label_a2f6a8
                
                goto label_a2f6b4
            
            if (x28_1[0x1da] != 2)
                goto label_a2f6b4
            
            x8_6 = *(x28_1 + 0x770)
            
            if (x8_6 == 0)
                goto label_a2f6b4
            
            goto label_a2f6a8
        
        x8_6 = *(x28_1 + 0x20)
        
        if (x8_6 != 0)
        label_a2f6a8:
            
            if ((x8_6() & 1) != 0)
                goto label_a2f6b4
        else
        label_a2f6b4:
            int32_t x12_2
            
            if ((zx.d(x28_1[0x276].b) & 1) != 0)
                int64_t x11_3 = 0
                int32_t* x10_5 =
                    *(gCampaignSetup + 0x19a0) + (sx.q(*(gCampaignSetup + 0x19a8)) << 0xb) + 0x590
                x12_2 = 1
                
                while (x10_5[-1] != *x28_1 || *x10_5 != *(gCampaignSetup + 0x19ac))
                    bool cond:0_1 = x11_3 u< 0x1f
                    x11_3 += 1
                    x12_2 = cond:0_1 ? 1 : 0
                    x10_5 = &x10_5[5]
                    
                    if (x11_3 == 0x20)
                        break
            
            if ((zx.d(x28_1[0x276].b) & 1) == 0 || (x12_2 & 1) == 0)
                x22_1 += *(arg2 + (x25_1 << 3))
        
        x25_1 += 1
    while (x25_1 != x23_1)
    
    if (x22_1 != 0)
        int32_t x0_2 = RandomInt(arg1, x22_1)
        
        if (arg3 s>= 1)
            int64_t x21_2 = 0
            int32_t x22_2 = 0
            
            do
                int32_t i_1 = *(arg2 + (x21_2 << 3) + 4)
                int64_t* x9_8 = *gCampaignData
                    + (((zx.q(i_1) | zx.q(i_1 s>> 4)) & zx.q(*(gCampaignData + 8))) << 3)
                int32_t* x10_7
                
                do
                    x10_7 = *x9_8
                    x9_8 = &x10_7[4]
                while (*x10_7 != i_1)
                
                void* x8_17 = *(x10_7 + 8)
                int64_t x8_19
                
                if (*(x8_17 + 0x18) != 2)
                    if (*(x8_17 + 0x288) == 2)
                        x8_19 = *(x8_17 + 0x290)
                        
                        if (x8_19 != 0)
                            goto label_a2f810
                        
                        goto label_a2f748
                    
                    if (*(x8_17 + 0x4f8) == 2)
                        x8_19 = *(x8_17 + 0x500)
                        
                        if (x8_19 != 0)
                            goto label_a2f810
                        
                        goto label_a2f748
                    
                    if (*(x8_17 + 0x768) != 2)
                        goto label_a2f748
                    
                    x8_19 = *(x8_17 + 0x770)
                    
                    if (x8_19 == 0)
                        goto label_a2f748
                    
                    goto label_a2f810
                
                x8_19 = *(x8_17 + 0x20)
                
                if (x8_19 != 0)
                label_a2f810:
                    
                    if ((x8_19() & 1) != 0)
                        goto label_a2f748
                else
                label_a2f748:
                    x22_2 += *(arg2 + (x21_2 << 3))
                    
                    if (x0_2 s< x22_2)
                        return zx.q(*(arg2 + (x21_2 << 3) + 4))
                
                x21_2 += 1
            while (x21_2 != x23_1)
        
        pthread_kill(pthread_self(), 6)
        return CampaignPieceDefGet(XNoReturn()) __tailcall

return 0
