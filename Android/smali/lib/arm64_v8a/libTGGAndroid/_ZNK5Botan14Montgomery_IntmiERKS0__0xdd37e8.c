// 函数: _ZNK5Botan14Montgomery_IntmiERKS0_
// 地址: 0xdd37e8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* result_1
__builtin_memset(&result_1, 0, 0x18)
void* var_60
std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::vector(&var_60)
int64_t var_48 = *(arg1 + 0x28)
int32_t var_40 = *(arg1 + 0x30)
void* entry_x1
Botan::BigInt::mod_sub(&var_60, entry_x1 + 0x10, *arg1)
int64_t* x20_1 = *(arg1 + 8)
int64_t var_70 = *arg1
int64_t* var_68 = x20_1

if (x20_1 != 0)
    int32_t i
    
    do
        i = __stxr(__ldxr(&x20_1[1]) + 1, &x20_1[1])
    while (i != 0)

int64_t entry_x8
Botan::Montgomery_Int::Montgomery_Int(entry_x8, &var_70, &var_60)
int64_t x9_3

if (x20_1 != 0)
    int32_t i_1
    
    do
        x9_3 = __ldaxr(&x20_1[1])
        i_1 = __stlxr(x9_3 - 1, &x20_1[1])
    while (i_1 != 0)

void* var_58_1
int64_t var_50
void* x0_3

if (x20_1 != 0 && x9_3 == 0)
    (*(*x20_1 + 0x10))(x20_1)
    std::__ndk1::__shared_weak_count::__release_weak()
    x0_3 = var_60
    
    if (x0_3 != 0)
        var_58_1 = x0_3
        Botan::deallocate_memory(x0_3, (var_50 - x0_3) s>> 2, 4)
else
    x0_3 = var_60
    
    if (x0_3 != 0)
        var_58_1 = x0_3
        Botan::deallocate_memory(x0_3, (var_50 - x0_3) s>> 2, 4)
void* result = result_1

if (result == 0)
    return result

void* result_2 = result
int64_t var_28
return Botan::deallocate_memory(result, (var_28 - result) s>> 2, 4)
