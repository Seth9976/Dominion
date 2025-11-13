// 函数: _ZN5Botan6scryptEPhmPKcmPKhmmmm
// 地址: 0xe10594
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t i_10 = arg8 << 7
uint64_t x19 = i_10 * arg9
uint8_t* result_1
__builtin_memset(&result_1, 0, 0x18)

if (x19 == 0)
    goto label_e1061c

if ((x19 & 0xffffffff80000000) != 0)
    std::__ndk1::__vector_base_common<true>::__throw_length_error()
else
    uint8_t* result_3 = Botan::allocate_memory(x19, 1)
    void* x20_1 = &result_3[x19]
    result_1 = result_3
    void* var_68_1 = x20_1
    memset(result_3, 0, x19)
    void* var_70_1 = x20_1
label_e1061c:
    uint64_t x19_1 = i_10 * (arg7 + 1)
    void* var_90_1
    __builtin_memset(&var_90_1, 0, 0x18)
    
    if (x19_1 == 0)
        goto label_e10670
    
    if ((x19_1 & 0xffffffff80000000) == 0)
        void* x0_2 = Botan::allocate_memory(x19_1, 1)
        void* x20_2 = x0_2 + x19_1
        var_90_1 = x0_2
        void* var_80_1 = x20_2
        memset(x0_2, 0, x19_1)
        void* var_88_1 = x20_2
    label_e10670:
        char var_b0 = 0x1a
        int64_t var_af
        __builtin_strncpy(&var_af, "HMAC(SHA-256)", 0xe)
        int16_t var_c8 = 0
        Botan::MessageAuthenticationCode::create_or_throw(&var_b0, &var_c8)
        void* var_b8
        
        if ((zx.d(var_c8.b) & 1) != 0)
            operator delete(var_b8)
        void* var_a0
        
        if ((zx.d(var_b0) & 1) != 0)
            operator delete(var_a0)
        Botan::MessageAuthenticationCode* var_98
        Botan::SymmetricAlgorithm::set_key(var_98 + 8, arg3)
        uint8_t* result_4 = result_1
        Botan::pbkdf2(var_98, result_4, var_70_1 - result_4, arg5, arg6, 1)
        
        if (arg9 == 0 || arg7 == 0)
        label_e10910:
            uint8_t* result_5 = result_1
            Botan::pbkdf2(var_98, arg1, arg2, result_5, var_70_1 - result_5, 1)
            (*(*var_98 + 0x10))(var_98)
            void* x0_15 = var_90_1
            
            if (x0_15 != 0)
                void* var_88_2 = x0_15
                Botan::deallocate_memory(x0_15, var_80_1 - x0_15, 1)
            
            uint8_t* result = result_1
            
            if (result == 0)
                return result
            
            uint8_t* result_2 = result
            return Botan::deallocate_memory(result, var_68_1 - result, 1)
        
        int64_t fp_1 = 0
        int64_t x28_1 = i_10 * arg7
        int64_t var_e0_1 = 0
        int64_t var_e8_1 = 0x10
        
        while (true)
            uint8_t* result_6 = result_1
            void* x25_1 = result_6 + fp_1 * i_10
            int128_t v0_1
            int128_t v1_1
            int128_t v2_1
            int128_t v3_1
            int128_t v4_1
            int128_t v5_1
            int128_t v6_1
            int128_t v7_1
            
            if (i_10 == 0)
                uint64_t i_7 = arg7
                uint64_t i
                
                do
                    v0_1, v1_1, v2_1, v3_1, v4_1, v5_1, v6_1, v7_1 =
                        sub_f0c63c(arg8, x25_1, var_90_1 + x28_1)
                    i = i_7
                    i_7 -= 1
                while (i != 1)
            else
                if (result_6 == 0)
                label_e109bc:
                    Botan::assertion_failure("n > 0 implies in != nullptr && out != nullptr", 
                        "If n > 0 then args are not null", "copy_mem", 
                        "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x401)
                    break
                
                int64_t x26_1 = 0
                uint64_t i_9 = arg7
                uint64_t i_1
                
                do
                    void* x8_13 = var_90_1
                    
                    if (x8_13 == 0)
                        goto label_e109bc
                    
                    memmove(x8_13 + x26_1, x25_1, i_10)
                    v0_1, v1_1, v2_1, v3_1, v4_1, v5_1, v6_1, v7_1 =
                        sub_f0c63c(arg8, x25_1, var_90_1 + x28_1)
                    i_1 = i_9
                    i_9 -= 1
                    x26_1 += i_10
                while (i_1 != 1)
            
            uint64_t i_8 = arg7
            
            if (i_10 == 0)
                uint64_t i_2
                
                do
                    sub_f0c63c(arg8, x25_1, var_90_1 + x28_1)
                    i_2 = i_8
                    i_8 -= 1
                while (i_2 != 1)
            else
                int64_t fp_3 = 0
                int64_t x8_16 = i_10 * fp_1
                void* x9_3 = &result_6[x8_16 | 0x18]
                void* x10_2 = &result_6[x8_16 | 0x10]
                void* x8_18 = &result_6[x8_16 | 8]
                int32_t x26_2 = (x9_3 + i_10 - 0x20 u< x9_3 ? 1 : 0)
                    | (x10_2 + i_10 - 0x20 u< x10_2 ? 1 : 0)
                    | (x8_18 + i_10 - 0x20 u< x8_18 ? 1 : 0)
                    | (x25_1 + i_10 - 0x20 u< x25_1 ? 1 : 0)
                
                do
                    void* x10_6 = var_90_1
                    int64_t x9_9 = ((arg7 - -0xffffffff) & zx.q(*(x25_1 + i_10 - 0x40))) * i_10
                    void* x8_23 = x10_6 + x9_9
                    
                    if (x26_2 != 0 || (x25_1 u< x10_6 + i_10 + x9_9
                            && x8_23 u< &result_6[i_10 + i_10 * fp_1]))
                        void* x8_24 = x8_23 + 0x10
                        void* x9_11 = &result_6[var_e8_1]
                        uint64_t i_5 = i_10
                        uint64_t i_3
                        
                        do
                            v2_1 = *(x8_24 - 0x10)
                            v3_1 = *x8_24
                            i_3 = i_5
                            i_5 -= 0x20
                            x8_24 += 0x20
                            v1_1 = v3_1 ^ *x9_11
                            *(x9_11 - 0x10) ^= v2_1
                            *x9_11 = v1_1
                            x9_11 += 0x20
                        while (i_3 != 0x20)
                    else
                        int64_t i_6 = ((i_10 - 0x20) u>> 5) + 1
                        void* x9_12 = &result_6[var_e0_1]
                        int64_t i_4
                        
                        do
                            v0_1.q = *x9_12
                            v1_1.q = *(x9_12 + 8)
                            v2_1.q = *(x9_12 + 0x10)
                            v3_1.q = *(x9_12 + 0x18)
                            v0_1:8.q = *(x9_12 + 0x20)
                            v1_1:8.q = *(x9_12 + 0x28)
                            v2_1:8.q = *(x9_12 + 0x30)
                            v3_1:8.q = *(x9_12 + 0x38)
                            v4_1.q = *x8_23
                            v5_1.q = *(x8_23 + 8)
                            v6_1.q = *(x8_23 + 0x10)
                            v7_1.q = *(x8_23 + 0x18)
                            v4_1:8.q = *(x8_23 + 0x20)
                            v5_1:8.q = *(x8_23 + 0x28)
                            v6_1:8.q = *(x8_23 + 0x30)
                            v7_1:8.q = *(x8_23 + 0x38)
                            x8_23 += 0x40
                            i_4 = i_6
                            i_6 -= 2
                            int128_t v16_1 = v4_1 ^ v0_1
                            int128_t v17_1 = v5_1 ^ v1_1
                            int128_t v18_1 = v6_1 ^ v2_1
                            int128_t v19_1 = v7_1 ^ v3_1
                            *x9_12 = v16_1.q
                            *(x9_12 + 8) = v17_1.q
                            *(x9_12 + 0x10) = v18_1.q
                            *(x9_12 + 0x18) = v19_1.q
                            *(x9_12 + 0x20) = v16_1:8.q
                            *(x9_12 + 0x28) = v17_1:8.q
                            *(x9_12 + 0x30) = v18_1:8.q
                            *(x9_12 + 0x38) = v19_1:8.q
                            x9_12 += 0x40
                        while (i_4 != 2)
                    
                    v0_1, v1_1, v2_1, v3_1, v4_1, v5_1, v6_1, v7_1 =
                        sub_f0c63c(arg8, x25_1, var_90_1 + x28_1)
                    fp_3 += 1
                while (fp_3 != arg7)
            
            var_e0_1 += i_10
            fp_1 += 1
            var_e8_1 += i_10
            
            if (fp_1 == arg9)
                goto label_e10910
        
        std::__ndk1::__vector_base_common<true>::__throw_length_error()

sub_c776cc(std::__ndk1::__vector_base_common<true>::__throw_length_error())
noreturn
