// 函数: _ZNK5Botan8EC_Group13random_scalarERNS_21RandomNumberGeneratorE
// 地址: 0xd276e8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t* result_1
__builtin_memset(&result_1, 0, 0x18)
int32_t var_38 = 1
int64_t var_40 = -1
std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::__append(&result_1)
*result_1 = 1
int32_t* result_3 = result_1
int64_t var_40_1 = -1
int64_t var_50

if ((var_50 - result_3) s>> 2 u>= 2)
    result_3[1] = 0

Botan::RandomNumberGenerator* entry_x1
Botan::BigInt::random_integer(entry_x1, &result_1, Botan::EC_Group::data() + 0xe8)
int32_t* result = result_1

if (result == 0)
    return result

int32_t* result_2 = result
int64_t var_48
return Botan::deallocate_memory(result, (var_48 - result) s>> 2, 4)
