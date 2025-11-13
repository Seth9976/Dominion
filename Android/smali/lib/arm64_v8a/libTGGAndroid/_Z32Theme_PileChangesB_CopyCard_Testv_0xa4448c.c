// 函数: _Z32Theme_PileChangesB_CopyCard_Testv
// 地址: 0xa4448c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x9_2 = *(gCampaignData + 0x40) + ((zx.q(*(gCampaignData + 0x48)) & 0x45) << 3)
int32_t* x8_1

do
    x8_1 = *x9_2
    x9_2 = &x8_1[6]
while (*x8_1 != 0x45)

uint64_t x19 = zx.q(x8_1[4])
int32_t x20

if (x19.d s< 1)
    x20 = 0
else
    int64_t x22_1 = *(x8_1 + 8)
    int64_t x21_1 = 0
    x20 = 1
    
    do
        if ((IsLandscape(zx.q(*(x22_1 + (x21_1 << 2)))) & 1) == 0)
            uint64_t x8_2 = zx.q(*(gCampaignSetup + 0x2638))
            
            if (x8_2.d s>= 1)
                int32_t x9_4 = *(x22_1 + (x21_1 << 2))
                
                if (*(gCampaignSetup + 0x19b8) == x9_4)
                    break
                
                int64_t x10_3 = 0
                int32_t x12_2
                
                do
                    if (x8_2 - 1 == x10_3)
                        goto label_a444ec
                    
                    x12_2 = *(gCampaignSetup + (x10_3 << 2) + 0x19bc)
                    x10_3 += 1
                while (x12_2 != x9_4)
                
                if (x10_3 u< x8_2)
                    break
        
    label_a444ec:
        x21_1 += 1
        x20 = x21_1 u< x19 ? 1 : 0
    while (x21_1 != x19)

return zx.q(x20) & 1
