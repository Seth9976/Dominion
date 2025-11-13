// 函数: _ZN5Botan7SHA_384C2Ev
// 地址: 0xd88528
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t entry_x0
Botan::MDx_HashFunction::MDx_HashFunction(entry_x0, true, true, 1)
*(entry_x0 + 0x40) = 0
*(entry_x0 + 0x48) = 0
*entry_x0 = _vtable_for_Botan::SHA_384 + 0x10
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
*result = -0x344462a23efa6128
*(*(entry_x0 + 0x38) + 8) = 0x629a292a367cd507
*(*(entry_x0 + 0x38) + 0x10) = -0x6ea6fea5cf8f22e9
*(*(entry_x0 + 0x38) + 0x18) = 0x152fecd8f70e5939
*(*(entry_x0 + 0x38) + 0x20) = 0x67332667ffc00b31
*(*(entry_x0 + 0x38) + 0x28) = -0x714bb57897a7eaef
*(*(entry_x0 + 0x38) + 0x30) = -0x24f3d1f29b067059
*(*(entry_x0 + 0x38) + 0x38) = 0x47b5481dbefa4fa4
return result
