// 函数: _ZNSt6__ndk17__sort5IRNS_6__lessIeeEEPeEEjT0_S5_S5_S5_S5_T_
// 地址: 0x10a0c90
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t v2 = *arg1
int128_t v1 = *arg3
int128_t v0 = *arg2
int128_t var_60 = v0
int32_t result
int128_t v1_1

if ((sub_1101750(v0, v2) & 0x80000000) == 0)
    if (sub_1101750(v1, var_60) s>= 0)
        v1_1 = v1
        result = 0
    else
        *arg2 = v1
        *arg3 = var_60
        v0 = *arg2
        v1_1 = *arg1
        
        if (sub_1101750(v0, v1_1) s>= 0)
            v1_1 = var_60
            result = 1
        else
            *arg1 = v0
            *arg2 = v1_1
            v1_1 = *arg3
            result = 2
else if (sub_1101750(v1, var_60) s>= 0)
    *arg1 = var_60
    *arg2 = v2
    v0 = *arg3
    
    if (sub_1101750(v0, v2) s>= 0)
        v1_1 = v0
        result = 1
    else
        v1_1 = v2
        *arg2 = v0
        *arg3 = v1_1
        result = 2
else
    v1_1 = v2
    result = 1
    *arg1 = v1
    *arg3 = v1_1

v0 = *arg4

if (sub_1101750(v0, v1_1) s< 0)
    *arg3 = v0
    *arg4 = v1_1
    v0 = *arg3
    v1_1 = *arg2
    
    if (sub_1101750(v0, v1_1) s>= 0)
        result += 1
    else
        *arg2 = v0
        *arg3 = v1_1
        v0 = *arg2
        v1_1 = *arg1
        
        if (sub_1101750(v0, v1_1) s>= 0)
            result += 2
        else
            result += 3
            *arg1 = v0
            *arg2 = v1_1

v0 = *arg5
v1_1 = *arg4

if (sub_1101750(v0, v1_1) s< 0)
    *arg4 = v0
    *arg5 = v1_1
    v0 = *arg4
    v1_1 = *arg3
    
    if (sub_1101750(v0, v1_1) s>= 0)
        return result + 1
    
    *arg3 = v0
    *arg4 = v1_1
    v0 = *arg3
    v1_1 = *arg2
    
    if (sub_1101750(v0, v1_1) s>= 0)
        return result + 2
    
    *arg2 = v0
    *arg3 = v1_1
    v0 = *arg2
    v1_1 = *arg1
    
    if (sub_1101750(v0, v1_1) s>= 0)
        return result + 3
    
    result += 4
    *arg1 = v0
    *arg2 = v1_1

return result
