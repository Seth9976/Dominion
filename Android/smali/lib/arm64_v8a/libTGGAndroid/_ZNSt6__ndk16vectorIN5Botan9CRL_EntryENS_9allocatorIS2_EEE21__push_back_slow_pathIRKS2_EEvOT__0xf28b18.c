// 函数: _ZNSt6__ndk16vectorIN5Botan9CRL_EntryENS_9allocatorIS2_EEE21__push_back_slow_pathIRKS2_EEvOT_
// 地址: 0xf28b18
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

Botan::CRL_Entry const& x22 = *arg1
Botan::CRL_Entry const& x19 = arg1[1]
int64_t x24 = ((x19 - x22) s>> 3) * -0x5555555555555555

if (x24 + 1 u> 0xaaaaaaaaaaaaaaa)
    std::__ndk1::__vector_base_common<true>::__throw_length_error()
else
    int64_t x9_1 = ((arg1[2] - x22) s>> 3) * -0x5555555555555555
    int64_t x11_4 = x9_1 << 1
    int64_t x10_2
    
    if (x11_4 u< x24 + 1)
        x10_2 = x24 + 1
    else
        x10_2 = x11_4
    
    int64_t x23_1
    
    x23_1 = x9_1 u< 0x555555555555555 ? x10_2 : 0xaaaaaaaaaaaaaaa
    
    int64_t result
    
    if (x23_1 == 0)
        result = 0
    label_f28bb0:
        void* entry_x1
        int64_t x11_5 = *(entry_x1 + 8)
        Botan::CRL_Entry* x9_2 = result + x24 * 0x18
        *x9_2 = _vtable_for_Botan::CRL_Entry + 0x10
        *(x9_2 + 8) = x11_5
        int64_t x11_6 = *(entry_x1 + 0x10)
        *(x9_2 + 0x10) = x11_6
        
        if (x11_6 != 0)
            int32_t i
            
            do
                i = __stxr(__ldxr(x11_6 + 8) + 1, x11_6 + 8)
            while (i != 0)
            x22 = *arg1
            x19 = arg1[1]
        
        int64_t x10_3 = result + x23_1 * 0x18
        
        if (x19 == x22)
            *arg1 = x9_2
            arg1[1] = x9_2 + 0x18
            arg1[2] = x10_3
        else
            int64_t i_1 = 0
            
            do
                void* x15_1 = x9_2 + i_1
                void* x16_1 = x19 + i_1
                *(x15_1 - 0x18) = _vtable_for_Botan::CRL_Entry + 0x10
                i_1 -= 0x18
                *(x15_1 - 0x10) = *(x16_1 - 0x10)
                *(x15_1 - 8) = *(x16_1 - 8)
                *(x16_1 - 0x10) = 0
                *(x16_1 - 8) = 0
            while (x22 - x19 != i_1)
            
            x19 = *arg1
            void** x21_2 = arg1[1]
            *arg1 = x9_2 + i_1
            arg1[1] = x9_2 + 0x18
            arg1[2] = x10_3
            
            while (x21_2 != x19)
                x21_2 = &x21_2[-3]
                *x21_2 = _vtable_for_Botan::CRL_Entry + 0x10
                int64_t* x20_1 = x21_2[2]
                
                if (x20_1 != 0)
                    int64_t x9_4
                    int32_t i_2
                    
                    do
                        x9_4 = __ldaxr(&x20_1[1])
                        i_2 = __stlxr(x9_4 - 1, &x20_1[1])
                    while (i_2 != 0)
                    
                    if (x9_4 == 0)
                        (*(*x20_1 + 0x10))(x20_1)
                        result = std::__ndk1::__shared_weak_count::__release_weak()
        
        if (x19 == 0)
            return result
        
        return operator delete(x19) __tailcall
    
    if (x23_1 u<= 0xaaaaaaaaaaaaaaa)
        result = operator new(x23_1 * 0x18)
        goto label_f28bb0

sub_ef2a0c()
noreturn
