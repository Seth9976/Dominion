// 函数: _ZNK5Botan3TLS12Server_Hello9serializeEv
// 地址: 0xe507a4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint8_t** entry_x8
__builtin_memset(entry_x8, 0, 0x18)
void* entry_x0
uint32_t x22 = zx.d(*(entry_x0 + 8))
uint8_t* x0 = operator new(1)
char* x21 = x0
*x0 = (x22 u>> 8).b
*entry_x8 = x0
entry_x8[1] = &x0[1]
entry_x8[2] = &x0[1]
char* x0_1
int128_t v0
int128_t v1
x0_1, v0, v1 = operator new(2)
char x9_1 = *x21
v0.q = x0_1
v0:8.q = x0_1
v1.q = 2
v1:8.q = 2
x0_1[1] = x22.b
*entry_x8 = x0_1
*x0_1 = x9_1
*(entry_x8 + 8) = v0 + v1
operator delete(x21)
uint8_t* x24 = *entry_x8
void* x23 = entry_x8[1]
int64_t x22_1 = *(entry_x0 + 0x28)
void* x25 = x23 - x24
void* x27 = *(entry_x0 + 0x30) - x22_1 + x25

if (entry_x8[2] - x24 u< x27)
    uint8_t* x0_4 = operator new(x27)
    x23 = x0_4 + x25
    
    if (x25 s>= 1)
        memcpy(x0_4, x24, x25)
    
    *entry_x8 = x0_4
    entry_x8[1] = x23
    entry_x8[2] = x0_4 + x27
    
    if (x24 != 0)
        operator delete(x24)
        x23 = entry_x8[1]
        x22_1 = *(entry_x0 + 0x28)
        *(entry_x0 + 0x30)

std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >::insert<std::__ndk1::__wrap_iter<uint8_t const*> >(
    entry_x8, x23, x22_1)
uint8_t* x1_3 = *(entry_x0 + 0x10)
Botan::TLS::append_tls_length_value<uint8_t, std::__ndk1::allocator<uint8_t> >(entry_x8, x1_3, 
    *(entry_x0 + 0x18) - x1_3, 1)
uint8_t* x25_1 = entry_x8[1]
int64_t x8_4 = entry_x8[2]
uint32_t x26_2 = zx.d(*(entry_x0 + 0x40))
void* x25_2

if (x25_1 u>= x8_4)
    uint8_t* x21_2 = *entry_x8
    size_t x22_2 = x25_1 - x21_2
    
    if (x22_2 + 1 s< 0)
        std::__ndk1::__vector_base_common<true>::__throw_length_error()
    label_e50b5c:
        std::__ndk1::__vector_base_common<true>::__throw_length_error()
    label_e50b64:
        int64_t* x0_31 = std::__ndk1::__vector_base_common<true>::__throw_length_error()
        uint8_t* x0_32 = *entry_x8
        
        if (x0_32 == 0)
            sub_1101e04(x0_31)
            noreturn
        
        entry_x8[1] = x0_32
        operator delete(x0_32)
        sub_1101e04(x0_31)
        noreturn
    
    void* x8_6 = x8_4 - x21_2
    uint64_t x11_1 = x8_6 << 1
    uint64_t x9_4
    
    if (x11_1 u< x22_2 + 1)
        x9_4 = x22_2 + 1
    else
        x9_4 = x11_1
    
    uint64_t x24_1
    
    x24_1 = x8_6 u< 0x3fffffffffffffff ? x9_4 : 0x7fffffffffffffff
    
    uint8_t* x23_1
    
    if (x24_1 == 0)
        x23_1 = nullptr
    else
        x23_1 = operator new(x24_1)
    
    uint8_t* x25_3 = &x23_1[x22_2]
    *x25_3 = (x26_2 u>> 8).b
    x25_2 = &x25_3[1]
    
    if (x22_2 s>= 1)
        memcpy(x23_1, x21_2, x22_2)
    
    *entry_x8 = x23_1
    entry_x8[1] = x25_2
    entry_x8[2] = &x23_1[x24_1]
    
    if (x21_2 != 0)
        operator delete(x21_2)
        x25_2 = entry_x8[1]
    
    goto label_e50960

*x25_1 = (x26_2 u>> 8).b
x25_2 = &x25_1[1]
entry_x8[1] = x25_2
label_e50960:
int64_t x8_8 = entry_x8[2]
char x26_3 = (*(entry_x0 + 0x40)).b
void* x25_4

if (x25_2 u>= x8_8)
    uint8_t* x21_3 = *entry_x8
    size_t x22_3 = x25_2 - x21_3
    
    if (x22_3 + 1 s< 0)
        goto label_e50b5c
    
    void* x8_9 = x8_8 - x21_3
    uint64_t x11_2 = x8_9 << 1
    uint64_t x9_6
    
    if (x11_2 u< x22_3 + 1)
        x9_6 = x22_3 + 1
    else
        x9_6 = x11_2
    
    uint64_t x24_3
    
    x24_3 = x8_9 u< 0x3fffffffffffffff ? x9_6 : 0x7fffffffffffffff
    
    uint8_t* x23_2
    
    if (x24_3 == 0)
        x23_2 = nullptr
    else
        x23_2 = operator new(x24_3)
    
    char* x25_5 = &x23_2[x22_3]
    *x25_5 = x26_3
    x25_4 = &x25_5[1]
    
    if (x22_3 s>= 1)
        memcpy(x23_2, x21_3, x22_3)
    
    *entry_x8 = x23_2
    entry_x8[1] = x25_4
    entry_x8[2] = &x23_2[x24_3]
    
    if (x21_3 != 0)
        operator delete(x21_3)
        x25_4 = entry_x8[1]
else
    *x25_2 = x26_3
    x25_4 = x25_2 + 1
    entry_x8[1] = x25_4

if (x25_4 == entry_x8[2])
    uint8_t* x21_4 = *entry_x8
    size_t x22_4 = x25_4 - x21_4
    
    if (x22_4 + 1 s< 0)
        goto label_e50b64
    
    int64_t x9_7 = x22_4 << 1
    int64_t x8_13
    
    if (x9_7 u< x22_4 + 1)
        x8_13 = x22_4 + 1
    else
        x8_13 = x9_7
    
    int64_t x24_5
    
    x24_5 = x22_4 u< 0x3fffffffffffffff ? x8_13 : 0x7fffffffffffffff
    
    uint8_t* x23_3
    
    if (x24_5 == 0)
        x23_3 = nullptr
    else
        x23_3 = operator new(x24_5)
    
    void* x25_7 = &x23_3[x22_4]
    *x25_7 = *(entry_x0 + 0x42)
    
    if (x22_4 s>= 1)
        memcpy(x23_3, x21_4, x22_4)
    
    *entry_x8 = x23_3
    entry_x8[1] = x25_7 + 1
    entry_x8[2] = &x23_3[x24_5]
    
    if (x21_4 != 0)
        operator delete(x21_4)
else
    *x25_4 = *(entry_x0 + 0x42)
    entry_x8[1] = x25_4 + 1

Botan::TLS::Extensions::serialize(entry_x0 + 0x48)
uint8_t* x22_5 = *entry_x8
void* x23_4 = entry_x8[1]
void* x24_7 = x23_4 - x22_5
void* var_68
int64_t var_60
void* x25_9 = var_60 - var_68 + x24_7

if (entry_x8[2] - x22_5 u< x25_9)
    uint8_t* x0_23 = operator new(x25_9)
    x23_4 = x0_23 + x24_7
    
    if (x24_7 s>= 1)
        memcpy(x0_23, x22_5, x24_7)
    
    *entry_x8 = x0_23
    entry_x8[1] = x23_4
    entry_x8[2] = x0_23 + x25_9
    
    if (x22_5 != 0)
        operator delete(x22_5)
        x23_4 = entry_x8[1]

int64_t result = std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >::insert<std::__ndk1::__wrap_iter<uint8_t const*> >(
    entry_x8, x23_4, var_68)

if (var_68 == 0)
    return result

return operator delete(var_68)
