// 函数: sub_baec00
// 地址: 0xbaec00
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t* x22 = arg4
int32_t* x21 = arg3
int32_t x0
int128_t v0
x0, v0 = std::__ndk1::__sort4<std::__ndk1::__less<AssocCard, AssocCard>&, AssocCard*>(arg1, arg2, 
    arg3, arg4, arg6)
int32_t x8 = *arg5
int32_t x9 = *x22
int32_t x8_5

if (x8 s< x9)
label_baec3c:
    int64_t x8_1 = *(x22 + 0x10)
    int128_t var_50_1 = *x22
    v0 = *arg5
    *(x22 + 0x10) = *(arg5 + 0x10)
    *x22 = v0
    *(arg5 + 0x10) = x8_1
    *arg5 = var_50_1
    int32_t x8_4 = *x22
    int32_t x9_1 = *x21
    
    if (x8_4 s< x9_1)
    label_baeca8:
        int64_t x8_6 = *(x21 + 0x10)
        int128_t var_50_2 = *x21
        v0 = *x22
        *(x21 + 0x10) = *(x22 + 0x10)
        *x21 = v0
        *(x22 + 0x10) = x8_6
        *x22 = var_50_2
        int32_t x8_9 = *x21
        int32_t x9_4 = *arg2
        
        if (x8_9 s< x9_4)
        label_baed14:
            int64_t x8_10 = *(arg2 + 0x10)
            int128_t var_50_3 = *arg2
            v0 = *x21
            *(arg2 + 0x10) = *(x21 + 0x10)
            *arg2 = v0
            *(x21 + 0x10) = x8_10
            *x21 = var_50_3
            int32_t x8_13 = *arg2
            int32_t x9_7 = *arg1
            
            if (x8_13 s< x9_7)
            label_baed80:
                int64_t x8_14 = *(arg1 + 0x10)
                int128_t var_50_4 = *arg1
                v0 = *arg2
                *(arg1 + 0x10) = *(arg2 + 0x10)
                *arg1 = v0
                *(arg2 + 0x10) = x8_14
                x8_5 = x0 + 4
                *arg2 = var_50_4
            else
                x8_5 = x0 + 3
                
                if (x8_13 s<= x9_7)
                    int64_t x9_8 = *(arg2 + 8)
                    int64_t x10_5 = *(arg1 + 8)
                    
                    if (x9_8 u< x10_5)
                        goto label_baed80
                    
                    if (x9_8 u<= x10_5 && *(arg2 + 0x10) u< *(arg1 + 0x10))
                        goto label_baed80
        else
            x8_5 = x0 + 2
            
            if (x8_9 s<= x9_4)
                int64_t x9_5 = *(x21 + 8)
                int64_t x10_3 = *(arg2 + 8)
                
                if (x9_5 u< x10_3)
                    goto label_baed14
                
                if (x9_5 u<= x10_3 && *(x21 + 0x10) u< *(arg2 + 0x10))
                    goto label_baed14
    else
        x8_5 = x0 + 1
        
        if (x8_4 s<= x9_1)
            int64_t x9_2 = *(x22 + 8)
            int64_t x10_1 = *(x21 + 8)
            
            if (x9_2 u< x10_1)
                goto label_baeca8
            
            if (x9_2 u<= x10_1 && *(x22 + 0x10) u< *(x21 + 0x10))
                goto label_baeca8
else if (x8 s> x9)
    x8_5 = x0
else
    int64_t x8_17 = *(arg5 + 8)
    int64_t x9_10 = *(x22 + 8)
    
    if (x8_17 u< x9_10)
        goto label_baec3c
    
    if (x8_17 u<= x9_10)
        x8_5 = x0
        
        if (*(arg5 + 0x10) u< *(x22 + 0x10))
            goto label_baec3c
    else
        x8_5 = x0

return zx.q(x8_5)
