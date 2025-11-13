// 函数: sub_1102bcc
// 地址: 0x1102bcc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*(arg1 + 0x26a) = 0
int32_t* result = (*(*arg1 + 0x18))(arg1, 0xffffffff)

if (result == 0)
    arg1[0x4d].b = 1
else
    void* x20_1 = result - (zx.q(arg2) & 1)
    int64_t data = arg1[1]
    void var_678
    void* var_640_1 = &var_678
    int32_t var_638_1 = x20_1.d
    int64_t var_668
    
    if (dl_iterate_phdr(callback, &data) == 0 || var_668 == 0)
    label_1102c58:
        pthread_rwlock_rdlock(0x24bc064)
        void* x8_4 = data_11c1ac8
        
        while (true)
            if (x8_4 u>= data_11c1ad0)
                pthread_rwlock_unlock(0x24bc064)
                goto label_1102d54
            
            if (*(x8_4 + 8) u<= x20_1 && *(x8_4 + 0x10) u> x20_1)
                break
            
            x8_4 += 0x20
        
        int32_t* x21_1 = *(x8_4 + 0x18)
        pthread_rwlock_unlock(0x24bc064)
        
        if (x21_1 == 0)
        label_1102d54:
            result = (*(*arg1 + 0x18))(arg1, 0xffffffff)
            
            if (*result != 0xd2801168 || result[1] != 0xd4000001)
                arg1[0x4d].b = 1
            else
                __builtin_memset(&arg1[0x44], 0, 0x48)
                *(arg1 + 0x26a) = 1
        else
            void var_6e0
            int64_t var_6a8
            
            if (sub_1102604(arg1[1], x21_1, &var_6a8, &var_6e0) != 0)
                goto label_1102d54
            
            memset(&data, 0, 0x618)
            int128_t v0_1
            result, v0_1 = sub_11031b8(arg1[1], &var_6a8, &var_6e0, x20_1, 4, &data)
            
            if ((result.d & 1) == 0)
                goto label_1102d54
            
            int128_t var_690
            *(arg1 + 0x220) = var_690
            int64_t var_680
            arg1[0x46] = var_680
            int64_t var_6c0
            arg1[0x47] = var_6c0
            arg1[0x48] = zx.q(var_638_1)
            arg1[0x49] = 0
            arg1[0x4a].d = 0x3000000
            arg1[0x4b] = var_6a8
            int32_t var_6a0
            *(arg1 + 0x254) = var_6a0
            arg1[0x4c] = 0
    else
        result = sub_1105324(arg1, x20_1, &var_678, 0)
        
        if ((result.d & 1) == 0)
            goto label_1102c58

return result
