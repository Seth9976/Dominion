// 函数: _Z19Stamp_PlusCard_Testv
// 地址: 0xa3cf8c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8 = zx.q(*(gCampaignSetup + 0x19ac))

if (x8.d != 0)
    int32_t* i_2 = *(*(gCampaignData + 0x50)
        + ((zx.q(*(gCampaignData + 0x58)) & (zx.q(x8.d s>> 4) | x8)) << 3))
    
    if (i_2 == 0)
        return 0
    
    int32_t* i = i_2
    
    do
        if (*i == x8.d)
            uint64_t x10_4 = zx.q(i[4])
            
            if (x10_4.d s< 1)
                goto label_a3d02c
            
            int32_t* x12_1 = *(i + 8)
            
            if (*x12_1 == 0x1b)
                goto label_a3d05c
            
            int64_t x11_4 = 0
            int32_t j
            
            do
                if (x10_4 - 1 == x11_4)
                    goto label_a3d02c
                
                j = x12_1[1 + x11_4]
                x11_4 += 1
            while (j != 0x1b)
            
            if (x11_4 u< x10_4)
                goto label_a3d05c
            
            goto label_a3d02c
        
        i = *(i + 0x18)
    while (i != 0)
    
label_a3d02c:
    
    while (*i_2 != x8.d)
        i_2 = *(i_2 + 0x18)
        
        if (i_2 == 0)
            return 0
    
    uint64_t x8_1 = zx.q(i_2[4])
    
    if (x8_1.d s< 1)
        return 0
    
    int32_t* x10_6 = *(i_2 + 8)
    
    if (*x10_6 != 0x1c)
        int64_t x9_3 = 0
        int32_t i_1
        
        do
            if (x8_1 - 1 == x9_3)
                return zx.q(x8_1 u< x8_1 ? 1 : 0)
            
            i_1 = x10_6[1 + x9_3]
            x9_3 += 1
        while (i_1 != 0x1c)
        return zx.q(x9_3 u< x8_1 ? 1 : 0)

label_a3d05c:
return 1
