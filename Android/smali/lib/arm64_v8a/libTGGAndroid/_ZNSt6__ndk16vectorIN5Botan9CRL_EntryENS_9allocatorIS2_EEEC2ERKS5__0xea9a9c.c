// 函数: _ZNSt6__ndk16vectorIN5Botan9CRL_EntryENS_9allocatorIS2_EEEC2ERKS5_
// 地址: 0xea9a9c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*arg1 = 0
*(arg1 + 8) = 0
*(arg1 + 0x10) = 0
int64_t* entry_x1
int64_t x9 = *entry_x1
int64_t x8 = entry_x1[1]
uint64_t result = x8 - x9

if (x8 != x9)
    int64_t x21_1 = (result s>> 3) * -0x5555555555555555
    
    if (x21_1 u>= 0xaaaaaaaaaaaaaab)
        int64_t* x0_1 = std::__ndk1::__vector_base_common<true>::__throw_length_error()
        void* x22 = *arg1
        
        if (x22 != 0)
            void** x23_1 = *(arg1 + 8)
            void* x0_2 = x22
            
            if (x23_1 != x22)
                do
                    x23_1 = &x23_1[-3]
                    *x23_1 = _vtable_for_Botan::CRL_Entry + 0x10
                    int64_t* x21_2 = x23_1[2]
                    
                    if (x21_2 != 0)
                        int64_t x9_2
                        int32_t i
                        
                        do
                            x9_2 = __ldaxr(&x21_2[1])
                            i = __stlxr(x9_2 - 1, &x21_2[1])
                        while (i != 0)
                        
                        if (x9_2 == 0)
                            (*(*x21_2 + 0x10))(x21_2)
                            std::__ndk1::__shared_weak_count::__release_weak()
                while (x23_1 != x22)
                
                x0_2 = *arg1
            
            *(arg1 + 8) = x22
            operator delete(x0_2)
        
        sub_1101e04(x0_1)
        noreturn
    
    result = operator new(result)
    *arg1 = result
    *(arg1 + 8) = result
    *(arg1 + 0x10) = result + x21_1 * 0x18
    void* x8_3 = *entry_x1
    int64_t x9_1 = entry_x1[1]
    
    while (x8_3 != x9_1)
        *result = _vtable_for_Botan::CRL_Entry + 0x10
        *(result + 8) = *(x8_3 + 8)
        int64_t x11_2 = *(x8_3 + 0x10)
        *(result + 0x10) = x11_2
        
        if (x11_2 != 0)
            int32_t i_1
            
            do
                i_1 = __stxr(__ldxr(x11_2 + 8) + 1, x11_2 + 8)
            while (i_1 != 0)
        
        x8_3 += 0x18
        result += 0x18
    
    *(arg1 + 8) = result

return result
