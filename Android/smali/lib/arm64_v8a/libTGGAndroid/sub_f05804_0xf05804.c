// 函数: sub_f05804
// 地址: 0xf05804
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

Botan::McEliece_PublicKey::random_plaintext_element(*(arg1 + 0x10))
void* var_78
__builtin_memset(&var_78, 0, 0x30)
int64_t var_60
void* result_1
Botan::mceliece_encrypt(&var_60, &var_78, &result_1, *(arg1 + 0x10), arg4)
arg3[1] = *arg3
Botan::operator+=<uint8_t, Botan::secure_allocator<uint8_t>, Botan::secure_allocator<uint8_t> >(
    arg3, &result_1)
Botan::operator+=<uint8_t, Botan::secure_allocator<uint8_t>, Botan::secure_allocator<uint8_t> >(
    arg3, &var_78)
void* x20_1 = *arg2
int64_t x21_1 = arg2[2]
*arg2 = var_60.o
int64_t var_50
arg2[2] = var_50
void* x0_4 = var_78

if (x0_4 != 0)
    void* var_70_1 = x0_4
    int64_t var_68
    Botan::deallocate_memory(x0_4, var_68 - x0_4, 1)

if (x20_1 != 0)
    Botan::deallocate_memory(x20_1, x21_1 - x20_1, 1)

void* result = result_1

if (result == 0)
    return result

void* result_2 = result
int64_t var_38
return Botan::deallocate_memory(result, var_38 - result, 1)
