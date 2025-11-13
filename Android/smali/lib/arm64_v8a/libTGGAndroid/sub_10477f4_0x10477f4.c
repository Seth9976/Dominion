// 函数: sub_10477f4
// 地址: 0x10477f4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x23 = arg4
int64_t* x22 = arg3
int64_t* x19 = arg2
int64_t* x20 = arg1
int32_t x0 = std::__ndk1::__sort4<std::__ndk1::__less<UI2State, UI2State>&, UI2State*>(arg1, arg2, 
    arg3, arg4, arg6)
void* x25 = *arg5
void* x26 = *x23
int32_t x0_2
int128_t v0
int128_t v1
int128_t v2
x0_2, v0, v1, v2 = strcmp(*(x25 + 0x10), *(x26 + 0x10))

if ((x0_2 & 0x80000000) == 0)
    if (x0_2 == 0)
        int32_t x8_5 = arg5[1].d
        int32_t x9_3 = x23[1].d
        
        if (x8_5 s< x9_3)
            goto label_1047850
        
        if (x25 u< x26)
            if (x8_5 s<= x9_3)
                goto label_1047850
    
    return zx.q(x0)

label_1047850:
int128_t var_70_1 = *(x23 + 0x10)
int128_t var_60_1 = *(x23 + 0x20)
int128_t var_80_1 = *x23
v0 = *(arg5 + 0x20)
v2 = *arg5
*(x23 + 0x10) = *(arg5 + 0x10)
*(x23 + 0x20) = v0
*x23 = v2
*(arg5 + 0x10) = var_70_1
*(arg5 + 0x20) = var_60_1
*arg5 = var_80_1
void* x24_1 = *x23
void* x25_1 = *x22
int32_t x0_4
int128_t v0_1
int128_t v1_1
int128_t v2_1
x0_4, v0_1, v1_1, v2_1 = strcmp(*(x24_1 + 0x10), *(x25_1 + 0x10))
uint64_t result

if ((x0_4 & 0x80000000) == 0)
    result = zx.q(x0 + 1)
    
    if (x0_4 == 0)
        int32_t x8_2 = x23[1].d
        int32_t x9_1 = x22[1].d
        
        if (x8_2 s< x9_1)
            goto label_1047898
        
        if (x24_1 u< x25_1 && x8_2 s<= x9_1)
            goto label_1047898
else
label_1047898:
    int128_t var_70_2 = *(x22 + 0x10)
    int128_t var_60_2 = *(x22 + 0x20)
    int128_t var_80_2 = *x22
    v0_1 = *(x23 + 0x20)
    v2_1 = *x23
    *(x22 + 0x10) = *(x23 + 0x10)
    *(x22 + 0x20) = v0_1
    *x22 = v2_1
    *(x23 + 0x10) = var_70_2
    *(x23 + 0x20) = var_60_2
    *x23 = var_80_2
    void* x23_1 = *x22
    void* x24_2 = *x19
    int32_t x0_6
    int128_t v0_2
    int128_t v1_2
    int128_t v2_2
    x0_6, v0_2, v1_2, v2_2 = strcmp(*(x23_1 + 0x10), *(x24_2 + 0x10))
    
    if ((x0_6 & 0x80000000) == 0)
        result = zx.q(x0 + 2)
        
        if (x0_6 == 0)
            int32_t x8_4 = x22[1].d
            int32_t x9_2 = x19[1].d
            
            if (x8_4 s< x9_2)
                goto label_10478e0
            
            if (x23_1 u< x24_2 && x8_4 s<= x9_2)
                goto label_10478e0
    else
    label_10478e0:
        int128_t var_70_3 = *(x19 + 0x10)
        int128_t var_60_3 = *(x19 + 0x20)
        int128_t var_80_3 = *x19
        v0_2 = *(x22 + 0x20)
        v2_2 = *x22
        *(x19 + 0x10) = *(x22 + 0x10)
        *(x19 + 0x20) = v0_2
        *x19 = v2_2
        *(x22 + 0x10) = var_70_3
        *(x22 + 0x20) = var_60_3
        *x22 = var_80_3
        void* x22_1 = *x19
        void* x23_2 = *x20
        int32_t x0_8
        int128_t v0_3
        int128_t v1_3
        int128_t v2_3
        x0_8, v0_3, v1_3, v2_3 = strcmp(*(x22_1 + 0x10), *(x23_2 + 0x10))
        
        if ((x0_8 & 0x80000000) == 0)
            result = zx.q(x0 + 3)
            
            if (x0_8 == 0)
                int32_t x8_7 = x19[1].d
                int32_t x9_4 = x20[1].d
                
                if (x8_7 s< x9_4)
                    goto label_1047928
                
                if (x22_1 u< x23_2 && x8_7 s<= x9_4)
                    goto label_1047928
        else
        label_1047928:
            result = zx.q(x0 + 4)
            int128_t var_70_4 = *(x20 + 0x10)
            int128_t var_60_4 = *(x20 + 0x20)
            int128_t var_80_4 = *x20
            v0_3 = *(x19 + 0x20)
            v2_3 = *x19
            *(x20 + 0x10) = *(x19 + 0x10)
            *(x20 + 0x20) = v0_3
            *x20 = v2_3
            *(x19 + 0x10) = var_70_4
            *(x19 + 0x20) = var_60_4
            *x19 = var_80_4

return result
