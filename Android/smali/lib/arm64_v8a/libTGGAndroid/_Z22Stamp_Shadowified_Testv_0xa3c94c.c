// 函数: _Z22Stamp_Shadowified_Testv
// 地址: 0xa3c94c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if ((CampaignHasExpansion(0x12) & 1) != 0)
    uint64_t x19_1 = zx.q(*(gCampaignSetup + 0x19ac))
    
    if (x19_1.d == 0)
        return 1
    
    int32_t* i_2 = *(*(gCampaignData + 0x50)
        + ((zx.q(*(gCampaignData + 0x58)) & (zx.q(x19_1.d s>> 4) | x19_1)) << 3))
    
    if (i_2 == 0)
    label_a3ca60:
        
        if ((zx.d(*(DomDefGet(zx.q(x19_1.d), 0x17) + 0xc8)) & 4) != 0
                && (zx.d(*(DomDefGet(zx.q(x19_1.d), 0x17) + 0xcd)) & 0x10) == 0)
            return 1
    else
        int32_t* i = i_2
        
        do
            if (*i == x19_1.d)
                uint64_t x9_4 = zx.q(i[4])
                
                if (x9_4.d s< 1)
                    goto label_a3c9fc
                
                int32_t* x11_1 = *(i + 8)
                
                if (*x11_1 == 0x16)
                    goto label_a3ca90
                
                int64_t x10_4 = 0
                int32_t j
                
                do
                    if (x9_4 - 1 == x10_4)
                        goto label_a3c9fc
                    
                    j = x11_1[1 + x10_4]
                    x10_4 += 1
                while (j != 0x16)
                
                if (x10_4 u< x9_4)
                    goto label_a3ca90
                
                goto label_a3c9fc
            
            i = *(i + 0x18)
        while (i != 0)
        
    label_a3c9fc:
        
        while (*i_2 != x19_1.d)
            i_2 = *(i_2 + 0x18)
            
            if (i_2 == 0)
                goto label_a3ca60
        
        uint64_t x9_6 = zx.q(i_2[4])
        
        if (x9_6.d s< 1)
            goto label_a3ca60
        
        int32_t* x10_5 = *(i_2 + 8)
        
        if (*x10_5 != 0x1e)
            int64_t x8_3 = 0
            int32_t i_1
            
            do
                if (x9_6 - 1 == x8_3)
                    goto label_a3ca60
                
                i_1 = x10_5[1 + x8_3]
                x8_3 += 1
            while (i_1 != 0x1e)
            
            if (x8_3 u>= x9_6)
                goto label_a3ca60

label_a3ca90:
return 0
