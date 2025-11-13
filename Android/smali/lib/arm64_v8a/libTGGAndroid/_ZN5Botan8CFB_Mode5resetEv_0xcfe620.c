// 函数: _ZN5Botan8CFB_Mode5resetEv
// 地址: 0xcfe620
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* entry_x0
int64_t result = *(entry_x0 + 0x20)
int64_t x9 = *(entry_x0 + 0x28)
*(entry_x0 + 0x10) = *(entry_x0 + 8)

if (x9 == result)
    return result

return memset(result, 0, x9 - result) __tailcall
