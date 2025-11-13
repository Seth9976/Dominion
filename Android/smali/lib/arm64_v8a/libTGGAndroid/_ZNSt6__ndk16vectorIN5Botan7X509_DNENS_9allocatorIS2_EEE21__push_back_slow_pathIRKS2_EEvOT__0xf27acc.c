// 函数: _ZNSt6__ndk16vectorIN5Botan7X509_DNENS_9allocatorIS2_EEE21__push_back_slow_pathIRKS2_EEvOT_
// 地址: 0xf27acc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

Botan::X509_DN const& x9 = *arg1
int64_t x20 = ((arg1[1] - x9) s>> 3) * 0x6db6db6db6db6db7

if (x20 + 1 u> 0x492492492492492)
    std::__ndk1::__vector_base_common<true>::__throw_length_error()
else
    int64_t x9_3 = ((arg1[2] - x9) s>> 3) * 0x6db6db6db6db6db7
    int64_t x10_2 = x9_3 << 1
    int64_t x10_3
    
    if (x10_2 u< x20 + 1)
        x10_3 = x20 + 1
    else
        x10_3 = x10_2
    
    int64_t x24_1
    
    x24_1 = x9_3 u< 0x249249249249249 ? x10_3 : 0x492492492492492
    
    int64_t x23
    
    if (x24_1 == 0)
        x23 = 0
    label_f27b7c:
        Botan::X509_DN* x20_1 = x23 + x20 * 0x38
        void* result = Botan::X509_DN::X509_DN(x20_1)
        Botan::X509_DN const& x22 = *arg1
        void* x10_4 = arg1[1]
        int64_t x8 = x23 + x24_1 * 0x38
        
        if (x10_4 == x22)
            *arg1 = x20_1
            arg1[1] = x20_1 + 0x38
            arg1[2] = x8
            
            if (x22 == 0)
                return result
        else
            int64_t i = 0
            
            do
                void* x14_1 = x20_1 + i
                void* x15_1 = x10_4 + i
                *(x14_1 - 0x38) = _vtable_for_Botan::X509_DN + 0x10
                __builtin_memset(x14_1 - 0x30, 0, 0x18)
                i -= 0x38
                *(x14_1 - 0x30) = *(x15_1 - 0x30)
                *(x14_1 - 0x28) = *(x15_1 - 0x28)
                *(x14_1 - 0x20) = *(x15_1 - 0x20)
                __builtin_memset(x15_1 - 0x30, 0, 0x30)
                __builtin_memset(x14_1 - 0x18, 0, 0x18)
                *(x14_1 - 0x18) = *(x15_1 - 0x18)
                *(x14_1 - 0x10) = *(x15_1 - 0x10)
                *(x14_1 - 8) = *(x15_1 - 8)
            while (x22 - x10_4 != i)
            
            x22 = *arg1
            void** x23_1 = arg1[1]
            *arg1 = x20_1 + i
            arg1[1] = x20_1 + 0x38
            arg1[2] = x8
            
            if (x23_1 != x22)
                do
                    x23_1 -= 0x38
                    result = sub_f276a8(&arg1[2], x23_1)
                while (x22 != x23_1)
            
            if (x22 == 0)
                return result
        
        return operator delete(x22) __tailcall
    
    if (x24_1 u<= 0x492492492492492)
        x23 = operator new(x24_1 * 0x38)
        goto label_f27b7c

sub_ef2a0c()
noreturn
