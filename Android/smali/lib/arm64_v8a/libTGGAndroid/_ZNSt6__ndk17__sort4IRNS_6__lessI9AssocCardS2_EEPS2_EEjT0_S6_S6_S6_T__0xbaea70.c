// 函数: _ZNSt6__ndk17__sort4IRNS_6__lessI9AssocCardS2_EEPS2_EEjT0_S6_S6_S6_T_
// 地址: 0xbaea70
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x0
int128_t v0
x0, v0 = std::__ndk1::__sort3<std::__ndk1::__less<AssocCard, AssocCard>&, AssocCard*>(arg1, arg2, 
    arg3, arg5)
int32_t x8 = *arg4
int32_t x9 = *arg3

if (x8 s>= x9)
    if (x8 s<= x9)
        int64_t x8_1 = *(arg4 + 8)
        int64_t x9_1 = *(arg3 + 8)
        
        if (x8_1 u< x9_1)
            goto label_baeadc
        
        if (x8_1 u<= x9_1)
            if (*(arg4 + 0x10) u>= *(arg3 + 0x10))
                return x0
            
            goto label_baeadc
    
    return x0

label_baeadc:
int64_t x8_4 = *(arg3 + 0x10)
int128_t var_50_1 = *arg3
v0 = *arg4
*(arg3 + 0x10) = *(arg4 + 0x10)
*arg3 = v0
*(arg4 + 0x10) = x8_4
*arg4 = var_50_1
int32_t x8_7 = *arg3
int32_t x9_3 = *arg2
int32_t x8_3

if (x8_7 s< x9_3)
label_baeb48:
    int64_t x8_8 = *(arg2 + 0x10)
    int128_t var_50_2 = *arg2
    v0 = *arg3
    *(arg2 + 0x10) = *(arg3 + 0x10)
    *arg2 = v0
    *(arg3 + 0x10) = x8_8
    *arg3 = var_50_2
    int32_t x8_11 = *arg2
    int32_t x9_6 = *arg1
    
    if (x8_11 s< x9_6)
    label_baebb4:
        int64_t x8_12 = *(arg1 + 0x10)
        int128_t var_50_3 = *arg1
        v0 = *arg2
        *(arg1 + 0x10) = *(arg2 + 0x10)
        *arg1 = v0
        *(arg2 + 0x10) = x8_12
        x8_3 = x0 + 3
        *arg2 = var_50_3
    else
        x8_3 = x0 + 2
        
        if (x8_11 s<= x9_6)
            int64_t x9_7 = *(arg2 + 8)
            int64_t x10_3 = *(arg1 + 8)
            
            if (x9_7 u< x10_3)
                goto label_baebb4
            
            if (x9_7 u<= x10_3 && *(arg2 + 0x10) u< *(arg1 + 0x10))
                goto label_baebb4
else
    x8_3 = x0 + 1
    
    if (x8_7 s<= x9_3)
        int64_t x9_4 = *(arg3 + 8)
        int64_t x10_1 = *(arg2 + 8)
        
        if (x9_4 u< x10_1)
            goto label_baeb48
        
        if (x9_4 u<= x10_1 && *(arg3 + 0x10) u< *(arg2 + 0x10))
            goto label_baeb48

return x8_3
