// 函数: _ZNSt6__ndk17__sort4IRPFbRK10MedalLevelS3_EPS1_EEjT0_S8_S8_S8_T_
// 地址: 0xbb3bc8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x0_1 = (*arg5)(arg2, arg1)
int32_t x0_3
int128_t v0
x0_3, v0 = (*arg5)(arg3, arg2)
int32_t result

if ((x0_1 & 1) == 0)
    if ((x0_3 & 1) == 0)
        result = 0
    else
        int128_t var_50_2 = *arg2
        *arg2 = *arg3
        *arg3 = var_50_2
        int32_t x0_5
        int128_t v0_1
        x0_5, v0_1 = (*arg5)(arg2, arg1)
        
        if ((x0_5 & 1) == 0)
            result = 1
        else
            int128_t var_50_3 = *arg1
            *arg1 = *arg2
            *arg2 = var_50_3
            result = 2
else if ((x0_3 & 1) == 0)
    int128_t var_50_4 = *arg1
    *arg1 = *arg2
    *arg2 = var_50_4
    int32_t x0_7
    int128_t v0_2
    x0_7, v0_2 = (*arg5)(arg3, arg2)
    
    if ((x0_7 & 1) == 0)
        result = 1
    else
        int128_t var_50_5 = *arg2
        *arg2 = *arg3
        *arg3 = var_50_5
        result = 2
else
    result = 1
    int128_t var_50_1 = *arg1
    *arg1 = *arg3
    *arg3 = var_50_1

int32_t x0_9
int128_t v0_3
x0_9, v0_3 = (*arg5)(arg4, arg3)

if ((x0_9 & 1) != 0)
    int128_t var_50_6 = *arg3
    *arg3 = *arg4
    *arg4 = var_50_6
    int32_t x0_11
    int128_t v0_4
    x0_11, v0_4 = (*arg5)(arg3, arg2)
    
    if ((x0_11 & 1) == 0)
        return result + 1
    
    int128_t var_50_7 = *arg2
    *arg2 = *arg3
    *arg3 = var_50_7
    int32_t x0_13
    int128_t v0_5
    x0_13, v0_5 = (*arg5)(arg2, arg1)
    
    if ((x0_13 & 1) == 0)
        return result + 2
    
    result += 3
    int128_t var_50_8 = *arg1
    *arg1 = *arg2
    *arg2 = var_50_8

return result
