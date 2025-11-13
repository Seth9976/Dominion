// 函数: _ZN5Botan6ChaCha16initialize_stateEv
// 地址: 0xd00990
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* entry_x0
*(*(entry_x0 + 0x28) + 0x10) = **(entry_x0 + 0x10)
*(*(entry_x0 + 0x28) + 0x14) = *(*(entry_x0 + 0x10) + 4)
*(*(entry_x0 + 0x28) + 0x18) = *(*(entry_x0 + 0x10) + 8)
*(*(entry_x0 + 0x28) + 0x1c) = *(*(entry_x0 + 0x10) + 0xc)
int64_t x12 = *(entry_x0 + 0x10)
int64_t x11 = *(entry_x0 + 0x18)
__builtin_strncpy(*(entry_x0 + 0x28), "expa", 4)
int64_t x10_1 = *(entry_x0 + 0x28)
int64_t x8_7
int64_t x9_6
int32_t* x10_3
int64_t x11_1

if (x11 - x12 != 0x10)
    __builtin_strncpy(x10_1 + 4, "nd 3", 4)
    x11_1 = 5
    __builtin_strncpy(*(entry_x0 + 0x28) + 8, "2-by", 4)
    __builtin_strncpy(*(entry_x0 + 0x28) + 0xc, "te k", 4)
    x8_7 = 7
    x9_6 = 6
    x10_3 = *(entry_x0 + 0x10) + 0x10
else
    __builtin_strncpy(x10_1 + 4, "nd 1", 4)
    x11_1 = 1
    __builtin_strncpy(*(entry_x0 + 0x28) + 8, "6-by", 4)
    __builtin_strncpy(*(entry_x0 + 0x28) + 0xc, "te k", 4)
    x10_3 = *(entry_x0 + 0x10)
    x8_7 = 3
    x9_6 = 2

*(*(entry_x0 + 0x28) + 0x20) = *x10_3
*(*(entry_x0 + 0x28) + 0x24) = *(*(entry_x0 + 0x10) + (x11_1 << 2))
*(*(entry_x0 + 0x28) + 0x28) = *(*(entry_x0 + 0x10) + (x9_6 << 2))
*(*(entry_x0 + 0x28) + 0x2c) = *(*(entry_x0 + 0x10) + (x8_7 << 2))
*(*(entry_x0 + 0x28) + 0x30) = 0
*(*(entry_x0 + 0x28) + 0x34) = 0
*(*(entry_x0 + 0x28) + 0x38) = 0
*(*(entry_x0 + 0x28) + 0x3c) = 0
*(entry_x0 + 0x58) = 0
