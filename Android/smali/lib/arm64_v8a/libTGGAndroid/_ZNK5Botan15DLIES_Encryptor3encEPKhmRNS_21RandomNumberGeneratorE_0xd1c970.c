// 函数: _ZNK5Botan15DLIES_Encryptor3encEPKhmRNS_21RandomNumberGeneratorE
// 地址: 0xd1c970
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

Botan::RandomNumberGenerator& x21 = arg3
uint64_t x2 = *(arg1 + 8)
int64_t x9 = *(arg1 + 0x10)
int128_t var_80

if (x2 == x9)
    void** x0_35 = __cxa_allocate_exception(0x20)
    int64_t x0_36
    int128_t v0_3
    x0_36, v0_3 = operator new(0x30)
    v0_3 = data_71d3f0
    int64_t var_70_3 = x0_36
    __builtin_strncpy(x0_36, "DLIES: The other key was never set", 0x23)
    var_80 = v0_3
    *x0_35 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_35[1])
    *x0_35 = _vtable_for_Botan::Invalid_State + 0x10
    __cxa_throw(x0_35, _typeinfo_for_Botan::Invalid_State, Botan::Exception::~Exception)
    noreturn

uint8_t const* x20 = arg1
var_80.w = 0
Botan::PK_Key_Agreement::derive_key(&arg1[0x38], nullptr, x2, x9 - x2, &var_80 | 1)
void* var_70

if ((zx.d(var_80.b) & 1) != 0)
    operator delete(var_70)
Botan::RandomNumberGenerator& x26 = x21

if (*(x20 + 0x48) != 0)
    x26 = *(x20 + 0x50)

void* x27 = *(x20 + 0x60)
uint64_t x22 = *(x20 + 0x40)
__builtin_memset(&var_80, 0, 0x18)
void* result
int64_t var_90
uint64_t x24 = var_90 - result
uint64_t var_70_1
uint64_t x8_4
uint64_t x25_1

if (var_90 == result)
    x8_4 = 0
    x25_1 = 0
else
    if ((x24 & 0xffffffff80000000) != 0)
        goto label_d1d198
    
    uint64_t x0_3 = Botan::allocate_memory(x24, 1)
    x25_1 = x0_3
    var_80.q = x0_3
    var_80:8.q = x0_3
    size_t x24_1 = var_90 - result
    x8_4 = x0_3
    var_70_1 = x0_3 + x24
    
    if (x24_1 s>= 1)
        memcpy(x25_1, result, x24_1)
        x8_4 = x25_1 + x24_1
    
    var_80:8.q = x8_4

void* x24_2 = x27 + x26
int16_t var_d0 = 0
int16_t var_f0 = 0
int128_t v0_1
int128_t v1_1
int128_t v2_1
int128_t v3_1
int128_t v4_1
int128_t v5_1
int128_t v6_1
int128_t v7_1
v0_1, v1_1, v2_1, v3_1, v4_1, v5_1, v6_1, v7_1 =
    Botan::KDF::derive_key(x22, x24_2, x25_1, x8_4 - x25_1, &var_d0 | 1, nullptr, &var_f0 | 1)

if ((zx.d(var_f0.b) & 1) == 0)
    if ((zx.d(var_d0.b) & 1) != 0)
        goto label_d1cac8
    
    goto label_d1caa8

void* var_e0
v0_1, v1_1, v2_1, v3_1, v4_1, v5_1, v6_1, v7_1 = operator delete(var_e0)
void* var_c0
void* x0_8

if ((zx.d(var_d0.b) & 1) == 0)
label_d1caa8:
    x0_8 = var_80.q
    
    if (x0_8 != 0)
        var_80:8.q = x0_8
        v0_1, v1_1, v2_1, v3_1, v4_1, v5_1, v6_1, v7_1 =
            Botan::deallocate_memory(x0_8, var_70_1 - x0_8, 1)
else
label_d1cac8:
    v0_1, v1_1, v2_1, v3_1, v4_1, v5_1, v6_1, v7_1 = operator delete(var_c0)
    x0_8 = var_80.q
    
    if (x0_8 != 0)
        var_80:8.q = x0_8
        v0_1, v1_1, v2_1, v3_1, v4_1, v5_1, v6_1, v7_1 =
            Botan::deallocate_memory(x0_8, var_70_1 - x0_8, 1)
uint8_t* var_b0
int64_t var_a8

if (var_a8 - var_b0 != x24_2)
    void** x0_40 = __cxa_allocate_exception(0x20)
    int64_t x0_41
    int128_t v0_4
    x0_41, v0_4 = operator new(0x30)
    int64_t var_c0_1 = x0_41
    var_d0.o = data_71abd0
    __builtin_strncpy(x0_41, "DLIES: KDF did not provide sufficient output", 0x2d)
    std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
        "Encoding error: ", &var_d0)
    *x0_40 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_40[1])
    *x0_40 = _vtable_for_Botan::Invalid_Argument + 0x10
    
    if ((zx.d(var_80.b) & 1) != 0)
        operator delete(var_70_1)
    
    *x0_40 = _vtable_for_Botan::Encoding_Error + 0x10
    __cxa_throw(x0_40, _typeinfo_for_Botan::Encoding_Error, Botan::Exception::~Exception)
    noreturn

__builtin_memset(&var_80, 0, 0x18)
void* var_70_2
void* x22_1

if (x21 != 0)
    if ((x21 & 0xffffffff80000000) != 0)
        goto label_d1d1a0
    
    void* x0_10 = Botan::allocate_memory(x21, 1)
    void* x24_3 = x0_10 + x21
    x22_1 = x0_10
    var_80.q = x0_10
    var_70_2 = x24_3
    v0_1, v1_1, v2_1, v3_1, v4_1, v5_1, v6_1, v7_1 = memcpy(x0_10, arg2, x21)
    var_80:8.q = x24_3
    
    if (*(x20 + 0x48) == 0)
        goto label_d1cc20
    
    goto label_d1cb3c

x22_1 = nullptr
uint8_t* x8_23

if (*(x20 + 0x48) == 0)
label_d1cc20:
    x8_23 = var_b0
    void* x9_6 = x21 & 0xffffffffffffffe0
    
    if (x9_6 != 0)
        int64_t x10_1 = 0
        
        if (x9_6 == 0x20 || x22_1 + 0x18 + x9_6 - 0x20 u< x22_1 + 0x18
                || x22_1 + 0x10 + x9_6 - 0x20 u< x22_1 + 0x10
                || x22_1 + 8 + x9_6 - 0x20 u< x22_1 + 8 || x22_1 + x9_6 - 0x20 u< x22_1)
            goto label_d1cce0
        
        if (x22_1 u>= x8_23 + x9_6 || x8_23 u>= x22_1 + x9_6)
            int64_t i_9 = (((x9_6 - 0x20) u>> 5) + 1) & 0xffffffffffffffe
            x10_1 = i_9 << 5
            int64_t i_6 = i_9
            uint8_t* x14_2 = x8_23
            void* x15_2 = x22_1
            int64_t i
            
            do
                v0_1.q = *x15_2
                v1_1.q = *(x15_2 + 8)
                v2_1.q = *(x15_2 + 0x10)
                v3_1.q = *(x15_2 + 0x18)
                v0_1:8.q = *(x15_2 + 0x20)
                v1_1:8.q = *(x15_2 + 0x28)
                v2_1:8.q = *(x15_2 + 0x30)
                v3_1:8.q = *(x15_2 + 0x38)
                v4_1.q = *x14_2
                v5_1.q = *(x14_2 + 8)
                v6_1.q = *(x14_2 + 0x10)
                v7_1.q = *(x14_2 + 0x18)
                v4_1:8.q = *(x14_2 + 0x20)
                v5_1:8.q = *(x14_2 + 0x28)
                v6_1:8.q = *(x14_2 + 0x30)
                v7_1:8.q = *(x14_2 + 0x38)
                x14_2 = &x14_2[0x40]
                i = i_6
                i_6 -= 2
                int128_t v16_1 = v4_1 ^ v0_1
                int128_t v17_1 = v5_1 ^ v1_1
                int128_t v18_1 = v6_1 ^ v2_1
                int128_t v19_1 = v7_1 ^ v3_1
                *x15_2 = v16_1.q
                *(x15_2 + 8) = v17_1.q
                *(x15_2 + 0x10) = v18_1.q
                *(x15_2 + 0x18) = v19_1.q
                *(x15_2 + 0x20) = v16_1:8.q
                *(x15_2 + 0x28) = v17_1:8.q
                *(x15_2 + 0x30) = v18_1:8.q
                *(x15_2 + 0x38) = v19_1:8.q
                x15_2 += 0x40
            while (i != 2)
            
            if (((x9_6 - 0x20) u>> 5) + 1 != i_9)
                goto label_d1cce0
        else
            x10_1 = 0
        label_d1cce0:
            void* i_4 = x10_1 - x9_6
            void* x10_5 = &x8_23[x10_1 + 0x10]
            void* x12_4 = x22_1 + x10_1 + 0x10
            void* i_1
            
            do
                v2_1 = *(x10_5 - 0x10)
                v3_1 = *x10_5
                i_1 = i_4
                i_4 += 0x20
                x10_5 += 0x20
                v1_1 = v3_1 ^ *x12_4
                *(x12_4 - 0x10) ^= v2_1
                *x12_4 = v1_1
                x12_4 += 0x20
            while (i_1 != -0x20)
    
    if (x9_6 != x21)
        void* x10_8
        
        if ((x21 & 0x18) == 0)
            x10_8 = x9_6
        label_d1cd98:
            
            do
                *(x22_1 + x10_8) ^= *(x8_23 + x10_8)
                x10_8 += 1
            while (x21 != x10_8)
        else
            if (x22_1 + x9_6 u< x8_23 + x21 && x8_23 + x9_6 u< x22_1 + x21)
                x10_8 = x9_6
                goto label_d1cd98
            
            void* x11_5 = x21 & 7
            void* i_5 = (x21 & 0x1f) - x11_5
            x10_8 = x9_6 + i_5
            void* i_2
            
            do
                v0_1.q = *(x8_23 + x9_6)
                v1_1.q = *(x22_1 + x9_6)
                i_2 = i_5
                i_5 -= 8
                *(x22_1 + x9_6) = (v1_1 ^ v0_1).q
                x9_6 += 8
            while (i_2 != 8)
            
            if (x11_5 != 0)
                goto label_d1cd98
    
    goto label_d1cd9c

label_d1cb3c:
x21 = *(x20 + 0x50)
__builtin_memset(&var_d0, 0, 0x18)
std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::assign<uint8_t const*>(&var_d0, 
    var_b0)
Botan::SymmetricAlgorithm::set_key(*(x20 + 0x48), var_d0.q)
int32_t x0_14

if (*(x20 + 0x70) == *(x20 + 0x68))
    int64_t* x0_13 = *(x20 + 0x48)
    x0_14 = (*(*x0_13 + 0x68))(x0_13, 0)

if (*(x20 + 0x70) != *(x20 + 0x68) || (x0_14 & 1) != 0)
    int64_t* x23_1 = *(x20 + 0x48)
    std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::vector(&var_f0)
    int64_t x1_7 = var_f0.q
    int64_t var_e8
    (*(*x23_1 + 0x30))(x23_1, x1_7, var_e8 - x1_7)
    void* x0_17 = var_f0.q
    
    if (x0_17 != 0)
        void* var_e8_1 = x0_17
        Botan::deallocate_memory(x0_17, var_e0 - x0_17, 1)
    
    int64_t* x0_18 = *(x20 + 0x48)
    (*(*x0_18 + 0x40))(x0_18, &var_80, 0)
    void* x0_19 = var_d0.q
    void* var_c8
    
    if (x0_19 != 0)
        var_c8 = x0_19
        Botan::deallocate_memory(x0_19, var_c0 - x0_19, 1)
    
    x8_23 = var_b0
label_d1cd9c:
    *(x20 + 0x60)
    Botan::SymmetricAlgorithm::set_key(*(x20 + 0x58) + 8, x8_23 + x21)
    int64_t* x21_1 = *(x20 + 0x58)
    int64_t x1_12 = var_80.q
    (*(*x21_1 + 0x18))(x21_1, x1_12, var_80:8.q - x1_12)
    Botan::Buffered_Computation::final()
    int64_t x1_13 = *(x20 + 0x20)
    int64_t x8_26 = *(x20 + 0x28)
    int64_t x10_10 = var_d0.q
    int64_t x12_5 = var_80.q
    int64_t x11_7 = var_80:8.q
    __builtin_memset(&var_f0, 0, 0x18)
    void* x9_12 = var_c8 - x10_10
    int64_t x10_12 = x8_26 + x11_7 - (x1_13 + x12_5)
    size_t x22_4 = x10_12 + x9_12
    void* x21_2
    void* x23_2
    
    if (x10_12 == neg.q(x9_12))
        x21_2 = nullptr
        x23_2 = nullptr
    else
        if ((x22_4 & 0xffffffff80000000) != 0)
            goto label_d1d1a8
        
        void* x0_24 = Botan::allocate_memory(x22_4, 1)
        x23_2 = x0_24 + x22_4
        x21_2 = x0_24
        var_f0.q = x0_24
        void* var_e0_1 = x23_2
        memset(x0_24, 0, x22_4)
        void* var_e8_2 = x23_2
        x1_13 = *(x20 + 0x20)
        x8_26 = *(x20 + 0x28)
    
    x20 = x23_2 - x21_2
    size_t x22_5 = x8_26 - x1_13
    size_t x2_10
    
    x2_10 = x20 u< x22_5 ? x20 : x22_5
    
    if (x2_10 != 0)
        if (x1_13 == 0)
            goto label_d1d1d0
        
        memmove(x21_2, x1_13, x2_10)
    
    size_t x8_27 = x20 - x22_5
    
    if (x20 u< x22_5)
        Botan::assertion_failure("buf_offset <= buf.size()", &data_793a18, "buffer_insert", 
            "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x46f)
    label_d1d190:
        Botan::assertion_failure("buf_offset <= buf.size()", &data_793a18, "buffer_insert", 
            "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x46f)
    label_d1d198:
        std::__ndk1::__vector_base_common<true>::__throw_length_error()
    label_d1d1a0:
        std::__ndk1::__vector_base_common<true>::__throw_length_error()
    label_d1d1a8:
        std::__ndk1::__vector_base_common<true>::__throw_length_error()
    label_d1d1d0:
        Botan::assertion_failure("n > 0 implies in != nullptr && out != nullptr", 
            "If n > 0 then args are not null", "copy_mem", 
            "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x401)
    label_d1d1f8:
        Botan::assertion_failure("n > 0 implies in != nullptr && out != nullptr", 
            "If n > 0 then args are not null", "copy_mem", 
            "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x401)
        Botan::assertion_failure("n > 0 implies in != nullptr && out != nullptr", 
            "If n > 0 then args are not null", "copy_mem", 
            "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x401)
        std::__ndk1::__vector_base_common<true>::__throw_length_error()
    else
        int64_t x1_14 = var_80.q
        size_t x24_4 = var_80:8.q - x1_14
        size_t x2_11
        
        x2_11 = x8_27 u< x24_4 ? x8_27 : x24_4
        
        if (x2_11 != 0)
            if (x1_14 == 0)
                goto label_d1d1f8
            
            memmove(x21_2 + x22_5, x1_14, x2_11)
        
        int64_t x8_28 = x24_4 + x22_5
        size_t x9_14 = x20 - x8_28
        
        if (x20 u< x8_28)
            goto label_d1d190
        
        void* x22_6 = var_d0.q
        size_t x10_14 = var_c8 - x22_6
        size_t x2_12
        
        x2_12 = x9_14 u< x10_14 ? x9_14 : x10_14
        
        if (x2_12 == 0)
            goto label_d1ceb8
        
        if (x22_6 == 0)
            Botan::assertion_failure("n > 0 implies in != nullptr && out != nullptr", 
                "If n > 0 then args are not null", "copy_mem", 
                "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x401)
            std::__ndk1::__vector_base_common<true>::__throw_length_error()
        else
            memmove(x21_2 + x8_28, x22_6, x2_12)
        label_d1ceb8:
            void** entry_x8
            __builtin_memset(entry_x8, 0, 0x18)
            
            if (x20 == 0)
            label_d1cf4c:
                
                if (x21_2 != 0)
                    void* var_e8_3 = x21_2
                    Botan::deallocate_memory(x21_2, x20, 1)
                    x22_6 = var_d0.q
                
                if (x22_6 != 0)
                    void* var_c8_1 = x22_6
                    Botan::deallocate_memory(x22_6, var_c0 - x22_6, 1)
                
                void* x0_32 = var_80.q
                
                if (x0_32 != 0)
                    var_80:8.q = x0_32
                    Botan::deallocate_memory(x0_32, var_70_2 - x0_32, 1)
                
                if (var_b0 != 0)
                    uint8_t* var_a8_1 = var_b0
                    int64_t var_a0
                    Botan::deallocate_memory(var_b0, var_a0 - var_b0, 1)
                
                if (result == 0)
                    return result
                
                void* result_1 = result
                int64_t var_88
                return Botan::deallocate_memory(result, var_88 - result, 1)
            
            if ((x20 & 0xffffffff80000000) == 0)
                void* x0_29
                int128_t v0_2
                int128_t v1_2
                x0_29, v0_2, v1_2 = operator new(x20)
                *entry_x8 = x0_29
                entry_x8[1] = x0_29
                entry_x8[2] = x0_29 + x20
                void* x9_15
                
                if (x21_2 == x23_2)
                    x9_15 = x0_29
                else
                    void* x8_30 = x21_2
                    void* i_8
                    
                    if (x20 u>= 0x20)
                        i_8 = x20 & 0xffffffffffffffe0
                        void* x11_9 = x21_2 + 0x10
                        x9_15 = x0_29 + i_8
                        x8_30 = x21_2 + i_8
                        void* x12_6 = x0_29 + 0x10
                        void* i_7 = i_8
                        void* i_3
                        
                        do
                            v0_2 = *(x11_9 - 0x10)
                            v1_2 = *x11_9
                            x11_9 += 0x20
                            i_3 = i_7
                            i_7 -= 0x20
                            *(x12_6 - 0x10) = v0_2
                            *x12_6 = v1_2
                            x12_6 += 0x20
                        while (i_3 != 0x20)
                        x0_29 = x9_15
                    
                    if (x20 u< 0x20 || i_8 != x20)
                        x9_15 = x0_29
                        
                        do
                            char x10_15 = *x8_30
                            x8_30 += 1
                            *x9_15 = x10_15
                            x9_15 += 1
                        while (x23_2 != x8_30)
                
                entry_x8[1] = x9_15
                goto label_d1cf4c
            
            std::__ndk1::__vector_base_common<true>::__throw_length_error()

void** x0_47 = __cxa_allocate_exception(0x20)
int64_t* x9_16 = *(x20 + 0x48)
(*(*x9_16 + 0x20))(x9_16)
void var_128
int128_t* x0_50
int128_t v0_5
x0_50, v0_5 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::insert(
    &var_128, nullptr)
int64_t var_100 = x0_50[1].q
int128_t var_110 = *x0_50
__builtin_memset(x0_50, 0, 0x18)
int128_t* x0_52
int128_t v0_6
x0_52, v0_6 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
    &var_110)
int64_t var_e0_2 = x0_52[1].q
var_f0.o = *x0_52
__builtin_memset(x0_52, 0, 0x18)
*x0_47 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0_47[1])
*x0_47 = _vtable_for_Botan::Invalid_Argument + 0x10
__cxa_throw(x0_47, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
noreturn
