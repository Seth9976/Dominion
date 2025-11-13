// 函数: _ZN5Botan9SHAKE_1285clearEv
// 地址: 0xe23bcc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* entry_x0
int64_t result = *(entry_x0 + 0x10)
int64_t x8 = *(entry_x0 + 0x18)

if (x8 != result)
    result = memset(result, 0, x8 - result)

*(entry_x0 + 0x28) = 0
return result
