// 函数: _ZNK5Botan15DLIES_Decryptor10do_decryptERhPKhm
// 地址: 0xd1d9cc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t var_80
int64_t entry_x3

if ((***(arg1 + 0x30))() + *(arg1 + 8) u> entry_x3)
    void** x0_37 = __cxa_allocate_exception(0x20)
    int64_t x0_38
    int128_t v0_2
    x0_38, v0_2 = operator new(0x30)
    int64_t var_70_3 = x0_38
    var_80 = data_71cbb0
    __builtin_strncpy(x0_38, "DLIES decryption: ciphertext is too short", 0x2a)
    *x0_37 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_37[1])
    *x0_37 = _vtable_for_Botan::Decoding_Error + 0x10
    __cxa_throw(x0_37, _typeinfo_for_Botan::Decoding_Error, Botan::Exception::~Exception)
    noreturn

uint64_t x25 = *(arg1 + 8)
uint64_t result_1
__builtin_memset(&result_1, 0, 0x18)
int128_t var_130
uint64_t result_4
uint64_t x26_1

if (x25 == 0)
    x26_1 = 0
    result_4 = 0
label_d1da70:
    var_80.w = 0
    Botan::PK_Key_Agreement::derive_key(&arg1[0x10], nullptr, result_4, x26_1 - result_4, 
        &var_80 | 1)
    void* var_70
    
    if ((zx.d(var_80.b) & 1) != 0)
        operator delete(var_70)
    uint64_t x23_1 = entry_x3 - *(arg1 + 8) - (***(arg1 + 0x30))()
    uint64_t x28_1 = x23_1
    
    if (*(arg1 + 0x20) != 0)
        x28_1 = *(arg1 + 0x28)
    
    void* fp_1 = *(arg1 + 0x38)
    uint64_t x24_2 = *(arg1 + 0x18)
    __builtin_memset(&var_80, 0, 0x18)
    void* var_b0
    int64_t var_a8
    uint64_t x25_1 = var_a8 - var_b0
    uint64_t var_70_1
    uint64_t x8_9
    uint64_t x26_2
    
    if (var_a8 == var_b0)
        x8_9 = 0
        x26_2 = 0
    else
        if ((x25_1 & 0xffffffff80000000) != 0)
            goto label_d1e1a4
        
        uint64_t x0_8 = Botan::allocate_memory(x25_1, 1)
        x26_2 = x0_8
        var_80.q = x0_8
        var_80:8.q = x0_8
        size_t x25_2 = var_a8 - var_b0
        x8_9 = x0_8
        var_70_1 = x0_8 + x25_1
        
        if (x25_2 s>= 1)
            memcpy(x26_2, var_b0, x25_2)
            x8_9 = x26_2 + x25_2
        
        var_80:8.q = x8_9
    
    uint8_t* x25_3 = fp_1 + x28_1
    int16_t var_e0 = 0
    int16_t var_f8 = 0
    Botan::KDF::derive_key(x24_2, x25_3, x26_2, x8_9 - x26_2, &var_e0 | 1, nullptr, &var_f8 | 1)
    
    if ((zx.d(var_f8.b) & 1) == 0)
        if ((zx.d(var_e0.b) & 1) != 0)
            goto label_d1dba8
        
        goto label_d1db88
    
    void* var_e8
    operator delete(var_e8)
    void* var_d0
    void* x0_13
    
    if ((zx.d(var_e0.b) & 1) == 0)
    label_d1db88:
        x0_13 = var_80.q
        
        if (x0_13 != 0)
            var_80:8.q = x0_13
            Botan::deallocate_memory(x0_13, var_70_1 - x0_13, 1)
    else
    label_d1dba8:
        operator delete(var_d0)
        x0_13 = var_80.q
        
        if (x0_13 != 0)
            var_80:8.q = x0_13
            Botan::deallocate_memory(x0_13, var_70_1 - x0_13, 1)
    void* var_c8
    void* x8_14 = var_c8
    int64_t var_c0
    
    if (var_c0 - x8_14 != x25_3)
        void** x0_41 = __cxa_allocate_exception(0x20)
        int64_t x0_42
        int128_t v0_3
        x0_42, v0_3 = operator new(0x30)
        int64_t var_d0_1 = x0_42
        var_e0.o = data_71abd0
        __builtin_strncpy(x0_42, "DLIES: KDF did not provide sufficient output", 0x2d)
        std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
            "Encoding error: ", &var_e0)
        *x0_41 = _vtable_for_Botan::Exception + 0x10
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
            &x0_41[1])
        *x0_41 = _vtable_for_Botan::Invalid_Argument + 0x10
        
        if ((zx.d(var_80.b) & 1) != 0)
            operator delete(var_70_1)
        
        *x0_41 = _vtable_for_Botan::Encoding_Error + 0x10
        __cxa_throw(x0_41, _typeinfo_for_Botan::Encoding_Error, Botan::Exception::~Exception)
        noreturn
    
    int64_t x24_3 = *(arg1 + 8)
    __builtin_memset(&var_80, 0, 0x18)
    
    if (x23_1 == 0)
        goto label_d1dc18
    
    if ((x23_1 & 0xffffffff80000000) != 0)
        std::__ndk1::__vector_base_common<true>::__throw_length_error()
        std::__ndk1::__vector_base_common<true>::__throw_length_error()
    else
        int64_t x0_15 = Botan::allocate_memory(x23_1, 1)
        int64_t x24_4 = x0_15 + x23_1
        var_80.q = x0_15
        int64_t var_70_2 = x24_4
        memcpy(x0_15, arg3 + x24_3, x23_1)
        x8_14 = var_c8
        var_80:8.q = x24_4
    label_d1dc18:
        *(arg1 + 0x38)
        Botan::SymmetricAlgorithm::set_key(*(arg1 + 0x30) + 8, x8_14 + x28_1)
        int64_t* x24_5 = *(arg1 + 0x30)
        int64_t x1_6 = var_80.q
        (*(*x24_5 + 0x18))(x24_5, x1_6, var_80:8.q - x1_6)
        Botan::Buffered_Computation::final()
        int64_t x26_3 = *(arg1 + 8)
        uint64_t x0_20
        int128_t v0_1
        int128_t v1_1
        int128_t v2_1
        int128_t v3_1
        int128_t v4_1
        int128_t v5_1
        int128_t v6_1
        int128_t v7_1
        x0_20, v0_1, v1_1, v2_1, v3_1, v4_1, v5_1, v6_1, v7_1 = (***(arg1 + 0x30))()
        __builtin_memset(&var_f8, 0, 0x18)
        uint8_t var_110
        void* var_e8_1
        void* x24_6
        
        if (x0_20 == 0)
            x24_6 = nullptr
            var_110 = 0
        label_d1dcf8:
            uint32_t x8_21 = zx.d(var_110)
            int32_t x8_23 = sx.d((x8_21.b - 1) & (not.d(x8_21)).b)
            *arg2 = (x8_23 u>> 7).b
            int128_t* entry_x8
            
            if (*(arg1 + 0x20) == 0)
                void* x10_2 = var_80.q
                int64_t x9_11 = x28_1 & 0xffffffffffffffe0
                
                if (x9_11 != 0)
                    int64_t x11_4 = 0
                    
                    if (x9_11 == 0x20 || x10_2 + 0x18 + x9_11 - 0x20 u< x10_2 + 0x18
                            || x10_2 + 0x10 + x9_11 - 0x20 u< x10_2 + 0x10
                            || x10_2 + 8 + x9_11 - 0x20 u< x10_2 + 8
                            || x10_2 + x9_11 - 0x20 u< x10_2)
                        goto label_d1dec0
                    
                    if (x10_2 u>= var_c8 + x9_11 || var_c8 u>= x10_2 + x9_11)
                        int64_t i_10 = (((x9_11 - 0x20) u>> 5) + 1) & 0xffffffffffffffe
                        x11_4 = i_10 << 5
                        int64_t i_8 = i_10
                        void* x15_2 = var_c8
                        void* x16_2 = x10_2
                        int64_t i
                        
                        do
                            v0_1.q = *x16_2
                            v1_1.q = *(x16_2 + 8)
                            v2_1.q = *(x16_2 + 0x10)
                            v3_1.q = *(x16_2 + 0x18)
                            v0_1:8.q = *(x16_2 + 0x20)
                            v1_1:8.q = *(x16_2 + 0x28)
                            v2_1:8.q = *(x16_2 + 0x30)
                            v3_1:8.q = *(x16_2 + 0x38)
                            v4_1.q = *x15_2
                            v5_1.q = *(x15_2 + 8)
                            v6_1.q = *(x15_2 + 0x10)
                            v7_1.q = *(x15_2 + 0x18)
                            v4_1:8.q = *(x15_2 + 0x20)
                            v5_1:8.q = *(x15_2 + 0x28)
                            v6_1:8.q = *(x15_2 + 0x30)
                            v7_1:8.q = *(x15_2 + 0x38)
                            x15_2 += 0x40
                            i = i_8
                            i_8 -= 2
                            int128_t v16_1 = v4_1 ^ v0_1
                            int128_t v17_1 = v5_1 ^ v1_1
                            int128_t v18_1 = v6_1 ^ v2_1
                            int128_t v19_1 = v7_1 ^ v3_1
                            *x16_2 = v16_1.q
                            *(x16_2 + 8) = v17_1.q
                            *(x16_2 + 0x10) = v18_1.q
                            *(x16_2 + 0x18) = v19_1.q
                            *(x16_2 + 0x20) = v16_1:8.q
                            *(x16_2 + 0x28) = v17_1:8.q
                            *(x16_2 + 0x30) = v18_1:8.q
                            *(x16_2 + 0x38) = v19_1:8.q
                            x16_2 += 0x40
                        while (i != 2)
                        
                        if (((x9_11 - 0x20) u>> 5) + 1 != i_10)
                            goto label_d1dec0
                    else
                        x11_4 = 0
                    label_d1dec0:
                        int64_t i_7 = x11_4 - x9_11
                        void* x11_8 = var_c8 + x11_4 + 0x10
                        void* x13_5 = x10_2 + x11_4 + 0x10
                        int64_t i_1
                        
                        do
                            v2_1 = *(x11_8 - 0x10)
                            v3_1 = *x11_8
                            i_1 = i_7
                            i_7 += 0x20
                            x11_8 += 0x20
                            v1_1 = v3_1 ^ *x13_5
                            *(x13_5 - 0x10) ^= v2_1
                            *x13_5 = v1_1
                            x13_5 += 0x20
                        while (i_1 != -0x20)
                
                if (x28_1 != x9_11)
                    if ((x28_1 & 0x18) == 0)
                    label_d1df4c:
                        int64_t i_6 = x28_1 - x9_11
                        void* x10_3 = x10_2 + x9_11
                        void* x8_35 = var_c8 + x9_11
                        int64_t i_2
                        
                        do
                            char x9_14 = *x8_35
                            x8_35 += 1
                            i_2 = i_6
                            i_6 -= 1
                            *x10_3 ^= x9_14
                            x10_3 += 1
                        while (i_2 != 1)
                    else
                        void* x11_9 = x10_2 + x9_11
                        void* x12_5 = var_c8 + x9_11
                        
                        if (x11_9 u< var_c8 + x28_1 && x12_5 u< x10_2 + x28_1)
                            goto label_d1df4c
                        
                        int64_t x13_7 = x28_1 & 7
                        int64_t i_9 = (x28_1 & 0x1f) - x13_7
                        x9_11 += i_9
                        int64_t i_3
                        
                        do
                            v0_1.q = *x12_5
                            x12_5 += 8
                            v1_1.q = *x11_9
                            i_3 = i_9
                            i_9 -= 8
                            *x11_9 = (v1_1 ^ v0_1).q
                            x11_9 += 8
                        while (i_3 != 8)
                        
                        if (x13_7 != 0)
                            goto label_d1df4c
                
            label_d1df70:
                v0_1 = var_80
                x24_6 = var_f8.q
                __builtin_memset(&var_80, 0, 0x18)
                *entry_x8 = v0_1
                entry_x8[1].q = var_70_2
                
                if (x24_6 == 0)
                    goto label_d1dfa8
                
                goto label_d1df94
            
            if ((x8_23 & 0x80000000) == 0)
                __builtin_memset(entry_x8, 0, 0x18)
                
                if (x24_6 == 0)
                    goto label_d1dfa8
                
            label_d1df94:
                void* var_f0_2 = x24_6
                Botan::deallocate_memory(x24_6, var_e8_1 - x24_6, 1)
            label_d1dfa8:
                void* x0_33 = var_e0.q
                
                if (x0_33 != 0)
                    void* var_d8_1 = x0_33
                    Botan::deallocate_memory(x0_33, var_d0 - x0_33, 1)
                
                void* x0_34 = var_80.q
                
                if (x0_34 != 0)
                    var_80:8.q = x0_34
                    Botan::deallocate_memory(x0_34, var_70_2 - x0_34, 1)
                
                if (var_c8 != 0)
                    void* var_c0_1 = var_c8
                    int64_t var_b8
                    Botan::deallocate_memory(var_c8, var_b8 - var_c8, 1)
                
                if (var_b0 != 0)
                    void* var_a8_1 = var_b0
                    int64_t var_a0
                    Botan::deallocate_memory(var_b0, var_a0 - var_b0, 1)
                
                uint64_t result = result_1
                
                if (result == 0)
                    return result
                
                uint64_t result_2 = result
                return operator delete(result)
            
            int64_t var_108_1 = 0
            int64_t var_100_1 = 0
            var_110.q = 0
            std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::assign<uint8_t const*>(
                &var_110, var_c8)
            Botan::SymmetricAlgorithm::set_key(*(arg1 + 0x20), var_110.q)
            int32_t x0_26
            
            if (*(arg1 + 0x48) == *(arg1 + 0x40))
                int64_t* x0_25 = *(arg1 + 0x20)
                x0_26 = (*(*x0_25 + 0x68))(x0_25, 0)
            
            if (*(arg1 + 0x48) != *(arg1 + 0x40) || (x0_26 & 1) != 0)
                int64_t* x23_2 = *(arg1 + 0x20)
                std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::vector(&var_130)
                int64_t x1_11 = var_130.q
                (*(*x23_2 + 0x30))(x23_2, x1_11, var_130:8.q - x1_11)
                void* x0_29 = var_130.q
                
                if (x0_29 != 0)
                    var_130:8.q = x0_29
                    int64_t var_120
                    Botan::deallocate_memory(x0_29, var_120 - x0_29, 1)
                
                int64_t* x0_30 = *(arg1 + 0x20)
                (*(*x0_30 + 0x40))(x0_30, &var_80, 0)
                void* x0_31 = var_110.q
                
                if (x0_31 != 0)
                    void* var_108_2 = x0_31
                    Botan::deallocate_memory(x0_31, var_100_1 - x0_31, 1)
                
                goto label_d1df70
        else
            if ((x0_20 & 0xffffffff80000000) == 0)
                void* x0_22 = Botan::allocate_memory(x0_20, 1)
                void* x22_1 = x0_22 + x0_20
                x24_6 = x0_22
                var_f8.q = x0_22
                var_e8_1 = x22_1
                v0_1, v1_1, v2_1, v3_1, v4_1, v5_1, v6_1, v7_1 =
                    memcpy(x0_22, arg3 + x26_3 + x23_1, x0_20)
                void* var_f0_1 = x22_1
                char* x8_20 = var_e0.q
                void* i_5 = x22_1 - x24_6
                var_110 = 0
                
                if (x22_1 != x24_6)
                    void* x10_1 = x24_6
                    void* i_4
                    
                    do
                        char x11_1 = *x10_1
                        x10_1 += 1
                        char x12_1 = *x8_20
                        x8_20 = &x8_20[1]
                        i_4 = i_5
                        i_5 -= 1
                        var_110 |= x12_1 ^ x11_1
                    while (i_4 != 1)
                
                goto label_d1dcf8
            
            std::__ndk1::__vector_base_common<true>::__throw_length_error()
else
    if ((x25 & 0xffffffff80000000) == 0)
        uint64_t result_3 = operator new(x25)
        x26_1 = result_3 + x25
        result_4 = result_3
        result_1 = result_3
        uint64_t var_88_1 = x26_1
        memcpy(result_3, arg3, x25)
        uint64_t var_90_1 = x26_1
        goto label_d1da70
    
    std::__ndk1::__vector_base_common<true>::__throw_length_error()
label_d1e1a4:
    std::__ndk1::__vector_base_common<true>::__throw_length_error()
    std::__ndk1::__vector_base_common<true>::__throw_length_error()
    std::__ndk1::__vector_base_common<true>::__throw_length_error()
void** x0_47 = __cxa_allocate_exception(0x20)
int64_t* x9_17 = *(arg1 + 0x20)
(*(*x9_17 + 0x20))(x9_17)
void var_168
int128_t* x0_50
int128_t v0_4
x0_50, v0_4 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::insert(
    &var_168, nullptr)
int64_t var_140 = x0_50[1].q
int128_t var_150 = *x0_50
__builtin_memset(x0_50, 0, 0x18)
int128_t* x0_52
int128_t v0_5
x0_52, v0_5 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
    &var_150)
int64_t var_120_1 = x0_52[1].q
var_130 = *x0_52
__builtin_memset(x0_52, 0, 0x18)
*x0_47 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0_47[1])
*x0_47 = _vtable_for_Botan::Invalid_Argument + 0x10
__cxa_throw(x0_47, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
noreturn
