// 函数: _ZNK5Botan4OAEP5unpadERhPKhm
// 地址: 0xd5eb54
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint32_t x8 = zx.d(*arg3)
int64_t entry_x3
int64_t x9 = arg3 + entry_x3
uint64_t x22 = arg3 + (zx.q(((x8 - 1) & not.d(x8)) u>> 7) & 1)
size_t x24 = x9 - x22
uint8_t* result_1
__builtin_memset(&result_1, 0, 0x18)
void* var_50_1
void* var_48_1
uint8_t* result_6
void* x25

if (x9 == x22)
    x25 = nullptr
    result_6 = nullptr
else
    if ((x24 & 0xffffffff80000000) != 0)
        sub_c776cc(std::__ndk1::__vector_base_common<true>::__throw_length_error())
        noreturn
    
    uint8_t* result_3 = Botan::allocate_memory(x24, 1)
    x25 = &result_3[x24]
    result_6 = result_3
    result_1 = result_3
    var_48_1 = x25
    memcpy(result_3, x22, x24)
    var_50_1 = x25

uint64_t x24_1 = *(arg1 + 0x10) - *(arg1 + 8)
uint8_t* x1_1 = &result_6[x24_1]
Botan::mgf1_mask(*(arg1 + 0x20), x1_1, x25 - x1_1, result_6, x24_1)
uint8_t* result_4 = result_1
uint8_t* x3_1 = &result_4[x24_1]
Botan::mgf1_mask(*(arg1 + 0x20), result_4, x24_1, x3_1, var_50_1 - x3_1)
uint8_t* result_5 = result_1
Botan::oaep_find_delim(arg2, result_5, var_50_1 - result_5, &arg1[8])
uint8_t* result = result_1

if (result == 0)
    return result

uint8_t* result_2 = result
return Botan::deallocate_memory(result, var_48_1 - result, 1)
