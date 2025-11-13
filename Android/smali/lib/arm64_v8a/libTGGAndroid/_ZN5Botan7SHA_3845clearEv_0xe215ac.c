// 函数: _ZN5Botan7SHA_3845clearEv
// 地址: 0xe215ac
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* entry_x0
int64_t result = *(entry_x0 + 0x18)
int64_t x8 = *(entry_x0 + 0x20)

if (x8 != result)
    result = memset(result, 0, x8 - result)

int64_t* x8_1 = *(entry_x0 + 0x38)
*(entry_x0 + 0x30) = 0
*(entry_x0 + 0x10) = 0
*x8_1 = -0x344462a23efa6128
*(*(entry_x0 + 0x38) + 8) = 0x629a292a367cd507
*(*(entry_x0 + 0x38) + 0x10) = -0x6ea6fea5cf8f22e9
*(*(entry_x0 + 0x38) + 0x18) = 0x152fecd8f70e5939
*(*(entry_x0 + 0x38) + 0x20) = 0x67332667ffc00b31
*(*(entry_x0 + 0x38) + 0x28) = -0x714bb57897a7eaef
*(*(entry_x0 + 0x38) + 0x30) = -0x24f3d1f29b067059
*(*(entry_x0 + 0x38) + 0x38) = 0x47b5481dbefa4fa4
return result
