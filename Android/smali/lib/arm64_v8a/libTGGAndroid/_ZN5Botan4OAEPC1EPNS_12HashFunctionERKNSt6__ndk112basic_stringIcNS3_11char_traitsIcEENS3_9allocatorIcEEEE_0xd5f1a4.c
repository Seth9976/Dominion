// 函数: _ZN5Botan4OAEPC1EPNS_12HashFunctionERKNSt6__ndk112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEE
// 地址: 0xd5f1a4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*(arg1 + 0x10) = 0
*(arg1 + 0x18) = 0
*arg1 = _vtable_for_Botan::OAEP + 0x10
*(arg1 + 8) = 0
*(arg1 + 0x20) = arg2
char* entry_x2
uint64_t x8_1 = zx.q(*entry_x2)
int32_t temp0 = x8_1.d & 1
void* x1

if (temp0 != 0)
    x1 = *(entry_x2 + 0x10)
else
    x1 = &entry_x2[1]

uint64_t x2

if (temp0 == 0)
    x2 = x8_1 u>> 1
else
    x2 = *(entry_x2 + 8)

(*(*arg2 + 0x18))(arg2, x1, x2)
Botan::Buffered_Computation::final()
void* result = *(arg1 + 8)

if (result != 0)
    int64_t x8_3 = *(arg1 + 0x18)
    *(arg1 + 0x10) = result
    int128_t v0
    result, v0 = Botan::deallocate_memory(result, x8_3 - result, 1)
    __builtin_memset(arg1 + 8, 0, 0x18)

int128_t var_40
*(arg1 + 8) = var_40
int64_t var_30
*(arg1 + 0x18) = var_30
return result
