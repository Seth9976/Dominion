// 函数: _ZNK5Botan8DL_Group18multi_exponentiateERKNS_6BigIntES3_S3_
// 地址: 0xd1a8d8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0 = Botan::DL_Group::data()
int64_t* x19 = *(x0 + 0x130)
int64_t var_50 = *(x0 + 0x128)
int64_t* var_48 = x19

if (x19 != 0)
    int32_t i
    
    do
        i = __stxr(__ldxr(&x19[1]) + 1, &x19[1])
    while (i != 0)

Botan::BigInt* entry_x3
int64_t result =
    Botan::monty_multi_exp(&var_50, Botan::DL_Group::data() + 0x50, arg2, arg3, entry_x3)

if (x19 != 0)
    int64_t x9_3
    int32_t i_1
    
    do
        x9_3 = __ldaxr(&x19[1])
        i_1 = __stlxr(x9_3 - 1, &x19[1])
    while (i_1 != 0)
    
    if (x9_3 == 0)
        (*(*x19 + 0x10))(x19)
        return std::__ndk1::__shared_weak_count::__release_weak() __tailcall

return result
