// 函数: sub_a5b6d8
// 地址: 0xa5b6d8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8 = *arg2

for (int32_t* i = *(*(gCampaignData + 0x50)
        + (((zx.q(x8) | zx.q(x8 s>> 4)) & zx.q(*(gCampaignData + 0x58))) << 3)); i != 0; i = *(i + 0x18))
    if (*i == x8)
        uint64_t x9_2 = zx.q(i[4])
        
        if (x9_2.d s< 1)
            break
        
        int32_t* x11_1 = *(i + 8)
        
        if (*x11_1 == 0x32)
            return zx.q(x8 != 0x91c ? 1 : 0) & 1
        
        uint64_t x10_3 = 0
        int32_t j
        
        do
            if (x9_2 - 1 == x10_3)
                x10_3 = x9_2
                break
            
            j = x11_1[1 + x10_3]
            x10_3 += 1
        while (j != 0x32)
        return zx.q(x8 != 0x91c ? 1 : 0) & zx.q(x10_3 u< x9_2 ? 1 : 0)

return 0
