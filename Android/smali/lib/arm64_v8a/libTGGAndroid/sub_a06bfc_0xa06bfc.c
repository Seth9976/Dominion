// 函数: sub_a06bfc
// 地址: 0xa06bfc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t v2 = *arg2
int32_t v1 = *arg1
int32_t v0 = *arg3
int32_t x8

if (not(v2 f<= v1))
    if (not(v0 f<= v2))
        *arg1 = v0
        *arg3 = v1
        x8 = 1
    label_a06c88:
        v0 = v1
        v1 = *arg4
        
        if (v1 f> v0)
            goto label_a06cd8
        
        goto label_a06d2c
    
    *arg1 = v2
    *arg2 = v1
    v0 = *arg3
    
    if (not(v0 f<= v1))
        x8 = 2
        *arg2 = v0
        *arg3 = v1
        goto label_a06c88
    
    x8 = 1
    v1 = *arg4
    
    if (v1 f<= v0)
        goto label_a06d2c
    
    goto label_a06cd8

if (not(v0 f<= v2))
    *arg2 = v0
    *arg3 = v2
    v0 = *arg2
    v1 = *arg1
    
    if (v0 f<= v1)
        x8 = 1
        v0 = v2
        v1 = *arg4
        
        if (v1 f> v0)
            goto label_a06cd8
        
        goto label_a06d2c
    
    *arg1 = v0
    *arg2 = v1
    v0 = *arg3
    x8 = 2
    v1 = *arg4
    
    if (v1 f> v0)
        goto label_a06cd8
    
    goto label_a06d2c

x8 = 0
v1 = *arg4

if (not(v1 f> v0))
    goto label_a06d2c

label_a06cd8:
*arg3 = v1
*arg4 = v0
v0 = *arg3
v1 = *arg2

if (v0 f<= v1)
    x8 += 1
label_a06d2c:
    v0 = *arg5
    v1 = *arg4
    
    if (not(v0 f<= v1))
    label_a06d3c:
        *arg4 = v0
        *arg5 = v1
        v0 = *arg4
        v1 = *arg3
        
        if (v0 f<= v1)
            return zx.q(x8 + 1)
        
        *arg3 = v0
        *arg4 = v1
        v0 = *arg3
        v1 = *arg2
        
        if (v0 f<= v1)
            return zx.q(x8 + 2)
        
        *arg2 = v0
        *arg3 = v1
        v0 = *arg2
        v1 = *arg1
        
        if (v0 f<= v1)
            return zx.q(x8 + 3)
        
        x8 += 4
        *arg1 = v0
        *arg2 = v1
else
    *arg2 = v0
    *arg3 = v1
    v0 = *arg2
    v1 = *arg1
    
    if (v0 f<= v1)
        x8 += 2
        v0 = *arg5
        v1 = *arg4
        
        if (v0 f> v1)
            goto label_a06d3c
    else
        x8 += 3
        *arg1 = v0
        *arg2 = v1
        v0 = *arg5
        v1 = *arg4
        
        if (v0 f> v1)
            goto label_a06d3c

return zx.q(x8)
