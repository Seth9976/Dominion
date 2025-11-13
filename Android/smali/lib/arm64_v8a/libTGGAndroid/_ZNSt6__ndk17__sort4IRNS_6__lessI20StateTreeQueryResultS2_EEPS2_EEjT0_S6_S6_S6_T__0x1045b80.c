// 函数: _ZNSt6__ndk17__sort4IRNS_6__lessI20StateTreeQueryResultS2_EEPS2_EEjT0_S6_S6_S6_T_
// 地址: 0x1045b80
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8 = *(arg2 + 0x10)
int32_t x9 = *(arg3 + 0x10)
int32_t result
int128_t v0

if (x8 s< *(arg1 + 0x10))
    if (x9 s>= x8)
        int64_t x8_11 = *(arg1 + 0x10)
        int128_t var_20_4 = *arg1
        v0 = *arg2
        *(arg1 + 0x10) = *(arg2 + 0x10)
        *arg1 = v0
        *(arg2 + 0x10) = x8_11
        *arg2 = var_20_4
        
        if (*(arg3 + 0x10) s>= *(arg2 + 0x10))
            goto label_1045cd8
        
        int64_t x8_15 = *(arg2 + 0x10)
        int128_t var_20_5 = *arg2
        v0 = *arg3
        *(arg2 + 0x10) = *(arg3 + 0x10)
        *arg2 = v0
        *(arg3 + 0x10) = x8_15
        *arg3 = var_20_5
        goto label_1045cc0
    
    int64_t x8_1 = *(arg1 + 0x10)
    int128_t var_20_1 = *arg1
    v0 = *arg3
    *(arg1 + 0x10) = *(arg3 + 0x10)
    *arg1 = v0
    *(arg3 + 0x10) = x8_1
    *arg3 = var_20_1
label_1045cd8:
    result = 1
    
    if (*(arg4 + 0x10) s>= *(arg3 + 0x10))
        return result
else if (x9 s>= x8)
    result = 0
    
    if (*(arg4 + 0x10) s>= *(arg3 + 0x10))
        return result
else
    int64_t x8_4 = *(arg2 + 0x10)
    int128_t var_20_2 = *arg2
    v0 = *arg3
    *(arg2 + 0x10) = *(arg3 + 0x10)
    *arg2 = v0
    *(arg3 + 0x10) = x8_4
    *arg3 = var_20_2
    
    if (*(arg2 + 0x10) s>= *(arg1 + 0x10))
        goto label_1045cd8
    
    int64_t x8_8 = *(arg1 + 0x10)
    int128_t var_20_3 = *arg1
    v0 = *arg2
    *(arg1 + 0x10) = *(arg2 + 0x10)
    *arg1 = v0
    *(arg2 + 0x10) = x8_8
    *arg2 = var_20_3
label_1045cc0:
    result = 2
    
    if (*(arg4 + 0x10) s>= *(arg3 + 0x10))
        return result

int64_t x9_5 = *(arg3 + 0x10)
int128_t var_20_6 = *arg3
v0 = *arg4
*(arg3 + 0x10) = *(arg4 + 0x10)
*arg3 = v0
*(arg4 + 0x10) = x9_5
*arg4 = var_20_6

if (*(arg3 + 0x10) s>= *(arg2 + 0x10))
    return result + 1

int64_t x9_9 = *(arg2 + 0x10)
int128_t var_20_7 = *arg2
v0 = *arg3
*(arg2 + 0x10) = *(arg3 + 0x10)
*arg2 = v0
*(arg3 + 0x10) = x9_9
*arg3 = var_20_7

if (*(arg2 + 0x10) s>= *(arg1 + 0x10))
    return result + 2

int64_t x9_13 = *(arg1 + 0x10)
int128_t var_20_8 = *arg1
v0 = *arg2
*(arg1 + 0x10) = *(arg2 + 0x10)
*arg1 = v0
*(arg2 + 0x10) = x9_13
*arg2 = var_20_8
return result + 3
