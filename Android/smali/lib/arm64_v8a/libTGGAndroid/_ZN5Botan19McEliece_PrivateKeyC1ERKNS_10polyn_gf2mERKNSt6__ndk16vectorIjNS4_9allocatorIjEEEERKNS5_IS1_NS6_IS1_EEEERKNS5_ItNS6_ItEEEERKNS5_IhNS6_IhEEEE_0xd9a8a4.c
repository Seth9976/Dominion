// 函数: _ZN5Botan19McEliece_PrivateKeyC1ERKNS_10polyn_gf2mERKNSt6__ndk16vectorIjNS4_9allocatorIjEEEERKNS5_IS1_NS6_IS1_EEEERKNS5_ItNS6_ItEEEERKNS5_IhNS6_IhEEEE
// 地址: 0xd9a8a4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* __offset(Botan::polyn_gf2m, 0x50) x26
void* __offset(Botan::polyn_gf2m, 0x50) var_40 = x26
std::__ndk1::vector<uint16_t, std::__ndk1::allocator<uint16_t> > const& var_98 = arg4
*(arg1 + 0x78) = _vtable_for_Botan::Public_Key + 0x10
int64_t x9 = *(arg2 + 8)
int64_t x8_2 = *(arg2 + 0x10) - x9
uint32_t x10 = (x8_2 u>> 1).d
int64_t x8_3 = (x8_2 & 0x1fffffffe) << 0x1f s>> 0x20
int32_t x28 = (x10 & x10 s>> 0x1f) - 1

while (true)
    int64_t x10_2 = x8_3 - 1
    
    if (x8_3 s< 1)
        break
    
    uint32_t x11_1 = zx.d(*(x9 - 2 + (x8_3 << 1)))
    x8_3 = x10_2
    
    if (x11_1 != 0)
        x28 = x10_2.d
        break

*arg2 = x28
void* __offset(Botan::polyn_gf2m, 0x38) x24 = *arg5
int64_t fp = *(arg5 + 8)
*(arg1 + 0x80) = 0
*(arg1 + 0x78) =
    construction_vtable_for_Botan::McEliece_PublicKey-in-Botan::McEliece_PrivateKey + 0x88
*(arg1 + 0x88) = 0
*(arg1 + 0x90) = 0
int64_t* entry_x5
int64_t x9_2 = *entry_x5
int64_t x8_5 = entry_x5[1]
uint64_t x27 = x8_5 - x9_2

if (x8_5 == x9_2)
label_d9a9ac:
    *(arg1 + 0x98) = sx.q(x28)
    *(arg1 + 0xa0) = (fp - x24) s>> 1
    *(arg1 + 0x78) = _vtable_for_Botan::McEliece_PrivateKey + 0x208
    *arg1 = _vtable_for_Botan::McEliece_PrivateKey + 0xd0
    int32_t x8_9 = *arg2
    void* var_88
    std::__ndk1::vector<uint16_t, Botan::secure_allocator<uint16_t> >::vector(&var_88)
    int64_t x9_5 = *(arg2 + 0x20)
    void* x8_10 = *(arg2 + 0x28)
    
    if (x8_10 != 0)
        int32_t i
        
        do
            i = __stxr(__ldxr(x8_10 + 8) + 1, x8_10 + 8)
        while (i != 0)
    
    __builtin_memset(arg1 + 8, 0, 0x18)
    int32_t* x0_4 = operator new(0x30)
    *(arg1 + 8) = x0_4
    *(arg1 + 0x10) = x0_4
    *(arg1 + 0x18) = &x0_4[0xc]
    *x0_4 = x8_9
    std::__ndk1::vector<uint16_t, Botan::secure_allocator<uint16_t> >::vector(&x0_4[2])
    *(x0_4 + 0x20) = x9_5
    *(x0_4 + 0x28) = x8_10
    void* var_80_1
    int64_t var_78
    void* x0_8
    
    if (x8_10 == 0)
        *(arg1 + 0x10) = &x0_4[0xc]
        x0_8 = var_88
        
        if (x0_8 != 0)
            var_80_1 = x0_8
            Botan::deallocate_memory(x0_8, (var_78 - x0_8) s>> 1, 2)
    else
        int32_t i_1
        
        do
            i_1 = __stxr(__ldxr(x8_10 + 8) + 1, x8_10 + 8)
        while (i_1 != 0)
        x26 = x8_10
        *(arg1 + 0x10) = &x0_4[0xc]
        
        if (x26 != 0)
            int64_t x9_11
            int32_t i_2
            
            do
                x9_11 = __ldaxr(x26 + 8)
                i_2 = __stlxr(x9_11 - 1, x26 + 8)
            while (i_2 != 0)
            
            if (x9_11 == 0)
                (*(*x26 + 0x10))(x26)
                std::__ndk1::__shared_weak_count::__release_weak()
        
        x0_8 = var_88
        
        if (x0_8 != 0)
            var_80_1 = x0_8
            Botan::deallocate_memory(x0_8, (var_78 - x0_8) s>> 1, 2)
    int64_t result =
        std::__ndk1::vector<Botan::polyn_gf2m, std::__ndk1::allocator<Botan::polyn_gf2m> >::vector(
        arg1 + 0x20)
    __builtin_memset(arg1 + 0x38, 0, 0x18)
    int64_t x9_12 = *arg5
    int64_t x8_23 = *(arg5 + 8)
    uint64_t x27_1 = x8_23 - x9_12
    
    if (x8_23 == x9_12)
    label_d9ab28:
        __builtin_memset(arg1 + 0x50, 0, 0x18)
        int64_t x9_13 = *arg3
        int64_t x8_27 = *(arg3 + 8)
        uint64_t x28_1 = x8_27 - x9_13
        
        if (x8_27 == x9_13)
        label_d9ab84:
            int64_t x8_32 = *(arg5 + 8) - *arg5
            uint64_t x8_34
            
            if (x8_32 s< -1)
                x8_34 = 0x40
            else
                int64_t x8_33 = x8_32 s>> 1
                
                if (x8_33 u< 2)
                    x8_34 = 0
                else
                    int32_t x9_15 = 0
                    int64_t x10_7 = 1
                    
                    do
                        x10_7 <<= 1
                        x9_15 += 1
                    while (x10_7 u< x8_33)
                    
                    x8_34 = zx.q(x9_15.b)
            
            int64_t x11_4 = *(arg2 + 8)
            int64_t x9_17 = *(arg2 + 0x10) - x11_4
            uint32_t x12 = (x9_17 u>> 1).d
            int64_t x10_8 = (x9_17 & 0x1fffffffe) << 0x1f s>> 0x20
            int32_t x9_19 = (x12 & x12 s>> 0x1f) - 1
            
            while (true)
                int64_t x12_1 = x10_8 - 1
                
                if (x10_8 s< 1)
                    break
                
                uint32_t x13_1 = zx.d(*(x11_4 - 2 + (x10_8 << 1)))
                x10_8 = x12_1
                
                if (x13_1 != 0)
                    x9_19 = x12_1.d
                    break
            
            *arg2 = x9_19
            int64_t x8_35 = x8_34 * sx.q(x9_19)
            *(arg1 + 0x68) = x8_35
            *(arg1 + 0x70) = ((*(arg5 + 8) - *arg5) s>> 1) - x8_35
            return result
        
        if ((x28_1 & 0xffffffff80000000) == 0)
            result = operator new(x28_1)
            *(arg1 + 0x50) = result
            *(arg1 + 0x58) = result
            *(arg1 + 0x60) = result + (x28_1 s>> 2 << 2)
            int64_t x1_6 = *arg3
            int64_t result_2 = result
            size_t x22_1 = *(arg3 + 8) - x1_6
            
            if (x22_1 s>= 1)
                result = memcpy(result_2, x1_6, x22_1)
                result_2 += x22_1
            
            *(arg1 + 0x58) = result_2
            goto label_d9ab84
    else
        if ((x27_1 & 0xffffffff80000000) == 0)
            result = operator new(x27_1)
            *(arg1 + 0x38) = result
            *(arg1 + 0x40) = result
            *(arg1 + 0x48) = result + (x27_1 s>> 1 << 1)
            int64_t x1_5 = *arg5
            int64_t result_1 = result
            size_t x27_2 = *(arg5 + 8) - x1_5
            
            if (x27_2 s>= 1)
                result = memcpy(result_1, x1_5, x27_2)
                result_1 += x27_2
            
            *(arg1 + 0x40) = result_1
            goto label_d9ab28
        
        std::__ndk1::__vector_base_common<true>::__throw_length_error()
else
    if ((x27 & 0xffffffff80000000) == 0)
        void* x0_1 = operator new(x27)
        *(arg1 + 0x80) = x0_1
        *(arg1 + 0x88) = x0_1
        *(arg1 + 0x90) = x0_1 + x27
        int64_t x1 = *entry_x5
        x26 = x0_1
        size_t x23_1 = entry_x5[1] - x1
        
        if (x23_1 s>= 1)
            memcpy(x26, x1, x23_1)
            x26 += x23_1
        
        *(arg1 + 0x88) = x26
        goto label_d9a9ac
    
    std::__ndk1::__vector_base_common<true>::__throw_length_error()
    std::__ndk1::__vector_base_common<true>::__throw_length_error()

sub_c776cc(std::__ndk1::__vector_base_common<true>::__throw_length_error())
noreturn
