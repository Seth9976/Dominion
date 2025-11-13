// 函数: _ZNSt6__ndk17__sort4IRNS_6__lessI8UI2StateS2_EEPS2_EEjT0_S6_S6_S6_T_
// 地址: 0x1047634
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x0 = std::__ndk1::__sort3<std::__ndk1::__less<UI2State, UI2State>&, UI2State*>(arg1, arg2, 
    arg3, arg5)
void* x24 = *arg4
void* x25 = *arg3
int32_t x0_2
int128_t v0
int128_t v1
int128_t v2
x0_2, v0, v1, v2 = strcmp(*(x24 + 0x10), *(x25 + 0x10))

if ((x0_2 & 0x80000000) == 0)
    if (x0_2 == 0)
        int32_t x8_4 = *(arg4 + 8)
        int32_t x9_2 = *(arg3 + 8)
        
        if (x8_4 s< x9_2)
            goto label_1047688
        
        if (x24 u< x25)
            if (x8_4 s<= x9_2)
                goto label_1047688
    
    return x0

label_1047688:
int128_t var_60_1 = *(arg3 + 0x10)
int128_t var_50_1 = *(arg3 + 0x20)
int128_t var_70_1 = *arg3
v0 = *(arg4 + 0x20)
v2 = *arg4
*(arg3 + 0x10) = *(arg4 + 0x10)
*(arg3 + 0x20) = v0
*arg3 = v2
*(arg4 + 0x10) = var_60_1
*(arg4 + 0x20) = var_50_1
*arg4 = var_70_1
void* x23_1 = *arg3
void* x24_1 = *arg2
int32_t x0_4
int128_t v0_1
int128_t v1_1
int128_t v2_1
x0_4, v0_1, v1_1, v2_1 = strcmp(*(x23_1 + 0x10), *(x24_1 + 0x10))
int32_t x0_7

if ((x0_4 & 0x80000000) == 0)
    x0_7 = x0 + 1
    
    if (x0_4 == 0)
        int32_t x8_2 = *(arg3 + 8)
        int32_t x9_1 = *(arg2 + 8)
        
        if (x8_2 s< x9_1)
            goto label_10476d0
        
        if (x23_1 u< x24_1 && x8_2 s<= x9_1)
            goto label_10476d0
else
label_10476d0:
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
    void* x22_1 = *arg2
    void* x23_2 = *arg1
    int32_t x0_6
    int128_t v0_2
    int128_t v1_2
    int128_t v2_2
    x0_6, v0_2, v1_2, v2_2 = strcmp(*(x22_1 + 0x10), *(x23_2 + 0x10))
    
    if ((x0_6 & 0x80000000) == 0)
        x0_7 = x0 + 2
        
        if (x0_6 == 0)
            int32_t x8_5 = *(arg2 + 8)
            int32_t x9_3 = *(arg1 + 8)
            
            if (x8_5 s< x9_3)
                goto label_1047718
            
            if (x22_1 u< x23_2 && x8_5 s<= x9_3)
                goto label_1047718
    else
    label_1047718:
        x0_7 = x0 + 3
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

return x0_7
