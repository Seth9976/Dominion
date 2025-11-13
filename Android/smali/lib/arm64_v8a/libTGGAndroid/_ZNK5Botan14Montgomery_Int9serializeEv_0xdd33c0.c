// 函数: _ZNK5Botan14Montgomery_Int9serializeEv
// 地址: 0xdd33c0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* entry_x0
*entry_x0
int64_t x0_1 = Botan::BigInt::bits()
int64_t x8_2

if ((x0_1 & 7) == 0)
    x8_2 = 0
else
    x8_2 = 8 - (x0_1 & 7)

uint64_t x22 = (x8_2 + x0_1) u>> 3
int64_t* entry_x8
__builtin_memset(entry_x8, 0, 0x18)
uint8_t* x20
void* x23

if (x22 == 0)
    x23 = nullptr
    x20 = nullptr
else
    uint8_t* x0_3 = operator new(x22)
    x23 = &x0_3[x22]
    x20 = x0_3
    *entry_x8 = x0_3
    entry_x8[2] = x23
    memset(x0_3, 0, x22)
    entry_x8[1] = x23

Botan::Montgomery_Int::value()
void* result_1
Botan::BigInt::encode_1363(x20, x23 - x20, &result_1)
void* result = result_1

if (result == 0)
    return result

void* result_2 = result
int64_t var_48
return Botan::deallocate_memory(result, (var_48 - result) s>> 2, 4)
