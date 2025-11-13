// 函数: _ZNK5Botan15ECIES_Decryptor10do_decryptERhPKhm
// 地址: 0xd3c1fc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x25 = *(arg1 + 0x88)
void* x0_1 = Botan::EC_Group::data()
int64_t* x8 = *(arg1 + 0xd0)
int64_t x9_1 = *(x0_1 + 0x1e0) + 7
uint64_t x25_1

if (x25 != 1)
    x25_1 = x9_1 u>> 2 | 1
else
    x25_1 = (x9_1 u>> 3) + 1

int64_t entry_x3

if ((**x8)(x8) + x25_1 u> entry_x3)
    void** x0_37 = __cxa_allocate_exception(0x20)
    int64_t x0_38
    int128_t v0_2
    x0_38, v0_2 = operator new(0x30)
    (*"ext is too short")[0].o
    int64_t var_110 = x0_38
    v0_2 = data_71cbb0
    __builtin_strncpy(x0_38, "ECIES decryption: ciphertext is too short", 0x2a)
    int128_t var_120 = v0_2
    *x0_37 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_37[1])
    *x0_37 = _vtable_for_Botan::Decoding_Error + 0x10
    __cxa_throw(x0_37, _typeinfo_for_Botan::Decoding_Error, Botan::Exception::~Exception)
    noreturn

uint8_t* result_3 = operator new(x25_1)
void* x26 = &result_3[x25_1]
uint8_t* result_1 = result_3
void* var_58 = x26
memcpy(result_3, arg3, x25_1)
uint64_t x25_2 = arg3 + x25_1
int64_t x24_1 = arg3 + entry_x3
int64_t x8_4 = x24_1 - (***(arg1 + 0xd0))()
size_t x23_1 = x8_4 - x25_2
void* var_80_1
__builtin_memset(&var_80_1, 0, 0x18)

if (x8_4 == x25_2)
    goto label_d3c2f8

void* var_140

if ((x23_1 & 0xffffffff80000000) != 0)
    std::__ndk1::__vector_base_common<true>::__throw_length_error()
    std::__ndk1::__vector_base_common<true>::__throw_length_error()
else
    void* x0_8 = operator new(x23_1)
    void* x26_1 = x0_8 + x23_1
    var_80_1 = x0_8
    void* var_70_1 = x26_1
    memcpy(x0_8, x25_2, x23_1)
    void* var_78_1 = x26_1
label_d3c2f8:
    uint64_t x0_10 = (***(arg1 + 0xd0))()
    char* var_98_1
    __builtin_memset(&var_98_1, 0, 0x18)
    
    if (x0_10 == 0)
        goto label_d3c334
    
    if ((x0_10 & 0xffffffff80000000) != 0)
        std::__ndk1::__vector_base_common<true>::__throw_length_error()
    else
        char* x0_12 = operator new(x0_10)
        void* x24_2 = &x0_12[x0_10]
        var_98_1 = x0_12
        void* var_88_1 = x24_2
        memcpy(x0_12, x24_1 - x0_10, x0_10)
        void* var_90_1 = x24_2
    label_d3c334:
        uint8_t* result_4 = result_1
        Botan::OS2ECP(result_4, x26 - result_4, Botan::EC_Group::data())
        int32_t x0_16
        
        if ((zx.d(arg1[0x8c]) & 8) != 0)
            x0_16 = Botan::PointGFp::on_the_curve()
        
        if ((zx.d(arg1[0x8c]) & 8) == 0 || (x0_16 & 1) != 0)
            Botan::ECIES_KA_Operation::derive_secret(&arg1[8], &result_1)
            *(arg1 + 0xc8)
            Botan::SymmetricAlgorithm::set_key(*(arg1 + 0xd0) + 8, var_140 + *(arg1 + 0xa8))
            int64_t* x0_19 = *(arg1 + 0xd0)
            void* x1_6 = var_80_1
            (*(*x0_19 + 0x18))(x0_19, x1_6, var_78_1 - x1_6)
            int64_t x1_7 = *(arg1 + 0xf8)
            int64_t x8_11 = *(arg1 + 0x100)
            
            if (x1_7 != x8_11)
                int64_t* x0_20 = *(arg1 + 0xd0)
                (*(*x0_20 + 0x18))(x0_20, x1_7, x8_11 - x1_7)
            
            *(arg1 + 0xd0)
            Botan::Buffered_Computation::final()
            char* x8_12 = var_98_1
            char* var_158
            char* x9_8 = var_158
            uint8_t var_170 = 0
            void* i_2 = var_90_1 - x8_12
            
            if (var_90_1 != x8_12)
                void* i
                
                do
                    char x11_1 = *x8_12
                    x8_12 = &x8_12[1]
                    char x12_1 = *x9_8
                    x9_8 = &x9_8[1]
                    i = i_2
                    i_2 -= 1
                    var_170 |= x12_1 ^ x11_1
                while (i != 1)
            
            uint32_t x8_13 = zx.d(var_170)
            int32_t x8_14 = (x8_13 - 1) & not.d(x8_13)
            *arg2 = (sx.d(x8_14.b) u>> 7).b
            int64_t* entry_x8
            
            if ((x8_14 & 0x80) != 0)
                uint8_t* x22_1 = *(arg1 + 0xd8)
                *(arg1 + 0xa8)
                void* var_168_1 = nullptr
                int64_t var_160_1 = 0
                var_170.q = 0
                std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::assign<uint8_t const*>(
                    &var_170, var_140)
                Botan::SymmetricAlgorithm::set_key(x22_1, var_170.q)
                void* x0_24 = var_170.q
                
                if (x0_24 != 0)
                    var_168_1 = x0_24
                    Botan::deallocate_memory(x0_24, var_160_1 - x0_24, 1)
                
                int32_t x0_26
                
                if (*(arg1 + 0xe8) == *(arg1 + 0xe0))
                    int64_t* x0_25 = *(arg1 + 0xd8)
                    x0_26 = (*(*x0_25 + 0x68))(x0_25, 0)
                
                if (*(arg1 + 0xe8) == *(arg1 + 0xe0) && (x0_26 & 1) == 0)
                    goto label_d3c77c
                
                int64_t* x23_3 = *(arg1 + 0xd8)
                std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::vector(&var_170)
                int64_t x1_12 = var_170.q
                (*(*x23_3 + 0x30))(x23_3, x1_12, var_168_1 - x1_12)
                void* x0_29 = var_170.q
                
                if (x0_29 != 0)
                    void* var_168_2 = x0_29
                    Botan::deallocate_memory(x0_29, var_160_1 - x0_29, 1)
                
                void* x24_4 = var_80_1
                __builtin_memset(entry_x8, 0, 0x18)
                uint64_t x22_4 = var_78_1 - x24_4
                int64_t* x0_32
                
                if (var_78_1 == x24_4)
                    x0_32 = *(arg1 + 0xd8)
                    (*(*x0_32 + 0x40))(x0_32, entry_x8, 0)
                else
                    if ((x22_4 & 0xffffffff80000000) != 0)
                        std::__ndk1::__vector_base_common<true>::__throw_length_error()
                    label_d3c77c:
                        void** x0_48 = __cxa_allocate_exception(0x20)
                        int64_t* x9_15 = *(arg1 + 0xd8)
                        (*(*x9_15 + 0x20))(x9_15)
                        void var_1a8
                        int128_t* x0_51
                        int128_t v0_3
                        x0_51, v0_3 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::insert(
                            &var_1a8, nullptr)
                        int64_t var_180 = x0_51[1].q
                        int128_t var_190 = *x0_51
                        __builtin_memset(x0_51, 0, 0x18)
                        int128_t* x0_53
                        int128_t v0_4
                        x0_53, v0_4 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
                            &var_190)
                        int64_t var_160_2 = x0_53[1].q
                        var_170.o = *x0_53
                        __builtin_memset(x0_53, 0, 0x18)
                        *x0_48 = _vtable_for_Botan::Exception + 0x10
                        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                            &x0_48[1])
                        *x0_48 = _vtable_for_Botan::Invalid_Argument + 0x10
                        __cxa_throw(x0_48, _typeinfo_for_Botan::Invalid_Argument, 
                            Botan::Exception::~Exception)
                        noreturn
                    
                    void* x0_31
                    int128_t v0_1
                    int128_t v1_1
                    x0_31, v0_1, v1_1 = Botan::allocate_memory(x22_4, 1)
                    *entry_x8 = x0_31
                    entry_x8[1] = x0_31
                    entry_x8[2] = x0_31 + x22_4
                    void* x8_27
                    
                    if (x24_4 == var_78_1)
                        x8_27 = x0_31
                    else if (x22_4 u< 0x20
                        || (x0_31 u< var_78_1 && x24_4 u< var_78_1 + x0_31 - x24_4))
                    label_d3c584:
                        x8_27 = x0_31
                        
                        do
                            char x9_14 = *x24_4
                            x24_4 += 1
                            *x8_27 = x9_14
                            x8_27 += 1
                        while (var_78_1 != x24_4)
                    else
                        int64_t i_4 = x22_4 & 0xffffffffffffffe0
                        void* x10_4 = x24_4 + 0x10
                        x8_27 = x0_31 + i_4
                        x24_4 += i_4
                        void* x11_4 = x0_31 + 0x10
                        int64_t i_3 = i_4
                        int64_t i_1
                        
                        do
                            v0_1 = *(x10_4 - 0x10)
                            v1_1 = *x10_4
                            x10_4 += 0x20
                            i_1 = i_3
                            i_3 -= 0x20
                            *(x11_4 - 0x10) = v0_1
                            *x11_4 = v1_1
                            x11_4 += 0x20
                        while (i_1 != 0x20)
                        x0_31 = x8_27
                        
                        if (x22_4 != i_4)
                            goto label_d3c584
                    
                    entry_x8[1] = x8_27
                    x0_32 = *(arg1 + 0xd8)
                    (*(*x0_32 + 0x40))(x0_32, entry_x8, 0)
            else
                __builtin_memset(entry_x8, 0, 0x18)
            
            if (var_158 != 0)
                char* var_150_1 = var_158
                int64_t var_148
                Botan::deallocate_memory(var_158, var_148 - var_158, 1)
            
            if (var_140 != 0)
                void* var_138_1 = var_140
                int64_t var_130
                Botan::deallocate_memory(var_140, var_130 - var_140, 1)
            
            Botan::PointGFp::~PointGFp()
            char* x0_35 = var_98_1
            
            if (x0_35 != 0)
                char* var_90_2 = x0_35
                operator delete(x0_35)
            
            void* x0_36 = var_80_1
            
            if (x0_36 != 0)
                void* var_78_2 = x0_36
                operator delete(x0_36)
            
            uint8_t* result = result_1
            
            if (result == 0)
                return result
            
            uint8_t* result_2 = result
            return operator delete(result)

void** x0_42 = __cxa_allocate_exception(0x20)
int64_t x0_43
int128_t v2
x0_43, v2 = operator new(0x40)
(*"not on the curve")[0].o
int64_t var_130_1 = x0_43
v2 = data_71b210
__builtin_strncpy(x0_43, "ECIES decryption: received public key is not on the curve", 0x3a)
var_140.o = v2
*x0_42 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0_42[1])
*x0_42 = _vtable_for_Botan::Decoding_Error + 0x10
__cxa_throw(x0_42, _typeinfo_for_Botan::Decoding_Error, Botan::Exception::~Exception)
noreturn
