// 函数: _Z18Surprise_NameThemev
// 地址: 0xa3958c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t result
char* x1
result, x1 = RandomInt(gCampaignSetup, 0x18)
int32_t i = *(&data_7afa84 + (sx.q(result.d) << 2))
int64_t* x9_1 = *gCampaignData + (((zx.q(i) | zx.q(i s>> 4)) & zx.q(*(gCampaignData + 8))) << 3)
int32_t* x10_2

do
    x10_2 = *x9_1
    x9_1 = &x10_2[4]
while (*x10_2 != i)

void* x8 = *(x10_2 + 8)
int64_t x9_11

if (*(x8 + 0x18) != 6 || *(x8 + 0x284) != 0)
    if (*(x8 + 0x288) == 6 && *(x8 + 0x4f4) == 0)
        x9_11 = 1
        goto label_a39660
    
    if (*(x8 + 0x4f8) == 6 && *(x8 + 0x764) == 0)
        x9_11 = 2
        goto label_a39660
    
    if (*(x8 + 0x768) == 6 && *(x8 + 0x9d4) == 0)
        x9_11 = 3
        goto label_a39660
else
    x9_11 = 0
label_a39660:
    void* x8_1 = x8 + x9_11 * 0x270
    uint64_t x22_1 = zx.q(*(x8_1 + 0x280))
    
    if (x22_1.d s>= 1)
        int64_t x25_1 = *(x8_1 + 0x20)
        int64_t x23_1 = 0
        int32_t x24_1 = 0
        
        do
            uint64_t x8_2 = zx.q(*(gCampaignSetup + 0x2638))
            
            if (x8_2.d s>= 1)
                int32_t i_1 = *(x25_1 + (x23_1 << 2))
                int64_t x10_3
                
                if (*(gCampaignSetup + 0x19b8) != i_1)
                    int64_t x11_2 = 0
                    
                    do
                        x10_3 = x11_2
                        
                        if (x8_2 - 1 == x11_2)
                            break
                        
                        x11_2 = x10_3 + 1
                    while (*(gCampaignSetup + (x10_3 << 2) + 0x19bc) != i_1)
                
                if (*(gCampaignSetup + 0x19b8) == i_1 || x10_3 + 1 u< x8_2)
                    result, x1 = CampaignKingdomAdd(zx.q(i_1), x1, 2, 0)
                    
                    if ((result.d & 1) != 0)
                        result, x1 = RandomizerDeck_Remove(gCampaignSetup + 0x19b8, zx.q(i_1))
                        x24_1 += 1
            
            if (x24_1 == 5)
                break
            
            x23_1 += 1
        while (x23_1 u< x22_1)
return result
