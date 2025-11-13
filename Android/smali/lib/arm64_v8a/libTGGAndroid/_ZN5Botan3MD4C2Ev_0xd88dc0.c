// 函数: _ZN5Botan3MD4C2Ev
// 地址: 0xd88dc0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t entry_x0
Botan::MDx_HashFunction::MDx_HashFunction(entry_x0, true, false, 1)
*(entry_x0 + 0x40) = 0
*(entry_x0 + 0x48) = 0
*entry_x0 = _vtable_for_Botan::MD4 + 0x10
*(entry_x0 + 0x38) = 0
int64_t* result = Botan::allocate_memory(4, 4)
*(entry_x0 + 0x48) = &result[2]
*result = 0
result[1] = 0
int64_t x8_1 = *(entry_x0 + 0x18)
int64_t x10 = *(entry_x0 + 0x20)
*(entry_x0 + 0x38) = result
*(entry_x0 + 0x40) = &result[2]

if (x10 != x8_1)
    memset(x8_1, 0, x10 - x8_1)
    result = *(entry_x0 + 0x38)

*(entry_x0 + 0x30) = 0
*(entry_x0 + 0x10) = 0
*result = 0x67452301
*(*(entry_x0 + 0x38) + 4) = 0xefcdab89
*(*(entry_x0 + 0x38) + 8) = 0x98badcfe
*(*(entry_x0 + 0x38) + 0xc) = 0x10325476
return result
