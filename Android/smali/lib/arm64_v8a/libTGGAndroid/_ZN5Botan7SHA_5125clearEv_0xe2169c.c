// 函数: _ZN5Botan7SHA_5125clearEv
// 地址: 0xe2169c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* entry_x0
int64_t result = *(entry_x0 + 0x18)
int64_t x8 = *(entry_x0 + 0x20)

if (x8 != result)
    result = memset(result, 0, x8 - result)

int64_t* x8_1 = *(entry_x0 + 0x38)
*(entry_x0 + 0x30) = 0
*(entry_x0 + 0x10) = 0
*x8_1 = 0x6a09e667f3bcc908
*(*(entry_x0 + 0x38) + 8) = -0x4498517a7b3558c5
*(*(entry_x0 + 0x38) + 0x10) = 0x3c6ef372fe94f82b
*(*(entry_x0 + 0x38) + 0x18) = -0x5ab00ac5a0e2c90f
*(*(entry_x0 + 0x38) + 0x20) = 0x510e527fade682d1
*(*(entry_x0 + 0x38) + 0x28) = -0x64fa9773d4c193e1
*(*(entry_x0 + 0x38) + 0x30) = 0x1f83d9abfb41bd6b
*(*(entry_x0 + 0x38) + 0x38) = 0x5be0cd19137e2179
return result
