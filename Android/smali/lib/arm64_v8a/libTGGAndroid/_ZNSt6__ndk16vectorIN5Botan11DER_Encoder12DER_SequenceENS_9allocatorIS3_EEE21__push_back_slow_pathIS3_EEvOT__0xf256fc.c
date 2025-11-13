// 函数: _ZNSt6__ndk16vectorIN5Botan11DER_Encoder12DER_SequenceENS_9allocatorIS3_EEE21__push_back_slow_pathIS3_EEvOT_
// 地址: 0xf256fc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x9 = *arg1
int64_t x21 = ((*(arg1 + 8) - x9) s>> 3) * 0x6db6db6db6db6db7
Botan::DER_Encoder::DER_Sequence&& x20 = arg1

if (x21 + 1 u> 0x492492492492492)
    std::__ndk1::__vector_base_common<true>::__throw_length_error()
else
    int64_t x9_3 = ((*(x20 + 0x10) - x9) s>> 3) * 0x6db6db6db6db6db7
    int64_t x10_2 = x9_3 << 1
    int64_t x10_3
    
    if (x10_2 u< x21 + 1)
        x10_3 = x21 + 1
    else
        x10_3 = x10_2
    
    int64_t x24_1
    
    x24_1 = x9_3 u< 0x249249249249249 ? x10_3 : 0x492492492492492
    
    Botan::DER_Encoder::DER_Sequence&& x19
    int128_t v0
    int128_t v1
    int128_t v2
    
    if (x24_1 == 0)
        x19 = nullptr
    label_f257b4:
        v0.q = 0
        v0:8.q = 0
        int64_t* x21_1 = x19 + x21 * 0x38
        __builtin_memset(&x21_1[2], 0, 0x28)
        int64_t* entry_x1
        v0.q = *entry_x1
        v1.q = *x21_1
        int64_t x25 = x19 + x24_1 * 0x38
        *x21_1 = v0.q
        v0 = *(entry_x1 + 8)
        *entry_x1 = v1.q
        entry_x1[1] = 0
        v2 = *(x21_1 + 0x10)
        v1 = *(x21_1 + 0x20)
        *(x21_1 + 8) = v0
        x21_1[3] = entry_x1[3]
        *(x21_1 + 0x20) = *(entry_x1 + 0x20)
        int64_t x9_5 = entry_x1[6]
        *(entry_x1 + 0x10) = v2
        *(entry_x1 + 0x20) = v1
        x21_1[6] = x9_5
        entry_x1[6] = 0
        void* x23 = *x20
        void* x27 = *(x20 + 8)
        
        if (x27 == x23)
            *x20 = x21_1
            *(x20 + 8) = &x21_1[7]
            *(x20 + 0x10) = x25
            
            if (x23 == 0)
                return 
        else
            int64_t i = 0
            
            do
                void* fp_1 = x21_1 + i
                *(fp_1 - 0x38) = *(x27 + i - 0x38)
                std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::vector(fp_1 - 0x30)
                std::__ndk1::vector<std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >, std::__ndk1::allocator<std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> > > >::vector(
                    fp_1 - 0x18)
                i -= 0x38
            while (x23 - x27 != i)
            
            x23 = *x20
            void* x19_1 = *(x20 + 8)
            *x20 = x21_1 + i
            *(x20 + 8) = &x21_1[7]
            *(x20 + 0x10) = x25
            
            if (x19_1 != x23)
                do
                    x19_1 -= 0x38
                    sub_f230d4(x20 + 0x10, x19_1)
                while (x23 != x19_1)
            
            if (x23 == 0)
                return 
        
        return operator delete(x23) __tailcall
    
    if (x24_1 u<= 0x492492492492492)
        arg1, v0, v1, v2 = operator new(x24_1 * 0x38)
        x19 = arg1
        goto label_f257b4

sub_ef2a0c()
noreturn
