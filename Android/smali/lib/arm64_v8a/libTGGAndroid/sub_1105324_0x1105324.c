// 函数: sub_1105324
// 地址: 0x1105324
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void var_6e8
int64_t var_6b0
int32_t x0_1

if (arg4 != 0)
    void* x2 = arg3[2]
    x0_1 = sub_11057d4(*(arg1 + 8), arg2, x2, arg3[3], x2 + zx.q(arg4), &var_6b0, &var_6e8)

int32_t x24_1

if (arg4 != 0 && (x0_1 & 1) != 0)
label_1105494:
    x24_1 = 1
label_1105498:
    int64_t x25_1 = *arg3
    int32_t var_680[0x4]
    memset(&var_680, 0, 0x618)
    int32_t x0_10
    int128_t v0_1
    x0_10, v0_1 = sub_11031b8(*(arg1 + 8), &var_6b0, &var_6e8, arg2, 4, &var_680)
    
    if ((x0_10 & 1) != 0)
        int64_t var_698
        *(arg1 + 0x220) = var_698
        int128_t var_690
        *(arg1 + 0x228) = var_690
        int64_t var_6c8
        *(arg1 + 0x238) = var_6c8
        *(arg1 + 0x248) = 0
        *(arg1 + 0x250) = 0x3000000
        int32_t var_670
        *(arg1 + 0x240) = zx.q(var_670)
        int64_t x23_3 = var_6b0
        *(arg1 + 0x258) = x23_3
        int32_t var_6a8
        *(arg1 + 0x254) = var_6a8
        *(arg1 + 0x260) = x25_1
        
        if ((((arg4 != 0 ? 1 : 0) | (x24_1 ^ 1)) & 1) == 0 && arg3[4] == 0)
            int64_t x24_2 = *arg3
            pthread_rwlock_wrlock(0x24bc064)
            void* x8_7 = data_11c1ad0
            void* x9_3 = data_11c1ad8
            
            if (x8_7 u>= x9_3)
                void* x19_1 = data_11c1ac8
                void* x21_1 = x9_3 - x19_1
                void* x0_12 = malloc(x21_1 << 2)
                memcpy(x0_12, x19_1, x21_1)
                
                if (x19_1 != &data_24bc0a0)
                    free(x19_1)
                
                data_11c1ac8 = x0_12
                x8_7 = x0_12 + (x21_1 s>> 5 << 5)
                data_11c1ad8 = x0_12 + (x21_1 s>> 3 << 5)
            
            *x8_7 = x24_2
            *(x8_7 + 8) = var_698
            *(x8_7 + 0x18) = x23_3
            *(x8_7 + 0x10) = var_690.q
            data_11c1ad0 = x8_7 + 0x20
            pthread_rwlock_unlock(0x24bc064)
        
        return 1
else
    char* x2_1 = arg3[4]
    int32_t x0_3
    
    if (x2_1 != 0)
        x0_3 = sub_1105a3c(*(arg1 + 8), arg2, x2_1, arg3[5].d, &var_6b0, &var_6e8)
    
    if (x2_1 != 0 && (x0_3 & 1) != 0)
        goto label_1105494
    
    int64_t x23_1 = *arg3
    pthread_rwlock_rdlock(0x24bc064)
    void* x8_1 = data_11c1ac8
    void* x9_1 = data_11c1ad0
    
    if (x8_1 u< x9_1)
        if (x23_1 != -1)
            while (*x8_1 != x23_1 || *(x8_1 + 8) u> arg2 || *(x8_1 + 0x10) u<= arg2)
                x8_1 += 0x20
                
                if (x8_1 u>= x9_1)
                    goto label_1105470
        else
            while (*(x8_1 + 8) u> arg2 || *(x8_1 + 0x10) u<= arg2)
                x8_1 += 0x20
                
                if (x8_1 u>= x9_1)
                    goto label_1105470
        
        void* x23_2 = *(x8_1 + 0x18)
        pthread_rwlock_unlock(0x24bc064)
        
        if (x23_2 == 0)
            goto label_110548c
        
        if ((sub_11057d4(*(arg1 + 8), arg2, arg3[2], arg3[3], x23_2, &var_6b0, &var_6e8) & 1) == 0)
            goto label_110548c
        
        x24_1 = 0
        goto label_1105498
    
label_1105470:
    pthread_rwlock_unlock(0x24bc064)
label_110548c:
    
    if ((sub_11057d4(*(arg1 + 8), arg2, arg3[2], arg3[3], nullptr, &var_6b0, &var_6e8) & 1) != 0)
        goto label_1105494
return 0
