// 函数: sub_f0a040
// 地址: 0xf0a040
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* result_1
__builtin_memset(&result_1, 0, 0x18)
int64_t var_30 = -1
int32_t var_28 = 1
Botan::BigInt::binary_decode(&result_1, arg2)
void* var_70
sub_f0983c(&var_70, arg1 + 0x30, &result_1)
Botan::BigInt::encode_locked(&var_70)
void* x0_3 = var_70

if (x0_3 != 0)
    void* var_68_1 = x0_3
    int64_t var_60
    Botan::deallocate_memory(x0_3, (var_60 - x0_3) s>> 2, 4)

void* result = result_1

if (result == 0)
    return result

void* result_2 = result
int64_t var_38
return Botan::deallocate_memory(result, (var_38 - result) s>> 2, 4)
