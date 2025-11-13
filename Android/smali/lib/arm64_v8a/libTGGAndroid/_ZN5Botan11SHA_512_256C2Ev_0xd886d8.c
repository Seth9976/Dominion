// 函数: _ZN5Botan11SHA_512_256C2Ev
// 地址: 0xd886d8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t entry_x0
Botan::MDx_HashFunction::MDx_HashFunction(entry_x0, true, true, 1)
*(entry_x0 + 0x40) = 0
*(entry_x0 + 0x48) = 0
*entry_x0 = _vtable_for_Botan::SHA_512_256 + 0x10
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
*result = 0x22312194fc2bf72c
*(*(entry_x0 + 0x38) + 8) = -0x60aaa05c37b39b3e
*(*(entry_x0 + 0x38) + 0x10) = 0x2393b86b6f53b151
*(*(entry_x0 + 0x38) + 0x18) = -0x69c788e6a6bf1543
*(*(entry_x0 + 0x38) + 0x20) = -0x69d7c11d5771001d
*(*(entry_x0 + 0x38) + 0x28) = -0x41a1e1daac79c66e
*(*(entry_x0 + 0x38) + 0x30) = 0x2b0199fc2c85b8aa
*(*(entry_x0 + 0x38) + 0x38) = 0xeb72ddc81c52ca2
return result
