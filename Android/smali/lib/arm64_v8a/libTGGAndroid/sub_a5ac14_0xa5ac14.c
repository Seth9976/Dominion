// 函数: sub_a5ac14
// 地址: 0xa5ac14
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x19 = zx.q(*arg2)
int32_t x0_1

if (zx.d(*(arg1 + 8)) == 0)
    x0_1 = IsLandscape(zx.q(x19.d))

if (zx.d(*(arg1 + 8)) != 0 || (x0_1 & 1) == 0)
    int32_t* i = *(*(gCampaignData + 0x50)
        + ((zx.q(*(gCampaignData + 0x58)) & (zx.q(x19.d s>> 4) | x19)) << 3))
    
    if (i != 0)
        int32_t x8_2 = *(arg1 + 0xc)
        
        do
            if (*i == x19.d)
                uint64_t x9_4 = zx.q(i[4])
                
                if (x9_4.d s< 1)
                    break
                
                int32_t* x11 = *(i + 8)
                
                if (*x11 == x8_2)
                    return 1
                
                uint64_t x10_4 = 0
                int32_t x13_1
                
                do
                    if (x9_4 - 1 == x10_4)
                        x10_4 = x9_4
                        break
                    
                    x13_1 = x11[1 + x10_4]
                    x10_4 += 1
                while (x13_1 != x8_2)
                return zx.q(x10_4 u< x9_4 ? 1 : 0)
            
            i = *(i + 0x18)
        while (i != 0)

return 0
