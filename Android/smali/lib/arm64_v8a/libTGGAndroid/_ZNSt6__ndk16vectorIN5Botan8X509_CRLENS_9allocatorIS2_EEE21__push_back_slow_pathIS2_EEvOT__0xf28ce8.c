// 函数: _ZNSt6__ndk16vectorIN5Botan8X509_CRLENS_9allocatorIS2_EEE21__push_back_slow_pathIS2_EEvOT_
// 地址: 0xf28ce8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x9 = *arg1
int64_t x23 = ((*(arg1 + 8) - x9) s>> 3) * -0xf0f0f0f0f0f0f0f

if (x23 + 1 u> 0x1e1e1e1e1e1e1e1)
    std::__ndk1::__vector_base_common<true>::__throw_length_error()
else
    int64_t x9_3 = ((*(arg1 + 0x10) - x9) s>> 3) * -0xf0f0f0f0f0f0f0f
    int64_t x10_2 = x9_3 << 1
    int64_t x10_3
    
    if (x10_2 u< x23 + 1)
        x10_3 = x23 + 1
    else
        x10_3 = x10_2
    
    int64_t x24_1
    
    x24_1 = x9_3 u< 0xf0f0f0f0f0f0f0 ? x10_3 : 0x1e1e1e1e1e1e1e1
    
    int64_t x25
    
    if (x24_1 == 0)
        x25 = 0
    label_f28d8c:
        Botan::X509_Object* x21 = x25 + x23 * 0x88
        void* result = Botan::X509_Object::X509_Object(x21)
        void* x9_4 = x25 + x23 * 0x88
        *x21 = _vtable_for_Botan::X509_CRL + 0x10
        void* entry_x1
        int64_t x8_2 = *(entry_x1 + 0x80)
        *(x9_4 + 0x78) = *(entry_x1 + 0x78)
        *(x9_4 + 0x80) = x8_2
        *(entry_x1 + 0x78) = 0
        *(entry_x1 + 0x80) = 0
        void* x23_1 = *arg1
        void* x20 = *(arg1 + 8)
        int64_t x8_3 = x25 + x24_1 * 0x88
        
        if (x20 == x23_1)
            *arg1 = x21
            *(arg1 + 8) = x21 + 0x88
            *(arg1 + 0x10) = x8_3
            
            if (x23_1 == 0)
                return result
        else
            int64_t fp_1 = 0
            int64_t x26_1 = -0x88
            int64_t var_78_1 = x25
            bool cond:0_1
            
            do
                void* x25_1 = x21 + fp_1 * 0x88
                result = Botan::X509_Object::X509_Object(x25_1 - 0x88)
                *(x25_1 - 0x88) = _vtable_for_Botan::X509_CRL + 0x10
                *(x25_1 - 0x10) = *(x20 - 0x10)
                int64_t x8_5 = *(x20 - 8)
                *(x25_1 - 8) = x8_5
                
                if (x8_5 != 0)
                    int32_t i
                    
                    do
                        i = __stxr(__ldxr(x8_5 + 8) + 1, x8_5 + 8)
                    while (i != 0)
                
                fp_1 -= 1
                cond:0_1 = x20 - 0x88 == x23_1
                x26_1 -= 0x88
                x20 -= 0x88
            while (not(cond:0_1))
            x23_1 = *arg1
            void** x20_1 = *(arg1 + 8)
            *arg1 = x21 + fp_1 * 0x88
            *(arg1 + 8) = x21 + 0x88
            *(arg1 + 0x10) = x8_3
            
            if (x20_1 != x23_1)
                do
                    x20_1 -= 0x88
                    result = sub_f28658(arg1 + 0x10, x20_1)
                while (x23_1 != x20_1)
            
            if (x23_1 == 0)
                return result
        
        return operator delete(x23_1) __tailcall
    
    if (x24_1 u<= 0x1e1e1e1e1e1e1e1)
        x25 = operator new(x24_1 * 0x88)
        goto label_f28d8c

sub_ef2a0c()
noreturn
