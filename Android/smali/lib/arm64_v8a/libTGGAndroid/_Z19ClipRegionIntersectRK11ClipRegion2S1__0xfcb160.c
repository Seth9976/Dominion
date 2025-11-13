// 函数: _Z19ClipRegionIntersectRK11ClipRegion2S1_
// 地址: 0xfcb160
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x9_3 = *(arg1 + 0x10)
int32_t* entry_x8
int128_t v0

if (x9_3 == 0)
    v0 = *arg2
    entry_x8[4] = *(arg2 + 0x10)
    *entry_x8 = v0
    return 

int32_t x10 = *(arg2 + 0x10)

if (x10 == 0)
    v0 = *arg1
    entry_x8[4] = *(arg1 + 0x10)
    *entry_x8 = v0
    return 

v0.d = *arg1
float v1
float v2
float v3
float v4

if (x9_3 == x10)
    v3 = *arg2
    v4 = *(arg2 + 4)
    v2 = *(arg1 + 4)
    v1 = *(arg1 + 8)
    float v5 = *(arg1 + 0xc)
    
    if (v0.d f> v3)
        v0.d = v0.d
    else
        v0.d = v3
    
    float v6 = *(arg2 + 8)
    v3 = *(arg2 + 0xc)
    
    if (not(v1 < v6))
        v1 = v6
    
    if (not(v2 > v4))
        v2 = v4
    
    if (v5 < v3)
        v3 = v5
    
    if (not(v0.d f> v1) && not(v2 > v3))
        *entry_x8 = v0.d
        entry_x8[1] = v2
        entry_x8[2] = v1
        entry_x8[3] = v3
        entry_x8[4] = x9_3
        return 
    
    v0.d = *RECT0
    v2 = *(RECT0 + 4)
    v1 = *(RECT0 + 8)
    v3 = *(RECT0 + 0xc)
    *entry_x8 = v0.d
    entry_x8[1] = v2
    entry_x8[2] = v1
    entry_x8[3] = v3
    entry_x8[4] = x9_3
    return 

v1 = *arg2
int32_t x11 = x10 & x9_3

if ((x11 & 2) == 0)
    if ((x10 & 2) == 0)
        v1 = 0f
    
    if ((x9_3 & 2) == 0)
        v0.d = v1
    else
        v0.d = v0.d
    
    v1 = *(arg1 + 8)
    v2 = *(arg2 + 8)
    
    if ((x11 & 1) == 0)
        goto label_fcb290
    
    goto label_fcb224

if (v0.d f< v1)
    v0.d = v0.d
else
    v0.d = v1

v1 = *(arg1 + 8)
v2 = *(arg2 + 8)

if ((x11 & 1) == 0)
label_fcb290:
    
    if ((x10 & 1) == 0)
        v2 = 0f
    
    if ((x9_3 & 1) == 0)
        v1 = v2
    
    v2 = *(arg1 + 4)
    v3 = *(arg2 + 4)
    
    if ((x11 & 4) != 0)
        goto label_fcb238
    
    goto label_fcb2b0

label_fcb224:

if (not(v1 > v2))
    v1 = v2

v2 = *(arg1 + 4)
v3 = *(arg2 + 4)

if ((x11 & 4) == 0)
label_fcb2b0:
    
    if ((x10 & 4) == 0)
        v3 = 0f
    
    if ((x9_3 & 4) == 0)
        v2 = v3
    
    v3 = *(arg1 + 0xc)
    v4 = *(arg2 + 0xc)
    
    if ((x11 & 8) != 0)
        goto label_fcb248
    
    goto label_fcb2d0

label_fcb238:

if (not(v2 > v3))
    v2 = v3

v3 = *(arg1 + 0xc)
v4 = *(arg2 + 0xc)

if ((x11 & 8) == 0)
label_fcb2d0:
    
    if ((x10 & 8) == 0)
        v4 = 0f
    
    if ((x9_3 & 8) == 0)
        v3 = v4
else
label_fcb248:
    
    if (not(v3 < v4))
        v3 = v4

*entry_x8 = v0.d
entry_x8[1] = v2
entry_x8[2] = v1
entry_x8[3] = v3
entry_x8[4] = x10 | x9_3
