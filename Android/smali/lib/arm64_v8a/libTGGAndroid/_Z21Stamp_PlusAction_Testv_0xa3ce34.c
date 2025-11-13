// 函数: _Z21Stamp_PlusAction_Testv
// 地址: 0xa3ce34
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x19 = zx.q(*(gCampaignSetup + 0x19ac))

if (x19.d != 0)
    if ((zx.d(*(DomDefGet(zx.q(x19.d), 0x17) + 0xc8)) & 4) == 0)
        return 0
    
    int32_t* x9_3 = *(*(gCampaignData + 0x50)
        + ((zx.q(*(gCampaignData + 0x58)) & (zx.q(x19.d s>> 4) | x19)) << 3))
    
    if (x9_3 == 0)
        return 0
    
    while (*x9_3 != x19.d)
        x9_3 = *(x9_3 + 0x18)
        
        if (x9_3 == 0)
            return 0
    
    uint64_t x8_4 = zx.q(x9_3[4])
    
    if (x8_4.d s< 1)
        return 0
    
    int32_t* x10_3 = *(x9_3 + 8)
    
    if (*x10_3 != 0x11)
        uint64_t x9_5 = 0
        int32_t i
        
        do
            if (x8_4 - 1 == x9_5)
                x9_5 = x8_4
                break
            
            i = x10_3[1 + x9_5]
            x9_5 += 1
        while (i != 0x11)
        return zx.q(x9_5 u< x8_4 ? 1 : 0)

return 1
