// 函数: _ZNK5Botan3TLS12Client_Hello17cookie_input_dataEv
// 地址: 0xe48a98
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
int64_t x23 = entry_x8[1]
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
uint16_t* x1_4 = *(entry_x0 + 0x40)
Botan::TLS::append_tls_length_value<uint16_t, std::__ndk1::allocator<uint8_t> >(entry_x8, x1_4, 
    (*(entry_x0 + 0x48) - x1_4) s>> 1, 2)
uint8_t* x1_5 = *(entry_x0 + 0x58)
return Botan::TLS::append_tls_length_value<uint8_t, std::__ndk1::allocator<uint8_t> >(entry_x8, 
    x1_5, *(entry_x0 + 0x60) - x1_5, 1)
