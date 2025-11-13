// 函数: _ZN5Botan7SHA_160C2Ev
// 地址: 0xd880e0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t entry_x0
Botan::MDx_HashFunction::MDx_HashFunction(entry_x0, true, true, 1)
*(entry_x0 + 0x40) = 0
*(entry_x0 + 0x48) = 0
*entry_x0 = _vtable_for_Botan::SHA_160 + 0x10
*(entry_x0 + 0x38) = 0
int64_t x0 = Botan::allocate_memory(5, 4)
*(entry_x0 + 0x38) = x0
*(entry_x0 + 0x40) = x0 + 0x14
*(entry_x0 + 0x48) = x0 + 0x14
__builtin_memset(x0, 0, 0x14)
int64_t x0_1 = *(entry_x0 + 0x18)
int64_t x9 = *(entry_x0 + 0x20)
__builtin_memset(entry_x0 + 0x50, 0, 0x18)
int64_t result

if (x9 == x0_1)
    result = 0
    *(entry_x0 + 0x30) = 0
    *(entry_x0 + 0x10) = 0
else
    memset(x0_1, 0, x9 - x0_1)
    result = *(entry_x0 + 0x50)
    int64_t x8_2 = *(entry_x0 + 0x58)
    *(entry_x0 + 0x30) = 0
    *(entry_x0 + 0x10) = 0
    
    if (x8_2 != result)
        result = memset(result, 0, x8_2 - result)

**(entry_x0 + 0x38) = 0x67452301
*(*(entry_x0 + 0x38) + 4) = 0xefcdab89
*(*(entry_x0 + 0x38) + 8) = 0x98badcfe
*(*(entry_x0 + 0x38) + 0xc) = 0x10325476
*(*(entry_x0 + 0x38) + 0x10) = 0xc3d2e1f0
return result
