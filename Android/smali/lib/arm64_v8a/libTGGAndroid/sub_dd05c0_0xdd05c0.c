// 函数: sub_dd05c0
// 地址: 0xdd05c0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t i_1 = arg3[3]

if (i_1 == -1)
    int64_t x8_2 = *arg3
    int64_t x10_1 = arg3[1]
    int64_t x9_1 = x10_1 - x8_2
    
    if (x10_1 == x8_2)
        i_1 = 0
    else
        int64_t x11_1
        
        x11_1 = x9_1 s>= 0 ? x9_1 : -1
        
        int64_t x10_2 = x8_2 - x10_1
        int64_t x11_2
        
        x11_2 = x11_1 s< 1 ? x11_1 : 1
        
        i_1 = x9_1 s>> 2
        int64_t x9_2
        
        x9_2 = x10_2 s> x9_1 ? x10_2 : x9_1
        
        int64_t i_13 = x11_2 * (x9_2 u>> 2)
        uint64_t x10_3 = 1
        int64_t i
        
        do
            int32_t x11_3 = *(x8_2 - 4 + (i_13 << 2))
            i = i_13
            i_13 -= 1
            x10_3 = zx.q(x10_3.d) & zx.q(((x11_3 - 1) & not.d(x11_3)) s>> 0x1f)
            i_1 -= x10_3
        while (i != 1)
    
    arg3[3] = i_1

uint32_t* var_78
void* var_68

if (i_1 == 0)
    Botan::assertion_failure("mod_words > 0", "Not empty", "inverse_mod_odd_modulus", 
        "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0xe429)
label_dd0c5c:
    Botan::assertion_failure("carry == 0", &data_793a18, "inverse_mod_odd_modulus", 
        "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0xe43f)
label_dd0c84:
    Botan::assertion_failure("a_is_0.is_set()", "A is zero", "inverse_mod_odd_modulus", 
        "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0xe46a)
    std::__ndk1::__vector_base_common<true>::__throw_length_error()
    Botan::assertion_failure("n > 0 implies in != nullptr && out != nullptr", 
        "If n > 0 then args are not null", "copy_mem", 
        "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x401)
else
    int64_t x24_1 = i_1 * 5
    __builtin_memset(&var_78, 0, 0x18)
    void* var_70_1
    uint32_t* x28_1
    
    if (i_1 == neg.q(i_1 << 2))
        x28_1 = nullptr
    label_dd06b8:
        int64_t x1 = *arg2
        int64_t x9_5 = i_1 << 1
        int64_t x22_1 = x9_5 + i_1
        void* x24_2 = &x28_1[x22_1]
        int64_t i_23 = (arg2[1] - x1) s>> 2
        int64_t i_11
        
        i_11 = i_1 u< i_23 ? i_1 : i_23
        
        if (i_11 == 0)
            goto label_dd06f8
        
        if (x28_1 == 0 || x1 == 0)
            Botan::assertion_failure("n > 0 implies in != nullptr && out != nullptr", 
                "If n > 0 then args are not null", "copy_mem", 
                "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x401)
        else
            memmove(x24_2, x1, i_11 << 2)
        label_dd06f8:
            uint32_t* x25_1 = &x28_1[i_1]
            void* x23_1 = &x28_1[i_1 * 2]
            int64_t x27_1 = *arg3
            uint32_t* x9_6 = &x28_1[i_1 * 4]
            uint32_t* var_90_1 = x28_1
            int64_t i_24 = (arg3[1] - x27_1) s>> 2
            int64_t i_12
            
            i_12 = i_1 u< i_24 ? i_1 : i_24
            
            if (i_12 == 0)
                *x25_1 = 1
            label_dd0770:
                int64_t x8_12 = 0
                int32_t x9_7 = 0
                
                do
                    int32_t x12_2 = (x28_1 + i_1 * 0x14 - 4)[x8_12]
                    x8_12 -= 1
                    (x28_1 + i_1 * 0x14 - 4)[x8_12] = x9_7 | x12_2 u>> 1
                    x9_7 = x12_2 << 0x1f
                while (i_1 != neg.q(x8_12))
                
                uint32_t x9_9 = *x25_1
                uint32_t x8_13 = *x9_6
                int32_t x8_14 = x9_9 + x8_13 u< x9_9 ? 1 : 0
                int64_t i_14 = i_1 - 1
                *x9_6 = x9_9 + x8_13
                
                if (i_1 != 1)
                    void* x10_8 = &x28_1[(i_1 << 2) + 1]
                    int64_t i_2
                    
                    do
                        int32_t x11_7 = *x10_8
                        int32_t x11_8 = x11_7 + x8_14
                        x8_14 = x11_7 + x8_14 u< x11_7 ? 1 : 0
                        i_2 = i_14
                        i_14 -= 1
                        *x10_8 = x11_8
                        x10_8 += 4
                    while (i_2 != 1)
                
                if (x8_14 != 0)
                    goto label_dd0c5c
                
                int64_t result
                uint128_t v0_1
                uint128_t v1_1
                int128_t v2_1
                int128_t v3_1
                int128_t v4_1
                result, v0_1, v1_1, v2_1, v3_1, v4_1 = Botan::BigInt::bits()
                int64_t x8_15 = result << 1
                
                if (x8_15 != 0)
                    int64_t x22_2 = 0
                    int64_t i_28 = i_1 & 0xfffffffffffffff8
                    void* fp_1 = &x28_1[i_1 * 4] - 4
                    void* x21_1 = &x28_1[x9_5] - 4
                    
                    do
                        uint32_t x27_2 = *x24_2 & 1
                        uint32_t x0_7 = Botan::bigint_cnd_sub(x27_2, x24_2, i_1, x23_1, i_1)
                        int128_t v0_2
                        int128_t v1_2
                        int128_t v2_2
                        int128_t v3_2
                        int128_t v4_2
                        v0_2, v1_2, v2_2, v3_2, v4_2 =
                            Botan::bigint_cnd_add(x0_7, x23_1, i_1.d, x24_2, i_1)
                        int32_t x9_14 = ((x0_7 - 1) & not.d(x0_7)) s>> 0x1f
                        int64_t x8_18 = 0
                        int32_t x10_10 = not.d(x9_14) & 1
                        
                        do
                            int64_t x11_9 = x8_18 << 2
                            int32_t x12_3 = *(x24_2 + x11_9)
                            x8_18 += 1
                            int32_t x13_1 = not.d(x12_3)
                            int32_t x13_3 = (x10_10 + x13_1) & not.d(x9_14)
                            x10_10 = x10_10 + x13_1 u< x10_10 ? 1 : 0
                            *(x24_2 + x11_9) = (x12_3 & x9_14) | x13_3
                        while (i_1 != x8_18)
                        
                        x28_1 = var_90_1
                        int32_t x8_19 = not.d(x9_14)
                        int64_t i_29
                        
                        if (i_1 u>= 8)
                            v0_2.d = x8_19
                            v0_2:4.d = x8_19
                            v0_2:8.d = x8_19
                            v0_2:0xc.d = x8_19
                            int64_t i_15 = i_28
                            uint32_t* x10_11 = x28_1
                            int64_t i_3
                            
                            do
                                void* x11_10 = &x10_11[i_1]
                                v1_2 = *x10_11
                                v2_2 = *(x10_11 + 0x10)
                                v3_2 = *x11_10
                                v4_2 = *(x11_10 + 0x10)
                                i_3 = i_15
                                i_15 -= 8
                                int128_t v5_2 = (v1_2 ^ v3_2) & v0_2
                                int128_t v6_2 = (v2_2 ^ v4_2) & v0_2
                                *x11_10 = v5_2 ^ v3_2
                                *(x11_10 + 0x10) = v6_2 ^ v4_2
                                *x10_11 = v5_2 ^ v1_2
                                *(x10_11 + 0x10) = v6_2 ^ v2_2
                                x10_11 = &x10_11[8]
                            while (i_3 != 8)
                            i_29 = i_28
                            
                            if (i_1 != i_28)
                                goto label_dd0904
                        else
                            i_29 = 0
                        label_dd0904:
                            int64_t i_16 = i_1 - i_29
                            int32_t* x10_12 = &x28_1[i_29]
                            int64_t i_4
                            
                            do
                                int32_t x11_11 = x10_12[i_1]
                                int32_t x12_6 = *x10_12
                                i_4 = i_16
                                i_16 -= 1
                                int32_t x13_5 = (x12_6 ^ x11_11) & x8_19
                                x10_12[i_1] = x13_5 ^ x11_11
                                *x10_12 = x13_5 ^ x12_6
                                x10_12 = &x10_12[1]
                            while (i_4 != 1)
                        int64_t x8_20 = 0
                        int32_t x9_15 = 0
                        
                        do
                            int64_t x10_13 = x8_20 << 2
                            int32_t x11_13 = *(fp_1 + x10_13)
                            x8_20 -= 1
                            *(fp_1 + x10_13) = x9_15 | x11_13 u>> 1
                            x9_15 = x11_13 << 0x1f
                        while (i_1 != neg.q(x8_20))
                        
                        Botan::bigint_cnd_add(Botan::bigint_cnd_sub(x27_2, x25_1, i_1, x28_1, i_1), 
                            x25_1, i_1.d, *arg3, i_1)
                        uint32_t x8_22 = *x25_1
                        int64_t x9_17 = 0
                        int32_t x10_14 = 0
                        
                        do
                            int64_t x11_14 = x9_17 << 2
                            int32_t x12_8 = *(x21_1 + x11_14)
                            x9_17 -= 1
                            *(x21_1 + x11_14) = x10_14 | x12_8 u>> 1
                            x10_14 = x12_8 << 0x1f
                        while (i_1 != neg.q(x9_17))
                        
                        result, v0_1, v1_1, v2_1, v3_1, v4_1 =
                            Botan::bigint_cnd_add(x8_22 & 1, x25_1, i_1.d, x9_6, i_1)
                        x22_2 += 1
                    while (x22_2 != x8_15)
                
                int32_t x8_24
                uint32_t** x21_2
                int64_t i_26
                int64_t x11_15
                
                if (i_1 u>= 8)
                    x11_15 = x22_1
                    x21_2 = arg1
                    i_26 = i_1 & 0xfffffffffffffff8
                    v1_1.q = -1
                    v1_1:8.q = -1
                    void* x8_26 = &x28_1[x11_15 + 4]
                    int64_t i_17 = i_26
                    v2_1.q = -1
                    v2_1:8.q = -1
                    int64_t i_5
                    
                    do
                        v3_1 = *(x8_26 - 0x10)
                        v4_1 = *x8_26
                        i_5 = i_17
                        i_17 -= 8
                        x8_26 += 0x20
                        v3_1.d = ((v3_1 + sx.o(-1)) & not.o(v3_1)).d s>> 0x1f
                        v3_1:4.d s>>= 0x1f
                        v3_1:8.d s>>= 0x1f
                        v3_1:0xc.d s>>= 0x1f
                        v4_1.d = ((v4_1 + sx.o(-1)) & not.o(v4_1)).d s>> 0x1f
                        v4_1:4.d s>>= 0x1f
                        v4_1:8.d s>>= 0x1f
                        v4_1:0xc.d s>>= 0x1f
                        v1_1 &= v3_1
                        v2_1 &= v4_1
                    while (i_5 != 8)
                    uint128_t v0_3 = v2_1 & v1_1
                    uint128_t v0_4 = v0_3 & vdupq_laneq_s64(v0_3, 1)
                    x8_24 = (v0_4 & vdupq_laneq_s32(v0_4, 1)).d
                    
                    if (i_1 != i_26)
                        goto label_dd0a68
                else
                    x11_15 = x22_1
                    x21_2 = arg1
                    i_26 = 0
                    x8_24 = -1
                label_dd0a68:
                    int64_t i_18 = i_1 - i_26
                    void* x9_19 = &x28_1[i_26 + x11_15]
                    int64_t i_6
                    
                    do
                        int32_t x11_16 = *x9_19
                        x9_19 += 4
                        i_6 = i_18
                        i_18 -= 1
                        x8_24 &= ((x11_16 - 1) & not.d(x11_16)) s>> 0x1f
                    while (i_6 != 1)
                int32_t x9_20 = *x23_1
                int32_t x9_22 = (((x9_20 ^ 1) - 1) & not.d(x9_20)) s>> 0x1f
                
                if (i_1 != 1)
                    int64_t x10_18
                    
                    if (i_1 - 1 u>= 8)
                        int64_t i_27 = (i_1 - 1) & 0xfffffffffffffff8
                        v1_1.q = -1
                        v1_1:8.q = -1
                        x10_18 = i_27 | 1
                        v1_1.d = x9_22
                        void* x9_23 = &x28_1[x9_5 + 5]
                        int64_t i_22 = i_27
                        v2_1.q = -1
                        v2_1:8.q = -1
                        int64_t i_7
                        
                        do
                            v3_1 = *(x9_23 - 0x10)
                            v4_1 = *x9_23
                            i_7 = i_22
                            i_22 -= 8
                            x9_23 += 0x20
                            v3_1.d = ((v3_1 + sx.o(-1)) & not.o(v3_1)).d s>> 0x1f
                            v3_1:4.d s>>= 0x1f
                            v3_1:8.d s>>= 0x1f
                            v3_1:0xc.d s>>= 0x1f
                            v4_1.d = ((v4_1 + sx.o(-1)) & not.o(v4_1)).d s>> 0x1f
                            v4_1:4.d s>>= 0x1f
                            v4_1:8.d s>>= 0x1f
                            v4_1:0xc.d s>>= 0x1f
                            v1_1 &= v3_1
                            v2_1 &= v4_1
                        while (i_7 != 8)
                        uint128_t v0_5 = v2_1 & v1_1
                        uint128_t v0_6 = v0_5 & vdupq_laneq_s64(v0_5, 1)
                        x9_22 = (v0_6 & vdupq_laneq_s32(v0_6, 1)).d
                        
                        if (i_1 - 1 != i_27)
                            goto label_dd0b34
                    else
                        x10_18 = 1
                    label_dd0b34:
                        int64_t i_20 = i_1 - x10_18
                        void* x10_21 = &x28_1[x10_18 + x9_5]
                        int64_t i_8
                        
                        do
                            int32_t x12_11 = *x10_21
                            x10_21 += 4
                            i_8 = i_20
                            i_20 -= 1
                            x9_22 &= ((x12_11 - 1) & not.d(x12_11)) s>> 0x1f
                        while (i_8 != 1)
                
                if (x8_24 == 0)
                    goto label_dd0c84
                
                int64_t i_25
                
                if (i_1 u>= 8)
                    i_25 = i_1 & 0xfffffffffffffff8
                    v0_1.d = x9_22
                    v0_1:4.d = x9_22
                    v0_1:8.d = x9_22
                    v0_1:0xc.d = x9_22
                    void* x10_22 = &x28_1[4]
                    int64_t i_21 = i_25
                    int64_t i_9
                    
                    do
                        i_9 = i_21
                        i_21 -= 8
                        v2_1 = *x10_22 & v0_1
                        *(x10_22 - 0x10) &= v0_1
                        *x10_22 = v2_1
                        x10_22 += 0x20
                    while (i_9 != 8)
                    
                    if (i_1 != i_25)
                        goto label_dd0ba0
                else
                    i_25 = 0
                label_dd0ba0:
                    int64_t i_19 = i_1 - i_25
                    void* x8_27 = &x28_1[i_25]
                    int64_t i_10
                    
                    do
                        i_10 = i_19
                        i_19 -= 1
                        *x8_27 &= x9_22
                        x8_27 += 4
                    while (i_10 != 1)
                uint32_t* x19_3 = var_78
                size_t x2_9 = i_1 << 4
                
                if (x2_9 != 0)
                    result, v0_1 = memset(&x19_3[i_1], 0, x2_9)
                
                *x21_2 = x19_3
                x21_2[4].d = 1
                *(x21_2 + 8) = var_70_1.o
                x21_2[3] = -1
                return result
            
            if (x28_1 != 0 && x27_1 != 0)
                size_t x28_2 = i_12 << 2
                memmove(x23_1, x27_1, x28_2)
                *x25_1 = 1
                memmove(x9_6, x27_1, x28_2)
                x28_1 = var_90_1
                goto label_dd0770
    else
        if (x24_1 u>> 0x3e == 0)
            uint32_t* x0_1 = Botan::allocate_memory(x24_1, 4)
            x28_1 = x0_1
            var_78 = x0_1
            var_68 = &x0_1[x24_1]
            memset(x0_1, 0, i_1 * 0x14)
            var_70_1 = &x0_1[i_1 * 5]
            goto label_dd06b8
        
        std::__ndk1::__vector_base_common<true>::__throw_length_error()
        Botan::assertion_failure("n > 0 implies in != nullptr && out != nullptr", 
            "If n > 0 then args are not null", "copy_mem", 
            "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x401)

int64_t* x0_12 = Botan::assertion_failure("n > 0 implies in != nullptr && out != nullptr", 
    "If n > 0 then args are not null", "copy_mem", 
    "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x401)
uint32_t* x0_13 = var_78

if (x0_13 != 0)
    uint32_t* var_70_2 = x0_13
    Botan::deallocate_memory(x0_13, (var_68 - x0_13) s>> 2, 4)

sub_1101e04(x0_12)
noreturn
