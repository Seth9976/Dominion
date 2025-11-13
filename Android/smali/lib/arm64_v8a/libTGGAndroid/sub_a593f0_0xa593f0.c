// 函数: sub_a593f0
// 地址: 0xa593f0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8 = *arg2
int32_t* i = *(*(gCampaignData + 0x50)
    + ((zx.q(*(gCampaignData + 0x58)) & (zx.q(x8) | zx.q(x8 s>> 4))) << 3))

if (i != 0)
    int32_t x9_1 = *(arg1 + 8)
    
    do
        if (*i == x8)
            uint64_t x10_3 = zx.q(i[4])
            
            if (x10_3.d s>= 1)
                int32_t* x12_1 = *(i + 8)
                int64_t x11_2
                
                if (*x12_1 != x9_1)
                    x11_2 = 0
                    int32_t x14_1
                    
                    do
                        if (x10_3 - 1 == x11_2)
                            return 0
                        
                        x14_1 = x12_1[1 + x11_2]
                        x11_2 += 1
                    while (x14_1 != x9_1)
                
                if (*x12_1 == x9_1 || x11_2 u< x10_3)
                    return (zx.q(IsLandscape(zx.q(x8))) ^ 1) & 1
            
            break
        
        i = *(i + 0x18)
    while (i != 0)

return 0
