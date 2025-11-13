// 函数: _Z12DomMapTryGet17CampaignMapHandle
// 地址: 0xc1f650
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg1 != 0)
    int32_t x8_1 = arg1 & 0xffff
    
    if (x8_1 u< *(gMapGlobals + 8))
        int64_t x9_1 = *gMapGlobals
        
        if (*(x9_1 + mulu.dp.d(x8_1, 0x5118) + 0x5110) == arg1)
            int32_t* x8_3 = x9_1 + zx.q(x8_1) * 0x5118
            
            if (*x8_3 == 2)
                return &x8_3[2]
            
            return nullptr

return 0
