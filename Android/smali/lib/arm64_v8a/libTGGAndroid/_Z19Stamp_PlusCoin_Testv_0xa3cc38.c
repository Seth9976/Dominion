// 函数: _Z19Stamp_PlusCoin_Testv
// 地址: 0xa3cc38
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8 = zx.q(*(gCampaignSetup + 0x19ac))

if (x8.d != 0)
    int32_t* i_3 = *(*(gCampaignData + 0x50)
        + ((zx.q(*(gCampaignData + 0x58)) & (zx.q(x8.d s>> 4) | x8)) << 3))
    
    if (i_3 == 0)
        return 0
    
    int32_t* i = i_3
    
    do
        if (*i == x8.d)
            uint64_t x10_4 = zx.q(i[4])
            
            if (x10_4.d s< 1)
                goto label_a3ccd0
            
            int32_t* x12_1 = *(i + 8)
            
            if (*x12_1 == 0x51)
                goto label_a3cd6c
            
            int64_t x11_4 = 0
            int32_t j
            
            do
                if (x10_4 - 1 == x11_4)
                    goto label_a3ccd0
                
                j = x12_1[1 + x11_4]
                x11_4 += 1
            while (j != 0x51)
            
            if (x11_4 u< x10_4)
                goto label_a3cd6c
            
            goto label_a3ccd0
        
        i = *(i + 0x18)
    while (i != 0)
    
label_a3ccd0:
    int32_t* i_1 = i_3
    
    do
        if (*i_1 == x8.d)
            uint64_t x10_6 = zx.q(i_1[4])
            
            if (x10_6.d s< 1)
                goto label_a3cd3c
            
            int32_t* x12_3 = *(i_1 + 8)
            
            if (*x12_3 == 0x52)
                goto label_a3cd6c
            
            int64_t x11_6 = 0
            int32_t j_1
            
            do
                if (x10_6 - 1 == x11_6)
                    goto label_a3cd3c
                
                j_1 = x12_3[1 + x11_6]
                x11_6 += 1
            while (j_1 != 0x52)
            
            if (x11_6 u< x10_6)
                goto label_a3cd6c
            
            goto label_a3cd3c
        
        i_1 = *(i_1 + 0x18)
    while (i_1 != 0)
    
label_a3cd3c:
    
    while (*i_3 != x8.d)
        i_3 = *(i_3 + 0x18)
        
        if (i_3 == 0)
            return 0
    
    uint64_t x8_1 = zx.q(i_3[4])
    
    if (x8_1.d s< 1)
        return 0
    
    int32_t* x10_8 = *(i_3 + 8)
    
    if (*x10_8 != 0x53)
        uint64_t x9_3 = 0
        int32_t i_2
        
        do
            if (x8_1 - 1 == x9_3)
                x9_3 = x8_1
                break
            
            i_2 = x10_8[1 + x9_3]
            x9_3 += 1
        while (i_2 != 0x53)
        return zx.q(x9_3 u< x8_1 ? 1 : 0)

label_a3cd6c:
return 1
