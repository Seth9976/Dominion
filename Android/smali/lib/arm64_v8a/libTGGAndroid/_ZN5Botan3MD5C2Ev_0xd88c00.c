// 函数: _ZN5Botan3MD5C2Ev
// 地址: 0xd88c00
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t entry_x0
Botan::MDx_HashFunction::MDx_HashFunction(entry_x0, true, false, 1)
*(entry_x0 + 0x40) = 0
*(entry_x0 + 0x48) = 0
*entry_x0 = _vtable_for_Botan::MD5 + 0x10
*(entry_x0 + 0x38) = 0
int64_t x0 = Botan::allocate_memory(0x10, 4)
*(entry_x0 + 0x38) = x0
*(entry_x0 + 0x48) = x0 + 0x40
__builtin_memset(x0, 0, 0x40)
*(entry_x0 + 0x50) = 0
*(entry_x0 + 0x40) = x0 + 0x40
*(entry_x0 + 0x58) = 0
*(entry_x0 + 0x60) = 0
int64_t* x0_1 = Botan::allocate_memory(4, 4)
*(entry_x0 + 0x50) = x0_1
*(entry_x0 + 0x58) = &x0_1[2]
*(entry_x0 + 0x60) = &x0_1[2]
*x0_1 = 0
x0_1[1] = 0
int64_t x0_2 = *(entry_x0 + 0x18)
int64_t x9 = *(entry_x0 + 0x20)

if (x9 != x0_2)
    memset(x0_2, 0, x9 - x0_2)

int64_t result = *(entry_x0 + 0x38)
int64_t x8_3 = *(entry_x0 + 0x40)
*(entry_x0 + 0x30) = 0
*(entry_x0 + 0x10) = 0

if (x8_3 != result)
    result = memset(result, 0, x8_3 - result)

**(entry_x0 + 0x50) = 0x67452301
*(*(entry_x0 + 0x50) + 4) = 0xefcdab89
*(*(entry_x0 + 0x50) + 8) = 0x98badcfe
*(*(entry_x0 + 0x50) + 0xc) = 0x10325476
return result
