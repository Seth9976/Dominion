// 函数: _ZN5Botan14CTS_Encryption6finishERNSt6__ndk16vectorIhNS_16secure_allocatorIhEEEEm
// 地址: 0xcefa34
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >& x20
std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >& var_10 = x20
char var_88[0x10]
int128_t var_70
char var_58
void* var_48

if (*(arg1 + 0x18) == *(arg1 + 0x20))
    Botan::throw_invalid_state("state().empty() == false", "finish", 
        "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp")
    Botan::assertion_failure("buffer.size() >= offset", "Offset is sane", "finish", 
        "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0x4de8)
else
    int64_t x8_1 = *arg2
    int64_t x9_2 = *(arg2 + 8) - x8_1
    int64_t entry_x2
    int64_t x2 = x9_2 - entry_x2
    
    if (x9_2 u< entry_x2)
        Botan::assertion_failure("buffer.size() >= offset", "Offset is sane", "finish", 
            "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0x4de8)
    else
        int64_t x24_1 = *(arg1 + 0x30)
        
        if (x2 u>= x24_1 + 1)
            int64_t x23 = x8_1 + entry_x2
            void* result
            
            if (x2 u% x24_1 == 0)
                result = (*(*arg1 + 0x38))(arg1, x23)
                void* x8_7 = *arg2
                void* x9_6 = result + entry_x2
                void* x10_3 = *(arg2 + 8) - x8_7
                
                if (x9_6 u> x10_3)
                    result =
                        std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::__append(
                        arg2)
                else if (x9_6 u< x10_3)
                    *(arg2 + 8) = x8_7 + x9_6
                
                if (x24_1 != 0)
                    int64_t x8_12 = neg.q(x24_1 << 1)
                    int64_t i_6 = neg.q(x24_1)
                    int64_t i
                    
                    do
                        char* x10_7 = *(arg2 + 8)
                        char x12_2 = x10_7[i_6]
                        x10_7[i_6] = x10_7[x8_12]
                        x10_7[x8_12] = x12_2
                        i = i_6
                        i_6 += 1
                        x8_12 += 1
                    while (i u< -1)
            else
                int64_t x25_1 = (x2 u/ x24_1 - 1) * x24_1
                uint64_t x21_1 = x2 - x25_1
                
                if (x21_1 u<= x24_1 || x21_1 u>= x24_1 << 1)
                    Botan::assertion_failure("final_bytes > BS && final_bytes < 2*BS", 
                        "Left over size in expected range", "finish", 
                        "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0x4dfd)
                label_ceff34:
                    std::__ndk1::__vector_base_common<true>::__throw_length_error()
                label_ceff5c:
                    int64_t* x0_19 = Botan::assertion_failure("buffer.size() >= offset", 
                        "Offset ok", "update", 
                        "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x9a9)
                    std::exception::~exception()
                    
                    if ((zx.d(var_58) & 1) != 0)
                        operator delete(var_48)
                    
                    void* var_60
                    
                    if ((zx.d(var_70.b) & 1) != 0)
                        operator delete(var_60)
                    void* var_78
                    
                    if ((zx.d(var_88[0]) & 1) != 0)
                        operator delete(var_78)
                    __cxa_free_exception(arg2)
                    sub_1101e04(x0_19)
                    noreturn
                
                __builtin_memset(&var_58, 0, 0x18)
                
                if ((x21_1 & 0xffffffff80000000) != 0)
                    goto label_ceff34
                
                int64_t x0_1 = Botan::allocate_memory(x21_1, 1)
                void* x23_1 = x0_1 + x21_1
                var_58.q = x0_1
                var_48 = x23_1
                memcpy(x0_1, x23 + x25_1, x21_1)
                void* var_50_1 = x23_1
                int64_t x8_4 = *arg2
                int64_t x9_5 = *(arg2 + 8)
                int64_t x10_1 = x25_1 + entry_x2
                int64_t x11_1 = x9_5 - x8_4
                
                if (x10_1 u> x11_1)
                    std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::__append(arg2)
                    x8_4 = *arg2
                    x9_5 = *(arg2 + 8)
                else if (x10_1 u< x11_1)
                    x9_5 = x8_4 + x10_1
                    *(arg2 + 8) = x9_5
                
                int64_t x9_7 = x9_5 - x8_4
                
                if (x9_7 u< entry_x2)
                    goto label_ceff5c
                
                int64_t x0_6
                int128_t v0_1
                int128_t v1_1
                int128_t v2_1
                int128_t v3_1
                int128_t v4_1
                int128_t v5_1
                int128_t v6_1
                int128_t v7_1
                x0_6, v0_1, v1_1, v2_1, v3_1, v4_1, v5_1, v6_1, v7_1 =
                    (*(*arg1 + 0x38))(arg1, x8_4 + entry_x2, x9_7 - entry_x2)
                int64_t x8_8 = *arg2
                int64_t x9_10 = x0_6 + entry_x2
                int64_t x10_5 = *(arg2 + 8) - x8_8
                
                if (x9_10 u> x10_5)
                    v0_1, v1_1, v2_1, v3_1, v4_1, v5_1, v6_1, v7_1 =
                        std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::__append(
                        arg2)
                else if (x9_10 u< x10_5)
                    *(arg2 + 8) = x8_8 + x9_10
                
                void* x9_11 = var_58.q
                void* x8_10 = *(arg1 + 0x18)
                int64_t x10_6 = x24_1 & 0xffffffffffffffe0
                
                if (x10_6 != 0)
                    int64_t x11_2 = 0
                    
                    if (x10_6 == 0x20 || x9_11 + 0x18 + x10_6 - 0x20 u< x9_11 + 0x18
                            || x9_11 + 0x10 + x10_6 - 0x20 u< x9_11 + 0x10
                            || x9_11 + 8 + x10_6 - 0x20 u< x9_11 + 8
                            || x9_11 + x10_6 - 0x20 u< x9_11)
                        goto label_cefc94
                    
                    if (x9_11 u>= x8_10 + x10_6 || x8_10 u>= x9_11 + x10_6)
                        int64_t i_11 = (((x10_6 - 0x20) u>> 5) + 1) & 0xffffffffffffffe
                        x11_2 = i_11 << 5
                        int64_t i_9 = i_11
                        void* x15_2 = x8_10
                        void* x16_2 = x9_11
                        int64_t i_1
                        
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
                            i_1 = i_9
                            i_9 -= 2
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
                        while (i_1 != 2)
                        
                        if (((x10_6 - 0x20) u>> 5) + 1 != i_11)
                            goto label_cefc94
                    else
                        x11_2 = 0
                    label_cefc94:
                        int64_t i_8 = x11_2 - x10_6
                        void* x11_7 = x8_10 + x11_2 + 0x10
                        void* x13_4 = x9_11 + x11_2 + 0x10
                        int64_t i_2
                        
                        do
                            v2_1 = *(x11_7 - 0x10)
                            v3_1 = *x11_7
                            i_2 = i_8
                            i_8 += 0x20
                            x11_7 += 0x20
                            v1_1 = v3_1 ^ *x13_4
                            *(x13_4 - 0x10) ^= v2_1
                            *x13_4 = v1_1
                            x13_4 += 0x20
                        while (i_2 != -0x20)
                
                if (x24_1 != x10_6)
                    if ((x24_1 & 0x18) == 0)
                    label_cefd20:
                        int64_t i_7 = x24_1 - x10_6
                        void* x9_12 = x9_11 + x10_6
                        void* x8_13 = x8_10 + x10_6
                        int64_t i_3
                        
                        do
                            char x10_8 = *x8_13
                            x8_13 += 1
                            i_3 = i_7
                            i_7 -= 1
                            *x9_12 ^= x10_8
                            x9_12 += 1
                        while (i_3 != 1)
                    else
                        int64_t* x11_8 = x9_11 + x10_6
                        void* x12_5 = x8_10 + x10_6
                        
                        if (x11_8 u< x8_10 + x24_1 && x12_5 u< x9_11 + x24_1)
                            goto label_cefd20
                        
                        int64_t x13_6 = x24_1 & 7
                        int64_t i_10 = (x24_1 & 0x1f) - x13_6
                        x10_6 += i_10
                        int64_t i_4
                        
                        do
                            v0_1.q = *x12_5
                            x12_5 += 8
                            v1_1.q = *x11_8
                            i_4 = i_10
                            i_10 -= 8
                            *x11_8 = (v1_1 ^ v0_1).q
                            x11_8 = &x11_8[1]
                        while (i_4 != 8)
                        
                        if (x13_6 != 0)
                            goto label_cefd20
                
                int64_t* x0_8 = *(arg1 + 8)
                int64_t x1_6 = var_58.q
                (*(*x0_8 + 0x48))(x0_8, x1_6, x1_6, 1)
                
                if (x21_1 != x24_1)
                    int64_t i_5 = 0
                    
                    do
                        char* x10_10 = var_58.q
                        x10_10[i_5] ^= x10_10[x24_1 + i_5]
                        char* x10_11 = var_58.q
                        void* x10_12 = &x10_11[x24_1]
                        *(x10_12 + i_5) ^= x10_11[i_5]
                        i_5 += 1
                    while (i_5 != x21_1 - x24_1)
                
                int64_t* x0_9 = *(arg1 + 8)
                int64_t x1_7 = var_58.q
                (*(*x0_9 + 0x48))(x0_9, x1_7, x1_7, 1)
                Botan::operator+=<uint8_t, Botan::secure_allocator<uint8_t>, Botan::secure_allocator<uint8_t> >(
                    arg2, &var_58)
                result = var_58.q
                
                if (result != 0)
                    void* result_1 = result
                    return Botan::deallocate_memory(result, var_48 - result, 1)
            
            return result

void** x0_11 = __cxa_allocate_exception(0x20)
Botan::CBC_Mode::name()
int128_t* x0_14
int128_t v0_2
x0_14, v0_2 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
    &var_88)
int64_t var_60_1 = x0_14[1].q
var_70 = *x0_14
__builtin_memset(x0_14, 0, 0x18)
std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
    "Encoding error: ", &var_70)
*x0_11 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0_11[1])
*x0_11 = _vtable_for_Botan::Invalid_Argument + 0x10

if ((zx.d(var_58) & 1) != 0)
    operator delete(var_48)

*x0_11 = _vtable_for_Botan::Encoding_Error + 0x10
__cxa_throw(x0_11, _typeinfo_for_Botan::Encoding_Error, Botan::Exception::~Exception)
noreturn
