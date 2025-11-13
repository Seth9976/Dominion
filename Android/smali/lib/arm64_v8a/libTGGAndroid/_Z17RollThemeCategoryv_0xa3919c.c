// 函数: _Z17RollThemeCategoryv
// 地址: 0xa3919c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x9 = *(gCampaignSetup + 0x19a0)
int64_t result

while (true)
    int64_t* x8_3 = *gCampaignData + ((zx.q(*(gCampaignData + 8)) & 0x2771) << 3)
    int32_t* x9_2
    
    do
        x9_2 = *x8_3
        x8_3 = &x9_2[4]
    while (*x9_2 != 0x2710)
    
    void* x8_5 = *(x9_2 + 8)
    int32_t var_260[0x80]
    int32_t x20_1
    int64_t x9_4
    
    if (*(x8_5 + 0x18) != 4)
        if (*(x8_5 + 0x288) == 4)
            x9_4 = 1
            goto label_a39268
        
        if (*(x8_5 + 0x4f8) == 4)
            x9_4 = 2
            goto label_a39268
        
        if (*(x8_5 + 0x768) == 4)
            x9_4 = 3
            goto label_a39268
        
        x20_1 = 0
    else
        x9_4 = 0
    label_a39268:
        void* x8_6 = x8_5 + x9_4 * 0x270
        uint64_t fp_1 = zx.q(*(x8_6 + 0x280))
        
        if (fp_1.d s< 1)
            x20_1 = 0
        else
            int64_t x25_1 = 0
            x20_1 = 0
            
            do
                int32_t i = *(x8_6 + 0x20 + (x25_1 << 2))
                int64_t* x10_3 = *(gCampaignData + 0x40)
                    + (((zx.q(i) | zx.q(i s>> 4)) & zx.q(*(gCampaignData + 0x48))) << 3)
                int32_t* x9_10
                
                do
                    x9_10 = *x10_3
                    x10_3 = &x9_10[6]
                while (*x9_10 != i)
                
                uint64_t x21_1 = zx.q(x9_10[4])
                
                if (x21_1.d s>= 1)
                    int64_t x28_1 = *(x9_10 + 8)
                    int64_t x27_1 = 0
                    int32_t x26_1 = 0
                    int32_t x24_1 = 1
                    
                    do
                        if ((IsLandscape(zx.q(*(x28_1 + (x27_1 << 2)))) & 1) == 0)
                            uint64_t x8_7 = zx.q(*(gCampaignSetup + 0x2638))
                            
                            if (x8_7.d s>= 1)
                                int32_t x9_11 = *(x28_1 + (x27_1 << 2))
                                int64_t x10_6
                                
                                if (*(gCampaignSetup + 0x19b8) != x9_11)
                                    x10_6 = 0
                                    int32_t x12_2
                                    
                                    do
                                        if (x8_7 - 1 == x10_6)
                                            goto label_a392e0
                                        
                                        x12_2 = *(gCampaignSetup + (x10_6 << 2) + 0x19bc)
                                        x10_6 += 1
                                    while (x12_2 != x9_11)
                                
                                if (*(gCampaignSetup + 0x19b8) == x9_11 || x10_6 u< x8_7)
                                    if (x26_1 s> 3)
                                        break
                                    
                                    x26_1 += 1
                        
                    label_a392e0:
                        x27_1 += 1
                        x24_1 = x27_1 u< x21_1 ? 1 : 0
                    while (x27_1 != x21_1)
                    
                    if ((x24_1 & 1) != 0)
                        var_260[sx.q(x20_1)] = *(x8_6 + 0x20 + (x25_1 << 2))
                        x20_1 += 1
                
                x25_1 += 1
            while (x25_1 != fp_1)
    result = RandomInt(gCampaignSetup, x20_1)
    int64_t x9_13 = *(gCampaignSetup + 0x19a0)
    uint64_t x11_4 = zx.q(*(gCampaignSetup + 0x19b4))
    int32_t x8_9 = var_260[sx.q(result.d)]
    void* x9_16
    
    if (x11_4.d == 2)
        x9_16 = x9_13 + (sx.q(*(gCampaignSetup + 0x19a8)) << 0xb) + 0x540
    else
        x9_16 = x9_13 + (x11_4 << 3) + 0x5010
    
    *(x9_16 + 4) = x8_9
    
    if (x9_16 != x9 + 0x5010 && *(x9 + 0x5010) == 0x384 && *(x9 + 0x5014) == x8_9)
        continue
    
    if (x9_16 == x9 + 0x5018)
        break
    
    if (*(x9 + 0x5018) != 0x384)
        break
    
    if (*(x9 + 0x501c) != x8_9)
        break

return result
