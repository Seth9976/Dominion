// 函数: _Z16IntersectRayBBoxRK3RayRK4BBoxRf
// 地址: 0xf75bc8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

float v2 = *(arg2 + 0xc)
float v1 = *arg1
float v0 = *(arg1 + 4)
int32_t x9
float v3
float v4

if (v2 >= v1)
    if (*arg2 <= v1)
        x9 = 0
        v4 = *(arg2 + 0x10)
        v3 = *(arg1 + 8)
        
        if (v4 < v0)
            goto label_f75bec
        
        goto label_f75c60
    
    x9 = 2
    v4 = *(arg2 + 0x10)
    v3 = *(arg1 + 8)
    
    if (v4 < v0)
        goto label_f75bec
    
    goto label_f75c60

x9 = 1
v4 = *(arg2 + 0x10)
v3 = *(arg1 + 8)
int32_t v5

if (v4 >= v0)
label_f75c60:
    
    if (not(*(arg2 + 4) f<= v0))
        x9 |= 8
    
    v5 = *(arg2 + 0x14)
    
    if (v5 f>= v3)
        goto label_f75c00
    
    goto label_f75c74

label_f75bec:
x9 |= 4
v5 = *(arg2 + 0x14)
int32_t x8_1

if (v5 f< v3)
label_f75c74:
    x9 |= 0x20
label_f75c7c:
    
    if ((x9 & 3) == 0)
    label_f75d00:
        x8_1 = 0
        
        if ((x9 & 0xc) != 0)
        label_f75d0c:
            v0 = *(arg1 + 0x10)
            
            if (not(fabs(v0) <= float.s(0x3727c5ac)))
                void* __offset(BBox, 0x4) x10_2
                
                if ((x9 & 4) == 0)
                    x10_2 = arg2 + 4
                else
                    x10_2 = arg2 + 0x10
                
                v1 = *x10_2 - *(arg1 + 4)
                v2 = *arg1 + v1 * *(arg1 + 0xc) / v0
                
                if (not(v2 f> *(arg2 + 0xc)) && not(v2 < *arg2))
                    v2 = *(arg1 + 8) + v1 * *(arg1 + 0x14) / v0
                    
                    if (not(v2 > *(arg2 + 0x14)) && not(v2 < *(arg2 + 8)))
                        v0 = v1 / v0
                        
                        if (not(v0 < 0f) && (v0 < *arg3 || x8_1 != 1))
                            x8_1 = 1
                            *arg3 = v0
    else
        float v6 = *(arg1 + 0xc)
        
        if (fabs(v6) <= float.s(0x3727c5ac))
            goto label_f75d00
        
        if ((x9 & 1) == 0)
            v2 = *arg2
        
        v1 = v2 - v1
        v0 = v0 + v1 * *(arg1 + 0x10) / v6
        
        if (v0 > v4 || v0 < *(arg2 + 4))
            goto label_f75d00
        
        v0 = v3 + v1 * *(arg1 + 0x14) / v6
        
        if (v0 f> v5 || v0 < *(arg2 + 8))
            goto label_f75d00
        
        v0 = v1 / v6
        
        if (not(v0 >= 0f))
            goto label_f75d00
        
        x8_1 = 1
        *arg3 = v0
        
        if ((x9 & 0xc) != 0)
            goto label_f75d0c
    
    if ((x9 & 0x30) != 0)
        v0 = *(arg1 + 0x14)
        
        if (not(fabs(v0) <= float.s(0x3727c5ac)))
            void* __offset(BBox, 0x8) x9_1
            
            if ((x9 & 0x20) == 0)
                x9_1 = arg2 + 8
            else
                x9_1 = arg2 + 0x14
            
            v1 = *x9_1 - *(arg1 + 8)
            v2 = *arg1 + v1 * *(arg1 + 0xc) / v0
            
            if (not(v2 f> *(arg2 + 0xc)) && not(v2 < *arg2))
                v2 = *(arg1 + 4) + v1 * *(arg1 + 0x10) / v0
                
                if (not(v2 > *(arg2 + 0x10)) && not(v2 < *(arg2 + 4)))
                    v0 = v1 / v0
                    
                    if (not(v0 < 0f) && (v0 < *arg3 || x8_1 != 1))
                        *arg3 = v0
                        x8_1 = 1
else
label_f75c00:
    
    if (not(*(arg2 + 8) <= v3))
        x9 |= 0x10
        goto label_f75c7c
    
    if (x9 != 0)
        goto label_f75c7c
    
    *arg3 = 0f
    x8_1 = 1

return zx.q(x8_1)
