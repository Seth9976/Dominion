// 函数: _ZN5Botan4OAEPC1EPNS_12HashFunctionES2_RKNSt6__ndk112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEE
// 地址: 0xd5f298
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*(arg1 + 0x10) = 0
*(arg1 + 0x18) = 0
*arg1 = _vtable_for_Botan::OAEP + 0x10
*(arg1 + 8) = 0
*(arg1 + 0x20) = arg3
char* entry_x3
uint64_t x8_1 = zx.q(*entry_x3)
int32_t temp0 = x8_1.d & 1
void* x1

if (temp0 != 0)
    x1 = *(entry_x3 + 0x10)
else
    x1 = &entry_x3[1]

uint64_t x2

if (temp0 == 0)
    x2 = x8_1 u>> 1
else
    x2 = *(entry_x3 + 8)

(*(*arg2 + 0x18))(arg2, x1, x2)
Botan::Buffered_Computation::final()
void* x0_2 = *(arg1 + 8)

if (x0_2 != 0)
    int64_t x8_3 = *(arg1 + 0x18)
    *(arg1 + 0x10) = x0_2
    Botan::deallocate_memory(x0_2, x8_3 - x0_2, 1)
    __builtin_memset(arg1 + 8, 0, 0x18)

int128_t var_50
*(arg1 + 8) = var_50
int64_t var_40
*(arg1 + 0x18) = var_40
return (*(*arg2 + 0x10))(arg2)
