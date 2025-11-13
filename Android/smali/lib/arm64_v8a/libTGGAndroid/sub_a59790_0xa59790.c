// 函数: sub_a59790
// 地址: 0xa59790
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x19 = zx.q(*arg2)

if ((AllowedImbalanced(zx.q(x19.d)) & 1) != 0)
    for (int32_t* i = *(*(gCampaignData + 0x50)
            + ((zx.q(*(gCampaignData + 0x58)) & (zx.q(x19.d s>> 4) | x19)) << 3)); i != 0; i = *(i + 0x18))
        if (*i == x19.d)
            uint64_t x8_3 = zx.q(i[4])
            
            if (x8_3.d s< 1)
                break
            
            int32_t* x10_3 = *(i + 8)
            
            if (*x10_3 == 0x4d)
                return 1
            
            int64_t x9_4 = 0
            int32_t j
            
            do
                if (x8_3 - 1 == x9_4)
                    return zx.q(x8_3 u< x8_3 ? 1 : 0)
                
                j = x10_3[1 + x9_4]
                x9_4 += 1
            while (j != 0x4d)
            return zx.q(x9_4 u< x8_3 ? 1 : 0)

return 0
