// 函数: _ZN5Botan13base58_encodeEPKhm
// 地址: 0xcd0864
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* result_1
__builtin_memset(&result_1, 0, 0x18)
int64_t var_30 = -1
int32_t var_28 = 1
Botan::BigInt::binary_decode(&result_1, arg1)
void* var_70
std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::vector(&var_70)
uint64_t x2_1 = 0
int64_t var_58 = var_30
int32_t var_50 = var_28

if (arg2 != 0)
    while (zx.d(arg1[x2_1]) == 0)
        x2_1 += 1
        
        if (arg2 == x2_1)
            x2_1 = arg2
            break

char* entry_x8
sub_cd09d0(entry_x8, &var_70, x2_1)
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
