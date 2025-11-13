// 函数: sub_c21f14
// 地址: 0xc21f14
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x0 = sub_c21dd4(arg1, arg2, arg3)
float v0 = arg4[1]
float v1 = arg3[1]
v0 - v1
int32_t x8_4

if (not(v0 >= v1))
label_c21f4c:
    int64_t x9_1 = *arg3
    *arg3 = *arg4
    *arg4 = x9_1
    v0 = arg3[1]
    v1 = arg2[1]
    v0 - v1
    
    if (v0 >= v1)
        x8_4 = x0 + 1
        
        if (not(v0 > v1) && *arg3 s< *arg2)
            goto label_c21f6c
    else
    label_c21f6c:
        int64_t x9_2 = *arg2
        *arg2 = *arg3
        *arg3 = x9_2
        v0 = arg2[1]
        v1 = arg1[1]
        v0 - v1
        
        if (v0 >= v1)
            x8_4 = x0 + 2
            
            if (not(v0 > v1) && *arg2 s< *arg1)
                goto label_c21f8c
        else
        label_c21f8c:
            int64_t x9_3 = *arg1
            *arg1 = *arg2
            x8_4 = x0 + 3
            *arg2 = x9_3
else if (v0 <= v1)
    x8_4 = x0
    
    if (*arg4 s< *arg3)
        goto label_c21f4c
else
    x8_4 = x0

v0 = arg5[1]
v1 = arg4[1]
v0 - v1

if (v0 >= v1 && (v0 > v1 || *arg5 s>= *arg4))
    return zx.q(x8_4)

int64_t x10_3 = *arg4
*arg4 = *arg5
*arg5 = x10_3
v0 = arg4[1]
v1 = arg3[1]
v0 - v1
uint64_t result

if (v0 >= v1)
    result = zx.q(x8_4 + 1)
    
    if (not(v0 > v1) && *arg4 s< *arg3)
        goto label_c2202c
else
label_c2202c:
    int64_t x10_4 = *arg3
    *arg3 = *arg4
    *arg4 = x10_4
    v0 = arg3[1]
    v1 = arg2[1]
    v0 - v1
    
    if (v0 >= v1)
        result = zx.q(x8_4 + 2)
        
        if (not(v0 > v1) && *arg3 s< *arg2)
            goto label_c2204c
    else
    label_c2204c:
        int64_t x10_5 = *arg2
        *arg2 = *arg3
        *arg3 = x10_5
        v0 = arg2[1]
        v1 = arg1[1]
        v0 - v1
        
        if (v0 < v1)
        label_c22084:
            int64_t x10_7 = *arg1
            result = zx.q(x8_4 + 4)
            *arg1 = *arg2
            *arg2 = x10_7
        else
            result = zx.q(x8_4 + 3)
            
            if (not(v0 > v1) && *arg2 s< *arg1)
                goto label_c22084

return result
