// 函数: _ZNSt6__ndk16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE21__push_back_slow_pathIS6_EEvOT_
// 地址: 0xf2635c
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
    
    int64_t result
    int128_t v0
    
    if (x22_1 == 0)
        result = 0
    label_f263ec:
        int128_t* x9_4 = result + x21 * 0x18
        int128_t* entry_x1
        x9_4[1].q = entry_x1[1].q
        *x9_4 = *entry_x1
        __builtin_memset(entry_x1, 0, 0x18)
        void* x20_2 = *arg1
        void* x11_2 = *(arg1 + 8)
        int64_t x8_3 = result + x22_1 * 0x18
        void* x10_4 = x9_4 + 0x18
        
        if (x11_2 == x20_2)
            *arg1 = x9_4
            *(arg1 + 8) = x10_4
            *(arg1 + 0x10) = x8_3
        else
            do
                v0 = *(x11_2 - 0x18)
                *(x9_4 - 8) = *(x11_2 - 8)
                *(x9_4 - 0x18) = v0
                __builtin_memset(x11_2 - 0x18, 0, 0x18)
                x11_2 -= 0x18
                x9_4 -= 0x18
            while (x20_2 != x11_2)
            
            x20_2 = *arg1
            char* x11_3 = *(arg1 + 8)
            *arg1 = x9_4
            *(arg1 + 8) = x10_4
            *(arg1 + 0x10) = x8_3
            
            if (x11_3 != x20_2)
                char* x19_1 = x11_3
                
                do
                    x19_1 = &x19_1[-0x18]
                    
                    if ((zx.d(*x19_1) & 1) != 0)
                        result = operator delete(*(x11_3 - 8))
                    
                    x11_3 = x19_1
                while (x20_2 != x19_1)
        
        if (x20_2 == 0)
            return result
        
        return operator delete(x20_2) __tailcall
    
    if (x22_1 u<= 0xaaaaaaaaaaaaaaa)
        result, v0 = operator new(x22_1 * 0x18)
        goto label_f263ec

sub_ef2a0c()
noreturn
