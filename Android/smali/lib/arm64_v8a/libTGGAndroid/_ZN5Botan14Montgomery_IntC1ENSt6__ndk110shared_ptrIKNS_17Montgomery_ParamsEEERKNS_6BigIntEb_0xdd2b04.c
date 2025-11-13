// 函数: _ZN5Botan14Montgomery_IntC1ENSt6__ndk110shared_ptrIKNS_17Montgomery_ParamsEEERKNS_6BigIntEb
// 地址: 0xdd2b04
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

Botan::BigInt* x21 = arg3
int64_t* x19 = arg1
*arg1 = *arg2
int64_t x8_1 = *(arg2 + 8)
*(arg1 + 8) = x8_1

if (x8_1 != 0)
    int32_t i
    
    do
        i = __stxr(__ldxr(x8_1 + 8) + 1, x8_1 + 8)
    while (i != 0)

__builtin_memset(&x19[2], 0, 0x18)
x19[5] = -1
x19[6].d = 1
int32_t entry_x3

if ((entry_x3 & 1) == 0)
    if (&x19[2] != x21)
        *(x21 + 8)
        std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::assign<uint32_t*>(
            &x19[2], *x21)
    
    x19[5] = *(x21 + 0x18)
    x19[6].d = *(x21 + 0x20)
    return 

*x19

if ((Botan::BigInt::is_less_than(&x19[2]) & 1) == 0)
    sub_c776cc(Botan::assertion_failure("m_v < m_params->p()", &data_793a18, "Montgomery_Int", 
        "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0xe5fd))
    noreturn

int64_t var_48
__builtin_memset(&var_48, 0, 0x18)
Botan::BigInt* x0_2 = *x19
Botan::Montgomery_Params::mul(x0_2, x21, x0_2 + 0x50)
void* var_70
void* var_68_1
int64_t var_60
void* x0_3

if (&x19[2] == &var_70)
    x0_3 = var_70
    
    if (x0_3 != 0)
        var_68_1 = x0_3
        Botan::deallocate_memory(x0_3, (var_60 - x0_3) s>> 2, 4)
else
    x0_3 = x19[2]
    int128_t v0_1 = var_70.o
    var_70 = x0_3
    *(x19 + 0x10) = v0_1
    int64_t x11_1 = x19[4]
    int64_t x9_3 = x19[5]
    x19[4] = var_60
    int64_t var_58
    x19[5] = var_58
    int64_t var_58_1 = x9_3
    int32_t var_50
    x19[6].d = var_50
    int32_t var_50_1 = x19[6].d
    
    if (x0_3 != 0)
        var_68_1 = x0_3
        Botan::deallocate_memory(x0_3, (x11_1 - x0_3) s>> 2, 4)
arg1 = var_48

if (arg1 != 0)
    int64_t var_40_1 = arg1
    int64_t var_38
    Botan::deallocate_memory(arg1, (var_38 - arg1) s>> 2, 4)
