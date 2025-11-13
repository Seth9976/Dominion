// 函数: _ZN5Botan9Skein_5127ubi_512EPKhm
// 地址: 0xe27b8c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x21 = arg2
int64_t entry_x2
int64_t x20 = entry_x2
void* x0 = Botan::allocate_memory(8, 8)
void* var_60 = x0 + 0x40
void* var_58 = x0 + 0x40
__builtin_memset(x0, 0, 0x40)
void* var_68 = x0
int64_t result
int64_t x25_1
int64_t temp0_1

do
    int64_t* x8_1 = *(arg1 + 0x30)
    
    x25_1 = x20 u< 0x40 ? x20 : 0x40
    
    uint64_t x26_1 = x25_1 u>> 3
    *x8_1 += x25_1
    
    if (x26_1 != 0)
        memcpy(x0, x21, x25_1 & 0x78)
    
    int64_t x10_1 = x25_1 & 7
    
    if (x10_1 != 0)
        int64_t x9_3 = *(x0 + (x26_1 << 3))
        int64_t i = 0
        char* x11_2 = x21 + (x25_1 & 0x78)
        
        do
            uint64_t x12_1 = zx.q(*x11_2)
            x11_2 = &x11_2[1]
            uint64_t x12_2 = x12_1 << i
            i += 8
            x9_3 |= x12_2
        while (x10_1 << 3 != i)
        
        *(x0 + (x26_1 << 3)) = x9_3
    
    result = Botan::Threefish_512::skein_feedfwd(*(arg1 + 0x28), &var_68)
    void* x8_2 = *(arg1 + 0x30)
    temp0_1 = x20
    x20 -= x25_1
    x21 += x25_1
    *(x8_2 + 8) &= 0xbfffffffffffffff
while (temp0_1 != x25_1)

if (x0 == 0)
    return result

return Botan::deallocate_memory(x0, 8, 8)
