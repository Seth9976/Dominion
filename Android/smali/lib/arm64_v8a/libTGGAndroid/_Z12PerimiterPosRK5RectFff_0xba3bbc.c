// 函数: _Z12PerimiterPosRK5RectFff
// 地址: 0xba3bbc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint128_t v2 = arg2
arg2 = (*arg1).d
uint64_t v7
v7.d = *(arg1 + 8)
uint64_t v3
v3.d = *(arg1 + 0xc)
uint64_t v6
v6.d = v7.d f- arg2
float v4 = v3.d f- arg2
float v16 = v6.d f+ v4
float v5 = (v16 + v16) * arg3
int128_t v0 = vadd_f32(arg2, vdup_laneq_s32(v2, 0))
int128_t v1

if (not(v5 f>= v6.d))
    v3.d = v2.d f+ v2.d
    v3.d = v6.d f- v3.d
    v1.q = *V2X
    v1.d = v1.d f* v3.d
    v1:4.d = v1:4.d f* v3.d
    
    if (v2.d f>= 0f)
        v3.d = v6.d f- v2.d
        v4 = v5 f- v2.d
        v2.d = v3.d f- v2.d
        v3.d = v4 f/ v2.d
        v2.d = 0f
        v4 = 0f
        
        if (not(v3.d f<= 0f))
            v4 = fconvert.s(1f)
            
            if (not(v3.d f>= v4))
                v4 = v3.d f+ 0f
        
        v3.d = fconvert.s(1f)
        v3.d = vmin_f32(v4, v3.d)
        
        if (v4 < 0f)
            v2.d = v2.d
        else
            v2.d = v3.d
        
        v1.d = v1.d f* v2.d
        v1:4.d = v1:4.d f* v2.d
        v1.d = vadd_f32(v0, v1):4.d
        return 
    
    v2.d = fabs(v2.d)
    v3.d = v6.d f- v2.d
    v4 = v5 f- v2.d
    v2.d = v3.d f- v2.d
    v3.d = v4 f/ v2.d
    v2.d = 0f
    
    if (not(v3.d f<= 0f))
        v2.d = fconvert.s(1f)
        
        if (not(v3.d f>= v2.d))
            v2.d = 0f
            v2.d = v3.d f+ v2.d
    
    v1.d = v1.d f* v2.d
    v1:4.d = v1:4.d f* v2.d
    v1.d = vadd_f32(v0, v1):4.d
    return 

v1.d = v7.d f- v2.d

if (not(v5 >= v16))
    v7.d = v2.d f+ v2.d
    v7.d = v4 f- v7.d
    v5 = v5 f- v6.d
    v3.d = (*V2Y).d f* v7.d
    v3:4.d = v3:4.d f* v7.d
    
    if (v2.d f>= 0f)
        v5 = v5 f- v2.d
        v2.d = v4 f- v2.d f- v2.d
        v4 = v5 f/ v2.d
        v2.d = 0f
        v5 = 0f
        
        if (not(v4 <= 0f))
            v5 = fconvert.s(1f)
            
            if (not(v4 >= v5))
                v5 = v4 + 0f
        
        float temp0_2 = vmin_f32(v5, fconvert.s(1f))
        
        if (v5 < 0f)
            v2.d = v2.d
        else
            v2.d = temp0_2
    else
        v2.d = fabs(v2.d)
        v5 = v5 f- v2.d
        v2.d = v4 f- v2.d f- v2.d
        v4 = v5 f/ v2.d
        v2.d = 0f
        
        if (not(v4 <= 0f))
            v2.d = fconvert.s(1f)
            
            if (not(v4 f>= v2.d))
                v2.d = 0f
                v2.d = v4 f+ v2.d
    
    v2.d = v3.d f* v2.d
    v2:4.d = v3:4.d f* v2.d
    v0.d = v1.d
    v1.d = vadd_f32(v0, v2):4.d
    return 

v7.d = v6.d f+ v6.d
v3.d = v3.d f- v2.d

if (not(v5 >= v7.d f+ v4))
    v0.d = v2.d f+ v2.d
    v0.d = v6.d f- v0.d
    v7 = *V2X
    v4 = v5 f- v6.d - v4
    v0.d = v7.d f* v0.d
    v0:4.d = v7:4.d f* v0.d
    
    if (v2.d f>= 0f)
        v4 = v4 f- v2.d
        v2.d = v6.d f- v2.d f- v2.d
        v4 = v4 f/ v2.d
        v2.d = 0f
        v5 = 0f
        
        if (not(v4 <= 0f))
            v5 = fconvert.s(1f)
            
            if (not(v4 >= v5))
                v5 = v4 + 0f
        
        float temp0_3 = vmin_f32(v5, fconvert.s(1f))
        
        if (v5 < 0f)
            v2.d = v2.d
        else
            v2.d = temp0_3
    else
        v2.d = fabs(v2.d)
        v4 = v4 f- v2.d
        v2.d = v6.d f- v2.d f- v2.d
        v4 = v4 f/ v2.d
        v2.d = 0f
        
        if (not(v4 <= 0f))
            v2.d = fconvert.s(1f)
            
            if (not(v4 f>= v2.d))
                v2.d = 0f
                v2.d = v4 f+ v2.d
    
    v0.d = v0.d f* v2.d
    v0:4.d = v0:4.d f* v2.d
    v1:4.d = v3.d
    v1.d = vsub_f32(v1, v0):4.d
    return 

v1.d = v4 + v4
v1.d = v7.d f+ v1.d

if (not(v5 f>= v1.d))
    v1.d = v2.d f+ v2.d
    v1.d = v4 f- v1.d
    v6 = *V2Y
    v5 = v5 f- v7.d - v4
    v1.d = v6.d f* v1.d
    v1:4.d = v6:4.d f* v1.d
    
    if (v2.d f>= 0f)
        v5 = v5 f- v2.d
        v2.d = v4 f- v2.d f- v2.d
        v4 = v5 f/ v2.d
        v2.d = 0f
        v5 = 0f
        
        if (not(v4 <= 0f))
            v5 = fconvert.s(1f)
            
            if (not(v4 >= v5))
                v5 = v4 + 0f
        
        float temp0_4 = vmin_f32(v5, fconvert.s(1f))
        
        if (v5 < 0f)
            v2.d = v2.d
        else
            v2.d = temp0_4
    else
        v2.d = fabs(v2.d)
        v5 = v5 f- v2.d
        v2.d = v4 f- v2.d f- v2.d
        v4 = v5 f/ v2.d
        v2.d = 0f
        
        if (not(v4 <= 0f))
            v2.d = fconvert.s(1f)
            
            if (not(v4 f>= v2.d))
                v2.d = 0f
                v2.d = v4 f+ v2.d
    
    v1.d = v1.d f* v2.d
    v1:4.d = v1:4.d f* v2.d
    v0:4.d = v3.d
    v0 = vsub_f32(v0, v1)

v1.d = v0:4.d
