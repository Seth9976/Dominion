// 函数: _ZN5Botan11BER_Decoder26decode_octet_string_bigintERNS_6BigIntE
// 地址: 0xcb8b08
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t var_38
__builtin_memset(&var_38, 0, 0x18)
Botan::BER_Decoder::decode(arg1, &var_38, 4, 4)
uint64_t x1_1 = var_38
void* var_60
__builtin_memset(&var_60, 0, 0x18)
int64_t var_48 = -1
int32_t var_40 = 1
Botan::BigInt::binary_decode(&var_60, x1_1)
int64_t* entry_x1
void* var_58_1
int64_t var_50
void* x0_1

if (&var_60 == entry_x1)
    x0_1 = *entry_x1
    
    if (x0_1 != 0)
        var_58_1 = x0_1
        Botan::deallocate_memory(x0_1, (var_50 - x0_1) s>> 2, 4)
else
    x0_1 = *entry_x1
    int128_t v0 = var_60.o
    var_60 = x0_1
    *entry_x1 = v0
    int64_t x11_1 = entry_x1[2]
    int64_t x9_1 = entry_x1[3]
    entry_x1[2] = var_50
    entry_x1[3] = var_48
    int64_t var_48_1 = x9_1
    entry_x1[4].d = var_40
    int32_t var_40_1 = entry_x1[4].d
    
    if (x0_1 != 0)
        var_58_1 = x0_1
        Botan::deallocate_memory(x0_1, (x11_1 - x0_1) s>> 2, 4)
uint64_t x0_2 = var_38

if (x0_2 != 0)
    uint64_t var_30_1 = x0_2
    int64_t var_28
    Botan::deallocate_memory(x0_2, var_28 - x0_2, 1)

return arg1
