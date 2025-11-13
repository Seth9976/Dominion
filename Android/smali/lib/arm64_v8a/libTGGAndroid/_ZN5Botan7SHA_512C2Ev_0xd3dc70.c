// 函数: _ZN5Botan7SHA_512C2Ev
// 地址: 0xd3dc70
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t entry_x0
Botan::MDx_HashFunction::MDx_HashFunction(entry_x0, true, true, 1)
*(entry_x0 + 0x40) = 0
*(entry_x0 + 0x48) = 0
*entry_x0 = _vtable_for_Botan::SHA_512 + 0x10
*(entry_x0 + 0x38) = 0
int64_t* result = Botan::allocate_memory(8, 8)
*(entry_x0 + 0x48) = &result[8]
__builtin_memset(result, 0, 0x40)
int64_t x8_1 = *(entry_x0 + 0x18)
int64_t x10 = *(entry_x0 + 0x20)
*(entry_x0 + 0x38) = result
*(entry_x0 + 0x40) = &result[8]

if (x10 != x8_1)
    memset(x8_1, 0, x10 - x8_1)
    result = *(entry_x0 + 0x38)

*(entry_x0 + 0x30) = 0
*(entry_x0 + 0x10) = 0
*result = 0x6a09e667f3bcc908
*(*(entry_x0 + 0x38) + 8) = -0x4498517a7b3558c5
*(*(entry_x0 + 0x38) + 0x10) = 0x3c6ef372fe94f82b
*(*(entry_x0 + 0x38) + 0x18) = -0x5ab00ac5a0e2c90f
*(*(entry_x0 + 0x38) + 0x20) = 0x510e527fade682d1
*(*(entry_x0 + 0x38) + 0x28) = -0x64fa9773d4c193e1
*(*(entry_x0 + 0x38) + 0x30) = 0x1f83d9abfb41bd6b
*(*(entry_x0 + 0x38) + 0x38) = 0x5be0cd19137e2179
return result
