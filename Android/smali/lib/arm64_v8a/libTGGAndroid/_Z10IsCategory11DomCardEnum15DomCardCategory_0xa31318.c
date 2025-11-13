// 函数: _Z10IsCategory11DomCardEnum15DomCardCategory
// 地址: 0xa31318
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

for (int32_t* i = *(*(gCampaignData + 0x50)
        + ((zx.q(*(gCampaignData + 0x58)) & (zx.q(arg1) | zx.q(arg1 s>> 4))) << 3)); i != 0; 
        i = *(i + 0x18))
    if (*i == arg1)
        uint64_t x8_2 = zx.q(i[4])
        
        if (x8_2.d s< 1)
            break
        
        int32_t* x9_2 = *(i + 8)
        
        if (*x9_2 == arg2)
            return 1
        
        int64_t x11 = 1
        int64_t x10_2
        
        do
            x10_2 = x11
            
            if (x8_2 == x11)
                break
            
            x11 = x10_2 + 1
        while (x9_2[x10_2] != arg2)
        
        return zx.q(x10_2 u< x8_2 ? 1 : 0)

return 0
