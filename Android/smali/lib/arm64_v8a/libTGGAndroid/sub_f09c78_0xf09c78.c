// 函数: sub_f09c78
// 地址: 0xf09c78
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t* var_90
__builtin_memset(&var_90, 0, 0x18)
int32_t var_70 = 1
int64_t var_78 = -1
std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::__append(&var_90)
*var_90 = 1
int32_t* x8_1 = var_90
int64_t var_78_1 = -1
int64_t var_88

if ((var_88 - x8_1) s>> 2 u>= 2)
    x8_1[1] = 0

Botan::BigInt::random_integer(arg4, &var_90, *(arg1 + 0x10))
int32_t* x0_2 = var_90
int64_t var_80

if (x0_2 != 0)
    int32_t* var_88_1 = x0_2
    Botan::deallocate_memory(x0_2, (var_80 - x0_2) s>> 2, 4)

void* result_1
sub_f0983c(&var_90, arg1 + 0x10, &result_1)
Botan::BigInt::encode_locked(&var_90)
void* x0_5 = *arg2

if (x0_5 != 0)
    int64_t x8_4 = arg2[2]
    arg2[1] = x0_5
    Botan::deallocate_memory(x0_5, x8_4 - x0_5, 1)
    __builtin_memset(arg2, 0, 0x18)

int128_t var_b0
*arg2 = var_b0
int64_t var_a0
arg2[2] = var_a0
Botan::BigInt::encode_locked(&result_1)
void* x0_7 = *arg3

if (x0_7 != 0)
    int64_t x8_6 = arg3[2]
    arg3[1] = x0_7
    Botan::deallocate_memory(x0_7, x8_6 - x0_7, 1)
    __builtin_memset(arg3, 0, 0x18)

*arg3 = var_b0
arg3[2] = var_a0
int32_t* x0_8 = var_90

if (x0_8 != 0)
    int32_t* var_88_2 = x0_8
    Botan::deallocate_memory(x0_8, (var_80 - x0_8) s>> 2, 4)

void* result = result_1

if (result == 0)
    return result

void* result_2 = result
int64_t var_58
return Botan::deallocate_memory(result, (var_58 - result) s>> 2, 4)
