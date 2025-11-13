// 函数: _ZNK5Botan30Montgomery_Exponentation_State14exponentiationERKNS_6BigIntEm
// 地址: 0xdd50a4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x23 = *(arg1 + 0x28)
uint64_t result
int64_t entry_x2

if (entry_x2 - 1 + x23 u>= entry_x2 - 1)
    uint64_t x22_1 = *(*arg1 + 0xa8)
    uint64_t result_1
    __builtin_memset(&result_1, 0, 0x18)
    int64_t var_50_1
    int64_t var_48_1
    int64_t x2_1
    
    if (x22_1 == 0)
        x2_1 = x23
    else
        if (x22_1 u>> 0x3e != 0)
            sub_c776cc(std::__ndk1::__vector_base_common<true>::__throw_length_error())
            noreturn
        
        uint64_t result_3 = Botan::allocate_memory(x22_1, 4)
        int64_t x2 = x22_1 << 2
        int64_t x22_2 = result_3 + x2
        result_1 = result_3
        var_48_1 = x22_2
        memset(result_3, 0, x2)
        var_50_1 = x22_2
        x2_1 = *(arg1 + 0x28)
    
    int64_t i_2 = (entry_x2 - 1 + x23) u/ x23 - 1
    void* var_70
    __builtin_memset(&var_70, 0, 0x18)
    sub_dd54b0(&result_1, arg1 + 0x10, Botan::BigInt::get_substring(arg2, x2_1 * i_2))
    int64_t* x23_1 = *(arg1 + 8)
    int64_t var_b8 = *arg1
    int64_t* var_b0_1 = x23_1
    
    if (x23_1 != 0)
        int32_t i
        
        do
            i = __stxr(__ldxr(&x23_1[1]) + 1, &x23_1[1])
        while (i != 0)
    
    uint64_t result_4 = result_1
    Botan::BigInt* var_a8
    Botan::Montgomery_Int::Montgomery_Int(&var_a8, &var_b8, result_4, 
        ((var_50_1 - result_4) s>> 2).b)
    
    if (x23_1 != 0)
        int64_t x9_6
        int32_t i_1
        
        do
            x9_6 = __ldaxr(&x23_1[1])
            i_1 = __stlxr(x9_6 - 1, &x23_1[1])
        while (i_1 != 0)
        
        if (x9_6 == 0)
            (*(*x23_1 + 0x10))(x23_1)
            std::__ndk1::__shared_weak_count::__release_weak()
    
    void* var_98
    
    while (i_2 != 0)
        int64_t j_1 = *(arg1 + 0x28)
        int64_t x2_3
        
        if (j_1 == 0)
            x2_3 = 0
        else
            int32_t j
            
            do
                Botan::Montgomery_Params::square_this(var_a8, &var_98)
                j = j_1
                j_1 -= 1
            while (j != 1)
            x2_3 = *(arg1 + 0x28)
        
        i_2 -= 1
        sub_dd54b0(&result_1, arg1 + 0x10, Botan::BigInt::get_substring(arg2, x2_3 * i_2))
        Botan::Montgomery_Params::mul_by(var_a8, &var_98, &result_1)
    
    Botan::Montgomery_Int::value()
    void* x0_13 = var_98
    
    if (x0_13 != 0)
        void* var_90_1 = x0_13
        int64_t var_88
        Botan::deallocate_memory(x0_13, (var_88 - x0_13) s>> 2, 4)
    
    int64_t* var_a0
    void* var_68_1
    int64_t var_60
    void* x0_14
    
    if (var_a0 == 0)
    label_dd52c8:
        x0_14 = var_70
        
        if (x0_14 != 0)
            var_68_1 = x0_14
            Botan::deallocate_memory(x0_14, (var_60 - x0_14) s>> 2, 4)
    else
        int64_t x9_7
        int32_t i_3
        
        do
            x9_7 = __ldaxr(&var_a0[1])
            i_3 = __stlxr(x9_7 - 1, &var_a0[1])
        while (i_3 != 0)
        
        if (x9_7 != 0)
            goto label_dd52c8
        
        (*(*var_a0 + 0x10))(var_a0)
        std::__ndk1::__shared_weak_count::__release_weak()
        x0_14 = var_70
        
        if (x0_14 != 0)
            var_68_1 = x0_14
            Botan::deallocate_memory(x0_14, (var_60 - x0_14) s>> 2, 4)
    result = result_1
    
    if (result != 0)
        uint64_t result_2 = result
        return Botan::deallocate_memory(result, (var_48_1 - result) s>> 2, 4)
else
    int64_t* entry_x8
    __builtin_memset(entry_x8, 0, 0x18)
    entry_x8[4].d = 1
    entry_x8[3] = -1
    result = std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::__append(entry_x8)
    **entry_x8 = 1
    void* x8_1 = *entry_x8
    int64_t x9_1 = entry_x8[1]
    entry_x8[3] = -1
    
    if ((x9_1 - x8_1) s>> 2 u>= 2)
        *(x8_1 + 4) = 0

return result
