// 函数: _ZNK5Botan3TLS18Certificate_Status9serializeEv
// 地址: 0xe426ec
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* entry_x0
int64_t x26 = *(entry_x0 + 0x10) - *(entry_x0 + 8)
int128_t var_80
char var_68
void* var_58

if (x26 u>> 0x18 != 0)
    void** x0_17 = __cxa_allocate_exception(0x20)
    int64_t x0_18
    int128_t v0_2
    x0_18, v0_2 = operator new(0x30)
    int64_t var_70_1 = x0_18
    var_80 = data_71c500
    __builtin_strncpy(x0_18, "OCSP response too long to encode in TLS", 0x28)
    std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
        "Encoding error: ", &var_80)
    *x0_17 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_17[1])
    *x0_17 = _vtable_for_Botan::Invalid_Argument + 0x10
    
    if ((zx.d(var_68) & 1) != 0)
        operator delete(var_58)
    
    *x0_17 = _vtable_for_Botan::Encoding_Error + 0x10
    __cxa_throw(x0_17, _typeinfo_for_Botan::Encoding_Error, Botan::Exception::~Exception)
    noreturn

char** entry_x8
__builtin_memset(entry_x8, 0, 0x18)
char* x0 = operator new(1)
*x0 = 1
*entry_x8 = x0
entry_x8[1] = &x0[1]
entry_x8[2] = &x0[1]
char* x0_1
int128_t v0
int128_t v1
x0_1, v0, v1 = operator new(2)
char x10_1 = *x0
v0.q = x0_1
v0:8.q = x0_1
v1.q = 2
v1:8.q = 2
*entry_x8 = x0_1
x0_1[1] = (x26 u>> 0x10).b
*x0_1 = x10_1
*(entry_x8 + 8) = v0 + v1
operator delete(x0)
uint8_t* x21_1 = entry_x8[1]
int64_t x8_2 = entry_x8[2]
void* x21_2

if (x21_1 u>= x8_2)
    char* x22_1 = *entry_x8
    size_t x23_1 = x21_1 - x22_1
    
    if (x23_1 + 1 s>= 0)
        void* x8_4 = x8_2 - x22_1
        uint64_t x11_1 = x8_4 << 1
        uint64_t x9_3
        
        if (x11_1 u< x23_1 + 1)
            x9_3 = x23_1 + 1
        else
            x9_3 = x11_1
        
        uint64_t x25_1
        
        x25_1 = x8_4 u< 0x3fffffffffffffff ? x9_3 : 0x7fffffffffffffff
        
        char* x24_1
        
        if (x25_1 == 0)
            x24_1 = nullptr
        else
            x24_1 = operator new(x25_1)
        
        char* x21_3 = &x24_1[x23_1]
        *x21_3 = (x26 u>> 8).b
        x21_2 = &x21_3[1]
        
        if (x23_1 s>= 1)
            memcpy(x24_1, x22_1, x23_1)
        
        *entry_x8 = x24_1
        entry_x8[1] = x21_2
        entry_x8[2] = &x24_1[x25_1]
        
        if (x22_1 != 0)
            operator delete(x22_1)
            x21_2 = entry_x8[1]
        
        goto label_e42820
else
    *x21_1 = (x26 u>> 8).b
    x21_2 = &x21_1[1]
    entry_x8[1] = x21_2
label_e42820:
    int64_t x8_6 = entry_x8[2]
    void* x21_4
    char* x22_2
    
    if (x21_2 u< x8_6)
        *x21_2 = (x26.d).b
        x21_4 = x21_2 + 1
        entry_x8[1] = x21_4
    label_e428bc:
        x22_2 = *entry_x8
    label_e428c0:
        int64_t x24_3 = *(entry_x0 + 8)
        size_t x25_5 = x21_4 - x22_2
        uint64_t x27 = *(entry_x0 + 0x10) - x24_3 + x25_5
        
        if (entry_x8[2] - x22_2 u< x27)
            char* x0_12 = operator new(x27)
            x21_4 = &x0_12[x25_5]
            
            if (x25_5 s>= 1)
                memcpy(x0_12, x22_2, x25_5)
            
            *entry_x8 = x0_12
            entry_x8[1] = x21_4
            entry_x8[2] = &x0_12[x27]
            
            if (x22_2 != 0)
                operator delete(x22_2)
                x21_4 = entry_x8[1]
                x24_3 = *(entry_x0 + 8)
                *(entry_x0 + 0x10)
        
        return std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >::insert<std::__ndk1::__wrap_iter<uint8_t const*> >(
            entry_x8, x21_4, x24_3)
    
    char* x23_2 = *entry_x8
    void* x24_2 = x21_2 - x23_2
    
    if (x24_2 + 1 s>= 0)
        void* x8_7 = x8_6 - x23_2
        void* x11_2 = x8_7 << 1
        void* x9_5
        
        if (x11_2 u< x24_2 + 1)
            x9_5 = x24_2 + 1
        else
            x9_5 = x11_2
        
        void* x25_3
        
        x25_3 = x8_7 u< 0x3fffffffffffffff ? x9_5 : 0x7fffffffffffffff
        
        if (x25_3 == 0)
            x22_2 = nullptr
        else
            x22_2 = operator new(x25_3)
        
        char* x21_5 = x22_2 + x24_2
        *x21_5 = (x26.d).b
        x21_4 = &x21_5[1]
        
        if (x24_2 s>= 1)
            memcpy(x22_2, x23_2, x24_2)
        
        *entry_x8 = x22_2
        entry_x8[1] = x21_4
        entry_x8[2] = x22_2 + x25_3
        
        if (x23_2 == 0)
            goto label_e428c0
        
        operator delete(x23_2)
        x21_4 = entry_x8[1]
        goto label_e428bc
int64_t* x0_24 = std::__ndk1::__vector_base_common<true>::__throw_length_error()
std::exception::~exception()

if ((zx.d(var_68) & 1) != 0)
    operator delete(var_58)

void* var_70

if ((zx.d(var_80.b) & 1) != 0)
    operator delete(var_70)
__cxa_free_exception(entry_x8)
sub_1101e04(x0_24)
noreturn
