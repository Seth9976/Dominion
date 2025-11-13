// 函数: _ZN5Botan6PK_Ops23KEM_Encryption_with_KDF11kem_encryptERNSt6__ndk16vectorIhNS_16secure_allocatorIhEEEES7_mRNS_21RandomNumberGeneratorEPKhm
// 地址: 0xdfa138
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t result_1
__builtin_memset(&result_1, 0, 0x18)
(*(*arg1 + 0x18))(arg1, arg2, &result_1, arg5)
uint64_t result_3 = result_1
int64_t var_40
uint8_t* entry_x6
Botan::KDF::derive_key(*(arg1 + 8), arg4, result_3, var_40 - result_3, arg6, entry_x6, 0)
void* x0_1 = *arg3

if (x0_1 != 0)
    int64_t x8_3 = *(arg3 + 0x10)
    *(arg3 + 8) = x0_1
    Botan::deallocate_memory(x0_1, x8_3 - x0_1, 1)
    __builtin_memset(arg3, 0, 0x18)

int128_t var_60
*arg3 = var_60
uint64_t result = result_1
int64_t var_50
*(arg3 + 0x10) = var_50

if (result == 0)
    return result

uint64_t result_2 = result
int64_t var_38
return Botan::deallocate_memory(result, var_38 - result, 1)
