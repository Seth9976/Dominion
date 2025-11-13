// 函数: _Z15HasCategoryCard15DomCardCategoryib
// 地址: 0xa41f20
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x9_2 = *(gCampaignData + 0x40)
    + ((zx.q(*(gCampaignData + 0x48)) & (zx.q(arg1) | zx.q(arg1 s>> 4))) << 3)
int32_t* x8_1

do
    x8_1 = *x9_2
    x9_2 = &x8_1[6]
while (*x8_1 != arg1)

uint64_t x20 = zx.q(x8_1[4])
int32_t x22

if (x20.d s< 1)
    x22 = 0
else
    int64_t x21_1 = *(x8_1 + 8)
    
    if ((arg3.d & 1) == 0)
        int64_t x23_1 = 0
        int32_t x24_1 = 0
        x22 = 1
        
        do
            if ((IsLandscape(zx.q(*(x21_1 + (x23_1 << 2)))) & 1) == 0)
                uint64_t x8_3 = zx.q(*(gCampaignSetup + 0x2638))
                
                if (x8_3.d s>= 1)
                    int32_t i = *(x21_1 + (x23_1 << 2))
                    int64_t x11_2
                    
                    if (*(gCampaignSetup + 0x19b8) != i)
                        int64_t x12_2 = 0
                        
                        do
                            x11_2 = x12_2
                            
                            if (x8_3 - 1 == x12_2)
                                break
                            
                            x12_2 = x11_2 + 1
                        while (*(gCampaignSetup + (x11_2 << 2) + 0x19bc) != i)
                    
                    if (*(gCampaignSetup + 0x19b8) == i || x11_2 + 1 u< x8_3)
                        x24_1 += 1
                        
                        if (x24_1 s>= arg2)
                            break
            
            x23_1 += 1
            x22 = x23_1 u< x20 ? 1 : 0
        while (x23_1 != x20)
    else
        int64_t x8_2 = 0
        int32_t x9_4 = 0
        x22 = 1
        uint64_t x11_1 = zx.q(*(gCampaignSetup + 0x2638))
        
        do
            if (x11_1.d s>= 1)
                int32_t i_1 = *(x21_1 + (x8_2 << 2))
                int64_t x15_1
                
                if (*(gCampaignSetup + 0x19b8) != i_1)
                    int64_t x16_1 = 0
                    
                    do
                        x15_1 = x16_1
                        
                        if (x11_1 - 1 == x16_1)
                            break
                        
                        x16_1 = x15_1 + 1
                    while (*(gCampaignSetup + (x15_1 << 2) + 0x19bc) != i_1)
                
                if (*(gCampaignSetup + 0x19b8) == i_1 || x15_1 + 1 u< x11_1)
                    x9_4 += 1
                    
                    if (x9_4 s>= arg2)
                        break
            
            x8_2 += 1
            x22 = x8_2 u< x20 ? 1 : 0
        while (x8_2 != x20)

return zx.q(x22) & 1
