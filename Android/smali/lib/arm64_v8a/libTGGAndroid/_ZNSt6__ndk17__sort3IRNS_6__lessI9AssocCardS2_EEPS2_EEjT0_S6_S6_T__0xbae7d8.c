// 函数: _ZNSt6__ndk17__sort3IRNS_6__lessI9AssocCardS2_EEPS2_EEjT0_S6_S6_T_
// 地址: 0xbae7d8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8 = *arg2
int32_t x9 = *arg1
int128_t v0

if (x8 s>= x9)
    if (x8 s> x9)
    label_bae87c:
        int32_t x9_3 = *arg3
        
        if (x9_3 s>= x8)
            if (x9_3 s> x8)
                return 0
            
            int64_t x8_20 = *(arg3 + 8)
            int64_t x9_9 = *(arg2 + 8)
            
            if (x8_20 u>= x9_9)
                if (x8_20 u> x9_9)
                    return 0
                
                if (*(arg3 + 0x10) u>= *(arg2 + 0x10))
                    return 0
        
        int64_t x8_8 = *(arg2 + 0x10)
        int128_t var_20_2 = *arg2
        v0 = *arg3
        *(arg2 + 0x10) = *(arg3 + 0x10)
        *arg2 = v0
        *(arg3 + 0x10) = x8_8
        *arg3 = var_20_2
        int32_t x8_11 = *arg2
        int32_t x9_4 = *arg1
        
        if (x8_11 s>= x9_4)
            if (x8_11 s> x9_4)
                return 1
            
            int64_t x8_22 = *(arg2 + 8)
            int64_t x9_11 = *(arg1 + 8)
            
            if (x8_22 u>= x9_11)
                if (x8_22 u> x9_11)
                    return 1
                
                if (*(arg2 + 0x10) u>= *(arg1 + 0x10))
                    return 1
        
        int64_t x8_12 = *(arg1 + 0x10)
        int128_t var_20_3 = *arg1
        v0 = *arg2
        *(arg1 + 0x10) = *(arg2 + 0x10)
        *arg1 = v0
        *(arg2 + 0x10) = x8_12
        *arg2 = var_20_3
        return 2
    
    int64_t x9_5 = *(arg2 + 8)
    int64_t x10_1 = *(arg1 + 8)
    
    if (x9_5 u>= x10_1 && (x9_5 u> x10_1 || *(arg2 + 0x10) u>= *(arg1 + 0x10)))
        goto label_bae87c

int32_t x9_1 = *arg3

if (x9_1 s>= x8)
    if (x9_1 s> x8)
    label_bae7fc:
        int64_t x8_1 = *(arg1 + 0x10)
        int128_t var_20 = *arg1
        v0 = *arg2
        *(arg1 + 0x10) = *(arg2 + 0x10)
        *arg1 = v0
        *(arg2 + 0x10) = x8_1
        *arg2 = var_20
        int32_t x8_4 = *arg3
        int32_t x9_2 = *arg2
        
        if (x8_4 s>= x9_2)
            if (x8_4 s> x9_2)
                return 1
            
            int64_t x8_21 = *(arg3 + 8)
            int64_t x9_10 = *(arg2 + 8)
            
            if (x8_21 u>= x9_10)
                if (x8_21 u> x9_10)
                    return 1
                
                if (*(arg3 + 0x10) u>= *(arg2 + 0x10))
                    return 1
        
        int64_t x8_5 = *(arg2 + 0x10)
        int128_t var_20_1 = *arg2
        v0 = *arg3
        *(arg2 + 0x10) = *(arg3 + 0x10)
        *arg2 = v0
        *(arg3 + 0x10) = x8_5
        *arg3 = var_20_1
        return 2
    
    int64_t x8_15 = *(arg3 + 8)
    int64_t x9_7 = *(arg2 + 8)
    
    if (x8_15 u>= x9_7 && (x8_15 u> x9_7 || *(arg3 + 0x10) u>= *(arg2 + 0x10)))
        goto label_bae7fc

int64_t x8_17 = *(arg1 + 0x10)
int128_t var_20_4 = *arg1
v0 = *arg3
*(arg1 + 0x10) = *(arg3 + 0x10)
*arg1 = v0
*(arg3 + 0x10) = x8_17
*arg3 = var_20_4
return 1
