// 函数: _ZN5Botan14Cert_Extension20Certificate_Policies12decode_innerERKNSt6__ndk16vectorIhNS2_9allocatorIhEEEE
// 地址: 0xeb4818
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* var_118
__builtin_memset(&var_118, 0, 0x18)
void var_150
Botan::BER_Decoder::BER_Decoder(&var_150)
Botan::BER_Decoder::start_cons(&var_150, 0x10)
int32_t var_d0
int64_t* var_b0

while (((*(*var_b0 + 0x18))() & (var_d0 == 0xff00 ? 1 : 0) & 1) == 0)
    struct 
        Botan::ASN1_Object::Botan::Cert_Extension::(anonymous namespace)::Policy_Information::VTable
        * const var_100 = &_vtable_for_Botan::Cert_Extension::(anonymous namespace)::Policy_Information{for `Botan::ASN1_Object'}
    void* __offset(vtable_for_Botan::OID, 0x10) var_f8 = _vtable_for_Botan::OID + 0x10
    void* var_f0
    __builtin_memset(&var_f0, 0, 0x18)
    void var_d8
    Botan::BER_Decoder::start_cons(&var_d8, 0x10)
    void var_a0
    (*(var_f8 + 8))(&var_f8, &var_a0)
    int64_t i
    
    do
        int64_t* var_78
        void var_64
        i = (**var_78)(var_78, &var_64, 1)
    while (i != 0)
    Botan::BER_Decoder::end_cons()
    int64_t* var_70
    int64_t* x0_7 = var_70
    var_70 = nullptr
    
    if (x0_7 != 0)
        (*(*x0_7 + 0x38))()
    
    void* var_90
    
    if (var_90 != 0)
        void* var_88_1 = var_90
        int64_t var_80
        Botan::deallocate_memory(var_90, var_80 - var_90, 1)
    
    sub_eb45dc(&var_118, &var_100)
    void* x0_10 = var_f0
    var_100 = &_vtable_for_Botan::Cert_Extension::(anonymous namespace)::Policy_Information{for `Botan::ASN1_Object'}
    var_f8 = _vtable_for_Botan::OID + 0x10
    
    if (x0_10 != 0)
        void* var_e8_1 = x0_10
        operator delete(x0_10)

Botan::BER_Decoder::end_cons()
int64_t var_a8_1 = 0
int64_t* var_a8

if (var_a8 != 0)
    (*(*var_a8 + 0x38))()

void* var_c8

if (var_c8 != 0)
    void* var_c0_1 = var_c8
    int64_t var_b8
    Botan::deallocate_memory(var_c8, var_b8 - var_c8, 1)

int64_t var_120_1 = 0
int64_t* var_120

if (var_120 != 0)
    (*(*var_120 + 0x38))()

void* result_1
void* result = result_1

if (result != 0)
    void* result_2 = result
    int64_t var_130
    result = Botan::deallocate_memory(result, var_130 - result, 1)

int64_t* x26 = *(arg1 + 8)
void** x8_22 = *(arg1 + 0x10)

if (x8_22 != x26)
    void** x21_1 = x8_22
    
    do
        x21_1 = &x21_1[-4]
        *x21_1 = _vtable_for_Botan::OID + 0x10
        result = x21_1[1]
        
        if (result != 0)
            x8_22[-2] = result
            result = operator delete(result)
        
        x8_22 = x21_1
    while (x26 != x21_1)

*(arg1 + 0x10) = x26
void* x22 = var_118
void* var_110
void* x8_32

if (var_110 == x22)
    x8_32 = x22
    
    if (x22 == 0)
        return result
else
    int64_t x27_1 = 0
    int64_t x28_1 = 1
    
    if (x26 == *(arg1 + 0x18))
    label_eb4abc:
        result = std::__ndk1::vector<Botan::OID, std::__ndk1::allocator<Botan::OID> >::__push_back_slow_path<Botan::OID const&>(
            arg1 + 8)
        goto label_eb4ac0
    
    while (true)
        *x26 = _vtable_for_Botan::OID + 0x10
        x26[2] = 0
        x26[3] = 0
        void* x20_2 = x22 + x27_1
        x26[1] = 0
        int64_t x9_1 = *(x20_2 + 0x10)
        int64_t x8_25 = *(x20_2 + 0x18)
        uint64_t x23_1 = x8_25 - x9_1
        
        if (x8_25 != x9_1)
            if ((x23_1 & 0xffffffff80000000) != 0)
                sub_c776cc(std::__ndk1::__vector_base_common<true>::__throw_length_error())
                noreturn
            
            result = operator new(x23_1)
            x26[1] = result
            x26[2] = result
            x26[3] = result + (x23_1 s>> 2 << 2)
            int64_t x1_7 = *(x20_2 + 0x10)
            void* result_3 = result
            size_t x21_4 = *(x20_2 + 0x18) - x1_7
            
            if (x21_4 s>= 1)
                result = memcpy(result_3, x1_7, x21_4)
                result_3 += x21_4
            
            x26[2] = result_3
        
        *(arg1 + 0x10) = &x26[4]
    label_eb4ac0:
        x22 = var_118
        x8_32 = var_110
        
        if (x28_1 == ((x8_32 - x22) s>> 3) * -0x3333333333333333)
            break
        
        x26 = *(arg1 + 0x10)
        x28_1 += 1
        x27_1 += 0x28
        
        if (x26 == *(arg1 + 0x18))
            goto label_eb4abc
    
    if (x22 == 0)
        return result

void* x0_18

if (x8_32 == x22)
    x0_18 = x22
else
    void* x20_3 = x8_32
    
    do
        x20_3 -= 0x28
        *x20_3 = &_vtable_for_Botan::Cert_Extension::(anonymous namespace)::Policy_Information{for `Botan::ASN1_Object'}
        void* x0_17 = *(x20_3 + 0x10)
        *(x20_3 + 8) = _vtable_for_Botan::OID + 0x10
        
        if (x0_17 != 0)
            *(x8_32 - 0x10) = x0_17
            operator delete(x0_17)
        
        x8_32 = x20_3
    while (x22 != x20_3)
    
    x0_18 = var_118

void* var_110_1 = x22
return operator delete(x0_18)
