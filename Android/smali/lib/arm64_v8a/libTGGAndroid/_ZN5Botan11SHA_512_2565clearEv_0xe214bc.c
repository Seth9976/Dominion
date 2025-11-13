// 函数: _ZN5Botan11SHA_512_2565clearEv
// 地址: 0xe214bc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* entry_x0
int64_t result = *(entry_x0 + 0x18)
int64_t x8 = *(entry_x0 + 0x20)

if (x8 != result)
    result = memset(result, 0, x8 - result)

int64_t* x8_1 = *(entry_x0 + 0x38)
*(entry_x0 + 0x30) = 0
*(entry_x0 + 0x10) = 0
*x8_1 = 0x22312194fc2bf72c
*(*(entry_x0 + 0x38) + 8) = -0x60aaa05c37b39b3e
*(*(entry_x0 + 0x38) + 0x10) = 0x2393b86b6f53b151
*(*(entry_x0 + 0x38) + 0x18) = -0x69c788e6a6bf1543
*(*(entry_x0 + 0x38) + 0x20) = -0x69d7c11d5771001d
*(*(entry_x0 + 0x38) + 0x28) = -0x41a1e1daac79c66e
*(*(entry_x0 + 0x38) + 0x30) = 0x2b0199fc2c85b8aa
*(*(entry_x0 + 0x38) + 0x38) = 0xeb72ddc81c52ca2
return result
