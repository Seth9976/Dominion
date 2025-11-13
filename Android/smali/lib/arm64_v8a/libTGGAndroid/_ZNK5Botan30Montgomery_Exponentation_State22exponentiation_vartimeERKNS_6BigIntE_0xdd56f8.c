// 函数: _ZNK5Botan30Montgomery_Exponentation_State22exponentiation_vartimeERKNS_6BigIntE
// 地址: 0xdd56f8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (zx.d(*(arg1 + 0x30)) != 0)
    sub_c776cc(Botan::assertion_failure("m_const_time == false", &data_793a18, 
        "exponentiation_vartime", "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 
        0xe74c))
    noreturn

int64_t x0_1 = Botan::BigInt::bits()
int64_t x2 = *(arg1 + 0x28)
void* result_1
__builtin_memset(&result_1, 0, 0x18)
void* result

if (x0_1 - 1 + x2 u>= x0_1 - 1)
    int64_t i_1 = (x0_1 - 1 + x2) u/ x2 - 1
    uint64_t entry_x1
    int32_t x0_4 = Botan::BigInt::get_substring(entry_x1, i_1 * x2)
    int64_t x22_1 = *(arg1 + 0x10)
    int64_t* x8_5 = x22_1 + mulu.dp.d(x0_4, 0x38)
    Botan::BigInt* x9_4 = *x8_5
    int64_t* x8_6 = x8_5[1]
    
    if (x8_6 != 0)
        int32_t i
        
        do
            i = __stxr(__ldxr(&x8_6[1]) + 1, &x8_6[1])
        while (i != 0)
    
    void* var_80
    std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::vector(&var_80)
    void* x8_9 = x22_1 + zx.q(x0_4) * 0x38
    int64_t var_68_1 = *(x8_9 + 0x28)
    int32_t var_60_1 = *(x8_9 + 0x30)
    
    while (i_1 != 0)
        int64_t j_1 = *(arg1 + 0x28)
        int64_t x2_1
        
        if (j_1 == 0)
            x2_1 = 0
        else
            int64_t j
            
            do
                Botan::Montgomery_Params::square_this(x9_4, &var_80)
                j = j_1
                j_1 -= 1
            while (j != 1)
            x2_1 = *(arg1 + 0x28)
        
        i_1 -= 1
        int32_t x0_8 = Botan::BigInt::get_substring(entry_x1, x2_1 * i_1)
        
        if (x0_8 != 0)
            Botan::Montgomery_Params::mul_by(x9_4, &var_80, 
                *(arg1 + 0x10) + mulu.dp.d(x0_8, 0x38) + 0x10)
    
    Botan::Montgomery_Int::value()
    void* x0_10 = var_80
    
    if (x0_10 != 0)
        void* var_78_1 = x0_10
        int64_t var_70
        Botan::deallocate_memory(x0_10, (var_70 - x0_10) s>> 2, 4)
    
    if (x8_6 == 0)
        goto label_dd58d4
    
    int64_t x9_10
    int32_t i_2
    
    do
        x9_10 = __ldaxr(&x8_6[1])
        i_2 = __stlxr(x9_10 - 1, &x8_6[1])
    while (i_2 != 0)
    
    if (x9_10 != 0)
        goto label_dd58d4
    
    (*(*x8_6 + 0x10))(x8_6)
    std::__ndk1::__shared_weak_count::__release_weak()
    result = result_1
    
    if (result == 0)
        return result
else
    int64_t* entry_x8
    __builtin_memset(entry_x8, 0, 0x18)
    entry_x8[4].d = 1
    entry_x8[3] = -1
    std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::__append(entry_x8)
    **entry_x8 = 1
    void* x8_3 = *entry_x8
    int64_t x9_1 = entry_x8[1]
    entry_x8[3] = -1
    
    if ((x9_1 - x8_3) s>> 2 u< 2)
    label_dd58d4:
        result = result_1
        
        if (result == 0)
            return result
    else
        *(x8_3 + 4) = 0
        result = result_1
        
        if (result == 0)
            return result

void* result_2 = result
int64_t var_48
return Botan::deallocate_memory(result, (var_48 - result) s>> 2, 4)
