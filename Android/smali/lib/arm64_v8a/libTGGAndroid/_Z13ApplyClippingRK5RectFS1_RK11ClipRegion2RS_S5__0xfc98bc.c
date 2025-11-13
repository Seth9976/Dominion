// 函数: _Z13ApplyClippingRK5RectFS1_RK11ClipRegion2RS_S5_
// 地址: 0xfc98bc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*arg4 = *arg1
*arg5 = *arg2
int32_t x8 = *(arg3 + 0x10)

if (x8 != 0)
    int128_t v0
    v0.d = fconvert.s(1f)
    float v1
    float v2
    float v3
    
    if ((x8 & 1) != 0)
        v1 = *arg1
        v2 = *(arg3 + 8)
        
        if (not(v1 <= v2))
            return 0
        
        v3 = *(arg1 + 8)
        
        if (not(v3 <= v2))
            *(arg4 + 8) = v2
            x8 = *(arg3 + 0x10)
            v0.d = v2 - v1
            v0.d = v0.d f/ (v3 - v1)
    
    v1 = 0f
    float v4
    float v5
    
    if ((x8 & 2) != 0)
        v3 = *(arg1 + 8)
        v4 = *arg3
        
        if (not(v3 >= v4))
            return 0
        
        v5 = *arg1
        v2 = 0f
        
        if (not(v5 >= v4))
            *arg4 = v4
            x8 = *(arg3 + 0x10)
            v2 = (v4 - v5) / (v3 - v5)
    else
        v2 = 0f
    
    if ((x8 & 4) != 0)
        v3 = *(arg1 + 0xc)
        v4 = *(arg3 + 4)
        
        if (not(v3 >= v4))
            return 0
        
        v5 = *(arg1 + 4)
        
        if (not(v5 >= v4))
            *(arg4 + 4) = v4
            x8 = *(arg3 + 0x10)
            v1 = (v4 - v5) / (v3 - v5)
    
    v3 = fconvert.s(1f)
    
    if ((x8 & 8) != 0)
        v5 = *(arg1 + 4)
        v4 = *(arg3 + 0xc)
        
        if (not(v5 <= v4))
            return 0
        
        float v6 = *(arg1 + 0xc)
        
        if (not(v6 <= v4))
            v3 = (v4 - v5) / (v6 - v5)
            *(arg4 + 0xc) = v4
    
    if (not(*arg4 <= *(arg4 + 8)))
        return 0
    
    if (not(*(arg4 + 4) <= *(arg4 + 0xc)))
        return 0
    
    v4 = *arg2
    *arg5 = v4 + v2 * (*(arg2 + 8) - v4)
    v2 = *arg2
    v0.d = v0.d f* (*(arg2 + 8) - v2)
    v0.d = v2 f+ v0.d
    *(arg5 + 8) = v0.d
    v0.d = *(arg2 + 4)
    v0.d = v0.d f+ v1 * (*(arg2 + 0xc) f- v0.d)
    *(arg5 + 4) = v0.d
    v0.d = *(arg2 + 4)
    v0.d = v0.d f+ v3 * (*(arg2 + 0xc) f- v0.d)
    *(arg5 + 0xc) = v0.d

return 1
