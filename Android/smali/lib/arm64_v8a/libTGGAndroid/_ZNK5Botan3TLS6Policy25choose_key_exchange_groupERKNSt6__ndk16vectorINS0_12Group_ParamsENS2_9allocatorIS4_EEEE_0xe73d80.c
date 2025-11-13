// 函数: _ZNK5Botan3TLS6Policy25choose_key_exchange_groupERKNSt6__ndk16vectorINS0_12Group_ParamsENS2_9allocatorIS4_EEEE
// 地址: 0xe73d80
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* entry_x1
uint32_t i

if (*entry_x1 == entry_x1[1])
    i = 0
else
    (*(*arg1 + 0x40))()
    void* var_28
    int64_t var_20
    
    if (var_28 == var_20)
        i = 0
    label_e73e38:
        
        if (var_28 != 0)
        label_e73e3c:
            void* var_20_1 = var_28
            operator delete(var_28)
    else
        int16_t* x9_2 = *entry_x1
        int64_t x11_1 = entry_x1[1]
        void* x10_1 = x11_1 - x9_2
        
        if (x11_1 != x9_2)
            void* x12_1
            
            x12_1 = x10_1 s>= 0 ? x10_1 : -ffffffffffffffff
            
            void* x11_2 = x9_2 - x11_1
            void* x12_2
            
            x12_2 = x12_1 s< 1 ? x12_1 : 1
            
            void* x10_2
            
            x10_2 = x11_2 s> x10_1 ? x11_2 : x10_1
            
            int16_t* x11_3 = var_28
        label_e73de8:
            i = zx.d(*x11_3)
            int16_t* x12_3 = x9_2
            int64_t x13_1 = x12_2 * (x10_2 u>> 1)
            
            while (zx.d(*x12_3) != i)
                int64_t temp0_1 = x13_1
                x13_1 -= 1
                x12_3 = &x12_3[1]
                
                if (temp0_1 == 1)
                    x11_3 = &x11_3[1]
                    i = 0
                    
                    if (x11_3 != var_20)
                        goto label_e73de8
                    
                    goto label_e73e38
            
            goto label_e73e38
        
        i = 0
        
        if (var_28 != 0)
            goto label_e73e3c

return zx.q(i)
