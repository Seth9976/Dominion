// 函数: _ZNSt6__ndk16vectorIN5Botan16X509_CertificateENS_9allocatorIS2_EEE21__push_back_slow_pathIS2_EEvOT_
// 地址: 0xf4b324
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x9 = *arg1
int64_t x24 = ((*(arg1 + 8) - x9) s>> 3) * -0xf0f0f0f0f0f0f0f

if (x24 + 1 u> 0x1e1e1e1e1e1e1e1)
    std::__ndk1::__vector_base_common<true>::__throw_length_error()
else
    int64_t x9_3 = ((*(arg1 + 0x10) - x9) s>> 3) * -0xf0f0f0f0f0f0f0f
    int64_t x10_2 = x9_3 << 1
    int64_t x10_3
    
    if (x10_2 u< x24 + 1)
        x10_3 = x24 + 1
    else
        x10_3 = x10_2
    
    int64_t x23_1
    
    x23_1 = x9_3 u< 0xf0f0f0f0f0f0f0 ? x10_3 : 0x1e1e1e1e1e1e1e1
    
    int64_t x20
    
    if (x23_1 == 0)
        x20 = 0
    label_f4b3c8:
        Botan::X509_Object* x21 = x20 + x24 * 0x88
        int64_t result = Botan::X509_Object::X509_Object(x21)
        void* x10_4 = x20 + x24 * 0x88
        *x21 = _vtable_for_Botan::X509_Certificate + 0x10
        void* entry_x1
        int64_t x9_5 = *(entry_x1 + 0x80)
        *(x10_4 + 0x78) = *(entry_x1 + 0x78)
        *(x10_4 + 0x80) = x9_5
        
        if (x9_5 != 0)
            int32_t i
            
            do
                i = __stxr(__ldxr(x9_5 + 8) + 1, x9_5 + 8)
            while (i != 0)
        
        void* x22_2 = *arg1
        void* x25 = *(arg1 + 8)
        int64_t x9_7 = x20 + x23_1 * 0x88
        
        if (x25 == x22_2)
            *arg1 = x21
            *(arg1 + 8) = x21 + 0x88
            *(arg1 + 0x10) = x9_7
            
            if (x22_2 == 0)
                return result
        else
            int64_t x27_1 = 0
            int64_t x24_1 = -0x88
            bool cond:0_1
            
            do
                void* x26_1 = x21 + x27_1 * 0x88
                result = Botan::X509_Object::X509_Object(x26_1 - 0x88)
                *(x26_1 - 0x88) = _vtable_for_Botan::X509_Certificate + 0x10
                *(x26_1 - 0x10) = *(x25 - 0x10)
                int64_t x8_3 = *(x25 - 8)
                *(x26_1 - 8) = x8_3
                
                if (x8_3 != 0)
                    int32_t i_1
                    
                    do
                        i_1 = __stxr(__ldxr(x8_3 + 8) + 1, x8_3 + 8)
                    while (i_1 != 0)
                
                x27_1 -= 1
                cond:0_1 = x25 - 0x88 == x22_2
                x24_1 -= 0x88
                x25 -= 0x88
            while (not(cond:0_1))
            x22_2 = *arg1
            int64_t* x20_1 = *(arg1 + 8)
            *arg1 = x21 + x27_1 * 0x88
            *(arg1 + 8) = x21 + 0x88
            *(arg1 + 0x10) = x9_7
            
            if (x20_1 != x22_2)
                do
                    x20_1 = &x20_1[-0x11]
                    result = (*(*x20_1 + 0x10))(x20_1)
                while (x22_2 != x20_1)
            
            if (x22_2 == 0)
                return result
        
        return operator delete(x22_2) __tailcall
    
    if (x23_1 u<= 0x1e1e1e1e1e1e1e1)
        x20 = operator new(x23_1 * 0x88)
        goto label_f4b3c8

sub_ef2a0c()
noreturn
