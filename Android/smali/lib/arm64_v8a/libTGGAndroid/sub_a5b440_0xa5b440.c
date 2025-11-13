// 函数: sub_a5b440
// 地址: 0xa5b440
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8 = *arg2

for (int32_t* i = *(*(gCampaignData + 0x50)
        + (((zx.q(x8) | zx.q(x8 s>> 4)) & zx.q(*(gCampaignData + 0x58))) << 3)); i != 0; i = *(i + 0x18))
    if (*i == x8)
        uint64_t x8_1 = zx.q(i[4])
        
        if (x8_1.d s< 1)
            break
        
        int32_t* x10_3 = *(i + 8)
        
        if (*x10_3 == 0x4f)
            return 1
        
        int64_t x9_2 = 0
        int32_t j
        
        do
            if (x8_1 - 1 == x9_2)
                return zx.q(x8_1 u< x8_1 ? 1 : 0)
            
            j = x10_3[1 + x9_2]
            x9_2 += 1
        while (j != 0x4f)
        return zx.q(x9_2 u< x8_1 ? 1 : 0)

return 0
