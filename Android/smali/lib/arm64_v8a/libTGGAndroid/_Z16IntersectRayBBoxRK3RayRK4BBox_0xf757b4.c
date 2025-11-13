// 函数: _Z16IntersectRayBBoxRK3RayRK4BBox
// 地址: 0xf757b4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

float v1 = *(arg2 + 0xc)
float v2 = *arg1
float v0 = *(arg1 + 4)
int32_t x8
float v3
float v4

if (v1 >= v2)
    if (*arg2 <= v2)
        x8 = 0
        v3 = *(arg2 + 0x10)
        v4 = *(arg1 + 8)
        
        if (v3 < v0)
            goto label_f757d8
        
        goto label_f75848
    
    x8 = 2
    v3 = *(arg2 + 0x10)
    v4 = *(arg1 + 8)
    
    if (v3 < v0)
        goto label_f757d8
    
    goto label_f75848

x8 = 1
v3 = *(arg2 + 0x10)
v4 = *(arg1 + 8)
float v5

if (v3 >= v0)
label_f75848:
    
    if (not(*(arg2 + 4) <= v0))
        x8 |= 8
    
    v5 = *(arg2 + 0x14)
    
    if (v5 >= v4)
        goto label_f757ec
    
    x8 |= 0x20
else
label_f757d8:
    x8 |= 4
    v5 = *(arg2 + 0x14)
    
    if (v5 < v4)
        x8 |= 0x20
    else
    label_f757ec:
        
        if (not(*(arg2 + 8) <= v4))
            x8 |= 0x10
        else if (x8 == 0)
            return 1

float v6
float v7
float v16

if ((x8 & 3) != 0)
    v6 = *(arg1 + 0xc)
    
    if (not(fabs(v6) <= float.s(0x3727c5ac)))
        if ((x8 & 1) == 0)
            v7 = *arg2
        else
            v7 = v1
        
        v7 = v7 - v2
        v16 = v0 + v7 * *(arg1 + 0x10) / v6
        
        if (not(v16 > v3) && not(v16 f< *(arg2 + 4)))
            v6 = v4 + v7 * *(arg1 + 0x14) / v6
            
            if (not(v6 > v5) && v6 >= *(arg2 + 8))
                return 1

if ((x8 & 0xc) != 0)
    v6 = *(arg1 + 0x10)
    
    if (not(fabs(v6) <= float.s(0x3727c5ac)))
        if ((x8 & 4) == 0)
            v7 = *(arg2 + 4)
        else
            v7 = v3
        
        v7 = v7 - v0
        v16 = v2 + v7 * *(arg1 + 0xc) / v6
        
        if (not(v16 > v1) && not(v16 f< *arg2))
            v6 = v4 + v7 * *(arg1 + 0x14) / v6
            
            if (not(v6 > v5) && v6 >= *(arg2 + 8))
                return 1

if ((x8 & 0x30) != 0)
    v6 = *(arg1 + 0x14)
    
    if (not(fabs(v6) <= float.s(0x3727c5ac)))
        if ((x8 & 0x20) == 0)
            v5 = *(arg2 + 8)
        
        v4 = v5 - v4
        v2 = v2 + v4 * *(arg1 + 0xc) / v6
        
        if (not(v2 > v1) && not(v2 < *arg2))
            v0 = v0 + v4 * *(arg1 + 0x10) / v6
            
            if (not(v0 > v3) && v0 >= *(arg2 + 4))
                return 1

return 0
