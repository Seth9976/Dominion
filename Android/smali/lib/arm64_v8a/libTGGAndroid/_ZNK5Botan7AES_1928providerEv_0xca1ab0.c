// 函数: _ZNK5Botan7AES_1928providerEv
// 地址: 0xca1ab0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x8_1 = *Botan::CPUID::state() & 1
size_t x20 = x8_1 | 4
char* entry_x8
*entry_x8 = (x20.d << 1).b
char const* const x1

if (x8_1 == 0)
    x1 = "base"
else
    x1 = "vperm"

int64_t result = memcpy(&entry_x8[1], x1, x20)
entry_x8[1 + x20] = 0
return result
