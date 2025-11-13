// 函数: sub_a5b08c
// 地址: 0xa5b08c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x0 = zx.q(*arg2)

for (int32_t* i = *(*(gCampaignData + 0x50)
        + (((zx.q(x0.d) | zx.q(x0.d s>> 4)) & zx.q(*(gCampaignData + 0x58))) << 3)); i != 0; 
        i = *(i + 0x18))
    if (*i == x0.d)
        uint64_t x8_2 = zx.q(i[4])
        
        if (x8_2.d s>= 1)
            int32_t* x10_1 = *(i + 8)
            int64_t x9_3
            
            if (*x10_1 != 0x39)
                x9_3 = 0
                int32_t j
                
                do
                    if (x8_2 - 1 == x9_3)
                        return 0
                    
                    j = x10_1[1 + x9_3]
                    x9_3 += 1
                while (j != 0x39)
            
            if (*x10_1 == 0x39 || x9_3 u< x8_2)
                return (zx.q(IsLandscape(x0)) ^ 1) & 1
        
        break

return 0
