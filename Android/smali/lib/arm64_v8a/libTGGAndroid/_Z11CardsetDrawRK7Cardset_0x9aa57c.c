// 函数: _Z11CardsetDrawRK7Cardset
// 地址: 0x9aa57c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

Cardset const& x19 = arg1

if (*(arg1 + 0x258) == 0)
    int128_t v0
    v0.d = *(x19 + 0x1528)
    
    if (v0.d f!= *RECT0)
    label_9aa6a8:
        int32_t v1_1
        int32_t v2_1
        int32_t v3_1
        arg1, v0, v1_1, v2_1, v3_1 = RectScreen()
        
        if (not(*(x19 + 0x1530) f< v0.d))
            v0.d = *(x19 + 0x1528)
            
            if (not(v0.d f> v2_1))
                v0.d = *(x19 + 0x1534)
                
                if (not(v0.d f< v1_1))
                    v0.d = *(x19 + 0x152c)
                    
                    if (v0.d f<= v3_1)
                        goto label_9aa5a0
    else
        v0.d = *(x19 + 0x152c)
        
        if (v0.d f!= *(RECT0 + 4))
            goto label_9aa6a8
        
        v0.d = *(x19 + 0x1530)
        
        if (v0.d f!= *(RECT0 + 8))
            goto label_9aa6a8
        
        v0.d = *(x19 + 0x1534)
        
        if (not(v0.d f== *(RECT0 + 0xc)))
            goto label_9aa6a8
else
label_9aa5a0:
    int32_t var_30_1 = 0xffffffff
    int128_t var_40 = *(x19 + 0x1528)
    IntersectClipRect(&var_40)
    
    if (*(x19 + 0x258) == 0)
        SetClipRect(&var_40)
    
    int32_t x8_2 = *(x19 + 0x1520)
    
    if (x8_2 s>= 1)
        int64_t i = 0
        
        do
            if (i != zx.q(*(x19 + 0x1538))
                    && (i != zx.q(*(x19 + 0x1548)) || not(*(x19 + 0x154c) f!= 0f)))
                UI2Draw(zx.q(*(x19 + (i << 2))))
                x8_2 = *(x19 + 0x1520)
            
            i += 1
        while (i s< sx.q(x8_2))
    
    void var_58
    SetClipRect(&var_58)
    int64_t x8_3 = sx.q(*(x19 + 0x1538))
    
    if (x8_3.d != 0xffffffff)
        UI2Draw(zx.q(*(x19 + (x8_3 << 2))))
    
    int64_t x8_4 = sx.q(*(x19 + 0x1548))
    
    if (x8_4.d != 0xffffffff && not(*(x19 + 0x154c) f== 0f))
        UI2Draw(zx.q(*(x19 + (x8_4 << 2))))
