// 函数: _ZN5Botan4OCSP6CertIDC1ERKNS_16X509_CertificateERKNS_6BigIntE
// 地址: 0xea1500
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*arg1 = _vtable_for_Botan::OCSP::CertID + 0x10
*(arg1 + 8) = _vtable_for_Botan::AlgorithmIdentifier + 0x10
*(arg1 + 0x10) = _vtable_for_Botan::OID + 0x10
*(arg1 + 0x18) = zx.o(0)
*(arg1 + 0x48) = zx.o(0)
*(arg1 + 0x78) = zx.o(0)
*(arg1 + 0x88) = 0
*(arg1 + 0x90) = -1
*(arg1 + 0x98) = 1
*(arg1 + 0x28) = zx.o(0)
*(arg1 + 0x38) = zx.o(0)
*(arg1 + 0x58) = zx.o(0)
*(arg1 + 0x68) = zx.o(0)
char var_c0 = 0xe
int32_t var_bf
__builtin_strncpy(&var_bf, "SHA-160", 8)
int16_t var_80 = 0
Botan::HashFunction::create_or_throw(&var_c0, &var_80)
void* var_70

if ((zx.d(var_80.b) & 1) != 0)
    operator delete(var_70)

void* var_b0

if ((zx.d(var_c0) & 1) != 0)
    operator delete(var_b0)

int64_t* result
(*(*result + 0x40))()
var_c0.q = _vtable_for_Botan::AlgorithmIdentifier + 0x10
Botan::OID::from_string(&var_80)
int64_t var_98
__builtin_memset(&var_98, 0, 0x18)
int16_t* x0_5
int128_t v0
x0_5, v0 = operator new(2)
void* var_90 = &x0_5[1]
*x0_5 = 5
void* x0_6 = *(arg1 + 0x18)

if (x0_6 != 0)
    *(arg1 + 0x20) = x0_6
    operator delete(x0_6)
    __builtin_memset(arg1 + 0x18, 0, 0x18)

*(arg1 + 0x18) = var_b0.o
int64_t var_a0
*(arg1 + 0x28) = var_a0
void* var_b0_1
__builtin_memset(&var_b0_1, 0, 0x18)
void* x0_7 = *(arg1 + 0x30)

if (x0_7 != 0)
    *(arg1 + 0x38) = x0_7
    operator delete(x0_7)
    __builtin_memset(arg1 + 0x30, 0, 0x18)

*(arg1 + 0x30) = x0_5.o
*(arg1 + 0x40) = &x0_5[1]
int64_t var_98_2
__builtin_memset(&var_98_2, 0, 0x18)
void* x0_8 = var_b0_1
var_c0.q = _vtable_for_Botan::AlgorithmIdentifier + 0x10
char var_b8
var_b8.q = _vtable_for_Botan::OID + 0x10

if (x0_8 != 0)
    void* var_a8_1 = x0_8
    operator delete(x0_8)

if ((zx.d(var_80.b) & 1) != 0)
    operator delete(var_70)

void* x0_11 = Botan::X509_Certificate::data()
int64_t x1_1 = *(x0_11 + 0x178)
(*(*result + 0x18))(result, x1_1, *(x0_11 + 0x180) - x1_1)
Botan::Buffered_Computation::final()
void* fp_2 = var_80.q
__builtin_memset(&var_c0, 0, 0x18)
void* var_78
void* x23_3 = var_78 - fp_2
void* var_b0_2
void* x0_15
void* x8_13
void* x9_4
void* x10_1

if (var_78 == fp_2)
    x9_4 = nullptr
    x10_1 = nullptr
    x0_15 = nullptr
    x8_13 = *(arg1 + 0x60)
    
    if (x8_13 == 0)
        goto label_ea17f4
    
label_ea17dc:
    *(arg1 + 0x68) = x8_13
    operator delete(x8_13)
    __builtin_memset(arg1 + 0x60, 0, 0x18)
    x0_15 = var_c0.q
    x10_1 = var_b8.q
    x9_4 = var_b0_2
label_ea17f4:
    *(arg1 + 0x60) = x0_15
    *(arg1 + 0x68) = x10_1
    *(arg1 + 0x70) = x9_4
    void* x0_17 = var_80.q
    __builtin_memset(&var_c0, 0, 0x18)
    
    if (x0_17 != 0)
        var_78 = x0_17
        Botan::deallocate_memory(x0_17, var_70 - x0_17, 1)
    
    void* x0_19 = Botan::X509_Certificate::data()
    int64_t x1_3 = *(x0_19 + 0xe0)
    (*(*result + 0x18))(result, x1_3, *(x0_19 + 0xe8) - x1_3)
    Botan::Buffered_Computation::final()
    void* x28_1 = var_80.q
    __builtin_memset(&var_c0, 0, 0x18)
    void* x22_1 = var_78 - x28_1
    int64_t var_b0_3
    void* x0_23
    void* x8_20
    int64_t x9_6
    void* x10_2
    
    if (var_78 == x28_1)
        x9_6 = 0
        x10_2 = nullptr
        x0_23 = nullptr
        x8_20 = *(arg1 + 0x48)
        
        if (x8_20 == 0)
            goto label_ea193c
        
    label_ea1924:
        *(arg1 + 0x50) = x8_20
        operator delete(x8_20)
        __builtin_memset(arg1 + 0x48, 0, 0x18)
        x0_23 = var_c0.q
        x10_2 = var_b8.q
        x9_6 = var_b0_3
    label_ea193c:
        *(arg1 + 0x48) = x0_23
        *(arg1 + 0x50) = x10_2
        *(arg1 + 0x58) = x9_6
        void* x0_25 = var_80.q
        __builtin_memset(&var_c0, 0, 0x18)
        
        if (x0_25 != 0)
            void* var_78_1 = x0_25
            Botan::deallocate_memory(x0_25, var_70 - x0_25, 1)
        
        uint32_t** entry_x2
        
        if (arg1 + 0x78 != entry_x2)
            entry_x2[1]
            std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::assign<uint32_t*>(
                arg1 + 0x78, *entry_x2)
        
        *(arg1 + 0x90) = entry_x2[3]
        *(arg1 + 0x98) = entry_x2[4].d
        int64_t var_68 = 0
        
        if (result == 0)
            return result
        
        return (*(*result + 0x10))()
    
    if ((x22_1 & 0xffffffff80000000) == 0)
        int128_t v0_2
        int128_t v1_2
        x0_23, v0_2, v1_2 = operator new(x22_1)
        x9_6 = x0_23 + x22_1
        x10_2 = x0_23
        var_c0.q = x0_23
        var_b8.q = x0_23
        var_b0_3 = x9_6
        
        if (x28_1 != var_78)
            if (x22_1 u>= 0x20)
                if (x0_23 u< var_78)
                    x10_2 = x0_23
                
                if (x0_23 u< var_78 && x28_1 u< var_78 + x0_23 - x28_1)
                    goto label_ea1910
                
                void* i_5 = x22_1 & 0xffffffffffffffe0
                void* x11_2 = x28_1 + 0x10
                x10_2 = x0_23 + i_5
                x28_1 += i_5
                void* x12_2 = x0_23 + 0x10
                void* i_3 = i_5
                void* i
                
                do
                    v0_2 = *(x11_2 - 0x10)
                    v1_2 = *x11_2
                    x11_2 += 0x20
                    i = i_3
                    i_3 -= 0x20
                    *(x12_2 - 0x10) = v0_2
                    *x12_2 = v1_2
                    x12_2 += 0x20
                while (i != 0x20)
                
                if (x22_1 != i_5)
                    goto label_ea1910
            else
                x10_2 = x0_23
            label_ea1910:
                
                do
                    char x8_23 = *x28_1
                    x28_1 += 1
                    *x10_2 = x8_23
                    x10_2 += 1
                while (var_78 != x28_1)
        
        var_b8.q = x10_2
        x8_20 = *(arg1 + 0x48)
        
        if (x8_20 == 0)
            goto label_ea193c
        
        goto label_ea1924
else
    if ((x23_3 & 0xffffffff80000000) == 0)
        int128_t v0_1
        int128_t v1_1
        x0_15, v0_1, v1_1 = operator new(x23_3)
        x9_4 = x0_15 + x23_3
        x10_1 = x0_15
        var_c0.q = x0_15
        var_b8.q = x0_15
        var_b0_2 = x9_4
        
        if (fp_2 != var_78)
            if (x23_3 u>= 0x20)
                if (x0_15 u< var_78)
                    x10_1 = x0_15
                
                if (x0_15 u< var_78 && fp_2 u< var_78 + x0_15 - fp_2)
                    goto label_ea17c8
                
                void* i_4 = x23_3 & 0xffffffffffffffe0
                void* x11_1 = fp_2 + 0x10
                x10_1 = x0_15 + i_4
                fp_2 += i_4
                void* x12_1 = x0_15 + 0x10
                void* i_2 = i_4
                void* i_1
                
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
                
                if (x23_3 != i_4)
                    goto label_ea17c8
            else
                x10_1 = x0_15
            label_ea17c8:
                
                do
                    char x8_16 = *fp_2
                    fp_2 += 1
                    *x10_1 = x8_16
                    x10_1 += 1
                while (var_78 != fp_2)
        
        var_b8.q = x10_1
        x8_13 = *(arg1 + 0x60)
        
        if (x8_13 == 0)
            goto label_ea17f4
        
        goto label_ea17dc
    
    std::__ndk1::__vector_base_common<true>::__throw_length_error()
int64_t* x0_28 = std::__ndk1::__vector_base_common<true>::__throw_length_error()
int64_t var_68_1 = 0

if (result != 0)
    (*(*result + 0x10))()

void* x0_30 = *(arg1 + 0x78)

if (x0_30 != 0)
    int64_t x8_31 = *(arg1 + 0x88)
    *(arg1 + 0x80) = x0_30
    Botan::deallocate_memory(x0_30, (x8_31 - x0_30) s>> 2, 4)

void* x0_31 = *(arg1 + 0x60)
void* x0_32

if (x0_31 == 0)
    x0_32 = *(arg1 + 0x48)
    
    if (x0_32 != 0)
        goto label_ea1b44
    
    goto label_ea1b0c

*(arg1 + 0x68) = x0_31
operator delete(x0_31)
x0_32 = *(arg1 + 0x48)
void* x0_34

if (x0_32 != 0)
label_ea1b44:
    *(arg1 + 0x50) = x0_32
    operator delete(x0_32)
    x0_34 = *(arg1 + 0x30)
    *(arg1 + 8) = _vtable_for_Botan::AlgorithmIdentifier + 0x10
    
    if (x0_34 == 0)
        goto label_ea1b1c
    
    goto label_ea1b5c

label_ea1b0c:
x0_34 = *(arg1 + 0x30)
*(arg1 + 8) = _vtable_for_Botan::AlgorithmIdentifier + 0x10
void* x0_35

if (x0_34 != 0)
label_ea1b5c:
    *(arg1 + 0x38) = x0_34
    operator delete(x0_34)
    x0_35 = *(arg1 + 0x18)
    *(arg1 + 0x10) = _vtable_for_Botan::OID + 0x10
    
    if (x0_35 != 0)
    label_ea1b74:
        *(arg1 + 0x20) = x0_35
        operator delete(x0_35)
        sub_1101e04(x0_28)
        noreturn
else
label_ea1b1c:
    x0_35 = *(arg1 + 0x18)
    *(arg1 + 0x10) = _vtable_for_Botan::OID + 0x10
    
    if (x0_35 != 0)
        goto label_ea1b74
sub_1101e04(x0_28)
noreturn
