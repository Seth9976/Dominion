// 函数: _ZN5Botan14CTS_Decryption6finishERNSt6__ndk16vectorIhNS_16secure_allocatorIhEEEEm
// 地址: 0xcf0988
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >& x20
std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >& var_10 = x20
char var_a8[0x10]
int128_t var_90
char var_78
void* var_68

if (*(arg1 + 0x18) == *(arg1 + 0x20))
    Botan::throw_invalid_state("state().empty() == false", "finish", 
        "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp")
    Botan::assertion_failure("buffer.size() >= offset", "Offset is sane", "finish", 
        "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0x4e60)
else
    int64_t x25_1 = *arg2
    int64_t x26_1 = *(arg2 + 8)
    int64_t x8_1 = x26_1 - x25_1
    int64_t entry_x2
    int64_t x9_1 = x8_1 - entry_x2
    
    if (x8_1 u< entry_x2)
        Botan::assertion_failure("buffer.size() >= offset", "Offset is sane", "finish", 
            "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0x4e60)
    else
        int64_t x23_1 = *(arg1 + 0x30)
        
        if (x9_1 u>= x23_1 + 1)
            uint64_t x27 = x9_1 u/ x23_1
            void* result
            
            if (x9_1 u% x23_1 == 0)
                if (x23_1 != 0)
                    char* x8_6 = x26_1 - x23_1
                    char* x9_3 = x26_1 - (x23_1 << 1)
                    char x11_2 = *x8_6
                    *x8_6 = *x9_3
                    *x9_3 = x11_2
                    
                    if (x23_1 != 1)
                        int64_t x8_7 = 1 - (x23_1 << 1)
                        int64_t i_5 = 1 - x23_1
                        int64_t i
                        
                        do
                            char* x10_5 = *(arg2 + 8)
                            char x12_1 = x10_5[i_5]
                            x10_5[i_5] = x10_5[x8_7]
                            x10_5[x8_7] = x12_1
                            i = i_5
                            i_5 += 1
                            x8_7 += 1
                        while (i u< -1)
                    
                    x25_1 = *arg2
                    x8_1 = *(arg2 + 8) - x25_1
                
                if (x8_1 u>= entry_x2)
                    result = (*(*arg1 + 0x38))(arg1, x25_1 + entry_x2, x8_1 - entry_x2)
                    void* x8_11 = *arg2
                    void* x9_4 = result + entry_x2
                    void* x10_7 = *(arg2 + 8) - x8_11
                    
                    if (x9_4 u> x10_7)
                        return std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::__append(
                            arg2) __tailcall
                    
                    if (x9_4 u< x10_7)
                        *(arg2 + 8) = x8_11 + x9_4
                    
                    return result
            else
                int64_t x28_1 = (x27 - 1) * x23_1
                uint64_t x22_1 = x9_1 - x28_1
                int64_t x24_1 = x22_1 - x23_1
                
                if (x22_1 u<= x23_1 || x22_1 u>= x23_1 << 1)
                    Botan::assertion_failure("final_bytes > BS && final_bytes < 2*BS", 
                        "Left over size in expected range", "finish", 
                        "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0x4e76)
                    std::__ndk1::__vector_base_common<true>::__throw_length_error()
                    Botan::assertion_failure("buffer.size() >= offset", "Offset ok", "update", 
                        "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x9a9)
                else
                    __builtin_memset(&var_78, 0, 0x18)
                    
                    if ((x22_1 & 0xffffffff80000000) != 0)
                        std::__ndk1::__vector_base_common<true>::__throw_length_error()
                        Botan::assertion_failure("buffer.size() >= offset", "Offset ok", "update", 
                            "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x9a9)
                    else
                        int64_t x0_1 = Botan::allocate_memory(x22_1, 1)
                        void* fp_1 = x0_1 + x22_1
                        var_78.q = x0_1
                        var_68 = fp_1
                        memcpy(x0_1, x25_1 + entry_x2 + x28_1, x22_1)
                        void* var_70_1 = fp_1
                        int64_t x8_5 = *arg2
                        int64_t x9_2 = *(arg2 + 8)
                        int64_t x10_3 = x28_1 + entry_x2
                        int64_t x11_1 = x9_2 - x8_5
                        
                        if (x10_3 u> x11_1)
                            std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::__append(
                                arg2)
                            x8_5 = *arg2
                            x9_2 = *(arg2 + 8)
                        else if (x10_3 u< x11_1)
                            x9_2 = x8_5 + x10_3
                            *(arg2 + 8) = x9_2
                        
                        int64_t x9_6 = x9_2 - x8_5
                        
                        if (x9_6 u>= entry_x2)
                            int64_t x0_7 = (*(*arg1 + 0x38))(arg1, x8_5 + entry_x2, x9_6 - entry_x2)
                            int64_t x8_13 = *arg2
                            int64_t x9_9 = x0_7 + entry_x2
                            int64_t x10_10 = *(arg2 + 8) - x8_13
                            
                            if (x9_9 u> x10_10)
                                std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::__append(
                                    arg2)
                            else if (x9_9 u< x10_10)
                                *(arg2 + 8) = x8_13 + x9_9
                            
                            int64_t* x0_9 = *(arg1 + 8)
                            int64_t x1_7 = var_78.q
                            int128_t v0_2
                            int128_t v1_2
                            int128_t v2_2
                            int128_t v3_2
                            v0_2, v1_2, v2_2, v3_2 = (*(*x0_9 + 0x50))(x0_9, x1_7, x1_7, 1)
                            int64_t* x8_17 = var_78.q
                            int64_t x10_11 = x24_1 & 0xffffffffffffffe0
                            int64_t* x9_10 = x8_17 + x23_1
                            
                            if (x10_11 != 0)
                                int64_t x11_5 = 0
                                
                                do
                                    int128_t* x12_3 = x8_17 + x11_5
                                    int128_t* x13_2 = x9_10 + x11_5
                                    x11_5 += 0x20
                                    v1_2 = x13_2[1] ^ x12_3[1]
                                    *x12_3 ^= *x13_2
                                    x12_3[1] = v1_2
                                while (x11_5 != x10_11)
                            
                            if (x10_11 != x24_1)
                                int64_t x11_9 = x26_1 - x23_1 * x27 - entry_x2 - x25_1 - x10_11
                                
                                if (x11_9 u< 8)
                                    goto label_cf0cd0
                                
                                int64_t x12_5 = x25_1 + entry_x2 + x23_1 * x27
                                
                                if (x8_17 + x10_11 u< x8_17 + x23_1 + x26_1 - x12_5
                                        && x8_17 + x23_1 + x10_11 u< x8_17 + x26_1 - x12_5)
                                    goto label_cf0cd0
                                
                                int64_t x12_8
                                
                                if (x11_9 u>= 0x20)
                                    int64_t x13_6 = 0
                                    x12_8 = x11_9 & 0xffffffffffffffe0
                                    
                                    do
                                        int64_t x14_5 = x10_11 + x13_6
                                        void* x15_2 = x9_10 + x14_5
                                        void* x14_6 = x8_17 + x14_5
                                        x13_6 += 0x20
                                        v1_2 = *(x14_6 + 0x10) ^ *(x15_2 + 0x10)
                                        *x14_6 ^= *x15_2
                                        *(x14_6 + 0x10) = v1_2
                                    while (x13_6 != x12_8)
                                    
                                    if (x11_9 != x12_8)
                                        if ((x11_9 & 0x18) != 0)
                                            goto label_cf0c7c
                                        
                                        x10_11 += x12_8
                                    label_cf0cd0:
                                        
                                        do
                                            *(x8_17 + x10_11) ^= *(x9_10 + x10_11)
                                            x10_11 += 1
                                        while (x10_11 != x24_1)
                                else
                                    x12_8 = 0
                                label_cf0c7c:
                                    int64_t x14_7 = x11_9 & 0xfffffffffffffff8
                                    
                                    do
                                        int64_t x15_3 = x10_11 + x12_8
                                        v0_2.q = *(x9_10 + x15_3)
                                        v1_2.q = *(x8_17 + x15_3)
                                        x12_8 += 8
                                        *(x8_17 + x15_3) = (v1_2 ^ v0_2).q
                                    while (x12_8 != x14_7)
                                    
                                    x10_11 += x14_7
                                    
                                    if (x11_9 != x14_7)
                                        goto label_cf0cd0
                            
                            if (x24_1 != 0)
                                int64_t x8_19 = 0
                                
                                do
                                    char* x9_11 = var_78.q
                                    char* x10_12 = &x9_11[x23_1]
                                    char x12_10 = x9_11[x8_19]
                                    x9_11[x8_19] = x10_12[x8_19]
                                    x10_12[x8_19] = x12_10
                                    x8_19 += 1
                                while (x8_19 != x24_1)
                            
                            int64_t* x0_10 = *(arg1 + 8)
                            int64_t x1_8 = var_78.q
                            int128_t v0_3
                            int128_t v1_3
                            int128_t v2_3
                            int128_t v3_3
                            int128_t v4_2
                            int128_t v5_2
                            int128_t v6_2
                            int128_t v7_2
                            v0_3, v1_3, v2_3, v3_3, v4_2, v5_2, v6_2, v7_2 =
                                (*(*x0_10 + 0x50))(x0_10, x1_8, x1_8, 1)
                            void* x9_12 = var_78.q
                            void* x8_22 = *(arg1 + 0x18)
                            int64_t x10_13 = x23_1 & 0xffffffffffffffe0
                            
                            if (x10_13 != 0)
                                int64_t x11_13 = 0
                                
                                if (x10_13 == 0x20 || x9_12 + 0x18 + x10_13 - 0x20 u< x9_12 + 0x18
                                        || x9_12 + 0x10 + x10_13 - 0x20 u< x9_12 + 0x10
                                        || x9_12 + 8 + x10_13 - 0x20 u< x9_12 + 8
                                        || x9_12 + x10_13 - 0x20 u< x9_12)
                                    goto label_cf0de0
                                
                                if (x9_12 u>= x8_22 + x10_13 || x8_22 u>= x9_12 + x10_13)
                                    int64_t i_10 = (((x10_13 - 0x20) u>> 5) + 1) & 0xffffffffffffffe
                                    x11_13 = i_10 << 5
                                    int64_t i_8 = i_10
                                    void* x15_5 = x8_22
                                    void* x16_3 = x9_12
                                    int64_t i_1
                                    
                                    do
                                        v0_3.q = *x16_3
                                        v1_3.q = *(x16_3 + 8)
                                        v2_3.q = *(x16_3 + 0x10)
                                        v3_3.q = *(x16_3 + 0x18)
                                        v0_3:8.q = *(x16_3 + 0x20)
                                        v1_3:8.q = *(x16_3 + 0x28)
                                        v2_3:8.q = *(x16_3 + 0x30)
                                        v3_3:8.q = *(x16_3 + 0x38)
                                        v4_2.q = *x15_5
                                        v5_2.q = *(x15_5 + 8)
                                        v6_2.q = *(x15_5 + 0x10)
                                        v7_2.q = *(x15_5 + 0x18)
                                        v4_2:8.q = *(x15_5 + 0x20)
                                        v5_2:8.q = *(x15_5 + 0x28)
                                        v6_2:8.q = *(x15_5 + 0x30)
                                        v7_2:8.q = *(x15_5 + 0x38)
                                        x15_5 += 0x40
                                        i_1 = i_8
                                        i_8 -= 2
                                        int128_t v16_2 = v4_2 ^ v0_3
                                        int128_t v17_2 = v5_2 ^ v1_3
                                        int128_t v18_2 = v6_2 ^ v2_3
                                        int128_t v19_2 = v7_2 ^ v3_3
                                        *x16_3 = v16_2.q
                                        *(x16_3 + 8) = v17_2.q
                                        *(x16_3 + 0x10) = v18_2.q
                                        *(x16_3 + 0x18) = v19_2.q
                                        *(x16_3 + 0x20) = v16_2:8.q
                                        *(x16_3 + 0x28) = v17_2:8.q
                                        *(x16_3 + 0x30) = v18_2:8.q
                                        *(x16_3 + 0x38) = v19_2:8.q
                                        x16_3 += 0x40
                                    while (i_1 != 2)
                                    
                                    if (((x10_13 - 0x20) u>> 5) + 1 != i_10)
                                        goto label_cf0de0
                                else
                                    x11_13 = 0
                                label_cf0de0:
                                    int64_t i_7 = x11_13 - x10_13
                                    void* x11_17 = x8_22 + x11_13 + 0x10
                                    void* x13_11 = x9_12 + x11_13 + 0x10
                                    int64_t i_2
                                    
                                    do
                                        v2_3 = *(x11_17 - 0x10)
                                        v3_3 = *x11_17
                                        i_2 = i_7
                                        i_7 += 0x20
                                        x11_17 += 0x20
                                        v1_3 = v3_3 ^ *x13_11
                                        *(x13_11 - 0x10) ^= v2_3
                                        *x13_11 = v1_3
                                        x13_11 += 0x20
                                    while (i_2 != -0x20)
                            
                            if (x23_1 != x10_13)
                                if ((x23_1 & 0x18) == 0)
                                label_cf0e6c:
                                    int64_t i_6 = x23_1 - x10_13
                                    void* x9_13 = x9_12 + x10_13
                                    void* x8_23 = x8_22 + x10_13
                                    int64_t i_3
                                    
                                    do
                                        char x10_14 = *x8_23
                                        x8_23 += 1
                                        i_3 = i_6
                                        i_6 -= 1
                                        *x9_13 ^= x10_14
                                        x9_13 += 1
                                    while (i_3 != 1)
                                else
                                    int64_t* x11_18 = x9_12 + x10_13
                                    void* x12_14 = x8_22 + x10_13
                                    
                                    if (x11_18 u< x8_22 + x23_1 && x12_14 u< x9_12 + x23_1)
                                        goto label_cf0e6c
                                    
                                    int64_t x13_13 = x23_1 & 7
                                    int64_t i_9 = (x23_1 & 0x1f) - x13_13
                                    x10_13 += i_9
                                    int64_t i_4
                                    
                                    do
                                        v0_3.q = *x12_14
                                        x12_14 += 8
                                        v1_3.q = *x11_18
                                        i_4 = i_9
                                        i_9 -= 8
                                        *x11_18 = (v1_3 ^ v0_3).q
                                        x11_18 = &x11_18[1]
                                    while (i_4 != 8)
                                    
                                    if (x13_13 != 0)
                                        goto label_cf0e6c
                            
                            Botan::operator+=<uint8_t, Botan::secure_allocator<uint8_t>, Botan::secure_allocator<uint8_t> >(
                                arg2, &var_78)
                            result = var_78.q
                            
                            if (result == 0)
                                return result
                            
                            void* result_1 = result
                            return Botan::deallocate_memory(result, var_68 - result, 1)
                        
                        Botan::assertion_failure("buffer.size() >= offset", "Offset ok", "update", 
                            "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x9a9)
            int64_t* x0_20 = Botan::assertion_failure("buffer.size() >= offset", "Offset ok", 
                "update", "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x9a9)
            std::exception::~exception()
            
            if ((zx.d(var_78) & 1) != 0)
                operator delete(var_68)
            
            void* var_80
            
            if ((zx.d(var_90.b) & 1) != 0)
                operator delete(var_80)
            void* var_98
            
            if ((zx.d(var_a8[0]) & 1) != 0)
                operator delete(var_98)
            __cxa_free_exception(arg2)
            sub_1101e04(x0_20)
            noreturn

void** x0_12 = __cxa_allocate_exception(0x20)
Botan::CBC_Mode::name()
int128_t* x0_15
int128_t v0_4
x0_15, v0_4 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
    &var_a8)
int64_t var_80_1 = x0_15[1].q
var_90 = *x0_15
__builtin_memset(x0_15, 0, 0x18)
std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
    "Encoding error: ", &var_90)
*x0_12 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0_12[1])
*x0_12 = _vtable_for_Botan::Invalid_Argument + 0x10

if ((zx.d(var_78) & 1) != 0)
    operator delete(var_68)

*x0_12 = _vtable_for_Botan::Encoding_Error + 0x10
__cxa_throw(x0_12, _typeinfo_for_Botan::Encoding_Error, Botan::Exception::~Exception)
noreturn
