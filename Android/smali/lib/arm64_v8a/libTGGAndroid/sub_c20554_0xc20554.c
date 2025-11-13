// 函数: sub_c20554
// 地址: 0xc20554
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t* x21 = arg3
float* x19 = arg2
float* x20 = arg1
int32_t x0 = sub_c20410(arg1, arg2, arg3)
float v0 = *arg4
float v1 = *x21
v0 - v1
int32_t x8_4

if (not(v0 >= v1))
label_c2058c:
    int64_t x9_1 = *x21
    *x21 = *arg4
    *arg4 = x9_1
    v0 = *x21
    v1 = *x19
    v0 - v1
    
    if (v0 >= v1)
        x8_4 = x0 + 1
        
        if (not(v0 > v1) && x21[1] f< x19[1])
            goto label_c205ac
    else
    label_c205ac:
        int64_t x9_2 = *x19
        *x19 = *x21
        *x21 = x9_2
        v0 = *x19
        v1 = *x20
        v0 - v1
        
        if (v0 >= v1)
            x8_4 = x0 + 2
            
            if (not(v0 > v1) && x19[1] < x20[1])
                goto label_c205cc
        else
        label_c205cc:
            int64_t x9_3 = *x20
            *x20 = *x19
            x8_4 = x0 + 3
            *x19 = x9_3
else if (v0 <= v1)
    x8_4 = x0
    
    if (arg4[1] f< x21[1])
        goto label_c2058c
else
    x8_4 = x0

v0 = *arg5
v1 = *arg4
v0 - v1

if (v0 >= v1 && (v0 > v1 || not(arg5[1] f< arg4[1])))
    return zx.q(x8_4)

int64_t x10 = *arg4
*arg4 = *arg5
*arg5 = x10
v0 = *arg4
v1 = *x21
v0 - v1
uint64_t result

if (v0 >= v1)
    result = zx.q(x8_4 + 1)
    
    if (not(v0 > v1) && arg4[1] f< x21[1])
        goto label_c2066c
else
label_c2066c:
    int64_t x10_1 = *x21
    *x21 = *arg4
    *arg4 = x10_1
    v0 = *x21
    v1 = *x19
    v0 - v1
    
    if (v0 >= v1)
        result = zx.q(x8_4 + 2)
        
        if (not(v0 > v1) && x21[1] f< x19[1])
            goto label_c2068c
    else
    label_c2068c:
        int64_t x10_2 = *x19
        *x19 = *x21
        *x21 = x10_2
        v0 = *x19
        v1 = *x20
        v0 - v1
        
        if (v0 < v1)
        label_c206c4:
            int64_t x10_3 = *x20
            result = zx.q(x8_4 + 4)
            *x20 = *x19
            *x19 = x10_3
        else
            result = zx.q(x8_4 + 3)
            
            if (not(v0 > v1) && not(x19[1] >= x20[1]))
                goto label_c206c4

return result
