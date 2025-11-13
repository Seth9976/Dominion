// 函数: _ZN5Botan7Salsa2016initialize_stateEv
// 地址: 0xe0f2a8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* entry_x0
*(*(entry_x0 + 0x20) + 4) = **(entry_x0 + 8)
*(*(entry_x0 + 0x20) + 8) = *(*(entry_x0 + 8) + 4)
*(*(entry_x0 + 0x20) + 0xc) = *(*(entry_x0 + 8) + 8)
*(*(entry_x0 + 0x20) + 0x10) = *(*(entry_x0 + 8) + 0xc)
int64_t x12 = *(entry_x0 + 8)
int64_t x11 = *(entry_x0 + 0x10)
__builtin_strncpy(*(entry_x0 + 0x20), "expa", 4)
int64_t x10_1 = *(entry_x0 + 0x20)
int64_t x8_7
int64_t x9_6
int32_t* x10_3
int64_t x11_1

if (x11 - x12 != 0x10)
    __builtin_strncpy(x10_1 + 0x14, "nd 3", 4)
    x11_1 = 5
    __builtin_strncpy(*(entry_x0 + 0x20) + 0x28, "2-by", 4)
    __builtin_strncpy(*(entry_x0 + 0x20) + 0x3c, "te k", 4)
    x8_7 = 7
    x9_6 = 6
    x10_3 = *(entry_x0 + 8) + 0x10
else
    __builtin_strncpy(x10_1 + 0x14, "nd 1", 4)
    x11_1 = 1
    __builtin_strncpy(*(entry_x0 + 0x20) + 0x28, "6-by", 4)
    __builtin_strncpy(*(entry_x0 + 0x20) + 0x3c, "te k", 4)
    x10_3 = *(entry_x0 + 8)
    x8_7 = 3
    x9_6 = 2

*(*(entry_x0 + 0x20) + 0x2c) = *x10_3
*(*(entry_x0 + 0x20) + 0x30) = *(*(entry_x0 + 8) + (x11_1 << 2))
*(*(entry_x0 + 0x20) + 0x34) = *(*(entry_x0 + 8) + (x9_6 << 2))
*(*(entry_x0 + 0x20) + 0x38) = *(*(entry_x0 + 8) + (x8_7 << 2))
*(*(entry_x0 + 0x20) + 0x18) = 0
*(*(entry_x0 + 0x20) + 0x1c) = 0
*(*(entry_x0 + 0x20) + 0x20) = 0
*(*(entry_x0 + 0x20) + 0x24) = 0
*(entry_x0 + 0x50) = 0
