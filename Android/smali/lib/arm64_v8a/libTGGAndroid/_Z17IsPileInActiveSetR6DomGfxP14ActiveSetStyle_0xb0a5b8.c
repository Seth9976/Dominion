// 函数: _Z17IsPileInActiveSetR6DomGfxP14ActiveSetStyle
// 地址: 0xb0a5b8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(gDomClient + 0x207a0) == LocalWho())
    if ((TutorialCardIsClickable(arg1) & 1) == 0)
        return 0
    
    int32_t x8_1 = *(gDomClient + 0x2074c)
    
    if (x8_1 == 7)
        int32_t x21_1 = *(arg1 + 0x30)
        
        if (*(GetClient() + 0x5068) == 0)
            if ((zx.d(*(DomDefGet(zx.q(x21_1), 0x18) + 0xce)) & 0x10) != 0)
                return 0
        else if ((zx.d(*(DomDefGet(zx.q(x21_1), zx.q(*(ActiveGame() + 0x30))) + 0xce)) & 0x10) != 0)
            return 0
        
        int32_t x8_5 = *(arg1 + 0x30)
        
        if (x8_5 s> 0xd3c)
            if (x8_5 - 0x1019 u> 0x19)
                if (x8_5 != 0xd3d && x8_5 != 0x1128)
                    goto label_b0a818
            else if ((1 << (x8_5 - 0x1019) & 0x2108421) == 0 && x8_5 != 0xd3d && x8_5 != 0x1128)
            label_b0a818:
                
                if (arg2 == 0)
                    return 1
                
                *arg2 = 0x14
                return 1
        else if (x8_5 s> 0x91b)
            if (x8_5 != 0x91c && x8_5 != 0xc0a && x8_5 != 0xd30)
                goto label_b0a818
        else if (x8_5 != 0 && x8_5 != 0x70d && x8_5 != 0x718)
            goto label_b0a818
        
        x8_1 = *(gDomClient + 0x2074c)
    
    if (x8_1 == 8)
        if (arg2 != 0)
            *arg2 = 1
            int32_t x8_8
            
            if (*(gDomClient + 0x20758) - 0xed u< 7)
                x8_8 = 0x16
            else
                x8_8 = 1
            
            *arg2 = x8_8
        
        uint64_t x8_9 = zx.q(*(gDomClient + 0x207bc))
        
        if (x8_9.d s< 1)
            return 0
        
        int32_t i = *(arg1 + 0x30)
        
        if (*(gDomClient + 0x207c0) == i)
            return 1
        
        int64_t x13_1 = 0
        int64_t x12_2
        
        do
            x12_2 = x13_1
            
            if (x8_9 - 1 == x13_1)
                break
            
            x13_1 = x12_2 + 1
        while (*(gDomClient + (x12_2 << 2) + 0x207c4) != i)
        
        return zx.q(x12_2 + 1 u< x8_9 ? 1 : 0)
    
    int32_t x8_10 = *(arg1 + 0x70)
    
    if (x8_10 == 0)
        return 0
    
    DomGfx* x20_1 = *(gDomClient + 0x205e0) + zx.q(x8_10.w) * 0x21d8
    
    if ((IsCardInActiveSet(x20_1, arg2, false) & 1) != 0)
        return TutorialCardIsClickable(x20_1) __tailcall

return 0
