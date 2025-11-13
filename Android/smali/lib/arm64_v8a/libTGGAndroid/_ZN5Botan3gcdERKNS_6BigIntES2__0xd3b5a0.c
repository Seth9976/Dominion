// 函数: _ZN5Botan3gcdERKNS_6BigIntES2_
// 地址: 0xd3b5a0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x9 = *(arg1 + 0x18)
char* result
uint64_t entry_x8

if (x9 == -1)
    int64_t x8_2 = *arg1
    int64_t x11_1 = *(arg1 + 8)
    int64_t x10_1 = x11_1 - x8_2
    
    if (x11_1 != x8_2)
        int64_t x12_1
        
        x12_1 = x10_1 s>= 0 ? x10_1 : -1
        
        int64_t x11_2 = x8_2 - x11_1
        int64_t x12_2
        
        x12_2 = x12_1 s< 1 ? x12_1 : 1
        
        int64_t x9_1 = x10_1 s>> 2
        int64_t x10_2
        
        x10_2 = x11_2 s> x10_1 ? x11_2 : x10_1
        
        int64_t i_12 = x12_2 * (x10_2 u>> 2)
        uint64_t x11_3 = 1
        int64_t i
        
        do
            int32_t x12_3 = *(x8_2 - 4 + (i_12 << 2))
            i = i_12
            i_12 -= 1
            x11_3 = zx.q(x11_3.d) & zx.q(((x12_3 - 1) & not.d(x12_3)) s>> 0x1f)
            x9_1 -= x11_3
        while (i != 1)
        *(arg1 + 0x18) = x9_1
        
        if (x9_1 != 0)
            goto label_d3b5d4
        
        goto label_d3b66c
    
    *(arg1 + 0x18) = 0
label_d3b66c:
    result = std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::vector(entry_x8)
    *(entry_x8 + 0x18) = *(arg2 + 0x18)
    *(entry_x8 + 0x20) = 1
else
    if (x9 == 0)
        goto label_d3b66c
    
label_d3b5d4:
    int64_t x8 = *(arg2 + 0x18)
    
    if (x8 == -1)
        int64_t x9_2 = *arg2
        int64_t x11_4 = *(arg2 + 8)
        int64_t x10_4 = x11_4 - x9_2
        
        if (x11_4 != x9_2)
            int64_t x12_5
            
            x12_5 = x10_4 s>= 0 ? x10_4 : -1
            
            int64_t x11_5 = x9_2 - x11_4
            int64_t x12_6
            
            x12_6 = x12_5 s< 1 ? x12_5 : 1
            
            int64_t x8_5 = x10_4 s>> 2
            int64_t x10_5
            
            x10_5 = x11_5 s> x10_4 ? x11_5 : x10_4
            
            int64_t i_13 = x12_6 * (x10_5 u>> 2)
            uint64_t x11_6 = 1
            int64_t i_1
            
            do
                int32_t x12_7 = *(x9_2 - 4 + (i_13 << 2))
                i_1 = i_13
                i_13 -= 1
                x11_6 = zx.q(x11_6.d) & zx.q(((x12_7 - 1) & not.d(x12_7)) s>> 0x1f)
                x8_5 -= x11_6
            while (i_1 != 1)
            *(arg2 + 0x18) = x8_5
            
            if (x8_5 != 0)
                goto label_d3b5e8
            
            goto label_d3b6e0
        
        *(arg2 + 0x18) = 0
    label_d3b6e0:
        result = std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::vector(entry_x8)
        *(entry_x8 + 0x18) = *(arg1 + 0x18)
        *(entry_x8 + 0x20) = 1
    else
        if (x8 == 0)
            goto label_d3b6e0
        
    label_d3b5e8:
        
        if (*(arg1 + 0x20) == 0)
        label_d3b7dc:
            
            if (*(arg2 + 0x20) != 0)
                int64_t i_11 = *(arg2 + 0x18)
                
                if (i_11 == -1)
                    int64_t x9_7 = *arg2
                    int64_t x11_13 = *(arg2 + 8)
                    int64_t x10_12 = x11_13 - x9_7
                    
                    if (x11_13 == x9_7)
                        i_11 = 0
                        *(arg2 + 0x18) = 0
                        
                        if (i_11 != 0)
                            goto label_d3b874
                    else
                        int64_t x12_18
                        
                        x12_18 = x10_12 s>= 0 ? x10_12 : -1
                        
                        int64_t x11_14 = x9_7 - x11_13
                        int64_t x12_19
                        
                        x12_19 = x12_18 s< 1 ? x12_18 : 1
                        
                        i_11 = x10_12 s>> 2
                        int64_t x10_13
                        
                        x10_13 = x11_14 s> x10_12 ? x11_14 : x10_12
                        
                        int64_t i_15 = x12_19 * (x10_13 u>> 2)
                        uint64_t x11_15 = 1
                        int64_t i_2
                        
                        do
                            int32_t x12_20 = *(x9_7 - 4 + (i_15 << 2))
                            i_2 = i_15
                            i_15 -= 1
                            x11_15 = zx.q(x11_15.d) & zx.q(((x12_20 - 1) & not.d(x12_20)) s>> 0x1f)
                            i_11 -= x11_15
                        while (i_2 != 1)
                        *(arg2 + 0x18) = i_11
                        
                        if (i_11 u<= 1 && i_11 != 0)
                            goto label_d3b874
                else if (i_11 u<= 1 && i_11 != 0)
                label_d3b874:
                    int32_t* x9_9 = *arg2
                    int32_t x10_15 = 0
                    int64_t i_3
                    
                    do
                        int32_t x11_16 = *x9_9
                        x9_9 = &x9_9[1]
                        i_3 = i_11
                        i_11 -= 1
                        int32_t x11_18 = (((x11_16 ^ 1) - 1) & not.d(x11_16)) s>> 0x1f
                        x10_15 = (x10_15 & x11_18)
                            | ((((x11_16 - 1) & not.d(x11_16)) s>> 0x1f | 1) & not.d(x11_18))
                    while (i_3 != 1)
                    
                    if (x10_15 == 0)
                        goto label_d3bf90
            
            char* result_1
            std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::vector(&result_1)
            int64_t j_19 = *(arg1 + 0x18)
            int32_t var_60_1 = *(arg1 + 0x20)
            int32_t* var_a8
            std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::vector(&var_a8)
            char* result_6 = result_1
            int32_t var_60_2 = 1
            int64_t var_78
            void* x14_1 = var_78 - result_6
            int64_t j_18 = *(arg2 + 0x18)
            int32_t var_88_1 = 1
            
            if (var_78 != result_6)
                void* x15_1
                
                x15_1 = x14_1 s>= 0 ? x14_1 : -ffffffffffffffff
                
                void* x13_10 = result_6 - var_78
                void* x15_2
                
                x15_2 = x15_1 s< 1 ? x15_1 : 1
                
                void* x13_11
                
                x13_11 = x13_10 s> x14_1 ? x13_10 : x14_1
                
                int64_t x9_10 = 0
                int64_t i_4 = 0
                int32_t x8_10 = 0
                
                do
                    int32_t x14_2
                    
                    if (x14_1 s>> 2 u> i_4)
                        x14_2 = *(result_6 + (i_4 << 2))
                    else
                        x14_2 = 0
                    
                    int32_t x16_4 = ((x14_2 & 0xffff) - 1) u>> 0x1b & 0x10
                    int32_t x15_4 = (x14_2 - 1) & not.d(x14_2)
                    uint32_t x14_3 = x14_2 u>> x16_4
                    int32_t x17_4 = ((x14_3 & 0xff) - 1) u>> 0x1c & 8
                    uint32_t x14_4 = x14_3 u>> x17_4
                    int32_t x17_8 = ((x14_4 & 0xf) - 1) u>> 0x1d & 4
                    uint32_t x14_5 = x14_4 u>> x17_8
                    int32_t x17_12 = ((x14_5 & 3) - 1) u>> 0x1e & 2
                    i_4 += 1
                    x9_10 += zx.q(((x16_4 & 0xfffffffe) | (x15_4 & 0x80000000) u>> 0x1f | x17_4
                        | x17_8 | x17_12) + (((x14_5 u>> x17_12 & 1) - 1) u>> 0x1f))
                        & zx.q(not.d(x8_10))
                    x8_10 |= not.d(x15_4 s>> 0x1f)
                while (x15_2 * (x13_11 u>> 2) != i_4)
            
            int32_t* x11_19 = var_a8
            int64_t var_a0
            void* x14_11 = var_a0 - x11_19
            
            if (var_a0 != x11_19)
                void* x16_9
                
                x16_9 = x14_11 s>= 0 ? x14_11 : -ffffffffffffffff
                
                void* x15_6 = x11_19 - var_a0
                void* x16_10
                
                x16_10 = x16_9 s< 1 ? x16_9 : 1
                
                void* x14_12
                
                x14_12 = x15_6 s> x14_11 ? x15_6 : x14_11
                
                int64_t x9_11 = 0
                int64_t i_5 = 0
                int32_t x10_17 = 0
                
                do
                    int32_t x15_7
                    
                    if (x14_11 s>> 2 u> i_5)
                        x15_7 = x11_19[i_5]
                    else
                        x15_7 = 0
                    
                    int32_t x17_16 = ((x15_7 & 0xffff) - 1) u>> 0x1b & 0x10
                    int32_t x16_12 = (x15_7 - 1) & not.d(x15_7)
                    uint32_t x15_8 = x15_7 u>> x17_16
                    int32_t x0_7 = ((x15_8 & 0xff) - 1) u>> 0x1c & 8
                    uint32_t x15_9 = x15_8 u>> x0_7
                    int32_t x0_11 = ((x15_9 & 0xf) - 1) u>> 0x1d & 4
                    uint32_t x15_10 = x15_9 u>> x0_11
                    int32_t x0_15 = ((x15_10 & 3) - 1) u>> 0x1e & 2
                    i_5 += 1
                    x9_11 += zx.q(((x17_16 & 0xfffffffe) | (x16_12 & 0x80000000) u>> 0x1f | x0_7
                        | x0_11 | x0_15) + (((x15_10 u>> x0_15 & 1) - 1) u>> 0x1f))
                        & zx.q(not.d(x10_17))
                    x10_17 |= not.d(x16_12 s>> 0x1f)
                while (x16_10 * (x14_12 u>> 2) != i_5)
            
            Botan::BigInt::operator>>=(&result_1)
            Botan::BigInt::operator>>=(&var_a8)
            char* result_3 = result_1
            uint64_t x1_6
            
            if (var_78 == result_3)
                x1_6 = 1
            else
                x1_6 = zx.q((zx.d(*result_3) & 1) == 0 ? 1 : 0)
            
            Botan::BigInt::ct_cond_swap(&result_1, x1_6)
            int64_t x0_19 = Botan::BigInt::bits()
            int64_t x0_20
            uint128_t v0_1
            uint128_t v1_1
            uint128_t v2_1
            uint128_t v3_1
            x0_20, v0_1, v1_1, v2_1, v3_1 = Botan::BigInt::bits()
            int64_t x10_18
            
            x10_18 = x0_19 u< x0_20 ? x0_20 : x0_19
            
            int64_t x9_14
            
            x9_14 = x10_18 u< 0x2e ? 0x50 : 0x39
            
            int64_t x8_13 = x9_14 + x10_18 * 0x31
            uint32_t* var_d0
            __builtin_memset(&var_d0, 0, 0x18)
            int64_t var_b8_1 = -1
            int32_t var_b0_1 = 1
            
            if (x8_13 u>= 0x11)
                int64_t i_6 = 0
                int32_t x25_1 = 1
                
                do
                    int64_t j_16 = j_19
                    int64_t j_17
                    
                    if (j_16 == -1)
                        char* result_4 = result_1
                        void* x9_15 = var_78 - result_4
                        
                        if (var_78 == result_4)
                            j_16 = 0
                        else
                            void* x11_20
                            
                            x11_20 = x9_15 s>= 0 ? x9_15 : -ffffffffffffffff
                            
                            void* x10_20 = result_4 - var_78
                            void* x11_21
                            
                            x11_21 = x11_20 s< 1 ? x11_20 : 1
                            
                            j_16 = x9_15 s>> 2
                            void* x9_16
                            
                            x9_16 = x10_20 s> x9_15 ? x10_20 : x9_15
                            
                            int64_t j_7 = x11_21 * (x9_16 u>> 2)
                            uint64_t x10_21 = 1
                            int64_t j
                            
                            do
                                int32_t x11_22 = *(result_4 - 4 + (j_7 << 2))
                                j = j_7
                                j_7 -= 1
                                x10_21 =
                                    zx.q(x10_21.d) & zx.q(((x11_22 - 1) & not.d(x11_22)) s>> 0x1f)
                                j_16 -= x10_21
                            while (j != 1)
                        
                        j_19 = j_16
                        j_17 = j_18
                        
                        if (j_17 == -1)
                            goto label_d3bc14
                    else
                        j_17 = j_18
                        
                        if (j_17 == -1)
                        label_d3bc14:
                            int32_t* x8_16 = var_a8
                            void* x9_18 = var_a0 - x8_16
                            
                            if (var_a0 == x8_16)
                                j_17 = 0
                            else
                                void* x11_24
                                
                                x11_24 = x9_18 s>= 0 ? x9_18 : -ffffffffffffffff
                                
                                void* x10_23 = x8_16 - var_a0
                                void* x11_25
                                
                                x11_25 = x11_24 s< 1 ? x11_24 : 1
                                
                                j_17 = x9_18 s>> 2
                                void* x9_19
                                
                                x9_19 = x10_23 s> x9_18 ? x10_23 : x9_18
                                
                                int64_t j_8 = x11_25 * (x9_19 u>> 2)
                                uint64_t x10_24 = 1
                                int64_t j_1
                                
                                do
                                    int32_t x11_26 = *(x8_16 - 4 + (j_8 << 2))
                                    j_1 = j_8
                                    j_8 -= 1
                                    x10_24 = zx.q(x10_24.d)
                                        & zx.q(((x11_26 - 1) & not.d(x11_26)) s>> 0x1f)
                                    j_17 -= x10_24
                                while (j_1 != 1)
                            
                            j_18 = j_17
                    
                    uint32_t* x0_21 = var_d0
                    int64_t j_20
                    
                    j_20 = j_16 u< j_17 ? j_17 : j_16
                    
                    void* var_c8_1
                    int64_t x9_23 = (var_c8_1 - x0_21) s>> 2
                    
                    if (j_20 u> x9_23)
                        v0_1, v1_1, v2_1, v3_1 = std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::__append(
                            &var_d0)
                        x0_21 = var_d0
                    else if (j_20 u< x9_23)
                        var_c8_1 = &x0_21[j_20]
                    
                    char* result_5 = result_1
                    int32_t* x9_24 = var_a8
                    int64_t x11_28 = j_17 - j_16
                    int64_t j_9
                    
                    j_9 = j_17 u< j_16 ? j_17 : j_16
                    
                    int32_t x10_25 = 0
                    int64_t var_b8_2 = -1
                    
                    if (j_9 != 0)
                        char* result_7 = result_5
                        int32_t* x14_15 = x9_24
                        int64_t j_2
                        
                        do
                            int32_t x15_16 = *result_7
                            result_7 = &result_7[4]
                            int32_t x16_13 = *x14_15
                            x14_15 = &x14_15[1]
                            j_2 = j_9
                            j_9 -= 1
                            int32_t x17_21 = x16_13 ^ x15_16
                            int32_t x17_22 = ((x17_21 - 1) & not.d(x17_21)) s>> 0x1f
                            x10_25 = (x10_25 & x17_22) | ((
                                ((((x15_16 - x16_13) ^ x15_16) | x17_21) ^ x15_16) s>> 0x1f | 1)
                                & not.d(x17_22))
                        while (j_2 != 1)
                    
                    int64_t x12_30 = j_16 - j_17
                    
                    if (j_16 u< j_17)
                        int32_t x11_29
                        int64_t j_22
                        
                        if (x11_28 u>= 8)
                            int64_t j_14 = x11_28 & 0xfffffffffffffff8
                            v0_1.q = 0
                            v0_1:8.q = 0
                            j_22 = j_16 + j_14
                            void* x14_17 = &x9_24[j_16 + 4]
                            int64_t j_12 = j_14
                            v1_1.q = 0
                            v1_1:8.q = 0
                            int64_t j_3
                            
                            do
                                v2_1 = *(x14_17 - 0x10)
                                v3_1 = *x14_17
                                j_3 = j_12
                                j_12 -= 8
                                x14_17 += 0x20
                                v0_1 = vorrq_s8(v2_1, v0_1)
                                v1_1 = vorrq_s8(v3_1, v1_1)
                            while (j_3 != 8)
                            uint128_t v0_2 = vorrq_s8(v1_1, v0_1)
                            uint128_t v0_3 = vorrq_s8(v0_2, vdupq_laneq_s64(v0_2, 1))
                            x11_29 = vorrq_s8(v0_3, vdupq_laneq_s32(v0_3, 1))
                            
                            if (x11_28 != j_14)
                                goto label_d3bda4
                        else
                            x11_29 = 0
                            j_22 = j_16
                        label_d3bda4:
                            int64_t j_10 = j_17 - j_22
                            void* x12_32 = &x9_24[j_22]
                            int64_t j_4
                            
                            do
                                int32_t x14_18 = *x12_32
                                x12_32 += 4
                                j_4 = j_10
                                j_10 -= 1
                                x11_29 |= x14_18
                            while (j_4 != 1)
                        x10_25 |= not.d(((x11_29 - 1) & not.d(x11_29)) s>> 0x1f)
                    else if (j_17 u< j_16)
                        int32_t x12_31
                        int64_t j_21
                        
                        if (x12_30 u>= 8)
                            int64_t j_15 = x12_30 & 0xfffffffffffffff8
                            v0_1.q = 0
                            v0_1:8.q = 0
                            j_21 = j_17 + j_15
                            void* x14_20 = &result_5[(j_17 << 2) + 0x10]
                            int64_t j_13 = j_15
                            v1_1.q = 0
                            v1_1:8.q = 0
                            int64_t j_5
                            
                            do
                                v2_1 = *(x14_20 - 0x10)
                                v3_1 = *x14_20
                                j_5 = j_13
                                j_13 -= 8
                                x14_20 += 0x20
                                v0_1 = vorrq_s8(v2_1, v0_1)
                                v1_1 = vorrq_s8(v3_1, v1_1)
                            while (j_5 != 8)
                            uint128_t v0_5 = vorrq_s8(v1_1, v0_1)
                            uint128_t v0_6 = vorrq_s8(v0_5, vdupq_laneq_s64(v0_5, 1))
                            x12_31 = vorrq_s8(v0_6, vdupq_laneq_s32(v0_6, 1))
                            
                            if (x12_30 != j_15)
                                goto label_d3be20
                        else
                            x12_31 = 0
                            j_21 = j_17
                        label_d3be20:
                            int64_t j_11 = j_16 - j_21
                            void* x11_31 = &result_5[j_21 << 2]
                            int64_t j_6
                            
                            do
                                int32_t x14_21 = *x11_31
                                x11_31 += 4
                                j_6 = j_11
                                j_11 -= 1
                                x12_31 |= x14_21
                            while (j_6 != 1)
                        int32_t x11_34 = ((x12_31 - 1) & not.d(x12_31)) s>> 0x1f
                        x10_25 = (x10_25 & x11_34) | (not.d(x11_34) & 1)
                    
                    int64_t x11_38
                    
                    if (x10_25 s< 0)
                        x11_38 = x9_24 ^ result_5
                    else
                        x11_38 = 0
                    
                    int64_t x10_29
                    
                    if (x10_25 s< 0)
                        x10_29 = j_17 ^ j_16
                    else
                        x10_29 = 0
                    
                    uint64_t x2_1 = x10_29 ^ j_16
                    int64_t x8_19 = x10_29 ^ j_17
                    int64_t x4_1
                    
                    x4_1 = x8_19 u< x2_1 ? x8_19 : x2_1
                    
                    Botan::bigint_sub3(x0_21, x11_38 ^ result_5, x2_1, x11_38 ^ x9_24, x4_1)
                    int32_t* x8_20 = var_a8
                    int32_t x8_22
                    
                    if (var_a0 == x8_20)
                        x8_22 = 0
                    else
                        x8_22 = zx.d(*x8_20) & 1
                    
                    int32_t x21_2 = (x25_1 s> 0 ? 1 : 0) & x8_22
                    int32_t x25_2
                    
                    if (x21_2 != 0)
                        x25_2 = neg.d(x25_1)
                    else
                        x25_2 = x25_1
                    
                    Botan::BigInt::ct_cond_swap(&result_1, zx.q(x21_2))
                    Botan::BigInt::ct_cond_swap(&var_a8, zx.q(x21_2) & 1)
                    int32_t* x8_23 = var_a8
                    uint64_t x1_13
                    
                    if (var_a0 == x8_23)
                        x1_13 = 0
                    else
                        x1_13 = zx.q(*x8_23) & 1
                    
                    Botan::BigInt::ct_cond_add(&var_a8, x1_13)
                    v0_1, v1_1, v2_1, v3_1 = Botan::BigInt::operator>>=(&var_a8)
                    i_6 += 1
                    x25_1 = x25_2 + 1
                while (i_6 != x8_13 u/ 0x11)
            
            Botan::BigInt::operator<<=(&result_1)
            int64_t j_23 = j_18
            
            if (j_23 == -1)
                int32_t* x9_28 = var_a8
                void* x10_30 = var_a0 - x9_28
                
                if (var_a0 == x9_28)
                    j_23 = 0
                else
                    void* x12_34
                    
                    x12_34 = x10_30 s>= 0 ? x10_30 : -ffffffffffffffff
                    
                    void* x11_40 = x9_28 - var_a0
                    void* x12_35
                    
                    x12_35 = x12_34 s< 1 ? x12_34 : 1
                    
                    j_23 = x10_30 s>> 2
                    void* x10_31
                    
                    x10_31 = x11_40 s> x10_30 ? x11_40 : x10_30
                    
                    int64_t i_16 = x12_35 * (x10_31 u>> 2)
                    uint64_t x11_41 = 1
                    int64_t i_7
                    
                    do
                        int32_t x12_36 = *(x9_28 - 4 + (i_16 << 2))
                        i_7 = i_16
                        i_16 -= 1
                        x11_41 = zx.q(x11_41.d) & zx.q(((x12_36 - 1) & not.d(x12_36)) s>> 0x1f)
                        j_23 -= x11_41
                    while (i_7 != 1)
                
                int64_t j_24 = j_23
            
            if (j_23 != 0)
                int64_t* x0_31 = Botan::assertion_failure("g.is_zero()", &data_793a18, "gcd", 
                    "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0xead6)
                void* x8_34 = *entry_x8
                
                if (x8_34 != 0)
                    int64_t x9_34 = *(entry_x8 + 0x10)
                    *(entry_x8 + 8) = x8_34
                    Botan::deallocate_memory(x8_34, (x9_34 - x8_34) s>> 2, 4)
                
                sub_1101e04(x0_31)
                noreturn
            
            int64_t var_68_1 = -1
            int128_t v0_8 = result_1.o
            uint32_t* x0_29 = var_d0
            int64_t var_70
            *(entry_x8 + 0x10) = var_70
            *(entry_x8 + 0x18) = j_19
            *(entry_x8 + 0x20) = var_60_2
            __builtin_memset(&result_1, 0, 0x18)
            *entry_x8 = v0_8
            int32_t var_60_3 = 1
            
            if (x0_29 != 0)
                uint32_t* var_c8_2 = x0_29
                int64_t var_c0
                Botan::deallocate_memory(x0_29, (var_c0 - x0_29) s>> 2, 4)
            
            int32_t* x0_30 = var_a8
            
            if (x0_30 != 0)
                int32_t* var_a0_1 = x0_30
                int64_t var_98
                Botan::deallocate_memory(x0_30, (var_98 - x0_30) s>> 2, 4)
            
            result = result_1
            
            if (result != 0)
                char* result_2 = result
                int64_t var_70_1
                return Botan::deallocate_memory(result, (var_70_1 - result) s>> 2, 4)
        else
            int64_t i_10 = *(arg1 + 0x18)
            
            if (i_10 == -1)
                int64_t x9_4 = *arg1
                int64_t x11_7 = *(arg1 + 8)
                int64_t x10_7 = x11_7 - x9_4
                
                if (x11_7 == x9_4)
                    i_10 = 0
                    *(arg1 + 0x18) = 0
                    
                    if (i_10 == 0)
                        goto label_d3b7dc
                else
                    int64_t x12_9
                    
                    x12_9 = x10_7 s>= 0 ? x10_7 : -1
                    
                    int64_t x11_8 = x9_4 - x11_7
                    int64_t x12_10
                    
                    x12_10 = x12_9 s< 1 ? x12_9 : 1
                    
                    i_10 = x10_7 s>> 2
                    int64_t x10_8
                    
                    x10_8 = x11_8 s> x10_7 ? x11_8 : x10_7
                    
                    int64_t i_14 = x12_10 * (x10_8 u>> 2)
                    uint64_t x11_9 = 1
                    int64_t i_8
                    
                    do
                        int32_t x12_11 = *(x9_4 - 4 + (i_14 << 2))
                        i_8 = i_14
                        i_14 -= 1
                        x11_9 = zx.q(x11_9.d) & zx.q(((x12_11 - 1) & not.d(x12_11)) s>> 0x1f)
                        i_10 -= x11_9
                    while (i_8 != 1)
                    *(arg1 + 0x18) = i_10
                    
                    if (i_10 u> 1 || i_10 == 0)
                        goto label_d3b7dc
            else if (i_10 u> 1 || i_10 == 0)
                goto label_d3b7dc
            
            int32_t* x9_6 = *arg1
            int32_t x10_10 = 0
            int64_t i_9
            
            do
                int32_t x11_10 = *x9_6
                x9_6 = &x9_6[1]
                i_9 = i_10
                i_10 -= 1
                int32_t x11_12 = (((x11_10 ^ 1) - 1) & not.d(x11_10)) s>> 0x1f
                x10_10 = (x10_10 & x11_12)
                    | ((((x11_10 - 1) & not.d(x11_10)) s>> 0x1f | 1) & not.d(x11_12))
            while (i_9 != 1)
            
            if (x10_10 != 0)
                goto label_d3b7dc
            
        label_d3bf90:
            __builtin_memset(entry_x8, 0, 0x18)
            *(entry_x8 + 0x20) = 1
            *(entry_x8 + 0x18) = -1
            result = std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::__append(
                entry_x8)
            **entry_x8 = 1
            void* x8_26 = *entry_x8
            int64_t x9_30 = *(entry_x8 + 8)
            *(entry_x8 + 0x18) = -1
            
            if ((x9_30 - x8_26) s>> 2 u>= 2)
                *(x8_26 + 4) = 0
return result
