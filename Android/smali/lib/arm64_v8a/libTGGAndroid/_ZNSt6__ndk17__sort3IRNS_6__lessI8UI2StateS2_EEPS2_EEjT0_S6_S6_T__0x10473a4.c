// 函数: _ZNSt6__ndk17__sort3IRNS_6__lessI8UI2StateS2_EEPS2_EEjT0_S6_S6_T_
// 地址: 0x10473a4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x23 = *arg2
void* x24 = *arg1
int64_t x22 = *(x23 + 0x10)
int32_t x0_1 = strcmp(x22, *(x24 + 0x10))
int32_t x8_1
int32_t x9_1

if ((x0_1 & 0x80000000) == 0 && x0_1 == 0)
    x8_1 = *(arg2 + 8)
    x9_1 = *(arg1 + 8)

int32_t result

if ((x0_1 & 0x80000000) != 0 || (x0_1 == 0 && (x8_1 s< x9_1 || (x23 u< x24 && x8_1 s<= x9_1))))
    void* x24_1 = *arg3
    int32_t x0_3
    int128_t v0
    int128_t v1
    int128_t v2
    x0_3, v0, v1, v2 = strcmp(*(x24_1 + 0x10), x22)
    int32_t x8_2
    int32_t x9_2
    
    if ((x0_3 & 0x80000000) == 0 && x0_3 == 0)
        x8_2 = *(arg3 + 8)
        x9_2 = *(arg2 + 8)
    
    if ((x0_3 & 0x80000000) != 0
            || (x0_3 == 0 && (x8_2 s< x9_2 || (x24_1 u< x23 && x8_2 s<= x9_2))))
        result = 1
        int128_t var_60_1 = *(arg1 + 0x10)
        int128_t var_50_1 = *(arg1 + 0x20)
        int128_t var_70_1 = *arg1
        v0 = *(arg3 + 0x20)
        v2 = *arg3
        *(arg1 + 0x10) = *(arg3 + 0x10)
        *(arg1 + 0x20) = v0
        *arg1 = v2
        *(arg3 + 0x10) = var_60_1
        *(arg3 + 0x20) = var_50_1
        *arg3 = var_70_1
    else
        int128_t var_60_4 = *(arg1 + 0x10)
        int128_t var_50_4 = *(arg1 + 0x20)
        int128_t var_70_4 = *arg1
        v0 = *(arg2 + 0x20)
        v2 = *arg2
        *(arg1 + 0x10) = *(arg2 + 0x10)
        *(arg1 + 0x20) = v0
        *arg1 = v2
        *(arg2 + 0x10) = var_60_4
        *(arg2 + 0x20) = var_50_4
        *arg2 = var_70_4
        void* x21_1 = *arg3
        void* x22_2 = *arg2
        int32_t x0_9
        int128_t v0_3
        int128_t v1_3
        int128_t v2_3
        x0_9, v0_3, v1_3, v2_3 = strcmp(*(x21_1 + 0x10), *(x22_2 + 0x10))
        
        if ((x0_9 & 0x80000000) != 0)
        label_1047514:
            int128_t var_60_5 = *(arg2 + 0x10)
            int128_t var_50_5 = *(arg2 + 0x20)
            int128_t var_70_5 = *arg2
            v0_3 = *(arg3 + 0x20)
            v2_3 = *arg3
            *(arg2 + 0x10) = *(arg3 + 0x10)
            *(arg2 + 0x20) = v0_3
            *arg2 = v2_3
            *(arg3 + 0x10) = var_60_5
            *(arg3 + 0x20) = var_50_5
            *arg3 = var_70_5
            return 2
        
        if (x0_9 != 0)
            return 1
        
        int32_t x8_5 = *(arg3 + 8)
        int32_t x9_5 = *(arg2 + 8)
        
        if (x8_5 s< x9_5)
            goto label_1047514
        
        result = 1
        
        if (x21_1 u< x22_2 && x8_5 s<= x9_5)
            goto label_1047514
else
    void* x24_2 = *arg3
    int32_t x0_5
    int128_t v0_1
    int128_t v1_1
    int128_t v2_1
    x0_5, v0_1, v1_1, v2_1 = strcmp(*(x24_2 + 0x10), x22)
    
    if ((x0_5 & 0x80000000) == 0)
        if (x0_5 != 0)
            return 0
        
        int32_t x8_4 = *(arg3 + 8)
        int32_t x9_4 = *(arg2 + 8)
        
        if (x8_4 s< x9_4)
            goto label_104744c
        
        result = 0
        
        if (x24_2 u< x23 && x8_4 s<= x9_4)
            goto label_104744c
    else
    label_104744c:
        int128_t var_60_2 = *(arg2 + 0x10)
        int128_t var_50_2 = *(arg2 + 0x20)
        int128_t var_70_2 = *arg2
        v0_1 = *(arg3 + 0x20)
        v2_1 = *arg3
        *(arg2 + 0x10) = *(arg3 + 0x10)
        *(arg2 + 0x20) = v0_1
        *arg2 = v2_1
        *(arg3 + 0x10) = var_60_2
        *(arg3 + 0x20) = var_50_2
        *arg3 = var_70_2
        void* x20_1 = *arg2
        void* x22_1 = *arg1
        int32_t x0_7
        int128_t v0_2
        int128_t v1_2
        int128_t v2_2
        x0_7, v0_2, v1_2, v2_2 = strcmp(*(x20_1 + 0x10), *(x22_1 + 0x10))
        
        if ((x0_7 & 0x80000000) != 0)
        label_1047494:
            int128_t var_60_3 = *(arg1 + 0x10)
            int128_t var_50_3 = *(arg1 + 0x20)
            int128_t var_70_3 = *arg1
            v0_2 = *(arg2 + 0x20)
            v2_2 = *arg2
            *(arg1 + 0x10) = *(arg2 + 0x10)
            *(arg1 + 0x20) = v0_2
            *arg1 = v2_2
            *(arg2 + 0x10) = var_60_3
            *(arg2 + 0x20) = var_50_3
            *arg2 = var_70_3
            return 2
        
        if (x0_7 != 0)
            return 1
        
        int32_t x8_3 = *(arg2 + 8)
        int32_t x9_3 = *(arg1 + 8)
        
        if (x8_3 s< x9_3)
            goto label_1047494
        
        result = 1
        
        if (x20_1 u< x22_1 && x8_3 s<= x9_3)
            goto label_1047494

return result
