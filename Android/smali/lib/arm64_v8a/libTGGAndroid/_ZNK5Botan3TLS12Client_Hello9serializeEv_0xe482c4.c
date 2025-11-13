// 函数: _ZNK5Botan3TLS12Client_Hello9serializeEv
// 地址: 0xe482c4
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

if (zx.d(*(entry_x0 + 9)) u>= 0xfb)
    uint8_t* x1_4 = *(entry_x0 + 0x70)
    Botan::TLS::append_tls_length_value<uint8_t, std::__ndk1::allocator<uint8_t> >(entry_x8, x1_4, 
        *(entry_x0 + 0x78) - x1_4, 1)

uint16_t* x1_5 = *(entry_x0 + 0x40)
Botan::TLS::append_tls_length_value<uint16_t, std::__ndk1::allocator<uint8_t> >(entry_x8, x1_5, 
    (*(entry_x0 + 0x48) - x1_5) s>> 1, 2)
uint8_t* x1_6 = *(entry_x0 + 0x58)
Botan::TLS::append_tls_length_value<uint8_t, std::__ndk1::allocator<uint8_t> >(entry_x8, x1_6, 
    *(entry_x0 + 0x60) - x1_6, 1)
Botan::TLS::Extensions::serialize(entry_x0 + 0x88)
uint8_t* x22_2 = *entry_x8
void* x23_1 = entry_x8[1]
size_t x24_1 = x23_1 - x22_2
void* var_68
int64_t var_60
uint64_t x25_1 = var_60 - var_68 + x24_1

if (entry_x8[2] - x22_2 u< x25_1)
    uint8_t* x0_14 = operator new(x25_1)
    x23_1 = &x0_14[x24_1]
    
    if (x24_1 s>= 1)
        memcpy(x0_14, x22_2, x24_1)
    
    *entry_x8 = x0_14
    entry_x8[1] = x23_1
    entry_x8[2] = &x0_14[x25_1]
    
    if (x22_2 != 0)
        operator delete(x22_2)
        x23_1 = entry_x8[1]

int64_t result = std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >::insert<std::__ndk1::__wrap_iter<uint8_t const*> >(
    entry_x8, x23_1, var_68)

if (var_68 == 0)
    return result

return operator delete(var_68)
