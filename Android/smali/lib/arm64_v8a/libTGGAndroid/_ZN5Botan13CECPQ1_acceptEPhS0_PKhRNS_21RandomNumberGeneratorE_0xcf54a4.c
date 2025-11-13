// 函数: _ZN5Botan13CECPQ1_acceptEPhS0_PKhRNS_21RandomNumberGeneratorE
// 地址: 0xcf54a4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x23 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x23 + 0x28)
uint8_t* result_1
__builtin_memset(&result_1, 0, 0x18)
std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::__append(&result_1)
uint8_t* result_3 = result_1
int64_t var_70
int128_t v0
int128_t v1
v0, v1 = (*(*arg4 + 0x10))(arg4, result_3, var_70 - result_3)
v1 = data_7b0130
uint8_t* result_4 = result_1
int128_t var_60 = data_7b0120
int128_t var_50 = v1
Botan::curve25519_donna(arg2, result_4, &var_60)
Botan::curve25519_donna(arg1, result_1, arg3)
uint8_t* result = result_1

if (result != 0)
    uint8_t* result_2 = result
    int64_t var_68
    result = Botan::deallocate_memory(result, var_68 - result, 1)

if (*(x23 + 0x28) == x8)
    return result

__stack_chk_fail()
noreturn
