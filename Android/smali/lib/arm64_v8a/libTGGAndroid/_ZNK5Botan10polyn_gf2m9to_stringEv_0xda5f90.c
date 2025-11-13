// 函数: _ZNK5Botan10polyn_gf2m9to_stringEv
// 地址: 0xda5f90
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t* entry_x0
int64_t x8 = *(entry_x0 + 8)
int64_t x9_1 = *(entry_x0 + 0x10) - x8
uint32_t x11 = (x9_1 u>> 1).d
int64_t x10 = (x9_1 & 0x1fffffffe) << 0x1f s>> 0x20
int32_t x9_3 = (x11 & x11 s>> 0x1f) - 1

while (true)
    int64_t x11_1 = x10 - 1
    
    if (x10 s< 1)
        break
    
    uint32_t x12_1 = zx.d(*(x8 + (x10 << 1) - 2))
    x10 = x11_1
    
    if (x12_1 != 0)
        x9_3 = x11_1.d
        break

*entry_x0 = x9_3
char* entry_x8
__builtin_memset(entry_x8, 0, 0x18)

if ((x9_3 & 0x80000000) != 0)
    return 

int64_t x22_1 = 0

while (true)
    std::__ndk1::to_string(zx.d(*(x8 + (x22_1 << 1))))
    char var_58
    uint64_t var_48
    uint64_t x1_1
    
    if ((zx.d(var_58) & 1) == 0)
        x1_1 = &var_58 | 1
    else
        x1_1 = var_48
    
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
        entry_x8, x1_1)
    
    if ((zx.d(var_58) & 1) != 0)
        operator delete(var_48)
    
    if (zx.q(x9_3) != x22_1)
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
            entry_x8)
    
    if (zx.q(x9_3 + 1) - 1 == x22_1)
        break
    
    x8 = *(entry_x0 + 8)
    x22_1 += 1
