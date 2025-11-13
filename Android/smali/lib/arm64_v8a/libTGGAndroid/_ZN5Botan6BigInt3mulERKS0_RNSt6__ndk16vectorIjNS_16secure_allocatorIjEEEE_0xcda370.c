// 函数: _ZN5Botan6BigInt3mulERKS0_RNSt6__ndk16vectorIjNS_16secure_allocatorIjEEEE
// 地址: 0xcda370
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x20 = *(arg1 + 0x18)
uint64_t x21

if (x20 == -1)
    int64_t x8_2 = *arg1
    int64_t x10_1 = *(arg1 + 8)
    int64_t x9_2 = x10_1 - x8_2
    
    if (x10_1 == x8_2)
        x20 = 0
    else
        int64_t x11_1
        
        x11_1 = x9_2 s>= 0 ? x9_2 : -1
        
        int64_t x10_2 = x8_2 - x10_1
        int64_t x11_2
        
        x11_2 = x11_1 s< 1 ? x11_1 : 1
        
        x20 = x9_2 s>> 2
        int64_t x9_3
        
        x9_3 = x10_2 s> x9_2 ? x10_2 : x9_2
        
        int64_t i_7 = x11_2 * (x9_3 u>> 2)
        uint64_t x10_3 = 1
        int64_t i
        
        do
            int32_t x11_3 = *(x8_2 - 4 + (i_7 << 2))
            i = i_7
            i_7 -= 1
            x10_3 = zx.q(x10_3.d) & zx.q(((x11_3 - 1) & not.d(x11_3)) s>> 0x1f)
            x20 -= x10_3
        while (i != 1)
    
    *(arg1 + 0x18) = x20
    x21 = *(arg2 + 0x18)
    
    if (x21 == -1)
        goto label_cda438
else
    x21 = *(arg2 + 0x18)
    
    if (x21 == -1)
    label_cda438:
        int64_t x8_4 = *arg2
        int64_t x10_4 = *(arg2 + 8)
        int64_t x9_5 = x10_4 - x8_4
        
        if (x10_4 == x8_4)
            x21 = 0
        else
            int64_t x11_5
            
            x11_5 = x9_5 s>= 0 ? x9_5 : -1
            
            int64_t x10_5 = x8_4 - x10_4
            int64_t x11_6
            
            x11_6 = x11_5 s< 1 ? x11_5 : 1
            
            x21 = x9_5 s>> 2
            int64_t x9_6
            
            x9_6 = x10_5 s> x9_5 ? x10_5 : x9_5
            
            int64_t i_8 = x11_6 * (x9_6 u>> 2)
            uint64_t x10_6 = 1
            int64_t i_1
            
            do
                int32_t x11_7 = *(x8_4 - 4 + (i_8 << 2))
                i_1 = i_8
                i_8 -= 1
                x10_6 = zx.q(x10_6.d) & zx.q(((x11_7 - 1) & not.d(x11_7)) s>> 0x1f)
                x21 -= x10_6
            while (i_1 != 1)
        
        *(arg2 + 0x18) = x21
        
        if (*(arg1 + 0x20) == *(arg2 + 0x20))
            goto label_cda3bc
        
        goto label_cda4ac

if (*(arg1 + 0x20) != *(arg2 + 0x20))
label_cda4ac:
    int64_t x8_7 = *(arg1 + 0x18)
    
    if (x8_7 == -1)
        int64_t x9_9 = *arg1
        int64_t x11_9 = *(arg1 + 8)
        int64_t x10_7 = x11_9 - x9_9
        
        if (x11_9 == x9_9)
            x8_7 = 0
        else
            int64_t x12_3
            
            x12_3 = x10_7 s>= 0 ? x10_7 : -1
            
            int64_t x11_10 = x9_9 - x11_9
            int64_t x12_4
            
            x12_4 = x12_3 s< 1 ? x12_3 : 1
            
            x8_7 = x10_7 s>> 2
            int64_t x10_8
            
            x10_8 = x11_10 s> x10_7 ? x11_10 : x10_7
            
            int64_t i_9 = x12_4 * (x10_8 u>> 2)
            uint64_t x11_11 = 1
            int64_t i_2
            
            do
                int32_t x12_5 = *(x9_9 - 4 + (i_9 << 2))
                i_2 = i_9
                i_9 -= 1
                x11_11 = zx.q(x11_11.d) & zx.q(((x12_5 - 1) & not.d(x12_5)) s>> 0x1f)
                x8_7 -= x11_11
            while (i_2 != 1)
        
        *(arg1 + 0x18) = x8_7
    
    *(arg1 + 0x20) = x8_7 == 0 ? 1 : 0
    
    if (x20 == 0 || x21 == 0)
        goto label_cda64c
    
    goto label_cda534

label_cda3bc:
*(arg1 + 0x20) = 1

if (x20 != 0 && x21 != 0)
label_cda534:
    
    if (x20 == 1)
        int64_t x8_9 = *arg1
        int64_t x9_13 = (*(arg1 + 8) - x8_9) s>> 2
        
        if (x21 + 1 u> x9_13)
            if (x21 + 1 u<= (*(arg1 + 0x10) - x8_9) s>> 2
                    || ((x21 + 1) & 0xfffffffffffffff8) + 8 u> x9_13)
                std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::__append(arg1)
            else if (((x21 + 1) & 0xfffffffffffffff8) + 8 u< x9_13)
                *(arg1 + 8) = x8_9 + ((((x21 + 1) & 0xfffffffffffffff8) + 8) << 2)
        
        int32_t* x8_10 = *arg1
        int64_t x9_14 = *(arg1 + 8)
        *(arg1 + 0x18) = -1
        uint64_t x9_15
        void* x10_13
        int64_t i_15
        
        if (x9_14 != x8_10)
            x9_15 = zx.q(*x8_10)
            x10_13 = *arg2
            i_15 = x21 & 0xfffffffffffffff8
            
            if (i_15 == 0)
                goto label_cda798
            
            goto label_cda59c
        
        x9_15 = 0
        x10_13 = *arg2
        i_15 = x21 & 0xfffffffffffffff8
        uint32_t x12_8
        
        if (i_15 != 0)
        label_cda59c:
            uint64_t x15_1 = 0
            void* x12_7 = &x8_10[4]
            void* x13_2 = x10_13 + 0x10
            int64_t i_13 = i_15
            int64_t i_3
            
            do
                i_3 = i_13
                i_13 -= 8
                int64_t x15_2 = x15_1 + x9_15 * zx.q(*(x13_2 - 0x10))
                *(x12_7 - 0x10) = x15_2.d
                int64_t x15_3 = x9_15 * zx.q(*(x13_2 - 0xc)) + (x15_2 u>> 0x20)
                *(x12_7 - 0xc) = x15_3.d
                int64_t x15_4 = x9_15 * zx.q(*(x13_2 - 8)) + (x15_3 u>> 0x20)
                *(x12_7 - 8) = x15_4.d
                int64_t x15_5 = x9_15 * zx.q(*(x13_2 - 4)) + (x15_4 u>> 0x20)
                *(x12_7 - 4) = x15_5.d
                int64_t x15_6 = x9_15 * zx.q(*x13_2) + (x15_5 u>> 0x20)
                *x12_7 = x15_6.d
                int64_t x15_7 = x9_15 * zx.q(*(x13_2 + 4)) + (x15_6 u>> 0x20)
                *(x12_7 + 4) = x15_7.d
                int64_t x15_8 = x9_15 * zx.q(*(x13_2 + 8)) + (x15_7 u>> 0x20)
                *(x12_7 + 8) = x15_8.d
                uint64_t x16_14 = zx.q(*(x13_2 + 0xc))
                x13_2 += 0x20
                int64_t x16_16 = x9_15 * x16_14 + (x15_8 u>> 0x20)
                x15_1 = x16_16 u>> 0x20
                *(x12_7 + 0xc) = x16_16.d
                x12_7 += 0x20
            while (i_3 != 8)
            x12_8 = x15_1.d
            
            if (i_15 != x21)
                goto label_cda7a4
        else
        label_cda798:
            x12_8 = 0
            
            if (i_15 != x21)
            label_cda7a4:
                int64_t i_12 = x21 - i_15
                void* x11_16 = &x8_10[i_15]
                void* x10_19 = x10_13 + (i_15 << 2)
                int64_t i_4
                
                do
                    uint64_t x14_9 = zx.q(*x10_19)
                    x10_19 += 4
                    i_4 = i_12
                    i_12 -= 1
                    int64_t x14_11 = x9_15 * x14_9 + zx.q(x12_8)
                    x12_8 = (x14_11 u>> 0x20).d
                    *x11_16 = x14_11.d
                    x11_16 += 4
                while (i_4 != 1)
        
        x8_10[x21] = x12_8
    else if (x21 != 1)
        int64_t* entry_x2
        int64_t x8_15 = *entry_x2
        int64_t x9_19 = entry_x2[1]
        uint64_t x25_1 = x20 + x21 + 1
        int64_t x10_18 = (x9_19 - x8_15) s>> 2
        uint32_t* var_60_2
        uint64_t var_50_1
        uint32_t* x24_1
        
        if (x25_1 u<= x10_18)
            if (x25_1 u< x10_18)
                x9_19 = x8_15 + (x25_1 << 2)
                entry_x2[1] = x9_19
            
            __builtin_memset(&var_60_2, 0, 0x18)
            
            if (x25_1 != 0)
                goto label_cda7f4
            
            x24_1 = nullptr
        else
            std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::__append(entry_x2)
            int64_t var_60_1
            __builtin_memset(&var_60_1, 0, 0x18)
        label_cda7f4:
            
            if (x25_1 u>> 0x3e != 0)
                sub_c776cc(std::__ndk1::__vector_base_common<true>::__throw_length_error())
                noreturn
            
            uint32_t* x0_5 = Botan::allocate_memory(x25_1, 4)
            int64_t x2_1 = x25_1 << 2
            x25_1 = &x0_5[x25_1]
            x24_1 = x0_5
            var_60_2 = x0_5
            var_50_1 = x25_1
            memset(x0_5, 0, x2_1)
            uint64_t var_58_1 = x25_1
            x8_15 = *entry_x2
            x9_19 = entry_x2[1]
        
        uint32_t* x2_2 = *arg1
        uint32_t* x5_1 = *arg2
        int64_t var_70_1 = x8_15
        int64_t var_68_1 = (x9_19 - x8_15) s>> 2
        Botan::bigint_mul(x24_1, (x25_1 - x24_1) s>> 2, x2_2, (*(arg1 + 8) - x2_2) s>> 2, x20, 
            x5_1, (*(arg2 + 8) - x5_1) s>> 2, x21)
        void* x0_7 = *arg1
        void* var_60_3 = x0_7
        *arg1 = var_60_2.o
        int64_t x8_17 = *(arg1 + 0x10)
        *(arg1 + 0x10) = var_50_1
        *(arg1 + 0x18) = -1
        int64_t var_50_2 = x8_17
        
        if (x0_7 != 0)
            void* var_58_2 = x0_7
            Botan::deallocate_memory(x0_7, (x8_17 - x0_7) s>> 2, 4)
    else
        *(arg1 + 0x18) = -1
        int32_t* x8_13 = *arg2
        uint64_t x8_14
        void* x9_18
        int64_t i_14
        
        if (*(arg2 + 8) != x8_13)
            x8_14 = zx.q(*x8_13)
            x9_18 = *arg1
            i_14 = x20 & 0xfffffffffffffff8
            
            if (i_14 == 0)
                goto label_cda8b4
            
            goto label_cda6d4
        
        x8_14 = 0
        x9_18 = *arg1
        i_14 = x20 & 0xfffffffffffffff8
        uint64_t x21_1
        
        if (i_14 != 0)
        label_cda6d4:
            x21_1 = 0
            void* x11_15 = x9_18 + 0x10
            int64_t i_11 = i_14
            int64_t i_5
            
            do
                uint64_t x16_17 = zx.q(*(x11_15 - 4))
                i_5 = i_11
                i_11 -= 8
                int64_t x13_4 = x21_1 + x8_14 * zx.q(*(x11_15 - 0x10))
                int64_t x15_10 = x8_14 * zx.q(*(x11_15 - 8))
                int64_t x14_3 = x8_14 * zx.q(*(x11_15 - 0xc)) + (x13_4 u>> 0x20)
                *(x11_15 - 0x10) = x13_4.d
                *(x11_15 - 0xc) = x14_3.d
                int64_t x14_4 = x15_10 + (x14_3 u>> 0x20)
                uint64_t x13_5 = zx.q(*x11_15)
                uint64_t x15_11 = zx.q(*(x11_15 + 4))
                int64_t x16_19 = x8_14 * x16_17 + (x14_4 u>> 0x20)
                *(x11_15 - 8) = x14_4.d
                *(x11_15 - 4) = x16_19.d
                int64_t x13_7 = x8_14 * x13_5 + (x16_19 u>> 0x20)
                uint64_t x14_5 = zx.q(*(x11_15 + 8))
                uint64_t x16_20 = zx.q(*(x11_15 + 0xc))
                int64_t x15_13 = x8_14 * x15_11 + (x13_7 u>> 0x20)
                *x11_15 = x13_7.d
                *(x11_15 + 4) = x15_13.d
                int64_t x13_8 = x8_14 * x14_5 + (x15_13 u>> 0x20)
                int64_t x14_7 = x8_14 * x16_20 + (x13_8 u>> 0x20)
                x21_1 = x14_7 u>> 0x20
                *(x11_15 + 8) = x13_8.d
                *(x11_15 + 0xc) = x14_7.d
                x11_15 += 0x20
            while (i_5 != 8)
            
            if (i_14 != x20)
                goto label_cda8c0
        else
        label_cda8b4:
            x21_1 = 0
            
            if (i_14 != x20)
            label_cda8c0:
                int64_t i_10 = x20 - i_14
                void* x9_23 = x9_18 + (i_14 << 2)
                int64_t i_6
                
                do
                    i_6 = i_10
                    i_10 -= 1
                    int64_t x10_24 = x8_14 * zx.q(*x9_23) + zx.q(x21_1.d)
                    x21_1 = x10_24 u>> 0x20
                    *x9_23 = x10_24.d
                    x9_23 += 4
                while (i_6 != 1)
        
        int64_t x8_19 = *arg1
        int64_t x9_24 = *(arg1 + 8)
        *(arg1 + 0x18) = -1
        int64_t x9_26 = (x9_24 - x8_19) s>> 2
        
        if (x9_26 u> x20)
            *(*arg1 + (x20 << 2)) = x21_1.d
        else if (x21_1.d != 0)
            if (x20 + 1 u> x9_26)
                if (x20 + 1 u<= (*(arg1 + 0x10) - x8_19) s>> 2
                        || ((x20 + 1) & 0xfffffffffffffff8) + 8 u> x9_26)
                    std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::__append(
                        arg1)
                else if (((x20 + 1) & 0xfffffffffffffff8) + 8 u< x9_26)
                    *(arg1 + 8) = x8_19 + ((((x20 + 1) & 0xfffffffffffffff8) + 8) << 2)
            
            *(*arg1 + (x20 << 2)) = x21_1.d
else
label_cda64c:
    int64_t x8_11 = *(arg1 + 0x10)
    int64_t x0_1 = *arg1
    size_t x9_16 = x8_11 - x0_1
    size_t x2 = *(arg1 + 8) - x0_1
    int64_t x10_15 = x9_16 s>> 2
    int64_t x11_14 = x2 s>> 2
    
    if (x10_15 u> x11_14)
        std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::__append(arg1)
        x0_1 = *arg1
        x2 = *(arg1 + 8) - x0_1
    else if (x10_15 u< x11_14)
        x2 = x9_16
        *(arg1 + 8) = x8_11
    
    if (x2 != 0)
        memset(x0_1, 0, x2)
    
    *(arg1 + 0x18) = 0
    *(arg1 + 0x20) = 1

return arg1
