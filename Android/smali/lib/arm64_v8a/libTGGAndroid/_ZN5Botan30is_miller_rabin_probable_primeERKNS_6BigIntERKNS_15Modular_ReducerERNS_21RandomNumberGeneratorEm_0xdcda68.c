// 函数: _ZN5Botan30is_miller_rabin_probable_primeERKNS_6BigIntERKNS_15Modular_ReducerERNS_21RandomNumberGeneratorEm
// 地址: 0xdcda68
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* entry_x19
void* var_8 = entry_x19

if (*(arg1 + 0x20) != 0)
    int64_t i_3 = *(arg1 + 0x18)
    
    if (i_3 != -1)
        if (i_3 u<= 1)
            goto label_dcdb28
        
    label_dcdb78:
        void** x0 = operator new(0xc8)
        x0[2] = 0
        *x0 = _vtable_for_std::__ndk1::__shared_ptr_emplace<Botan::Montgomery_Params, std::__ndk1::allocator<Botan::Montgomery_Params> >
            + 0x10
        x0[1] = 0
        Botan::Montgomery_Params::Montgomery_Params(&x0[3], arg1)
        void* var_60 = &x0[3]
        void** var_58 = x0
        int32_t x23_2
        
        if (arg4 == 0)
            x23_2 = 1
        else
            int64_t x25_1 = arg4 - 1
            
            do
                int32_t* var_b0
                __builtin_memset(&var_b0, 0, 0x18)
                int32_t var_90_1 = 1
                int64_t var_98_1 = -1
                std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::__append(&var_b0)
                *var_b0 = 2
                int32_t* x8_3 = var_b0
                int64_t var_98_2 = -1
                int64_t var_a8_1
                
                if ((var_a8_1 - x8_3) s>> 2 u>= 2)
                    x8_3[1] = 0
                
                Botan::BigInt::random_integer(arg3, &var_b0, arg1)
                int32_t* x0_4 = var_b0
                
                if (x0_4 != 0)
                    int32_t* var_a8_2 = x0_4
                    int64_t var_a0
                    Botan::deallocate_memory(x0_4, (var_a0 - x0_4) s>> 2, 4)
                
                void* var_88
                x23_2 = Botan::passes_miller_rabin_test(arg1, arg2, &var_60, &var_88)
                void* x0_7 = var_88
                
                if (x0_7 != 0)
                    void* var_80_1 = x0_7
                    int64_t var_78
                    Botan::deallocate_memory(x0_7, (var_78 - x0_7) s>> 2, 4)
                
                if (x25_1 == 0)
                    break
                
                x25_1 -= 1
            while (((x23_2 ^ 1) & 1) == 0)
        
        int64_t x9_7
        int32_t i
        
        do
            x9_7 = __ldaxr(&x0[1])
            i = __stlxr(x9_7 - 1, &x0[1])
        while (i != 0)
        
        if (x9_7 == 0)
            (*(*x0 + 0x10))(x0)
            std::__ndk1::__shared_weak_count::__release_weak()
        
        return zx.q(x23_2) & 1
    
    int64_t x9_1 = *arg1
    int64_t x11_1 = *(arg1 + 8)
    int64_t x10_1 = x11_1 - x9_1
    
    if (x11_1 == x9_1)
        i_3 = 0
        *(arg1 + 0x18) = 0
    else
        int64_t x12_1
        
        x12_1 = x10_1 s>= 0 ? x10_1 : -1
        
        int64_t x11_2 = x9_1 - x11_1
        int64_t x12_2
        
        x12_2 = x12_1 s< 1 ? x12_1 : 1
        
        i_3 = x10_1 s>> 2
        int64_t x10_2
        
        x10_2 = x11_2 s> x10_1 ? x11_2 : x10_1
        
        int64_t i_4 = x12_2 * (x10_2 u>> 2)
        uint64_t x11_3 = 1
        int64_t i_1
        
        do
            int32_t x12_3 = *(x9_1 - 4 + (i_4 << 2))
            i_1 = i_4
            i_4 -= 1
            x11_3 = zx.q(x11_3.d) & zx.q(((x12_3 - 1) & not.d(x12_3)) s>> 0x1f)
            i_3 -= x11_3
        while (i_1 != 1)
        *(arg1 + 0x18) = i_3
        
        if (i_3 u> 1)
            goto label_dcdb78
    
label_dcdb28:
    
    if (i_3 != 0)
        int32_t* x9_3 = *arg1
        int32_t x10_4 = 0
        int64_t i_2
        
        do
            int32_t x11_4 = *x9_3
            x9_3 = &x9_3[1]
            i_2 = i_3
            i_3 -= 1
            int32_t x11_6 = (((x11_4 ^ 1) - 1) & not.d(x11_4)) s>> 0x1f
            x10_4 = (x10_4 & x11_6) | ((((x11_4 - 1) & not.d(x11_4)) s>> 0x1f | 1) & not.d(x11_6))
        while (i_2 != 1)
        
        if (x10_4 s> 0)
            goto label_dcdb78

int64_t* x0_11 = Botan::assertion_failure("n > 1", &data_793a18, "is_miller_rabin_probable_prime", 
    "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0xed29)
std::__ndk1::__shared_weak_count::~__shared_weak_count()
operator delete(entry_x19)
sub_1101e04(x0_11)
noreturn
