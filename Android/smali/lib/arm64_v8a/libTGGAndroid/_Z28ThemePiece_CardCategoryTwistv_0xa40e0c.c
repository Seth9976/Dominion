// 函数: _Z28ThemePiece_CardCategoryTwistv
// 地址: 0xa40e0c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x9 = *(gCampaignSetup + 0x19a0)
uint64_t x8 = zx.q(*(gCampaignSetup + 0x19b4))
void* x8_2

if (x8.d == 2)
    x8_2 = x9 + (sx.q(*(gCampaignSetup + 0x19a8)) << 0xb) + 0x540
else
    x8_2 = x9 + (x8 << 3) + 0x5010

int32_t x9_3 = *(x8_2 + 4)

for (int32_t* i = *(*(gCampaignData + 0x50)
        + (((zx.q(x9_3) | zx.q(x9_3 s>> 4)) & zx.q(*(gCampaignData + 0x58))) << 3)); i != 0; 
        i = *(i + 0x18))
    if (*i == x9_3)
        uint64_t x21_1 = zx.q(i[4])
        
        if (x21_1.d s>= 1)
            int64_t x23_1 = *(i + 8)
            int64_t x22_1 = 0
            int32_t j_4 = 0
            int32_t var_1050[0x400]
            
            do
                int32_t j = *(x23_1 + (x22_1 << 2))
                int64_t* x9_6 = *(gCampaignData + 0x10)
                    + (((zx.q(j) | zx.q(j s>> 4)) & zx.q(*(gCampaignData + 0x18))) << 3)
                int32_t* x10_5
                
                do
                    x10_5 = *x9_6
                    x9_6 = &x10_5[4]
                while (*x10_5 != j)
                
                uint64_t x26_1 = zx.q(*(*(x10_5 + 8) + 0x18))
                
                if (x26_1.d != 0)
                    int64_t* x8_8 = *gCampaignData
                        + ((zx.q(*(gCampaignData + 8)) & (zx.q(x26_1.d s>> 4) | x26_1)) << 3)
                    int32_t* x9_9
                    
                    do
                        x9_9 = *x8_8
                        x8_8 = &x9_9[4]
                    while (*x9_9 != x26_1.d)
                    
                    void* x8_10 = *(x9_9 + 8)
                    int64_t x8_12
                    
                    if (*(x8_10 + 0x18) != 2)
                        if (*(x8_10 + 0x288) == 2)
                            x8_12 = *(x8_10 + 0x290)
                            
                            if (x8_12 != 0)
                                goto label_a40fb0
                            
                            goto label_a40fbc
                        
                        if (*(x8_10 + 0x4f8) == 2)
                            x8_12 = *(x8_10 + 0x500)
                            
                            if (x8_12 != 0)
                                goto label_a40fb0
                            
                            goto label_a40fbc
                        
                        if (*(x8_10 + 0x768) != 2)
                            goto label_a40fbc
                        
                        x8_12 = *(x8_10 + 0x770)
                        
                        if (x8_12 == 0)
                            goto label_a40fbc
                        
                        goto label_a40fb0
                    
                    x8_12 = *(x8_10 + 0x20)
                    
                    if (x8_12 != 0)
                    label_a40fb0:
                        
                        if ((x8_12() & 1) != 0)
                            goto label_a40fbc
                    else
                    label_a40fbc:
                        uint64_t j_3
                        
                        if (j_4 s<= 0)
                            j_3 = sx.q(j_4)
                        else
                            j_3 = zx.q(j_4)
                            int32_t (* x9_14)[0x400] = &var_1050
                            uint64_t j_2 = j_3
                            uint64_t j_1
                            
                            do
                                if (*x9_14 == x26_1.d)
                                    goto label_a40ec0
                                
                                j_1 = j_2
                                j_2 -= 1
                                x9_14 = &(*x9_14)[1]
                            while (j_1 != 1)
                        
                        j_4 += 1
                        var_1050[j_3] = x26_1.d
                
            label_a40ec0:
                x22_1 += 1
            while (x22_1 != x21_1)
            
            if (j_4 != 0)
                return CampaignAddTwist(zx.q(var_1050[sx.q(RandomInt(gCampaignSetup, j_4))]))
        
        break

return XTrace("Couldn't add card categeory twist")
