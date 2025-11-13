// 函数: _ZNK5Botan4OCSP6CertID9is_id_forERKNS_16X509_CertificateES4_
// 地址: 0xea06bc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x0_1 = Botan::X509_Certificate::data()
x0_1[1]
void* var_58
__builtin_memset(&var_58, 0, 0x18)
int64_t var_40 = -1
int32_t var_38 = 1
Botan::BigInt::binary_decode(&var_58, *x0_1)
int32_t x0_4 = Botan::BigInt::is_equal(&var_58)
void* x8_1 = var_58
void* var_48

if (x8_1 != 0)
    void* var_50_1 = x8_1
    Botan::deallocate_memory(x8_1, (var_48 - x8_1) s>> 2, 4)

if ((x0_4 & 1) == 0)
    return 0

Botan::OID::to_formatted_string()
int16_t var_78 = 0
Botan::HashFunction::create_or_throw(&var_58, &var_78)
void* var_68

if ((zx.d(var_78.b) & 1) != 0)
    operator delete(var_68)
void* x0_10 = Botan::X509_Certificate::data()
int64_t x1_4 = *(x0_10 + 0xc8)
int64_t* var_60
(*(*var_60 + 0x18))(var_60, x1_4, *(x0_10 + 0xd0) - x1_4)
Botan::Buffered_Computation::final()
void* var_90
char* x21_1 = var_90
__builtin_memset(&var_78, 0, 0x18)
char* var_88
uint64_t x22_2 = var_88 - x21_1
void* x0_14
void* x8_6

if (var_88 == x21_1)
    x0_14 = nullptr
    x8_6 = nullptr
label_ea085c:
    char* x10_2 = *(arg1 + 0x48)
    int64_t x9_5 = *(arg1 + 0x50)
    int32_t x22_3
    
    if (x9_5 - x10_2 != x8_6 - x0_14)
        x22_3 = 1
        
        if (x0_14 != 0)
        label_ea08b4:
            void* var_70_3 = x0_14
            operator delete(x0_14)
            x21_1 = var_90
    else if (x10_2 == x9_5)
        x22_3 = 0
        
        if (x0_14 != 0)
            goto label_ea08b4
    else
        void* x8_10 = x0_14
        uint32_t x11_3
        uint32_t x12_2
        
        do
            x11_3 = zx.d(*x10_2)
            x12_2 = zx.d(*x8_10)
            
            if (x11_3 != x12_2)
                break
            
            x10_2 = &x10_2[1]
            x8_10 += 1
        while (x9_5 != x10_2)
        
        x22_3 = x11_3 != x12_2 ? 1 : 0
        
        if (x0_14 != 0)
            goto label_ea08b4
    
    int64_t var_80
    
    if (x21_1 != 0)
        var_88 = x21_1
        Botan::deallocate_memory(x21_1, var_80 - x21_1, 1)
    
    int32_t x19_1
    
    if ((x22_3 & 1) != 0)
        x19_1 = 0
    label_ea0a60:
        int64_t var_60_1 = 0
        
        if (var_60 != 0)
            (*(*var_60 + 0x10))()
        
        if ((zx.d(var_58.b) & 1) != 0)
            operator delete(var_48)
        
        return zx.q(x19_1)
    
    void* x0_17 = Botan::X509_Certificate::data()
    int64_t x1_6 = *(x0_17 + 0x178)
    (*(*var_60 + 0x18))(var_60, x1_6, *(x0_17 + 0x180) - x1_6)
    Botan::Buffered_Computation::final()
    void* x20_1 = var_90
    __builtin_memset(&var_78, 0, 0x18)
    void* x21_3 = var_88 - x20_1
    void* x0_21
    void* x8_15
    
    if (var_88 == x20_1)
        x0_21 = nullptr
        x8_15 = nullptr
    label_ea09e4:
        char* x10_4 = *(arg1 + 0x60)
        int64_t x9_8 = *(arg1 + 0x68)
        
        if (x9_8 - x10_4 != x8_15 - x0_21)
            x19_1 = 0
        label_ea0a30:
            
            if (x0_21 != 0)
            label_ea0a34:
                void* var_70_6 = x0_21
                operator delete(x0_21)
                x20_1 = var_90
        else
            if (x10_4 != x9_8)
                void* x8_19 = x0_21
                
                do
                    uint32_t x11_6 = zx.d(*x10_4)
                    uint32_t x12_4 = zx.d(*x8_19)
                    x19_1 = x11_6 == x12_4 ? 1 : 0
                    
                    if (x11_6 != x12_4)
                        break
                    
                    x10_4 = &x10_4[1]
                    x8_19 += 1
                while (x9_8 != x10_4)
                
                goto label_ea0a30
            
            x19_1 = 1
            
            if (x0_21 != 0)
                goto label_ea0a34
        
        if (x20_1 != 0)
            void* var_88_1 = x20_1
            Botan::deallocate_memory(x20_1, var_80 - x20_1, 1)
        
        goto label_ea0a60
    
    if ((x21_3 & 0xffffffff80000000) == 0)
        int128_t v0_2
        int128_t v1_2
        x0_21, v0_2, v1_2 = operator new(x21_3)
        int64_t var_68_2 = x0_21 + x21_3
        x8_15 = x0_21
        var_78.q = x0_21
        void* var_70_4 = x0_21
        
        if (x20_1 != var_88)
            x8_15 = x0_21
            void* x9_7 = x20_1
            
            if (x21_3 u< 0x20)
            label_ea09c4:
                
                do
                    char x10_3 = *x9_7
                    x9_7 += 1
                    *x8_15 = x10_3
                    x8_15 += 1
                while (var_88 != x9_7)
            else
                if (x0_21 u< var_88)
                    x8_15 = x0_21
                    x9_7 = x20_1
                
                if (x0_21 u< var_88 && x20_1 u< var_88 + x0_21 - x20_1)
                    goto label_ea09c4
                
                void* i_5 = x21_3 & 0xffffffffffffffe0
                void* x11_4 = x20_1 + 0x10
                x8_15 = x0_21 + i_5
                x9_7 = x20_1 + i_5
                void* x12_3 = x0_21 + 0x10
                void* i_3 = i_5
                void* i
                
                do
                    v0_2 = *(x11_4 - 0x10)
                    v1_2 = *x11_4
                    x11_4 += 0x20
                    i = i_3
                    i_3 -= 0x20
                    *(x12_3 - 0x10) = v0_2
                    *x12_3 = v1_2
                    x12_3 += 0x20
                while (i != 0x20)
                
                if (x21_3 != i_5)
                    goto label_ea09c4
        
        void* var_70_5 = x8_15
        goto label_ea09e4
else
    if ((x22_2 & 0xffffffff80000000) == 0)
        int128_t v0_1
        int128_t v1_1
        x0_14, v0_1, v1_1 = operator new(x22_2)
        void* var_68_1 = x0_14 + x22_2
        x8_6 = x0_14
        var_78.q = x0_14
        void* var_70_1 = x0_14
        
        if (x21_1 != var_88)
            x8_6 = x0_14
            char* x9_4 = x21_1
            
            if (x22_2 u< 0x20)
            label_ea0848:
                
                do
                    char x10_1 = *x9_4
                    x9_4 = &x9_4[1]
                    *x8_6 = x10_1
                    x8_6 += 1
                while (var_88 != x9_4)
            else
                if (x0_14 u< var_88)
                    x8_6 = x0_14
                    x9_4 = x21_1
                
                if (x0_14 u< var_88 && x21_1 u< &var_88[x0_14 - x21_1])
                    goto label_ea0848
                
                int64_t i_4 = x22_2 & 0xffffffffffffffe0
                void* x11_1 = &x21_1[0x10]
                x8_6 = x0_14 + i_4
                x9_4 = &x21_1[i_4]
                void* x12_1 = x0_14 + 0x10
                int64_t i_2 = i_4
                int64_t i_1
                
                do
                    v0_1 = *(x11_1 - 0x10)
                    v1_1 = *x11_1
                    x11_1 += 0x20
                    i_1 = i_2
                    i_2 -= 0x20
                    *(x12_1 - 0x10) = v0_1
                    *x12_1 = v1_1
                    x12_1 += 0x20
                while (i_1 != 0x20)
                
                if (x22_2 != i_4)
                    goto label_ea0848
        
        void* var_70_2 = x8_6
        goto label_ea085c
    
    std::__ndk1::__vector_base_common<true>::__throw_length_error()
sub_c776cc(std::__ndk1::__vector_base_common<true>::__throw_length_error())
noreturn
