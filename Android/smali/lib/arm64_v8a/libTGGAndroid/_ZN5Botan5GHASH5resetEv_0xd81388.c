// 函数: _ZN5Botan5GHASH5resetEv
// 地址: 0xd81388
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* entry_x0
int64_t result = *(entry_x0 + 0x20)
int64_t x8 = *(entry_x0 + 0x28)

if (x8 != result)
    result = memset(result, 0, x8 - result)

int64_t x8_1 = *(entry_x0 + 0x38)
int64_t x9 = *(entry_x0 + 0x50)
*(entry_x0 + 0x98) = 0
*(entry_x0 + 0xa0) = 0
*(entry_x0 + 0x40) = x8_1
*(entry_x0 + 0x58) = x9
return result
