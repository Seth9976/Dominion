// 函数: _ZNK5Botan3TLS20Hello_Verify_Request9serializeEv
// 地址: 0xe4eca0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char** entry_x8
__builtin_memset(entry_x8, 0, 0x18)
char* x0 = operator new(1)
*x0 = 0xfe
*entry_x8 = x0
entry_x8[1] = &x0[1]
entry_x8[2] = &x0[1]
char* x0_1
int128_t v0
int128_t v1
x0_1, v0, v1 = operator new(2)
char x10 = *x0
v0.q = x0_1
v0:8.q = x0_1
v1.q = 2
v1:8.q = 2
*entry_x8 = x0_1
x0_1[1] = 0xff
*x0_1 = x10
*(entry_x8 + 8) = v0 + v1
operator delete(x0)
char* x21_1 = entry_x8[1]
int64_t x8_1 = entry_x8[2]
void* entry_x0
char x26 = (*(entry_x0 + 0x10)).b - (*(entry_x0 + 8)).b
void* x21_2

if (x21_1 u>= x8_1)
    char* x22_1 = *entry_x8
    size_t x23_1 = x21_1 - x22_1
    
    if (x23_1 + 1 s< 0)
        int64_t* x0_14 = std::__ndk1::__vector_base_common<true>::__throw_length_error()
        char* x0_15 = *entry_x8
        
        if (x0_15 != 0)
            entry_x8[1] = x0_15
            operator delete(x0_15)
        
        sub_1101e04(x0_14)
        noreturn
    
    void* x8_2 = x8_1 - x22_1
    uint64_t x11_1 = x8_2 << 1
    uint64_t x9_2
    
    if (x11_1 u< x23_1 + 1)
        x9_2 = x23_1 + 1
    else
        x9_2 = x11_1
    
    uint64_t x25_1
    
    x25_1 = x8_2 u< 0x3fffffffffffffff ? x9_2 : 0x7fffffffffffffff
    
    char* x24_1
    
    if (x25_1 == 0)
        x24_1 = nullptr
    else
        x24_1 = operator new(x25_1)
    
    char* x21_3 = &x24_1[x23_1]
    *x21_3 = x26
    x21_2 = &x21_3[1]
    
    if (x23_1 s>= 1)
        memcpy(x24_1, x22_1, x23_1)
    
    *entry_x8 = x24_1
    entry_x8[1] = x21_2
    entry_x8[2] = &x24_1[x25_1]
    
    if (x22_1 != 0)
        operator delete(x22_1)
        x21_2 = entry_x8[1]
else
    *x21_1 = x26
    x21_2 = &x21_1[1]
    entry_x8[1] = x21_2

char* x24_2 = *entry_x8
int64_t x23_2 = *(entry_x0 + 8)
void* x25_3 = x21_2 - x24_2
uint64_t x27 = *(entry_x0 + 0x10) - x23_2 + x25_3

if (entry_x8[2] - x24_2 u< x27)
    char* x0_8 = operator new(x27)
    x21_2 = x0_8 + x25_3
    
    if (x25_3 s>= 1)
        memcpy(x0_8, x24_2, x25_3)
    
    *entry_x8 = x0_8
    entry_x8[1] = x21_2
    entry_x8[2] = &x0_8[x27]
    
    if (x24_2 != 0)
        operator delete(x24_2)
        x21_2 = entry_x8[1]
        x23_2 = *(entry_x0 + 8)
        *(entry_x0 + 0x10)

return std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >::insert<std::__ndk1::__wrap_iter<uint8_t const*> >(
    entry_x8, x21_2, x23_2)
