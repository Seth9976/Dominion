// 函数: _ZN5Botan7SHA_224C2Ev
// 地址: 0xd88250
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t entry_x0
Botan::MDx_HashFunction::MDx_HashFunction(entry_x0, true, true, 1)
*(entry_x0 + 0x40) = 0
*(entry_x0 + 0x48) = 0
*entry_x0 = _vtable_for_Botan::SHA_224 + 0x10
*(entry_x0 + 0x38) = 0
int32_t* result = Botan::allocate_memory(8, 4)
*(entry_x0 + 0x48) = &result[8]
__builtin_memset(result, 0, 0x20)
int64_t x8_1 = *(entry_x0 + 0x18)
int64_t x10 = *(entry_x0 + 0x20)
*(entry_x0 + 0x38) = result
*(entry_x0 + 0x40) = &result[8]

if (x10 != x8_1)
    memset(x8_1, 0, x10 - x8_1)
    result = *(entry_x0 + 0x38)

*(entry_x0 + 0x30) = 0
*(entry_x0 + 0x10) = 0
*result = 0xc1059ed8
*(*(entry_x0 + 0x38) + 4) = 0x367cd507
*(*(entry_x0 + 0x38) + 8) = 0x3070dd17
*(*(entry_x0 + 0x38) + 0xc) = 0xf70e5939
*(*(entry_x0 + 0x38) + 0x10) = 0xffc00b31
*(*(entry_x0 + 0x38) + 0x14) = 0x68581511
*(*(entry_x0 + 0x38) + 0x18) = 0x64f98fa7
*(*(entry_x0 + 0x38) + 0x1c) = 0xbefa4fa4
return result
