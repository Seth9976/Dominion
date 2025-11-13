// 函数: _ZNSt6__ndk16vectorINS0_IhN5Botan16secure_allocatorIhEEEENS_9allocatorIS4_EEE21__push_back_slow_pathIS4_EEvOT_
// 地址: 0xf25574
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x9 = *arg1
int64_t x21 = ((*(arg1 + 8) - x9) s>> 3) * -0x5555555555555555

if (x21 + 1 u> 0xaaaaaaaaaaaaaaa)
    std::__ndk1::__vector_base_common<true>::__throw_length_error()
else
    int64_t x9_3 = ((*(arg1 + 0x10) - x9) s>> 3) * -0x5555555555555555
    int64_t x10_2 = x9_3 << 1
    int64_t x10_3
    
    if (x10_2 u< x21 + 1)
        x10_3 = x21 + 1
    else
        x10_3 = x10_2
    
    int64_t x22_1
    
    x22_1 = x9_3 u< 0x555555555555555 ? x10_3 : 0xaaaaaaaaaaaaaaa
    
    void* result
    
    if (x22_1 == 0)
        result = nullptr
    label_f25604:
        int128_t* x8_2 = result + x21 * 0x18
        *(x8_2 + 8) = 0
        x8_2[1].q = 0
        int64_t x9_4 = result + x22_1 * 0x18
        int128_t* entry_x1
        *x8_2 = *entry_x1
        x8_2[1].q = entry_x1[1].q
        __builtin_memset(entry_x1, 0, 0x18)
        void* x20_2 = *arg1
        int64_t* x11_2 = *(arg1 + 8)
        void* x10_5 = x8_2 + 0x18
        
        if (x11_2 == x20_2)
            *arg1 = x8_2
            *(arg1 + 8) = x10_5
            *(arg1 + 0x10) = x9_4
        else
            do
                x8_2 -= 0x18
                __builtin_memset(x8_2, 0, 0x18)
                x11_2 = &x11_2[-3]
                *x8_2 = *x11_2
                *(x8_2 + 8) = x11_2[1]
                x8_2[1].q = x11_2[2]
                __builtin_memset(x11_2, 0, 0x18)
            while (x20_2 != x11_2)
            
            x20_2 = *arg1
            int64_t* x11_3 = *(arg1 + 8)
            *arg1 = x8_2
            *(arg1 + 8) = x10_5
            *(arg1 + 0x10) = x9_4
            
            if (x11_3 != x20_2)
                int64_t* x19_1 = x11_3
                
                do
                    x19_1 = &x19_1[-3]
                    result = *x19_1
                    
                    if (result != 0)
                        int64_t x8_3 = x11_3[-1]
                        x11_3[-2] = result
                        result = Botan::deallocate_memory(result, x8_3 - result, 1)
                    
                    x11_3 = x19_1
                while (x20_2 != x19_1)
        
        if (x20_2 == 0)
            return result
        
        return operator delete(x20_2) __tailcall
    
    if (x22_1 u<= 0xaaaaaaaaaaaaaaa)
        int128_t v0
        result, v0 = operator new(x22_1 * 0x18)
        goto label_f25604

sub_ef2a0c()
noreturn
