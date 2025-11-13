// 函数: sub_a5af5c
// 地址: 0xa5af5c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x19 = zx.q(*arg2)

if ((IsLandscape(zx.q(x19.d)) & 1) == 0)
    int32_t* x9_3 = *(*(gCampaignData + 0x50)
        + ((zx.q(*(gCampaignData + 0x58)) & (zx.q(x19.d s>> 4) | x19)) << 3))
    
    if (x9_3 == 0)
        return 1
    
    while (*x9_3 != x19.d)
        x9_3 = *(x9_3 + 0x18)
        
        if (x9_3 == 0)
            return 1
    
    uint64_t x8_3 = zx.q(x9_3[4])
    
    if (x8_3.d s< 1)
        return 1
    
    int32_t* x10_3 = *(x9_3 + 8)
    
    if (*x10_3 != 0x32)
        int64_t x9_5 = 0
        int32_t i
        
        do
            if (x8_3 - 1 == x9_5)
                return zx.q(x8_3 u>= x8_3 ? 1 : 0)
            
            i = x10_3[1 + x9_5]
            x9_5 += 1
        while (i != 0x32)
        return zx.q(x9_5 u>= x8_3 ? 1 : 0)

return 0
