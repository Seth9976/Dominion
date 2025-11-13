// 函数: sub_109f768
// 地址: 0x109f768
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

SystemHintOp_BTI()
int32_t v2 = *arg2
int32_t v1 = *arg1
int32_t v0 = *arg3
int32_t x8

if (v2 f>= v1)
    if (v0 f>= v2)
        x8 = 0
    else
        *arg2 = v0
        *arg3 = v2
        v0 = *arg2
        v1 = *arg1
        
        if (v0 f>= v1)
            x8 = 1
            v0 = v2
        else
            *arg1 = v0
            *arg2 = v1
            v0 = *arg3
            x8 = 2
else if (v0 f>= v2)
    *arg1 = v2
    *arg2 = v1
    v0 = *arg3
    
    if (v0 f>= v1)
        x8 = 1
    else
        x8 = 2
        *arg2 = v0
        *arg3 = v1
        v0 = v1
else
    *arg1 = v0
    *arg3 = v1
    x8 = 1
    v0 = v1

v1 = *arg4

if (not(v1 f>= v0))
    *arg3 = v1
    *arg4 = v0
    v0 = *arg3
    v1 = *arg2
    
    if (v0 f>= v1)
        x8 += 1
    else
        *arg2 = v0
        *arg3 = v1
        v0 = *arg2
        v1 = *arg1
        
        if (v0 f>= v1)
            x8 += 2
        else
            x8 += 3
            *arg1 = v0
            *arg2 = v1

v0 = *arg5
v1 = *arg4

if (not(v0 f>= v1))
    *arg4 = v0
    *arg5 = v1
    v0 = *arg4
    v1 = *arg3
    
    if (v0 f>= v1)
        return zx.q(x8 + 1)
    
    *arg3 = v0
    *arg4 = v1
    v0 = *arg3
    v1 = *arg2
    
    if (v0 f>= v1)
        return zx.q(x8 + 2)
    
    *arg2 = v0
    *arg3 = v1
    v0 = *arg2
    v1 = *arg1
    
    if (v0 f>= v1)
        return zx.q(x8 + 3)
    
    x8 += 4
    *arg1 = v0
    *arg2 = v1

return zx.q(x8)
