// 函数: _Z15AlreadyHasThemeRK13CampaignTheme
// 地址: 0xa42230
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t i_1 = zx.q(*(gCampaignSetup + 0x19b4))

if (i_1.d != 2)
    void* x8_3 = *(gCampaignSetup + 0x19a0)
    
    if (i_1.d s>= 1)
        int32_t* x13_1 = x8_3 + 0x5014
        uint64_t i
        
        do
            int32_t x14_1 = x13_1[-1]
            
            if (x14_1 == 0)
                break
            
            if (x14_1 == *arg1 && *x13_1 == *(arg1 + 4))
                return 1
            
            i = i_1
            i_1 -= 1
            x13_1 = &x13_1[2]
        while (i != 1)
    
    int64_t x9_2 = sx.q(*(gCampaignSetup + 0x19a8))
    int32_t x10_2 = *(x8_3 + (x9_2 << 0xb) + 0x540)
    
    if (x10_2 != 0 && x10_2 == *arg1 && *(x8_3 + (x9_2 << 0xb) + 0x544) == *(arg1 + 4))
        return 1
else
    int32_t* x8_1 = *(gCampaignSetup + 0x19a0) + 0x5010
    int32_t x10 = *arg1
    int32_t x9_1 = *(arg1 + 4)
    
    if (*x8_1 == x10 && x8_1[1] == x9_1)
        return 1
    
    if (x8_1[2] == x10 && x8_1[3] == x9_1)
        return 1

return 0
