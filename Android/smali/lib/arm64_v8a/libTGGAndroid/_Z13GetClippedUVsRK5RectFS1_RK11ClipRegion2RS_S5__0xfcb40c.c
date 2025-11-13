// 函数: _Z13GetClippedUVsRK5RectFS1_RK11ClipRegion2RS_S5_
// 地址: 0xfcb40c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*arg5 = *arg2
*arg4 = *arg1
int32_t x8 = *(arg3 + 0x10)
int128_t v0
float v1
float v2
float v3

if ((x8 & 1) != 0)
    v0.d = *arg1
    v1 = *(arg3 + 8)
    
    if (not(v0.d f<= v1))
        return 0
    
    v2 = *(arg1 + 8)
    
    if (not(v2 <= v1))
        v3 = *arg2
        v1 = v1 f- v0.d
        v0.d = v2 f- v0.d
        v0.d = v1 f/ v0.d
        v0.d = v0.d f* (*(arg2 + 8) - v3)
        v0.d = v3 f+ v0.d
        *(arg5 + 8) = v0.d
        v0.d = *(arg3 + 8)
        *(arg4 + 8) = v0.d
        x8 = *(arg3 + 0x10)

if ((x8 & 2) != 0)
    v0.d = *(arg1 + 8)
    v1 = *arg3
    
    if (not(v0.d f>= v1))
        return 0
    
    v2 = *arg1
    
    if (not(v2 >= v1))
        v3 = *arg2
        v0.d = v0.d f- v2
        v0.d = (v1 - v2) f/ v0.d
        v0.d = v0.d f* (*(arg2 + 8) - v3)
        v0.d = v3 f+ v0.d
        *arg5 = v0.d
        v0.d = *arg3
        *arg4 = v0.d
        x8 = *(arg3 + 0x10)

if ((x8 & 4) != 0)
    v0.d = *(arg1 + 0xc)
    v1 = *(arg3 + 4)
    
    if (not(v0.d f>= v1))
        return 0
    
    v2 = *(arg1 + 4)
    
    if (not(v2 >= v1))
        v3 = *(arg2 + 4)
        v0.d = v0.d f- v2
        v0.d = (v1 - v2) f/ v0.d
        v0.d = v0.d f* (*(arg2 + 0xc) - v3)
        v0.d = v3 f+ v0.d
        *(arg5 + 4) = v0.d
        v0.d = *(arg3 + 4)
        *(arg4 + 4) = v0.d
        x8 = *(arg3 + 0x10)

if ((x8 & 8) != 0)
    v0.d = *(arg1 + 4)
    v1 = *(arg3 + 0xc)
    
    if (not(v0.d f<= v1))
        return 0
    
    v2 = *(arg1 + 0xc)
    
    if (not(v2 <= v1))
        v3 = *(arg2 + 4)
        v1 = v1 f- v0.d
        v0.d = v2 f- v0.d
        v0.d = v1 f/ v0.d
        v0.d = v0.d f* (*(arg2 + 0xc) - v3)
        v0.d = v3 f+ v0.d
        *(arg5 + 0xc) = v0.d
        v0.d = *(arg3 + 0xc)
        *(arg4 + 0xc) = v0.d

v0.d = *arg5

if (not(v0.d f<= *(arg5 + 8)))
    return 0

v0.d = *(arg5 + 4)
return zx.q(v0.d f<= *(arg5 + 0xc) ? 1 : 0)
