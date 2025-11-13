// 函数: _ZNSt6__ndk16vectorIN5Botan10polyn_gf2mENS_9allocatorIS2_EEE21__push_back_slow_pathIS2_EEvOT_
// 地址: 0xf458f8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x9 = *arg1
Botan::polyn_gf2m&& x20 = arg1
int64_t x23 = ((*(arg1 + 8) - x9) s>> 4) * -0x5555555555555555

if (x23 + 1 u> 0x555555555555555)
    std::__ndk1::__vector_base_common<true>::__throw_length_error()
else
    int64_t x9_3 = ((*(x20 + 0x10) - x9) s>> 4) * -0x5555555555555555
    int64_t x10_2 = x9_3 << 1
    int64_t x10_3
    
    if (x10_2 u< x23 + 1)
        x10_3 = x23 + 1
    else
        x10_3 = x10_2
    
    int64_t x22_1
    
    x22_1 = x9_3 u< 0x2aaaaaaaaaaaaaa ? x10_3 : 0x555555555555555
    
    Botan::polyn_gf2m&& x19
    int128_t v0
    int128_t v1
    
    if (x22_1 == 0)
        x19 = nullptr
    label_f45998:
        v0.q = 0
        v0:8.q = 0
        int32_t* x23_1 = x19 + x23 * 0x30
        __builtin_memset(&x23_1[2], 0, 0x20)
        int32_t x10_4 = *x23_1
        int64_t x25 = x19 + x22_1 * 0x30
        int32_t* entry_x1
        *x23_1 = *entry_x1
        int64_t x9_5 = *(entry_x1 + 0x20)
        *entry_x1 = x10_4
        int64_t x11_2 = *(x23_1 + 0x20)
        *(x23_1 + 0x20) = x9_5
        *(x23_1 + 0x28) = 0
        *(x23_1 + 0x28) = *(entry_x1 + 0x28)
        *(entry_x1 + 0x20) = x11_2
        *(entry_x1 + 0x28) = 0
        v1 = *(x23_1 + 8)
        *(x23_1 + 8) = *(entry_x1 + 8)
        *(entry_x1 + 8) = v1
        int64_t x10_5 = *(x23_1 + 0x18)
        *(x23_1 + 0x18) = *(entry_x1 + 0x18)
        *(entry_x1 + 0x18) = x10_5
        void* x21_2 = *x20
        int32_t* fp = *(x20 + 8)
        
        if (fp == x21_2)
            *x20 = x23_1
            *(x20 + 8) = &x23_1[0xc]
            *(x20 + 0x10) = x25
            
            if (x21_2 == 0)
                return 
        else
            int64_t x26_1 = 0
            int32_t* x28_1 = fp
            
            do
                x28_1 = &x28_1[-0xc]
                void* x24_1 = x23_1 + x26_1 * 0x30
                *(x24_1 - 0x30) = *x28_1
                std::__ndk1::vector<uint16_t, Botan::secure_allocator<uint16_t> >::vector(x24_1
                    - 0x28)
                *(x24_1 - 0x10) = *(fp - 0x10)
                int64_t x8_4 = *(fp - 8)
                *(x24_1 - 8) = x8_4
                
                if (x8_4 != 0)
                    int32_t i
                    
                    do
                        i = __stxr(__ldxr(x8_4 + 8) + 1, x8_4 + 8)
                    while (i != 0)
                
                x26_1 -= 1
                fp = x28_1
            while (x28_1 != x21_2)
            
            x21_2 = *x20
            void* x24_2 = *(x20 + 8)
            *x20 = x23_1 + x26_1 * 0x30
            *(x20 + 8) = &x23_1[0xc]
            *(x20 + 0x10) = x25
            
            if (x24_2 != x21_2)
                do
                    int64_t* x19_1 = *(x24_2 - 8)
                    int64_t x9_11
                    
                    if (x19_1 != 0)
                        int32_t i_1
                        
                        do
                            x9_11 = __ldaxr(&x19_1[1])
                            i_1 = __stlxr(x9_11 - 1, &x19_1[1])
                        while (i_1 != 0)
                    
                    if (x19_1 != 0 && x9_11 == 0)
                        (*(*x19_1 + 0x10))(x19_1)
                        std::__ndk1::__shared_weak_count::__release_weak()
                        arg1 = *(x24_2 - 0x28)
                        
                        if (arg1 != 0)
                            goto label_f45ae8
                    else
                        arg1 = *(x24_2 - 0x28)
                        
                        if (arg1 != 0)
                        label_f45ae8:
                            int64_t x8_9 = *(x24_2 - 0x18)
                            *(x24_2 - 0x20) = arg1
                            Botan::deallocate_memory(arg1, (x8_9 - arg1) s>> 1, 2)
                    
                    x24_2 -= 0x30
                while (x24_2 != x21_2)
            
            if (x21_2 == 0)
                return 
        
        return operator delete(x21_2) __tailcall
    
    if (x22_1 u<= 0x555555555555555)
        arg1, v0, v1 = operator new(x22_1 * 0x30)
        x19 = arg1
        goto label_f45998

sub_ef2a0c()
noreturn
