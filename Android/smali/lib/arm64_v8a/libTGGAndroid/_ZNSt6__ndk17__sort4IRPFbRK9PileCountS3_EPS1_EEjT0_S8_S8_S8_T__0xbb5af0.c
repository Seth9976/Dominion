// 函数: _ZNSt6__ndk17__sort4IRPFbRK9PileCountS3_EPS1_EEjT0_S8_S8_S8_T_
// 地址: 0xbb5af0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x0_1 = (*arg5)(arg2, arg1)
int32_t x0_3
int128_t v0
int128_t v1
int128_t v2
x0_3, v0, v1, v2 = (*arg5)(arg3, arg2)
int32_t result

if ((x0_1 & 1) == 0)
    if ((x0_3 & 1) == 0)
        result = 0
    else
        int64_t x8_5 = *(arg2 + 0x30)
        int128_t var_70_2 = *(arg2 + 0x10)
        int128_t var_60_2 = *(arg2 + 0x20)
        int128_t var_80_2 = *arg2
        v1 = *(arg3 + 0x10)
        v0 = *(arg3 + 0x20)
        v2 = *arg3
        *(arg2 + 0x30) = *(arg3 + 0x30)
        *(arg2 + 0x10) = v1
        *(arg2 + 0x20) = v0
        *arg2 = v2
        *(arg3 + 0x30) = x8_5
        *(arg3 + 0x10) = var_70_2
        *(arg3 + 0x20) = var_60_2
        *arg3 = var_80_2
        int32_t x0_5
        int128_t v0_1
        int128_t v1_1
        int128_t v2_1
        x0_5, v0_1, v1_1, v2_1 = (*arg5)(arg2, arg1)
        
        if ((x0_5 & 1) == 0)
            result = 1
        else
            int64_t x8_9 = *(arg1 + 0x30)
            int128_t var_70_3 = *(arg1 + 0x10)
            int128_t var_60_3 = *(arg1 + 0x20)
            int128_t var_80_3 = *arg1
            v1_1 = *(arg2 + 0x10)
            v0_1 = *(arg2 + 0x20)
            v2_1 = *arg2
            *(arg1 + 0x30) = *(arg2 + 0x30)
            *(arg1 + 0x10) = v1_1
            *(arg1 + 0x20) = v0_1
            *arg1 = v2_1
            *(arg2 + 0x30) = x8_9
            *(arg2 + 0x10) = var_70_3
            *(arg2 + 0x20) = var_60_3
            *arg2 = var_80_3
            result = 2
else if ((x0_3 & 1) == 0)
    int64_t x8_12 = *(arg1 + 0x30)
    int128_t var_70_4 = *(arg1 + 0x10)
    int128_t var_60_4 = *(arg1 + 0x20)
    int128_t var_80_4 = *arg1
    v1 = *(arg2 + 0x10)
    v0 = *(arg2 + 0x20)
    v2 = *arg2
    *(arg1 + 0x30) = *(arg2 + 0x30)
    *(arg1 + 0x10) = v1
    *(arg1 + 0x20) = v0
    *arg1 = v2
    *(arg2 + 0x30) = x8_12
    *(arg2 + 0x10) = var_70_4
    *(arg2 + 0x20) = var_60_4
    *arg2 = var_80_4
    int32_t x0_7
    int128_t v0_2
    int128_t v1_2
    int128_t v2_2
    x0_7, v0_2, v1_2, v2_2 = (*arg5)(arg3, arg2)
    
    if ((x0_7 & 1) == 0)
        result = 1
    else
        int64_t x8_16 = *(arg2 + 0x30)
        int128_t var_70_5 = *(arg2 + 0x10)
        int128_t var_60_5 = *(arg2 + 0x20)
        int128_t var_80_5 = *arg2
        v1_2 = *(arg3 + 0x10)
        v0_2 = *(arg3 + 0x20)
        v2_2 = *arg3
        *(arg2 + 0x30) = *(arg3 + 0x30)
        *(arg2 + 0x10) = v1_2
        *(arg2 + 0x20) = v0_2
        *arg2 = v2_2
        *(arg3 + 0x30) = x8_16
        *(arg3 + 0x10) = var_70_5
        *(arg3 + 0x20) = var_60_5
        *arg3 = var_80_5
        result = 2
else
    int64_t x8_2 = *(arg1 + 0x30)
    result = 1
    int128_t var_70_1 = *(arg1 + 0x10)
    int128_t var_60_1 = *(arg1 + 0x20)
    int128_t var_80_1 = *arg1
    v1 = *(arg3 + 0x10)
    v0 = *(arg3 + 0x20)
    v2 = *arg3
    *(arg1 + 0x30) = *(arg3 + 0x30)
    *(arg1 + 0x10) = v1
    *(arg1 + 0x20) = v0
    *arg1 = v2
    *(arg3 + 0x30) = x8_2
    *(arg3 + 0x10) = var_70_1
    *(arg3 + 0x20) = var_60_1
    *arg3 = var_80_1

int32_t x0_9
int128_t v0_3
int128_t v1_3
int128_t v2_3
x0_9, v0_3, v1_3, v2_3 = (*arg5)(arg4, arg3)

if ((x0_9 & 1) != 0)
    int64_t x8_20 = *(arg3 + 0x30)
    int128_t var_70_6 = *(arg3 + 0x10)
    int128_t var_60_6 = *(arg3 + 0x20)
    int128_t var_80_6 = *arg3
    v1_3 = *(arg4 + 0x10)
    v0_3 = *(arg4 + 0x20)
    v2_3 = *arg4
    *(arg3 + 0x30) = *(arg4 + 0x30)
    *(arg3 + 0x10) = v1_3
    *(arg3 + 0x20) = v0_3
    *arg3 = v2_3
    *(arg4 + 0x30) = x8_20
    *(arg4 + 0x10) = var_70_6
    *(arg4 + 0x20) = var_60_6
    *arg4 = var_80_6
    int32_t x0_11
    int128_t v0_4
    int128_t v1_4
    int128_t v2_4
    x0_11, v0_4, v1_4, v2_4 = (*arg5)(arg3, arg2)
    
    if ((x0_11 & 1) == 0)
        return result + 1
    
    int64_t x8_24 = *(arg2 + 0x30)
    int128_t var_70_7 = *(arg2 + 0x10)
    int128_t var_60_7 = *(arg2 + 0x20)
    int128_t var_80_7 = *arg2
    v1_4 = *(arg3 + 0x10)
    v0_4 = *(arg3 + 0x20)
    v2_4 = *arg3
    *(arg2 + 0x30) = *(arg3 + 0x30)
    *(arg2 + 0x10) = v1_4
    *(arg2 + 0x20) = v0_4
    *arg2 = v2_4
    *(arg3 + 0x30) = x8_24
    *(arg3 + 0x10) = var_70_7
    *(arg3 + 0x20) = var_60_7
    *arg3 = var_80_7
    int32_t x0_13
    int128_t v0_5
    int128_t v1_5
    int128_t v2_5
    x0_13, v0_5, v1_5, v2_5 = (*arg5)(arg2, arg1)
    
    if ((x0_13 & 1) == 0)
        return result + 2
    
    int64_t x8_28 = *(arg1 + 0x30)
    result += 3
    int128_t var_70_8 = *(arg1 + 0x10)
    int128_t var_60_8 = *(arg1 + 0x20)
    int128_t var_80_8 = *arg1
    v1_5 = *(arg2 + 0x10)
    v0_5 = *(arg2 + 0x20)
    v2_5 = *arg2
    *(arg1 + 0x30) = *(arg2 + 0x30)
    *(arg1 + 0x10) = v1_5
    *(arg1 + 0x20) = v0_5
    *arg1 = v2_5
    *(arg2 + 0x30) = x8_28
    *(arg2 + 0x10) = var_70_8
    *(arg2 + 0x20) = var_60_8
    *arg2 = var_80_8

return result
