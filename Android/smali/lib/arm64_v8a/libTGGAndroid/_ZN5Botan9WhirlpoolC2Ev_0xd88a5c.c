// 函数: _ZN5Botan9WhirlpoolC2Ev
// 地址: 0xd88a5c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t entry_x0
Botan::MDx_HashFunction::MDx_HashFunction(entry_x0, true, true, 1)
*(entry_x0 + 0x40) = 0
*(entry_x0 + 0x48) = 0
*entry_x0 = _vtable_for_Botan::Whirlpool + 0x10
*(entry_x0 + 0x38) = 0
int64_t x0 = Botan::allocate_memory(8, 8)
*(entry_x0 + 0x38) = x0
*(entry_x0 + 0x48) = x0 + 0x40
__builtin_memset(x0, 0, 0x40)
*(entry_x0 + 0x50) = 0
*(entry_x0 + 0x40) = x0 + 0x40
*(entry_x0 + 0x58) = 0
*(entry_x0 + 0x60) = 0
int64_t x0_1 = Botan::allocate_memory(8, 8)
*(entry_x0 + 0x50) = x0_1
*(entry_x0 + 0x58) = x0_1 + 0x40
*(entry_x0 + 0x60) = x0_1 + 0x40
__builtin_memset(x0_1, 0, 0x40)
int64_t x0_2 = *(entry_x0 + 0x18)
int64_t x9 = *(entry_x0 + 0x20)

if (x9 != x0_2)
    memset(x0_2, 0, x9 - x0_2)

int64_t x0_3 = *(entry_x0 + 0x38)
int64_t x8_3 = *(entry_x0 + 0x40)
*(entry_x0 + 0x30) = 0
*(entry_x0 + 0x10) = 0

if (x8_3 != x0_3)
    memset(x0_3, 0, x8_3 - x0_3)

int64_t result = *(entry_x0 + 0x50)
int64_t x8_4 = *(entry_x0 + 0x58)

if (x8_4 == result)
    return result

return memset(result, 0, x8_4 - result) __tailcall
