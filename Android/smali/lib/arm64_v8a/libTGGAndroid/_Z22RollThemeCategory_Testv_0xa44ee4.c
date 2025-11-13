// 函数: _Z22RollThemeCategory_Testv
// 地址: 0xa44ee4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x8_2 = *gCampaignData + ((zx.q(*(gCampaignData + 8)) & 0x2771) << 3)
int32_t* x10_1

do
    x10_1 = *x8_2
    x8_2 = &x10_1[4]
while (*x10_1 != 0x2710)

void* x8_4 = *(x10_1 + 8)
int32_t x21
int64_t x9_2

if (*(x8_4 + 0x18) != 4)
    if (*(x8_4 + 0x288) == 4)
        x9_2 = 1
        goto label_a44f84
    
    if (*(x8_4 + 0x4f8) == 4)
        x9_2 = 2
        goto label_a44f84
    
    if (*(x8_4 + 0x768) == 4)
        x9_2 = 3
        goto label_a44f84
    
    x21 = 0
else
    x9_2 = 0
label_a44f84:
    void* x8_5 = x8_4 + x9_2 * 0x270
    uint64_t x20_1 = zx.q(*(x8_5 + 0x280))
    
    if (x20_1.d s< 1)
        x21 = 0
    else
        int64_t x22_1 = 0
        x21 = 1
        
        do
            int32_t i = *(x8_5 + 0x20 + (x22_1 << 2))
            int64_t* x10_3 = *(gCampaignData + 0x40)
                + (((zx.q(i) | zx.q(i s>> 4)) & zx.q(*(gCampaignData + 0x48))) << 3)
            int32_t* x9_8
            
            do
                x9_8 = *x10_3
                x10_3 = &x9_8[6]
            while (*x9_8 != i)
            
            uint64_t x25_1 = zx.q(x9_8[4])
            
            if (x25_1.d s>= 1)
                int64_t x28_1 = *(x9_8 + 8)
                int64_t x26_1 = 0
                int32_t x27_1 = 0
                int32_t fp_1 = 1
                
                do
                    if ((IsLandscape(zx.q(*(x28_1 + (x26_1 << 2)))) & 1) == 0)
                        uint64_t x8_6 = zx.q(*(gCampaignSetup + 0x2638))
                        
                        if (x8_6.d s>= 1)
                            int32_t x9_9 = *(x28_1 + (x26_1 << 2))
                            int64_t x10_6
                            
                            if (*(gCampaignSetup + 0x19b8) != x9_9)
                                x10_6 = 0
                                int32_t x12_2
                                
                                do
                                    if (x8_6 - 1 == x10_6)
                                        goto label_a45018
                                    
                                    x12_2 = *(gCampaignSetup + (x10_6 << 2) + 0x19bc)
                                    x10_6 += 1
                                while (x12_2 != x9_9)
                            
                            if (*(gCampaignSetup + 0x19b8) == x9_9 || x10_6 u< x8_6)
                                if (x27_1 s> 3)
                                    break
                                
                                x27_1 += 1
                    
                label_a45018:
                    x26_1 += 1
                    fp_1 = x26_1 u< x25_1 ? 1 : 0
                while (x26_1 != x25_1)
                
                if ((fp_1 & 1) != 0)
                    break
            
            x22_1 += 1
            x21 = x22_1 u< x20_1 ? 1 : 0
        while (x22_1 != x20_1)
return zx.q(x21) & 1
