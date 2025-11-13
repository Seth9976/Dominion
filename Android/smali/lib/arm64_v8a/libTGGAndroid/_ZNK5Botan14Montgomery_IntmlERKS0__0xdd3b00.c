// 函数: _ZNK5Botan14Montgomery_IntmlERKS0_
// 地址: 0xdd3b00
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* result_1
__builtin_memset(&result_1, 0, 0x18)
Botan::BigInt* x9 = *arg1
int64_t* x19 = *(arg1 + 8)
Botan::BigInt* var_48 = x9
int64_t* var_40 = x19

if (x19 != 0)
    int32_t i
    
    do
        i = __stxr(__ldxr(&x19[1]) + 1, &x19[1])
    while (i != 0)
    x9 = *arg1

void* entry_x1
Botan::Montgomery_Params::mul(x9, arg1 + 0x10, entry_x1 + 0x10)
void* var_70
int64_t entry_x8
Botan::Montgomery_Int::Montgomery_Int(entry_x8, &var_48, &var_70)
void* x0_2 = var_70

if (x0_2 != 0)
    void* var_68_1 = x0_2
    int64_t var_60
    Botan::deallocate_memory(x0_2, (var_60 - x0_2) s>> 2, 4)

int64_t x9_3

if (x19 != 0)
    int32_t i_1
    
    do
        x9_3 = __ldaxr(&x19[1])
        i_1 = __stlxr(x9_3 - 1, &x19[1])
    while (i_1 != 0)

void* result
void* result_2
int64_t var_28

if (x19 != 0 && x9_3 == 0)
    (*(*x19 + 0x10))(x19)
    std::__ndk1::__shared_weak_count::__release_weak()
    result = result_1
    
    if (result != 0)
        result_2 = result
        return Botan::deallocate_memory(result, (var_28 - result) s>> 2, 4)
else
    result = result_1
    
    if (result != 0)
        result_2 = result
        return Botan::deallocate_memory(result, (var_28 - result) s>> 2, 4)
return result
