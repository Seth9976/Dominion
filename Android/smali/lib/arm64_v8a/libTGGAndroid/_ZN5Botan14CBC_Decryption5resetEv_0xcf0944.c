// 函数: _ZN5Botan14CBC_Decryption5resetEv
// 地址: 0xcf0944
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* entry_x0
int64_t result = *(entry_x0 + 0x38)
int64_t x9 = *(entry_x0 + 0x40)
*(entry_x0 + 0x20) = *(entry_x0 + 0x18)

if (x9 == result)
    return result

return memset(result, 0, x9 - result) __tailcall
