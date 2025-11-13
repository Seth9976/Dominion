// 函数: _ZNK5Botan3TLS18Certificate_Verify9serializeEv
// 地址: 0xe43b2c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint8_t** entry_x8
__builtin_memset(entry_x8, 0, 0x18)
void* entry_x0
uint32_t x22 = zx.d(*(entry_x0 + 0x20))

if (x22 != 0)
    uint8_t* x0 = operator new(1)
    char* x21_1 = x0
    *x0 = (x22 u>> 8).b
    *entry_x8 = x0
    entry_x8[1] = &x0[1]
    entry_x8[2] = &x0[1]
    char* x0_1
    int128_t v0_1
    int128_t v1_1
    x0_1, v0_1, v1_1 = operator new(2)
    char x9_2 = *x21_1
    v0_1.q = x0_1
    v0_1:8.q = x0_1
    v1_1.q = 2
    v1_1:8.q = 2
    x0_1[1] = x22.b
    *entry_x8 = x0_1
    *x0_1 = x9_2
    *(entry_x8 + 8) = v0_1 + v1_1
    operator delete(x21_1)

int64_t x26 = *(entry_x0 + 0x10) - *(entry_x0 + 8)
int128_t var_80
char var_68
void* var_58

if (x26 u>= 0x10000)
    void** x0_17 = __cxa_allocate_exception(0x20)
    int64_t x0_18
    int128_t v0_3
    x0_18, v0_3 = operator new(0x30)
    int64_t var_70_1 = x0_18
    var_80 = data_71c860
    __builtin_strncpy(x0_18, "Certificate_Verify signature too long to encode", 0x30)
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

uint8_t* x21_2 = entry_x8[1]
int64_t x8_2 = entry_x8[2]
void* x21_3

if (x21_2 u>= x8_2)
    uint8_t* x22_1 = *entry_x8
    size_t x23_1 = x21_2 - x22_1
    
    if (x23_1 + 1 s>= 0)
        void* x8_4 = x8_2 - x22_1
        uint64_t x11_1 = x8_4 << 1
        uint64_t x9_5
        
        if (x11_1 u< x23_1 + 1)
            x9_5 = x23_1 + 1
        else
            x9_5 = x11_1
        
        uint64_t x25_1
        
        x25_1 = x8_4 u< 0x3fffffffffffffff ? x9_5 : 0x7fffffffffffffff
        
        uint8_t* x24_1
        
        if (x25_1 == 0)
            x24_1 = nullptr
        else
            x24_1 = operator new(x25_1)
        
        char* x21_4 = &x24_1[x23_1]
        *x21_4 = (x26 u>> 8).b
        x21_3 = &x21_4[1]
        
        if (x23_1 s>= 1)
            memcpy(x24_1, x22_1, x23_1)
        
        *entry_x8 = x24_1
        entry_x8[1] = x21_3
        entry_x8[2] = &x24_1[x25_1]
        
        if (x22_1 != 0)
            operator delete(x22_1)
            x21_3 = entry_x8[1]
        
        goto label_e43c64
    
    std::__ndk1::__vector_base_common<true>::__throw_length_error()
else
    *x21_2 = (x26 u>> 8).b
    x21_3 = &x21_2[1]
    entry_x8[1] = x21_3
label_e43c64:
    int64_t x8_6 = entry_x8[2]
    void* x21_5
    
    if (x21_3 u< x8_6)
        *x21_3 = (x26.d).b
        x21_5 = x21_3 + 1
        entry_x8[1] = x21_5
    label_e43d00:
        uint8_t* x24_3 = *entry_x8
        int64_t x23_3 = *(entry_x0 + 8)
        void* x25_5 = x21_5 - x24_3
        uint64_t x27 = *(entry_x0 + 0x10) - x23_3 + x25_5
        
        if (entry_x8[2] - x24_3 u< x27)
            uint8_t* x0_12 = operator new(x27)
            x21_5 = x0_12 + x25_5
            
            if (x25_5 s>= 1)
                memcpy(x0_12, x24_3, x25_5)
            
            *entry_x8 = x0_12
            entry_x8[1] = x21_5
            entry_x8[2] = &x0_12[x27]
            
            if (x24_3 != 0)
                operator delete(x24_3)
                x21_5 = entry_x8[1]
                x23_3 = *(entry_x0 + 8)
                *(entry_x0 + 0x10)
        
        return std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >::insert<std::__ndk1::__wrap_iter<uint8_t const*> >(
            entry_x8, x21_5, x23_3)
    
    uint8_t* x22_2 = *entry_x8
    size_t x23_2 = x21_3 - x22_2
    
    if (x23_2 + 1 s>= 0)
        void* x8_7 = x8_6 - x22_2
        uint64_t x11_2 = x8_7 << 1
        uint64_t x9_7
        
        if (x11_2 u< x23_2 + 1)
            x9_7 = x23_2 + 1
        else
            x9_7 = x11_2
        
        uint64_t x25_3
        
        x25_3 = x8_7 u< 0x3fffffffffffffff ? x9_7 : 0x7fffffffffffffff
        
        uint8_t* x24_2
        
        if (x25_3 == 0)
            x24_2 = nullptr
        else
            x24_2 = operator new(x25_3)
        
        void* x21_6 = &x24_2[x23_2]
        *x21_6 = (x26.d).b
        x21_5 = x21_6 + 1
        
        if (x23_2 s>= 1)
            memcpy(x24_2, x22_2, x23_2)
        
        *entry_x8 = x24_2
        entry_x8[1] = x21_5
        entry_x8[2] = &x24_2[x25_3]
        
        if (x22_2 != 0)
            operator delete(x22_2)
            x21_5 = entry_x8[1]
        
        goto label_e43d00
int64_t* x0_25 = std::__ndk1::__vector_base_common<true>::__throw_length_error()
std::exception::~exception()

if ((zx.d(var_68) & 1) != 0)
    operator delete(var_58)

void* var_70

if ((zx.d(var_80.b) & 1) != 0)
    operator delete(var_70)
__cxa_free_exception(entry_x0)
uint8_t* x0_30 = *entry_x8

if (x0_30 != 0)
    entry_x8[1] = x0_30
    operator delete(x0_30)

sub_1101e04(x0_25)
noreturn
