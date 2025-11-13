// 函数: jcv_boxshape_clip
// 地址: 0xc119f0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

float v6 = *(arg2 + 0x28)
float v2 = *(arg1 + 0x18)
float v3 = *(arg1 + 0x1c)
float v0 = *(arg1 + 0x20)
float v1 = *(arg1 + 0x24)
void* x8_1
void* x9_1

if (not(v6 != fconvert.s(1f)) && *(arg2 + 0x2c) >= 0f)
    x8_1 = arg2 + 0x20
    
    if (not(*x8_1 != float.s(0xff7fffff)) && *(arg2 + 0x24) == float.s(0xff7fffff))
        x8_1 = nullptr
    
    x9_1 = arg2 + 0x18
    
    if (not(*x9_1 != float.s(0xff7fffff)) && *(arg2 + 0x1c) == float.s(0xff7fffff))
        x9_1 = nullptr
    
    goto label_c11ae4

x8_1 = arg2 + 0x18

if (not(*x8_1 != float.s(0xff7fffff)) && *(arg2 + 0x1c) == float.s(0xff7fffff))
    x8_1 = nullptr

x9_1 = arg2 + 0x20

if (*x9_1 == float.s(0xff7fffff))
    if (*(arg2 + 0x24) == float.s(0xff7fffff))
        x9_1 = nullptr
    
    if (v6 != fconvert.s(1f))
        goto label_c11b8c
    
    goto label_c11ae4

float v4_1
float v5
float v7
float v16

if (v6 == fconvert.s(1f))
label_c11ae4:
    v4_1 = v3
    
    if (x8_1 != 0)
        v5 = *(x8_1 + 4)
        v4_1 = v3
        
        if (not(v5 <= v3))
            v4_1 = v5
    
    v6 = *(arg2 + 0x2c)
    v7 = *(arg2 + 0x30)
    
    v5 = v4_1 > v1 ? v1 : v4_1
    
    v4_1 = v7 - v6 * v5
    
    if (x9_1 != 0)
        v16 = *(x9_1 + 4)
        
        if (not(v16 >= v1))
            v1 = v16
    
    if (v1 < v3)
        v1 = v3
    
    v3 = v7 - v6 * v1
    v16 = v7 - v0
    
    if (not(v4_1 <= v0))
        v5 = v16 / v6
        v4_1 = v0
    else if (not(v4_1 >= v2))
        v5 = (v7 - v2) / v6
        v4_1 = v2
    
    if (not(v3 <= v0))
        v1 = v16 / v6
    else if (v3 >= v2)
        v0 = v3
    else
        v1 = (v7 - v2) / v6
        v0 = v2
else
label_c11b8c:
    v4_1 = v2
    
    if (x8_1 != 0)
        v5 = *x8_1
        v4_1 = v2
        
        if (not(v5 <= v2))
            v4_1 = v5
    
    v7 = *(arg2 + 0x30)
    
    if (v4_1 > v0)
        v4_1 = v0
    
    v5 = v7 - v6 * v4_1
    
    if (x9_1 != 0)
        v16 = *x9_1
        
        if (not(v16 >= v0))
            v0 = v16
    
    if (v0 < v2)
        v0 = v2
    
    v2 = v7 - v6 * v0
    
    if (not(v5 <= v1))
        v4_1 = (v7 - v1) / v6
        v5 = v1
    else if (not(v5 >= v3))
        v4_1 = (v7 - v3) / v6
        v5 = v3
    
    if (not(v2 <= v1))
        v0 = (v7 - v1) / v6
    else if (v2 >= v3)
        v1 = v2
    else
        v0 = (v7 - v3) / v6
        v1 = v3
*(arg2 + 0x18) = v4_1
*(arg2 + 0x1c) = v5
*(arg2 + 0x20) = v0
*(arg2 + 0x24) = v1
return zx.q(v4_1 != v0 ? 1 : 0) | zx.q(v5 != v1 ? 1 : 0)
