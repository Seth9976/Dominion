// 函数: _ZNSt6__ndk16vectorIN5Botan14Montgomery_IntENS_9allocatorIS2_EEE21__push_back_slow_pathIS2_EEvOT_
// 地址: 0xf472ec
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x9 = *arg1
int64_t x23 = ((*(arg1 + 8) - x9) s>> 3) * 0x6db6db6db6db6db7
Botan::Montgomery_Int&& x20 = arg1

if (x23 + 1 u> 0x492492492492492)
    std::__ndk1::__vector_base_common<true>::__throw_length_error()
else
    int64_t x9_3 = ((*(x20 + 0x10) - x9) s>> 3) * 0x6db6db6db6db6db7
    int64_t x10_2 = x9_3 << 1
    int64_t x10_3
    
    if (x10_2 u< x23 + 1)
        x10_3 = x23 + 1
    else
        x10_3 = x10_2
    
    int64_t x22_1
    
    x22_1 = x9_3 u< 0x249249249249249 ? x10_3 : 0x492492492492492
    
    Botan::Montgomery_Int&& x19
    int128_t v1
    
    if (x22_1 == 0)
        x19 = nullptr
    label_f473a0:
        int64_t* entry_x1
        int64_t x8 = entry_x1[1]
        int64_t* x24 = x19 + x23 * 0x38
        int64_t x26 = x19 + x22_1 * 0x38
        *x24 = *entry_x1
        x24[1] = x8
        __builtin_memset(entry_x1, 0, 0x18)
        x24[3] = 0
        x24[4] = 0
        v1 = *(x24 + 0x18)
        *(x24 + 0x10) = *(entry_x1 + 0x10)
        int64_t x10_5 = entry_x1[4]
        int64_t x8_1 = entry_x1[5]
        *(entry_x1 + 0x18) = v1
        x24[4] = x10_5
        x24[5] = x8_1
        int32_t x8_2 = entry_x1[6].d
        entry_x1[5] = -1
        x24[6].d = x8_2
        entry_x1[6].d = 1
        void* x21_2 = *x20
        int64_t* x27 = *(x20 + 8)
        
        if (x27 == x21_2)
            *x20 = x24
            *(x20 + 8) = &x24[7]
            *(x20 + 0x10) = x26
            
            if (x21_2 == 0)
                return 
        else
            int64_t x25_1 = 0
            int64_t* fp_1 = x27
            
            do
                fp_1 = &fp_1[-7]
                void* x23_1 = x24 + x25_1 * 0x38
                *(x23_1 - 0x38) = *fp_1
                int64_t x8_4 = fp_1[1]
                *(x23_1 - 0x30) = x8_4
                
                if (x8_4 != 0)
                    int32_t i
                    
                    do
                        i = __stxr(__ldxr(x8_4 + 8) + 1, x8_4 + 8)
                    while (i != 0)
                
                std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::vector(x23_1
                    - 0x28)
                x25_1 -= 1
                *(x23_1 - 0x10) = x27[-2]
                int32_t x8_7 = x27[-1].d
                x27 = fp_1
                *(x23_1 - 8) = x8_7
            while (fp_1 != x21_2)
            
            x21_2 = *x20
            void* x23_2 = *(x20 + 8)
            *x20 = x24 + x25_1 * 0x38
            *(x20 + 8) = &x24[7]
            *(x20 + 0x10) = x26
            
            if (x23_2 != x21_2)
                do
                    arg1 = *(x23_2 - 0x28)
                    
                    if (arg1 != 0)
                        int64_t x8_10 = *(x23_2 - 0x18)
                        *(x23_2 - 0x20) = arg1
                        Botan::deallocate_memory(arg1, (x8_10 - arg1) s>> 2, 4)
                    
                    int64_t* x19_1 = *(x23_2 - 0x30)
                    x23_2 -= 0x38
                    
                    if (x19_1 != 0)
                        int64_t x9_7
                        int32_t i_1
                        
                        do
                            x9_7 = __ldaxr(&x19_1[1])
                            i_1 = __stlxr(x9_7 - 1, &x19_1[1])
                        while (i_1 != 0)
                        
                        if (x9_7 == 0)
                            (*(*x19_1 + 0x10))(x19_1)
                            std::__ndk1::__shared_weak_count::__release_weak()
                while (x23_2 != x21_2)
            
            if (x21_2 == 0)
                return 
        
        return operator delete(x21_2) __tailcall
    
    if (x22_1 u<= 0x492492492492492)
        int128_t v0
        arg1, v0, v1 = operator new(x22_1 * 0x38)
        x19 = arg1
        goto label_f473a0

sub_ef2a0c()
noreturn
