// 函数: _ZNK5Botan8X509_CRL10is_revokedERKNS_16X509_CertificateE
// 地址: 0xeaa598
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x20_3

if ((Botan::operator==(Botan::X509_Certificate::data() + 0x58, Botan::X509_CRL::data()) & 1) == 0)
    x20_3 = 0
else
    void* x0_5 = Botan::X509_CRL::data()
    void* var_48_1
    __builtin_memset(&var_48_1, 0, 0x18)
    int64_t x9_1 = *(x0_5 + 0xe0)
    int64_t x8_1 = *(x0_5 + 0xe8)
    uint64_t x23_1 = x8_1 - x9_1
    char* var_78
    void* var_60
    void* var_40_1
    
    if (x8_1 != x9_1)
        if ((x23_1 & 0xffffffff80000000) == 0)
            void* x0_7 = operator new(x23_1)
            var_48_1 = x0_7
            void* var_38_1 = x0_7 + x23_1
            int64_t x1_2 = *(x0_5 + 0xe0)
            void* x21_1 = x0_7
            size_t x22_2 = *(x0_5 + 0xe8) - x1_2
            
            if (x22_2 s>= 1)
                memcpy(x21_1, x1_2, x22_2)
                x21_1 += x22_2
            
            var_40_1 = x21_1
            goto label_eaa638
        
        std::__ndk1::__vector_base_common<true>::__throw_length_error()
    label_eaa838:
        std::__ndk1::__vector_base_common<true>::__throw_length_error()
    label_eaa840:
        int64_t* x0_28 = std::__ndk1::__vector_base_common<true>::__throw_length_error()
        char* x0_29 = var_78
        
        if (x0_29 != 0)
            operator delete(x0_29)
        
        void* x0_30 = var_60
        
        if (x0_30 != 0)
            void* var_58_2 = x0_30
            operator delete(x0_30)
        
        void* x0_31 = var_48_1
        
        if (x0_31 != 0)
            void* var_40_3 = x0_31
            operator delete(x0_31)
        
        sub_1101e04(x0_28)
        noreturn
    
label_eaa638:
    void* x0_10 = Botan::X509_Certificate::data()
    __builtin_memset(&var_60, 0, 0x18)
    int64_t x8_4 = *(x0_10 + 0x270)
    int64_t x9_2 = *(x0_10 + 0x268)
    uint64_t x23_2 = x8_4 - x9_2
    void* x21_2
    
    if (x8_4 != x9_2)
        if ((x23_2 & 0xffffffff80000000) != 0)
            goto label_eaa838
        
        void* x0_12 = operator new(x23_2)
        var_60 = x0_12
        void* var_50_1 = x0_12 + x23_2
        int64_t x1_3 = *(x0_10 + 0x268)
        x21_2 = x0_12
        void* x10_1 = x0_12
        size_t x22_4 = *(x0_10 + 0x270) - x1_3
        
        if (x22_4 s>= 1)
            memcpy(x21_2, x1_3, x22_4)
            x10_1 = x21_2 + x22_4
        
        void* x8_7 = var_48_1
        void* var_58_1 = x10_1
        
        if (x8_7 == var_40_1 || x21_2 == x10_1)
            goto label_eaa6e8
        
        void* x9_4 = var_40_1 - x8_7
        
        if (x9_4 == x10_1 - x21_2)
            int64_t x10_3 = 0
            
            while (zx.d(*(x8_7 + x10_3)) == zx.d(*(x21_2 + x10_3)))
                x10_3 += 1
                
                if (x9_4 == x10_3)
                    goto label_eaa6e8
        
        x20_3 = 0
        goto label_eaa81c
    
label_eaa6e8:
    int64_t* x0_15 = Botan::X509_Certificate::data()
    __builtin_memset(&var_78, 0, 0x18)
    int64_t x9_5 = *x0_15
    int64_t x8_8 = x0_15[1]
    uint64_t x22_5 = x8_8 - x9_5
    char* var_70_1
    
    if (x8_8 != x9_5)
        if ((x22_5 & 0xffffffff80000000) != 0)
            goto label_eaa840
        
        char* x0_17 = operator new(x22_5)
        var_78 = x0_17
        void* var_68_1 = &x0_17[x22_5]
        int64_t x1_4 = *x0_15
        char* x21_3 = x0_17
        size_t x20_2 = x0_15[1] - x1_4
        
        if (x20_2 s>= 1)
            memcpy(x21_3, x1_4, x20_2)
            x21_3 = &x21_3[x20_2]
        
        var_70_1 = x21_3
        goto label_eaa748
    
label_eaa748:
    void* x0_19 = Botan::X509_CRL::data()
    int64_t __saved_x0_1 = *(x0_19 + 0x88)
    int64_t x21_4 = *(x0_19 + 0x90)
    
    if (__saved_x0_1 == x21_4)
        x20_3 = 0
    else
        x20_3 = 0
        
        do
            int64_t* x0_23 = Botan::CRL_Entry::data()
            char* x9_6 = var_78
            char* x10_4 = *x0_23
            
            if (var_70_1 - x9_6 == x0_23[1] - x10_4)
                if (x9_6 != var_70_1)
                    do
                        if (zx.d(*x9_6) != zx.d(*x10_4))
                            goto label_eaa774
                        
                        x9_6 = &x9_6[1]
                        x10_4 = &x10_4[1]
                    while (var_70_1 != x9_6)
                
                x20_3 = *(Botan::CRL_Entry::data() + 0x40) != 8 ? 1 : 0
            
        label_eaa774:
            __saved_x0_1 += 0x18
        while (__saved_x0_1 != x21_4)
    
    char* x0_24 = var_78
    
    if (x0_24 != 0)
        operator delete(x0_24)
    
    x21_2 = var_60
    void* var_40_2
    void* x0_25
    
    if (x21_2 != 0)
    label_eaa81c:
        operator delete(x21_2)
        x0_25 = var_48_1
        
        if (x0_25 != 0)
            var_40_2 = x0_25
            operator delete(x0_25)
    else
        x0_25 = var_48_1
        
        if (x0_25 != 0)
            var_40_2 = x0_25
            operator delete(x0_25)

return zx.q(x20_3) & 1
