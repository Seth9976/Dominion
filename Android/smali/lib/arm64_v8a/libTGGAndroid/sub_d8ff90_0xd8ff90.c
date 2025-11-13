// 函数: sub_d8ff90
// 地址: 0xd8ff90
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x8 = *arg4
uint64_t i_12 = (**x8)(x8)
int64_t x8_1 = *arg1
uint64_t x9_3 = (arg3 + 7) u>> 3
int32_t x24_2

if (arg1[1] - x8_1 != x9_3)
    x24_2 = 0
else
    uint64_t i_11 = i_12
    char var_80
    void* var_70
    int64_t x26_1
    
    if (zx.d(*(x9_3 + x8_1 - 1)) != 0xbc)
        (*(**arg4 + 0x40))()
        char x0_5 = Botan::ieee1363_hash_id(&var_80)
        
        if ((zx.d(var_80) & 1) != 0)
            operator delete(var_70)
        
        void* x8_8 = arg1[1]
        x24_2 = 0
        uint32_t x9_8 = zx.d(*(x8_8 - 2))
        
        if (x9_8 != 0 && x9_8 == zx.d(x0_5))
            *arg1
            
            if (zx.d(*(x8_8 - 1)) == 0xcc)
                x26_1 = 2
                goto label_d9000c
            
            x24_2 = 0
    else
        x26_1 = 1
    label_d9000c:
        std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::vector(&var_80)
        char* x24_1 = var_80.q
        void* var_78
        uint8_t* x1_1 = var_78 - (x26_1 + i_11)
        uint64_t x25_1 = x1_1 - x24_1
        Botan::mgf1_mask(*arg4, x1_1, i_11, x24_1, x25_1)
        int64_t x16_1 = neg.q(i_11)
        int64_t x17_1 = neg.q(x26_1)
        uint32_t x13_1 = zx.d(*x24_1) & 0x7f
        int32_t x10_2 = 0
        int32_t x11_1 = 0xff
        *x24_1 = x13_1.b
        int64_t x9_6
        
        if (x25_1 == 0)
            x9_6 = 1
        else
            int64_t x12_1 = 1
            x9_6 = 1
            
            while (true)
                int32_t x14_3 = ((x13_1 - 1) & not.d(x13_1) & 0x80) << 0x18 s>> 0x1f
                int32_t x13_5 =
                    x11_1 & not.d(x14_3 | sx.d(((x13_1.b ^ 1) - 1) & (not.d(x13_1)).b) s>> 7)
                x11_1 &= x14_3
                x10_2 |= x13_5
                x9_6 += zx.q(x11_1) & 1
                
                if (x12_1 u>= x25_1)
                    break
                
                x13_1 = zx.d(x24_1[x12_1])
                x12_1 += 1
        
        void* x21_1 = var_80.q
        void* x22_1 = var_78
        int64_t x11_4 = i_11 + arg5 + x26_1 + x9_6
        int64_t x12_2 = x22_1 - x21_1
        void* x24_3 = x22_1 + x17_1 + x16_1 + neg.q(arg5)
        char x8_16 =
            x11_1.b | x10_2.b | (((((x12_2 - x11_4) ^ x12_2) | (x12_2 ^ x11_4)) ^ x12_2) s>> 0x3f).b
        void* x26_3 = x9_6 & (zx.q(x8_16) - 1) s>> 0x3f
        char* x28_1 = x21_1 + x26_3
        uint64_t x25_2 = x24_3 - x28_1
        char* var_98_1
        __builtin_memset(&var_98_1, 0, 0x18)
        char* var_90_1
        void* var_88_1
        char* x24_4
        char* x27_1
        
        if (x24_3 != x28_1)
            if ((x25_2 & 0xffffffff80000000) != 0)
                std::__ndk1::__vector_base_common<true>::__throw_length_error()
            label_d90868:
                std::__ndk1::__vector_base_common<true>::__throw_length_error()
            label_d90870:
                std::__ndk1::__vector_base_common<true>::__throw_length_error()
                sub_c776cc(std::__ndk1::__vector_base_common<true>::__throw_length_error())
                noreturn
            
            char* x0_8
            int128_t v0_1
            int128_t v1_1
            x0_8, v0_1, v1_1 = Botan::allocate_memory(x25_2, 1)
            x27_1 = x0_8
            x24_4 = x0_8
            var_98_1 = x0_8
            char* var_90_2 = x0_8
            var_88_1 = &x0_8[x25_2]
            
            if (x28_1 != x24_3)
                void* x9_10 = x21_1 + i_11 + x26_1 + x26_3 + arg5
                void* x8_23 = x22_1 - x9_10
                
                if (x8_23 u>= 0x20)
                    if (x27_1 u< x22_1 - (i_11 + x26_1 + arg5))
                        x24_4 = x27_1
                    
                    if (x27_1 u< x22_1 - (i_11 + x26_1 + arg5) && x28_1 u< x22_1 + x27_1 - x9_10)
                        goto label_d90268
                    
                    void* i_13 = x8_23 & 0xffffffffffffffe0
                    x24_4 = x27_1 + i_13
                    x28_1 += i_13
                    void* x10_9 = x26_3 + x21_1 + 0x10
                    void* x11_8 = &x27_1[0x10]
                    void* i_8 = i_13
                    void* i
                    
                    do
                        v0_1 = *(x10_9 - 0x10)
                        v1_1 = *x10_9
                        x10_9 += 0x20
                        i = i_8
                        i_8 -= 0x20
                        *(x11_8 - 0x10) = v0_1
                        *x11_8 = v1_1
                        x11_8 += 0x20
                    while (i != 0x20)
                    
                    if (i_13 != x8_23)
                        goto label_d90268
                else
                    x24_4 = x27_1
                label_d90268:
                    void* i_6 = x22_1 - &x28_1[i_11 + x26_1 + arg5]
                    void* i_1
                    
                    do
                        char x9_15 = *x28_1
                        x28_1 = &x28_1[1]
                        i_1 = i_6
                        i_6 -= 1
                        *x24_4 = x9_15
                        x24_4 = &x24_4[1]
                    while (i_1 != 1)
            
            x21_1 = var_80.q
            x22_1 = var_78
            var_90_1 = x24_4
            goto label_d90290
        
        x27_1 = nullptr
        x24_4 = nullptr
    label_d90290:
        char* x28_2 = x21_1 + x26_3 + x24_4 - x27_1
        void* fp_2 = x22_1 + x17_1 + x16_1
        uint64_t x25_3 = fp_2 - x28_2
        void* var_b0_1
        __builtin_memset(&var_b0_1, 0, 0x18)
        void* var_a8_1
        void* var_a0_1
        
        if (fp_2 != x28_2)
            if ((x25_3 & 0xffffffff80000000) != 0)
                goto label_d90868
            
            void* x0_10
            int128_t v0_2
            int128_t v1_2
            x0_10, v0_2, v1_2 = Botan::allocate_memory(x25_3, 1)
            var_b0_1 = x0_10
            void* var_a8_2 = x0_10
            var_a0_1 = x0_10 + x25_3
            void* x8_36
            
            if (x28_2 == fp_2)
                x8_36 = x0_10
            else
                int64_t x8_33 = x27_1 - x21_1 - i_11 - x26_1 - x26_3 - x24_4
                void* x9_17 = x22_1 + x8_33
                
                if (x9_17 u< 0x20
                    || (x0_10 u< x22_1 - (i_11 + x26_1) && x28_2 u< x22_1 + x0_10 + x8_33))
                label_d9035c:
                    x8_36 = x0_10
                    
                    do
                        char x9_18 = *x28_2
                        x28_2 = &x28_2[1]
                        *x8_36 = x9_18
                        x8_36 += 1
                    while (fp_2 != x28_2)
                else
                    void* i_14 = x9_17 & 0xffffffffffffffe0
                    x8_36 = x0_10 + i_14
                    x28_2 += i_14
                    void* x11_12 = x26_3 + x24_4 - x27_1 + x21_1 + 0x10
                    void* x12_3 = x0_10 + 0x10
                    void* i_9 = i_14
                    void* i_2
                    
                    do
                        v0_2 = *(x11_12 - 0x10)
                        v1_2 = *x11_12
                        i_2 = i_9
                        i_9 -= 0x20
                        x11_12 += 0x20
                        *(x12_3 - 0x10) = v0_2
                        *x12_3 = v1_2
                        x12_3 += 0x20
                    while (i_2 != 0x20)
                    x0_10 = x8_36
                    
                    if (i_14 != x9_17)
                        goto label_d9035c
            
            var_a8_1 = x8_36
        
        void* var_c8
        __builtin_memset(&var_c8, 0, 0x18)
        uint8_t* x24_5 = *arg2
        uint64_t x25_4 = (arg3 + 5) u>> 3
        uint64_t x23_1 = x25_4 - arg5 - i_11 + not.q(x26_1)
        uint64_t var_e0
        uint64_t var_d8
        uint64_t var_d0
        char* var_c0_1
        uint64_t var_b8
        uint64_t x22_2
        uint64_t x23_2
        
        if (arg2[1] - x24_5 u> x23_1)
            __builtin_memset(&var_e0, 0, 0x18)
            uint64_t x0_12
            uint64_t x9_20
            char* x10_15
            
            if (x23_1 == 0)
                x9_20 = 0
                x10_15 = nullptr
                x0_12 = 0
            else
                if ((x23_1 & 0xffffffff80000000) != 0)
                    goto label_d90870
                
                int128_t v0_3
                int128_t v1_3
                x0_12, v0_3, v1_3 = Botan::allocate_memory(x23_1, 1)
                x9_20 = x0_12 + x23_1
                var_e0 = x0_12
                uint64_t var_d8_1 = x0_12
                char* x8_41
                
                if (x23_1 u>= 0x20)
                    if (x0_12 u< &x24_5[x23_1])
                        x10_15 = x0_12
                        x8_41 = x24_5
                    
                    if (x0_12 u< &x24_5[x23_1] && x24_5 u< x9_20)
                        goto label_d90498
                    
                    int64_t i_15 = x23_1 & 0xffffffffffffffe0
                    void* x12_4 = &x24_5[0x10]
                    x10_15 = x0_12 + i_15
                    x8_41 = &x24_5[i_15]
                    int128_t* x13_9 = x0_12 + 0x10
                    int64_t i_10 = i_15
                    int64_t i_3
                    
                    do
                        v0_3 = *(x12_4 - 0x10)
                        v1_3 = *x12_4
                        x12_4 += 0x20
                        i_3 = i_10
                        i_10 -= 0x20
                        x13_9[-1] = v0_3
                        *x13_9 = v1_3
                        x13_9 = &x13_9[2]
                    while (i_3 != 0x20)
                    
                    if (x23_1 != i_15)
                        goto label_d90498
                else
                    x10_15 = x0_12
                    x8_41 = x24_5
                label_d90498:
                    void* i_7 = x25_4 - x8_41 - i_11 - x26_1 - arg5 + x24_5 - 1
                    void* i_4
                    
                    do
                        char x12_5 = *x8_41
                        x8_41 = &x8_41[1]
                        i_4 = i_7
                        i_7 -= 1
                        *x10_15 = x12_5
                        x10_15 = &x10_15[1]
                    while (i_4 != 1)
                void* x8_43 = var_c8
                
                if (x8_43 != 0)
                    void* var_c0_2 = x8_43
                    Botan::deallocate_memory(x8_43, var_b8 - x8_43, 1)
                    x0_12 = var_e0
                    var_c8 = nullptr
            
            var_c8 = x0_12
            var_c0_1 = x10_15
            var_b8 = x9_20
            int64_t x26_4 = *arg2
            int64_t x21_3 = arg2[1]
            __builtin_memset(&var_e0, 0, 0x18)
            char* x24_6 = x26_4 + x23_1
            x23_2 = x21_3 - x24_6
            uint64_t x8_48
            
            if (x21_3 == x24_6)
                x8_48 = 0
                x22_2 = 0
            else
                if ((x23_2 & 0xffffffff80000000) != 0)
                    sub_c776cc(std::__ndk1::__vector_base_common<true>::__throw_length_error())
                    noreturn
                
                uint64_t x0_16
                int128_t v0_4
                int128_t v1_4
                x0_16, v0_4, v1_4 = Botan::allocate_memory(x23_2, 1)
                x22_2 = x0_16
                x23_2 += x0_16
                var_e0 = x0_16
                var_d8 = x0_16
                var_d0 = x23_2
                
                if (x24_6 == x21_3)
                    x8_48 = x22_2
                else
                    int64_t x8_47 = i_11 + x26_1 + arg5 - x26_4 - x25_4
                    
                    if (x8_47 + x21_3 + 1 u>= 0x20)
                        if (x22_2 u< x21_3)
                            x8_48 = x22_2
                        
                        if (x22_2 u< x21_3 && x24_6 u< x8_47 + x22_2 + x21_3 + 1)
                            goto label_d905d4
                        
                        int64_t x10_16 = (x8_47 + x21_3 + 1) & 0xffffffffffffffe0
                        int64_t x11_18 = 0
                        x8_48 = x22_2 + x10_16
                        x24_6 = &x24_6[x10_16]
                        
                        do
                            int128_t* x13_10 = x25_4 - i_11 - x26_1 - arg5 + x26_4 + 0xf + x11_18
                            v1_4 = *x13_10
                            int128_t* x14_4 = x22_2 + x11_18
                            x11_18 += 0x20
                            *x14_4 = x13_10[-1]
                            x14_4[1] = v1_4
                        while (x10_16 != x11_18)
                        
                        if (x10_16 != x8_47 + x21_3 + 1)
                            goto label_d905d4
                    else
                        x8_48 = x22_2
                    label_d905d4:
                        
                        do
                            char x9_24 = *x24_6
                            x24_6 = &x24_6[1]
                            *x8_48 = x9_24
                            x8_48 += 1
                        while (x21_3 != x24_6)
            
            int64_t* x0_17 = *arg4
            (*(*x0_17 + 0x18))(x0_17, x22_2, x8_48 - x22_2)
        else if (&var_c8 == arg2)
            x22_2 = 0
            x23_2 = 0
        else
            x22_2 = 0
            x23_2 = 0
            std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::assign<uint8_t*>(
                &var_c8, x24_5)
        
        *arg4
        Botan::Buffered_Computation::final()
        
        if (x22_2 != 0)
            Botan::deallocate_memory(x22_2, x23_2 - x22_2, 1)
        
        int64_t* x0_20 = *arg4
        uint64_t x22_3 = var_e0
        var_e0 = _byteswap((var_c0_1 - var_c8) << 3)
        (*(*x0_20 + 0x18))(x0_20, &var_e0, 8)
        int64_t* x0_21 = *arg4
        void* x1_7 = var_c8
        (*(*x0_21 + 0x18))(x0_21, x1_7, var_c0_1 - x1_7)
        int64_t* x0_22 = *arg4
        uint64_t x21_5 = var_d8 - x22_3
        (*(*x0_22 + 0x18))(x0_22, x22_3, x21_5)
        int64_t* x0_23 = *arg4
        void* x1_9 = var_b0_1
        (*(*x0_23 + 0x18))(x0_23, x1_9, var_a8_1 - x1_9)
        *arg4
        Botan::Buffered_Computation::final()
        int64_t* x0_25 = *arg4
        uint64_t var_f8 = _byteswap((var_90_1 - var_98_1) << 3)
        (*(*x0_25 + 0x18))(x0_25, &var_f8, 8)
        int64_t* x0_26 = *arg4
        char* x1_11 = var_98_1
        (*(*x0_26 + 0x18))(x0_26, x1_11, var_90_1 - x1_11)
        int64_t* x0_27 = *arg4
        (*(*x0_27 + 0x18))(x0_27, x22_3, x21_5)
        int64_t* x0_28 = *arg4
        void* x1_13 = var_b0_1
        (*(*x0_28 + 0x18))(x0_28, x1_13, var_a8_1 - x1_13)
        *arg4
        Botan::Buffered_Computation::final()
        uint64_t x0_30 = var_e0
        uint64_t x8_76 = var_f8
        char var_64_1 = 0
        
        if (i_11 != 0)
            uint64_t x9_33 = x0_30
            uint64_t x10_17 = x8_76
            uint64_t i_5
            
            do
                char x11_19 = *x9_33
                x9_33 += 1
                char x12_11 = *x10_17
                x10_17 += 1
                i_5 = i_11
                i_11 -= 1
                var_64_1 |= x12_11 ^ x11_19
            while (i_5 != 1)
        
        uint32_t x9_34 = zx.d(var_64_1)
        int32_t x9_36 = ((x9_34 - 1) & not.d(x9_34) & 0x80) << 0x18 s>> 0x1f
        x24_2 = (zx.d(x8_16) | zx.d((((x9_36 - 1) & not.d(x9_36)) u>> 7).b)) == 0 ? 1 : 0
        
        if (x8_76 != 0)
            uint64_t var_f0_1 = x8_76
            int64_t var_e8
            Botan::deallocate_memory(x8_76, var_e8 - x8_76, 1)
            x0_30 = var_e0
        
        if (x0_30 != 0)
            uint64_t var_d8_3 = x0_30
            Botan::deallocate_memory(x0_30, var_d0 - x0_30, 1)
        
        if (x22_3 != 0)
            Botan::deallocate_memory(x22_3, var_d0 - x22_3, 1)
        
        void* x0_33 = var_c8
        
        if (x0_33 != 0)
            void* var_c0_3 = x0_33
            Botan::deallocate_memory(x0_33, var_b8 - x0_33, 1)
        
        void* x0_34 = var_b0_1
        
        if (x0_34 != 0)
            void* var_a8_3 = x0_34
            Botan::deallocate_memory(x0_34, var_a0_1 - x0_34, 1)
        
        char* x0_35 = var_98_1
        
        if (x0_35 != 0)
            char* var_90_3 = x0_35
            Botan::deallocate_memory(x0_35, var_88_1 - x0_35, 1)
        
        void* x0_36 = var_80.q
        
        if (x0_36 != 0)
            void* var_78_1 = x0_36
            Botan::deallocate_memory(x0_36, var_70 - x0_36, 1)

return zx.q(x24_2)
