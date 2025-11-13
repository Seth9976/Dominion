// 函数: _ZNSt6__ndk16vectorIN5Botan16X509_CertificateENS_9allocatorIS2_EEEC2ERKS5_
// 地址: 0xe45284
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*arg1 = 0
*(arg1 + 8) = 0
*(arg1 + 0x10) = 0
int64_t* entry_x1
int64_t x9 = *entry_x1
int64_t x8 = entry_x1[1]
uint64_t result = x8 - x9

if (x8 != x9)
    int64_t x21_1 = (result s>> 3) * -0xf0f0f0f0f0f0f0f
    
    if (x21_1 u>= 0x1e1e1e1e1e1e1e2)
        int64_t* x0_2 = std::__ndk1::__vector_base_common<true>::__throw_length_error()
        void* x22_3 = *arg1
        
        if (x22_3 != 0)
            int64_t* x20_1 = *(arg1 + 8)
            void* x0_3 = x22_3
            
            if (x20_1 != x22_3)
                do
                    x20_1 = &x20_1[-0x11]
                    (*(*x20_1 + 0x10))(x20_1)
                while (x22_3 != x20_1)
                
                x0_3 = *arg1
            
            *(arg1 + 8) = x22_3
            operator delete(x0_3)
        
        sub_1101e04(x0_2)
        noreturn
    
    result = operator new(result)
    *arg1 = result
    *(arg1 + 8) = result
    *(arg1 + 0x10) = result + x21_1 * 0x88
    void* x21_2 = *entry_x1
    int64_t x22_2 = entry_x1[1]
    uint64_t result_1 = result
    
    while (x21_2 != x22_2)
        result = Botan::X509_Object::X509_Object(result_1)
        *result_1 = _vtable_for_Botan::X509_Certificate + 0x10
        *(result_1 + 0x78) = *(x21_2 + 0x78)
        int64_t x8_4 = *(x21_2 + 0x80)
        *(result_1 + 0x80) = x8_4
        
        if (x8_4 != 0)
            int32_t i
            
            do
                i = __stxr(__ldxr(x8_4 + 8) + 1, x8_4 + 8)
            while (i != 0)
        
        x21_2 += 0x88
        result_1 += 0x88
    
    *(arg1 + 8) = result_1

return result
