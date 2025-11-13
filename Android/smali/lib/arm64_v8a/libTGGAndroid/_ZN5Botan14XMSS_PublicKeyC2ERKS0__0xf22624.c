// 函数: _ZN5Botan14XMSS_PublicKeyC2ERKS0_
// 地址: 0xf22624
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* entry_x26
int64_t* var_40 = entry_x26
char* entry_x25
char* var_38 = entry_x25
char* entry_x24
char* var_30 = entry_x24
char* entry_x21
char* var_18 = entry_x21
int64_t* entry_x1
void* x8 = *entry_x1
*arg1 = x8
*(arg1 + *(x8 - 0x88)) = entry_x1[1]
__builtin_memset(arg1 + 8, 0, 0x18)
void* entry_x2
int64_t x9_1 = *(entry_x2 + 8)
int64_t x8_2 = *(entry_x2 + 0x10)
uint64_t x22 = x8_2 - x9_1

if (x8_2 != x9_1)
    if ((x22 & 0xffffffff80000000) != 0)
        int64_t* x0_11 = std::__ndk1::__vector_base_common<true>::__throw_length_error()
        void* x8_9 = *entry_x26
        
        if (x8_9 != 0)
            int64_t x9_2 = *(arg1 + 0x100)
            *(arg1 + 0xf8) = x8_9
            Botan::deallocate_memory(x8_9, x9_2 - x8_9, 1)
        
        if ((zx.d(*entry_x25) & 1) != 0)
            operator delete(*(arg1 + 0xb0))
        
        if ((zx.d(*entry_x24) & 1) != 0)
            operator delete(*(arg1 + 0x98))
        
        if ((zx.d(*x22) & 1) != 0)
            operator delete(*(arg1 + 0x50))
        
        if ((zx.d(*entry_x21) & 1) != 0)
            operator delete(*(arg1 + 0x38))
        
        void* x0_17 = *(arg1 + 8)
        
        if (x0_17 != 0)
            *(arg1 + 0x10) = x0_17
            operator delete(x0_17)
        
        sub_1101e04(x0_11)
        noreturn
    
    int64_t x0_1 = operator new(x22)
    *(arg1 + 8) = x0_1
    *(arg1 + 0x10) = x0_1
    *(arg1 + 0x18) = x0_1 + x22
    int64_t x1 = *(entry_x2 + 8)
    int64_t x21 = x0_1
    size_t x22_1 = *(entry_x2 + 0x10) - x1
    
    if (x22_1 s>= 1)
        memcpy(x21, x1, x22_1)
        x21 += x22_1
    
    *(arg1 + 0x10) = x21

*(arg1 + 0x20) = *(entry_x2 + 0x20)
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    arg1 + 0x28)
int128_t v0
int128_t v1
v0, v1 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    arg1 + 0x40)
v0 = *(entry_x2 + 0x68)
v1 = *(entry_x2 + 0x58)
*(arg1 + 0x78) = *(entry_x2 + 0x78)
*(arg1 + 0x68) = v0
*(arg1 + 0x58) = v1
*(arg1 + 0x80) = *(entry_x2 + 0x80)
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    arg1 + 0x88)
int128_t v0_1
int128_t v1_1
int128_t v2
v0_1, v1_1, v2 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    arg1 + 0xa0)
v0_1 = *(entry_x2 + 0xb8)
v1_1 = *(entry_x2 + 0xd8)
v2 = *(entry_x2 + 0xc8)
*(arg1 + 0xe8) = *(entry_x2 + 0xe8)
*(arg1 + 0xd8) = v1_1
*(arg1 + 0xc8) = v2
*(arg1 + 0xb8) = v0_1
std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::vector(arg1 + 0xf0)
return std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::vector(arg1 + 0x108)
