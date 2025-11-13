// 函数: sub_a5a84c
// 地址: 0xa5a84c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x20 = *arg2

if ((IsLandscape(zx.q(x20)) & 1) != 0)
    return 0

if (*(arg1 + 8) s< 1)
    return 1

if (x20 == 0)
    int64_t x20_1 = 0
    int32_t x8_6 = *(gCampaignSetup + 0x19ac)
    
    while (true)
        uint64_t x10_7 = zx.q(*(gCampaignData + 8))
        int64_t x11_3 = *gCampaignData
        int32_t i = *(*(arg1 + 0x10) + (x20_1 << 2))
        *(gCampaignSetup + 0x19b0) = x8_6
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
            label_a5aa90:
                int32_t x0_5 = x9_16()
                x8_6 = *(gCampaignSetup + 0x19b0)
                *(gCampaignSetup + 0x19b0) = 0
                *(gCampaignSetup + 0x19ac) = x8_6
                
                if ((x0_5 & 1) == 0)
                    return 0
            else
                *(gCampaignSetup + 0x19ac) = x8_6
                *(gCampaignSetup + 0x19b0) = 0
        else if (*(x9_14 + 0x288) == 2)
            x9_16 = *(x9_14 + 0x290)
            
            if (x9_16 != 0)
                goto label_a5aa90
            
            *(gCampaignSetup + 0x19ac) = x8_6
            *(gCampaignSetup + 0x19b0) = 0
        else if (*(x9_14 + 0x4f8) == 2)
            x9_16 = *(x9_14 + 0x500)
            
            if (x9_16 != 0)
                goto label_a5aa90
            
            *(gCampaignSetup + 0x19ac) = x8_6
            *(gCampaignSetup + 0x19b0) = 0
        else if (*(x9_14 + 0x768) != 2)
            *(gCampaignSetup + 0x19ac) = x8_6
            *(gCampaignSetup + 0x19b0) = 0
        else
            x9_16 = *(x9_14 + 0x770)
            
            if (x9_16 != 0)
                goto label_a5aa90
            
            *(gCampaignSetup + 0x19ac) = x8_6
            *(gCampaignSetup + 0x19b0) = 0
        x20_1 += 1
        
        if (x20_1 s>= sx.q(*(arg1 + 8)))
            return 1
else
    int64_t x21_1 = 0
    
    while (true)
        uint64_t x25_1 = zx.q(*(*(arg1 + 0x10) + (x21_1 << 2)))
        
        if ((IsLandscape(zx.q(x20)) & 1) != 0)
            return 0
        
        int32_t x8_4 = *(gCampaignSetup + 0x19ac)
        int64_t* x9_4 =
            *gCampaignData + ((zx.q(*(gCampaignData + 8)) & (zx.q(x25_1.d s>> 4) | x25_1)) << 3)
        *(gCampaignSetup + 0x19ac) = x20
        *(gCampaignSetup + 0x19b0) = x8_4
        int32_t* x10_2
        
        do
            x10_2 = *x9_4
            x9_4 = &x10_2[4]
        while (*x10_2 != x25_1.d)
        
        void* x9_6 = *(x10_2 + 8)
        int64_t x9_8
        
        if (*(x9_6 + 0x18) == 2)
            x9_8 = *(x9_6 + 0x20)
            
            if (x9_8 != 0)
            label_a5a988:
                int32_t x0_4 = x9_8()
                int32_t x8_5 = *(gCampaignSetup + 0x19b0)
                *(gCampaignSetup + 0x19b0) = 0
                *(gCampaignSetup + 0x19ac) = x8_5
                
                if ((x0_4 & 1) == 0)
                    return 0
            else
                *(gCampaignSetup + 0x19ac) = x8_4
                *(gCampaignSetup + 0x19b0) = 0
        else if (*(x9_6 + 0x288) == 2)
            x9_8 = *(x9_6 + 0x290)
            
            if (x9_8 != 0)
                goto label_a5a988
            
            *(gCampaignSetup + 0x19ac) = x8_4
            *(gCampaignSetup + 0x19b0) = 0
        else if (*(x9_6 + 0x4f8) == 2)
            x9_8 = *(x9_6 + 0x500)
            
            if (x9_8 != 0)
                goto label_a5a988
            
            *(gCampaignSetup + 0x19ac) = x8_4
            *(gCampaignSetup + 0x19b0) = 0
        else if (*(x9_6 + 0x768) != 2)
            *(gCampaignSetup + 0x19ac) = x8_4
            *(gCampaignSetup + 0x19b0) = 0
        else
            x9_8 = *(x9_6 + 0x770)
            
            if (x9_8 != 0)
                goto label_a5a988
            
            *(gCampaignSetup + 0x19ac) = x8_4
            *(gCampaignSetup + 0x19b0) = 0
        x21_1 += 1
        
        if (x21_1 s>= sx.q(*(arg1 + 8)))
            return 1
