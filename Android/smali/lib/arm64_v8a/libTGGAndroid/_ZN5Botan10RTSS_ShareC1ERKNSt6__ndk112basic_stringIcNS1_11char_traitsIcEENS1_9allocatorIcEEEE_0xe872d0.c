// 函数: _ZN5Botan10RTSS_ShareC1ERKNSt6__ndk112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE
// 地址: 0xe872d0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*arg1 = 0
*(arg1 + 8) = 0
*(arg1 + 0x10) = 0
char* entry_x1
uint64_t x8 = zx.q(*entry_x1)
int32_t temp0 = x8.d & 1
void* x0

if (temp0 != 0)
    x0 = *(entry_x1 + 0x10)
else
    x0 = &entry_x1[1]

uint64_t x1

if (temp0 == 0)
    x1 = x8 u>> 1
else
    x1 = *(entry_x1 + 8)

Botan::hex_decode_locked(x0, x1, true)
void* result = *arg1

if (result != 0)
    int64_t x8_1 = *(arg1 + 0x10)
    *(arg1 + 8) = result
    int128_t v0
    result, v0 = Botan::deallocate_memory(result, x8_1 - result, 1)
    __builtin_memset(arg1, 0, 0x18)

int128_t var_40
*arg1 = var_40
int64_t var_30
*(arg1 + 0x10) = var_30
return result
