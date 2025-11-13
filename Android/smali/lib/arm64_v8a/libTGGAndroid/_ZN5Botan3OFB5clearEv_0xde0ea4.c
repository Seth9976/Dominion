// 函数: _ZN5Botan3OFB5clearEv
// 地址: 0xde0ea4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* entry_x0
(*(**(entry_x0 + 8) + 0x10))()
int64_t result = *(entry_x0 + 0x10)
int64_t x8_2 = *(entry_x0 + 0x18)

if (x8_2 != result)
    result = memset(result, 0, x8_2 - result)

*(entry_x0 + 0x28) = 0
return result
