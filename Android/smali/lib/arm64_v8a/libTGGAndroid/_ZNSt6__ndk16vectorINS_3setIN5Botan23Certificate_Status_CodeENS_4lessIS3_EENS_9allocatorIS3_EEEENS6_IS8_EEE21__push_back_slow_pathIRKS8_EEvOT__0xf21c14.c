// 函数: _ZNSt6__ndk16vectorINS_3setIN5Botan23Certificate_Status_CodeENS_4lessIS3_EENS_9allocatorIS3_EEEENS6_IS8_EEE21__push_back_slow_pathIRKS8_EEvOT_
// 地址: 0xf21c14
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

std::__ndk1::set<Botan::Certificate_Status_Code, std::__ndk1::less<Botan::Certificate_Status_Code>, std::__ndk1::allocator<Botan::Certificate_Status_Code> >
     const& x9 = *arg1
int64_t x20 = ((arg1[1] - x9) s>> 3) * -0x5555555555555555

if (x20 + 1 u> 0xaaaaaaaaaaaaaaa)
    std::__ndk1::__vector_base_common<true>::__throw_length_error()
else
    int64_t x9_3 = ((arg1[2] - x9) s>> 3) * -0x5555555555555555
    int64_t x10_2 = x9_3 << 1
    int64_t x10_3
    
    if (x10_2 u< x20 + 1)
        x10_3 = x20 + 1
    else
        x10_3 = x10_2
    
    int64_t x23_1
    
    x23_1 = x9_3 u< 0x555555555555555 ? x10_3 : 0xaaaaaaaaaaaaaaa
    
    int64_t x22
    
    if (x23_1 == 0)
        x22 = 0
    label_f21cac:
        int64_t** x20_1 = x22 + x20 * 0x18
        int64_t* entry_x1
        int64_t result = sub_ec86a0(x20_1, entry_x1)
        std::__ndk1::set<Botan::Certificate_Status_Code, std::__ndk1::less<Botan::Certificate_Status_Code>, std::__ndk1::allocator<Botan::Certificate_Status_Code> >
             const& x21_2 = *arg1
        void* x10_4 = arg1[1]
        int64_t x8_2 = x22 + x23_1 * 0x18
        
        if (x10_4 == x21_2)
            *arg1 = x20_1
            arg1[1] = &x20_1[3]
            arg1[2] = x8_2
            
            if (x21_2 == 0)
                return result
        else
            int64_t x11_2 = 0
            void* x12_2 = x21_2 - x10_4
            
            while (true)
                void* x13_1 = x10_4 + x11_2
                void* x14_2 = x20_1 + x11_2
                *(x14_2 - 0x18) = *(x13_1 - 0x18)
                void* x15_2 = *(x13_1 - 0x10)
                *(x14_2 - 0x10) = x15_2
                int64_t x16_2 = *(x13_1 - 8)
                *(x14_2 - 8) = x16_2
                
                if (x16_2 != 0)
                    *(x15_2 + 0x10) = x14_2 - 0x10
                    *(x13_1 - 0x10) = 0
                    *(x13_1 - 8) = 0
                    *(x13_1 - 0x18) = x13_1 - 0x10
                    x11_2 -= 0x18
                    
                    if (x12_2 == x11_2)
                        break
                else
                    *(x14_2 - 0x18) = x14_2 - 0x10
                    x11_2 -= 0x18
                    
                    if (x12_2 == x11_2)
                        break
            
            x21_2 = *arg1
            void* x10_5 = arg1[1]
            *arg1 = x20_1 + x11_2
            arg1[1] = &x20_1[3]
            arg1[2] = x8_2
            
            if (x10_5 != x21_2)
                bool cond:0_1
                
                do
                    *(x10_5 - 0x10)
                    result = std::__ndk1::__tree<Botan::Certificate_Status_Code, std::__ndk1::less<Botan::Certificate_Status_Code>, std::__ndk1::allocator<Botan::Certificate_Status_Code> >::destroy(
                        x10_5 - 0x18)
                    cond:0_1 = x21_2 != x10_5 - 0x18
                    x10_5 -= 0x18
                while (cond:0_1)
            
            if (x21_2 == 0)
                return result
        
        return operator delete(x21_2) __tailcall
    
    if (x23_1 u<= 0xaaaaaaaaaaaaaaa)
        x22 = operator new(x23_1 * 0x18)
        goto label_f21cac

sub_ef2a0c()
noreturn
