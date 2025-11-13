// 函数: _ZN5Botan8PEM_Code6decodeERNS_10DataSourceERNSt6__ndk112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEE
// 地址: 0xde9e78
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if ((zx.d(*arg2) & 1) != 0)
    **(arg2 + 0x10) = 0
    *(arg2 + 8) = 0
else
    *arg2 = 0

char var_78 = 0x16
char var_90
__builtin_strcpy(&var_90, "\n-----")
int64_t x22 = 0
int64_t var_77
__builtin_strncpy(&var_77, "-----BEGIN ", 0xc)
char var_d0

while (true)
    if ((**arg1)(arg1, &var_d0, 1) == 0)
        void** x0_16 = __cxa_allocate_exception(0x20)
        int64_t x0_17
        int128_t v0_1
        x0_17, v0_1 = operator new(0x20)
        int64_t var_a0_2 = x0_17
        int128_t var_b0_1 = data_71af80
        __builtin_strncpy(x0_17, "PEM: No PEM header found", 0x19)
        *x0_16 = _vtable_for_Botan::Exception + 0x10
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
            &x0_16[1])
        *x0_16 = _vtable_for_Botan::Decoding_Error + 0x10
        __cxa_throw(x0_16, _typeinfo_for_Botan::Decoding_Error, Botan::Exception::~Exception)
        noreturn
    
    if (zx.d(var_d0) == zx.d((&var_78)[x22 + 1]))
        x22 += 1
        
        if (x22 == 0xb)
            break
    else
        if (x22 u>= 8)
            void** x0_28 = __cxa_allocate_exception(0x20)
            int64_t x0_29
            int128_t v0_3
            x0_29, v0_3 = operator new(0x20)
            int64_t var_a0_4 = x0_29
            int128_t var_b0_3 = data_71aa40
            __builtin_strncpy(x0_29, "PEM: Malformed PEM header", 0x1a)
            *x0_28 = _vtable_for_Botan::Exception + 0x10
            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                &x0_28[1])
            *x0_28 = _vtable_for_Botan::Decoding_Error + 0x10
            __cxa_throw(x0_28, _typeinfo_for_Botan::Decoding_Error, Botan::Exception::~Exception)
            noreturn
        
        x22 = 0

for (int64_t i = 0; i != 5; )
    if ((**arg1)(arg1, &var_d0, 1) == 0)
        void** x0_20 = __cxa_allocate_exception(0x20)
        int64_t x0_21
        int128_t v0_2
        x0_21, v0_2 = operator new(0x20)
        int64_t var_a0_3 = x0_21
        int128_t var_b0_2 = data_71af80
        __builtin_strncpy(x0_21, "PEM: No PEM header found", 0x19)
        *x0_20 = _vtable_for_Botan::Exception + 0x10
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
            &x0_20[1])
        *x0_20 = _vtable_for_Botan::Decoding_Error + 0x10
        __cxa_throw(x0_20, _typeinfo_for_Botan::Decoding_Error, Botan::Exception::~Exception)
        noreturn
    
    uint32_t x1_2 = zx.d(var_d0)
    
    if (x1_2 != zx.d((&var_90)[i + 1]))
        if (i != 0)
            void** x0_32 = __cxa_allocate_exception(0x20, x1_2)
            int64_t x0_33
            int128_t v0_4
            x0_33, v0_4 = operator new(0x20)
            int64_t var_a0_5 = x0_33
            int128_t var_b0_4 = data_71aa40
            __builtin_strncpy(x0_33, "PEM: Malformed PEM header", 0x1a)
            *x0_32 = _vtable_for_Botan::Exception + 0x10
            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                &x0_32[1])
            *x0_32 = _vtable_for_Botan::Decoding_Error + 0x10
            __cxa_throw(x0_32, _typeinfo_for_Botan::Decoding_Error, Botan::Exception::~Exception)
            noreturn
        
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::push_back(
            arg2.b)
        i = 0
    else
        int64_t i_1 = i
        i += 1
        
        if (i_1 u>= -1)
            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::push_back(
                arg2.b)
            i = 0

int128_t var_b0
__builtin_memset(&var_b0, 0, 0x18)
std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
    "-----END ", arg2)
char var_f0[0x10]
int128_t* x0_6
int128_t v0
x0_6, v0 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
    &var_f0)
void* x8_9 = x0_6[1].q
int64_t x8
int64_t var_108 = x8
var_d0.o = *x0_6
__builtin_memset(x0_6, 0, 0x18)
void* var_e0

if ((zx.d(var_f0[0]) & 1) != 0)
    operator delete(var_e0)
uint64_t x10 = zx.q(var_d0)
uint64_t x26
uint64_t var_c8

if ((x10.d & 1) == 0)
    x26 = x10 u>> 1
else
    x26 = var_c8
int32_t var_100 = x10.d

if (x26 != 0)
    void* x21_1 = nullptr
    void* x28_1
    
    if ((var_100 & 1) == 0)
        x28_1 = &var_d0 | 1
    else
        x28_1 = x8_9
    
    do
        char var_f4
        
        if ((**arg1)(arg1, &var_f4, 1) == 0)
            void** x0_24 = __cxa_allocate_exception(0x20)
            int64_t x0_25 = operator new(0x20)
            int64_t var_e0_1 = x0_25
            __builtin_memcpy(&var_f0, 
                "\x21\x00\x00\x00\x00\x00\x00\x00\x19\x00\x00\x00\x00\x00\x00\x00", 0x10)
            __builtin_strncpy(x0_25, "PEM: No PEM trailer found", 0x1a)
            *x0_24 = _vtable_for_Botan::Exception + 0x10
            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                &x0_24[1])
            *x0_24 = _vtable_for_Botan::Decoding_Error + 0x10
            __cxa_throw(x0_24, _typeinfo_for_Botan::Decoding_Error, Botan::Exception::~Exception)
            noreturn
        
        uint32_t x19_1 = zx.d(var_f4)
        
        if (x19_1 != zx.d(*(x28_1 + x21_1)))
            if (x21_1 == 0)
                goto label_dea0ac
            
            void** x0_36 = __cxa_allocate_exception(0x20)
            int64_t x0_37 = operator new(0x20)
            int64_t var_e0_2 = x0_37
            __builtin_memcpy(&var_f0, 
                "\x21\x00\x00\x00\x00\x00\x00\x00\x1a\x00\x00\x00\x00\x00\x00\x00", 0x10)
            __builtin_strncpy(x0_37, "PEM: Malformed PEM trailer", 0x1b)
            *x0_36 = _vtable_for_Botan::Exception + 0x10
            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                &x0_36[1])
            *x0_36 = _vtable_for_Botan::Decoding_Error + 0x10
            __cxa_throw(x0_36, _typeinfo_for_Botan::Decoding_Error, Botan::Exception::~Exception)
            noreturn
        
        void* temp1_1 = x21_1
        x21_1 += 1
        
        if (temp1_1 u>= -1)
        label_dea0ac:
            uint8_t* x8_17 = var_b0:8.q
            void* var_a0_1
            
            if (x8_17 u< var_a0_1)
                *x8_17 = x19_1.b
                x21_1 = nullptr
                var_b0:8.q = &x8_17[1]
            else
                x21_1 = var_b0.q
                size_t x22_1 = x8_17 - x21_1
                
                if (x22_1 + 1 s< 0)
                    int64_t* x0_40 = std::__ndk1::__vector_base_common<true>::__throw_length_error()
                    
                    if ((var_100 & 1) != 0)
                        operator delete(x8_9)
                    
                    void* x0_42 = var_b0.q
                    
                    if (x0_42 != 0)
                        var_b0:8.q = x0_42
                        operator delete(x0_42)
                    
                    sub_1101e04(x0_40)
                    noreturn
                
                void* x9_6 = var_a0_1 - x21_1
                int64_t x10_2 = x9_6 << 1
                int64_t x8_19
                
                if (x10_2 u< x22_1 + 1)
                    x8_19 = x22_1 + 1
                else
                    x8_19 = x10_2
                
                int64_t x23_1
                
                x23_1 = x9_6 u< 0x3fffffffffffffff ? x8_19 : 0x7fffffffffffffff
                
                void* const x24_1
                void* x25_2
                
                if (x23_1 == 0)
                    x24_1 = nullptr
                    *x22_1 = x19_1.b
                    x25_2 = x22_1 + 1
                    
                    if (x22_1 s>= 1)
                        memcpy(x24_1, x21_1, x22_1)
                else
                    x24_1 = operator new(x23_1)
                    uint8_t* x25_1 = x24_1 + x22_1
                    *x25_1 = x19_1.b
                    x25_2 = &x25_1[1]
                    
                    if (x22_1 s>= 1)
                        memcpy(x24_1, x21_1, x22_1)
                
                var_b0.q = x24_1
                var_b0:8.q = x25_2
                var_a0_1 = x24_1 + x23_1
                
                if (x21_1 != 0)
                    operator delete(x21_1)
                    x21_1 = nullptr
    while (x21_1 != x26)

char* x0_14 = var_b0.q
Botan::base64_decode(x0_14, var_b0:8.q - x0_14, true)

if ((var_100 & 1) != 0)
    operator delete(x8_9)

void* result = var_b0.q

if (result == 0)
    return result

var_b0:8.q = result
return operator delete(result)
