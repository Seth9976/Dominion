// 函数: _ZNK5Botan14Montgomery_Int22multiplicative_inverseEv
// 地址: 0xdd4118
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* result_1
__builtin_memset(&result_1, 0, 0x18)
int64_t* entry_x0
Botan::BigInt* x21 = *entry_x0
Botan::inverse_mod(&entry_x0[2], x21)
void* var_88
Botan::Montgomery_Params::mul(x21, &var_88, *entry_x0 + 0x78)
void* x0_2 = var_88
int64_t var_78

if (x0_2 != 0)
    Botan::deallocate_memory(x0_2, (var_78 - x0_2) s>> 2, 4)
int64_t* x20_1 = entry_x0[1]
int64_t var_98 = *entry_x0
int64_t* var_90 = x20_1

if (x20_1 != 0)
    int32_t i
    
    do
        i = __stxr(__ldxr(&x20_1[1]) + 1, &x20_1[1])
    while (i != 0)

void* var_60
int64_t entry_x8
Botan::Montgomery_Int::Montgomery_Int(entry_x8, &var_98, &var_60)
int64_t x9_3

if (x20_1 != 0)
    int32_t i_1
    
    do
        x9_3 = __ldaxr(&x20_1[1])
        i_1 = __stlxr(x9_3 - 1, &x20_1[1])
    while (i_1 != 0)

void* var_58_1
int64_t var_50
void* x0_4

if (x20_1 != 0 && x9_3 == 0)
    (*(*x20_1 + 0x10))(x20_1)
    std::__ndk1::__shared_weak_count::__release_weak()
    x0_4 = var_60
    
    if (x0_4 != 0)
        var_58_1 = x0_4
        Botan::deallocate_memory(x0_4, (var_50 - x0_4) s>> 2, 4)
else
    x0_4 = var_60
    
    if (x0_4 != 0)
        var_58_1 = x0_4
        Botan::deallocate_memory(x0_4, (var_50 - x0_4) s>> 2, 4)
void* result = result_1

if (result == 0)
    return result

void* result_2 = result
int64_t var_28
return Botan::deallocate_memory(result, (var_28 - result) s>> 2, 4)
