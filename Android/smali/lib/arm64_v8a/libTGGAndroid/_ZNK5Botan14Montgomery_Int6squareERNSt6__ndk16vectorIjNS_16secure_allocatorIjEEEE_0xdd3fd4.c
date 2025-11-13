// 函数: _ZNK5Botan14Montgomery_Int6squareERNSt6__ndk16vectorIjNS_16secure_allocatorIjEEEE
// 地址: 0xdd3fd4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

Botan::BigInt* x9 = *arg1
int64_t* x19 = *(arg1 + 8)
Botan::BigInt* var_30 = x9
int64_t* var_28 = x19

if (x19 != 0)
    int32_t i
    
    do
        i = __stxr(__ldxr(&x19[1]) + 1, &x19[1])
    while (i != 0)
    x9 = *arg1

Botan::Montgomery_Params::sqr(x9, arg1 + 0x10)
void* result_1
int64_t entry_x8
Botan::Montgomery_Int::Montgomery_Int(entry_x8, &var_30, &result_1)
void* result = result_1

if (result != 0)
    void* result_2 = result
    int64_t var_48
    result = Botan::deallocate_memory(result, (var_48 - result) s>> 2, 4)

if (x19 != 0)
    int64_t x9_3
    int32_t i_1
    
    do
        x9_3 = __ldaxr(&x19[1])
        i_1 = __stlxr(x9_3 - 1, &x19[1])
    while (i_1 != 0)
    
    if (x9_3 == 0)
        (*(*x19 + 0x10))(x19)
        return std::__ndk1::__shared_weak_count::__release_weak()

return result
