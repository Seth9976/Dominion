// 函数: sub_f059d0
// 地址: 0xf059d0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* result_1
__builtin_memset(&result_1, 0, 0x30)
void* var_58
Botan::mceliece_decrypt(&var_58, &result_1, arg2, arg3, *(arg1 + 0x10))
void* x20 = var_58
void* result_3 = result_1
__builtin_memset(arg4, 0, 0x18)
int64_t var_50
void* x10 = var_50 - x20
int64_t var_68
void* x8_1 = var_68 - result_3
uint64_t x24 = x8_1 + x10
int64_t x22

if (x8_1 == neg.q(x10))
    x22 = 0
else
    int64_t x0_2 = Botan::allocate_memory(x24, 1)
    void* x23_1 = *arg4
    x22 = x0_2
    size_t x2_1 = arg4[1] - x23_1
    int64_t x24_1 = x0_2 - x2_1
    
    if (x2_1 s>= 1)
        memcpy(x24_1, x23_1, x2_1)
    
    int64_t x8_3 = arg4[2]
    *arg4 = x24_1
    arg4[1] = x22
    arg4[2] = x0_2 + x24
    
    if (x23_1 != 0)
        Botan::deallocate_memory(x23_1, x8_3 - x23_1, 1)
        x22 = arg4[1]

std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::insert<std::__ndk1::__wrap_iter<uint8_t*> >(
    arg4, x22, x20)
std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::insert<std::__ndk1::__wrap_iter<uint8_t*> >(
    arg4, arg4[1], result_1)
void* result = result_1

if (result != 0)
    void* result_2 = result
    int64_t var_60
    result = Botan::deallocate_memory(result, var_60 - result, 1)

if (x20 == 0)
    return result

int64_t var_48
return Botan::deallocate_memory(x20, var_48 - x20, 1)
