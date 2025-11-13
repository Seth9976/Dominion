// 函数: _ZN5Botan14Montgomery_IntC1ENSt6__ndk110shared_ptrIKNS_17Montgomery_ParamsEEEPKhmb
// 地址: 0xdd2d1c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

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
void* result = Botan::BigInt::binary_decode(&x19[2], arg3)
int32_t entry_x4

if ((entry_x4 & 1) != 0)
    *x19
    
    if ((Botan::BigInt::is_less_than(&x19[2]) & 1) == 0)
        sub_c776cc(Botan::assertion_failure("m_v < m_params->p()", &data_793a18, "Montgomery_Int", 
            "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0xe60b))
        noreturn
    
    void* result_1
    __builtin_memset(&result_1, 0, 0x18)
    Botan::BigInt* x0_3 = *x19
    Botan::Montgomery_Params::mul(x0_3, &x19[2], x0_3 + 0x50)
    void* var_60
    void* var_58_1
    int64_t var_50
    void* x0_4
    
    if (&x19[2] == &var_60)
        x0_4 = var_60
        
        if (x0_4 != 0)
            var_58_1 = x0_4
            Botan::deallocate_memory(x0_4, (var_50 - x0_4) s>> 2, 4)
    else
        x0_4 = x19[2]
        int128_t v0_1 = var_60.o
        var_60 = x0_4
        *(x19 + 0x10) = v0_1
        int64_t x11_1 = x19[4]
        int64_t x9_3 = x19[5]
        x19[4] = var_50
        int64_t var_48
        x19[5] = var_48
        int64_t var_48_1 = x9_3
        int32_t var_40
        x19[6].d = var_40
        int32_t var_40_1 = x19[6].d
        
        if (x0_4 != 0)
            var_58_1 = x0_4
            Botan::deallocate_memory(x0_4, (x11_1 - x0_4) s>> 2, 4)
    result = result_1
    
    if (result != 0)
        void* result_2 = result
        int64_t var_28
        return Botan::deallocate_memory(result, (var_28 - result) s>> 2, 4)

return result
