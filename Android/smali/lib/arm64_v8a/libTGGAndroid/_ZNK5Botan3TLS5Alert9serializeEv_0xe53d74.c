// 函数: _ZNK5Botan3TLS5Alert9serializeEv
// 地址: 0xe53d74
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char* entry_x0
uint32_t x20 = zx.d(*entry_x0)
uint32_t x21 = zx.d(*(entry_x0 + 4))
int64_t* entry_x8
__builtin_memset(entry_x8, 0, 0x18)
int16_t* result = operator new(2)
entry_x8[1] = &result[1]
entry_x8[2] = &result[1]
*entry_x8 = result
int16_t x9

x9 = x20 != 0 ? 2 : 1

*result = x9 | (x21 << 8).w
return result
