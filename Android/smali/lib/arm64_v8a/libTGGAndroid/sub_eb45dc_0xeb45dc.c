// 函数: sub_eb45dc
// 地址: 0xeb45dc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

struct Botan::ASN1_Object::Botan::Cert_Extension::(anonymous namespace)::Policy_Information::VTable*
    * x8 = *(arg1 + 8)
int64_t x10 = *(arg1 + 0x10)
void* x19 = arg1

if (x8 u< x10)
    x8[3] = 0
    x8[4] = 0
    *x8 = &_vtable_for_Botan::Cert_Extension::(anonymous namespace)::Policy_Information{for `Botan::ASN1_Object'}
    x8[1] = _vtable_for_Botan::OID + 0x10
    x8[2] = 0
    x8[2] = *(arg2 + 0x10)
    x8[3] = *(arg2 + 0x18)
    x8[4] = *(arg2 + 0x20)
    __builtin_memset(arg2 + 0x10, 0, 0x18)
    *(x19 + 8) = &x8[5]
    return 

int64_t x12_1 = *x19
int64_t x22_1 = ((x8 - x12_1) s>> 3) * -0x3333333333333333

if (x22_1 + 1 u> 0x666666666666666)
    std::__ndk1::__vector_base_common<true>::__throw_length_error()
    sub_ef2a0c()
    noreturn

int64_t x8_3 = ((x10 - x12_1) s>> 3) * -0x3333333333333333
int64_t x10_4 = x8_3 << 1
int64_t x10_5

if (x10_4 u< x22_1 + 1)
    x10_5 = x22_1 + 1
else
    x10_5 = x10_4

int64_t x23_1

x23_1 = x8_3 u< 0x333333333333333 ? x10_5 : 0x666666666666666

if (x23_1 == 0)
    arg1 = nullptr
else
    if (x23_1 u> 0x666666666666666)
        sub_ef2a0c()
        noreturn
    
    int128_t v0
    arg1, v0 = operator new(x23_1 * 0x28)

struct Botan::ASN1_Object::Botan::Cert_Extension::(anonymous namespace)::Policy_Information::VTable*
    * x9_3 = arg1 + x22_1 * 0x28
*x9_3 = &_vtable_for_Botan::Cert_Extension::(anonymous namespace)::Policy_Information{for `Botan::ASN1_Object'}
x9_3[1] = _vtable_for_Botan::OID + 0x10
x9_3[4] = 0
int64_t x11_3 = arg1 + x23_1 * 0x28
*(x9_3 + 0x10) = *(arg2 + 0x10)
x9_3[4] = *(arg2 + 0x20)
__builtin_memset(arg2 + 0x10, 0, 0x18)
void* x20_1 = *x19
void* x13_1 = *(x19 + 8)

if (x13_1 == x20_1)
    *x19 = x9_3
    *(x19 + 8) = &x9_3[5]
    *(x19 + 0x10) = x11_3
else
    int64_t i = 0
    
    do
        void* x16_1 = x9_3 + i
        void* x17_1 = x13_1 + i
        *(x16_1 - 0x28) = &_vtable_for_Botan::Cert_Extension::(anonymous namespace)::Policy_Information{for `Botan::ASN1_Object'}
        *(x16_1 - 0x20) = _vtable_for_Botan::OID + 0x10
        __builtin_memset(x16_1 - 0x18, 0, 0x18)
        i -= 0x28
        *(x16_1 - 0x18) = *(x17_1 - 0x18)
        *(x16_1 - 0x10) = *(x17_1 - 0x10)
        *(x16_1 - 8) = *(x17_1 - 8)
        __builtin_memset(x17_1 - 0x18, 0, 0x18)
    while (x20_1 - x13_1 != i)
    
    x20_1 = *x19
    struct 
        Botan::ASN1_Object::Botan::Cert_Extension::(anonymous namespace)::Policy_Information::VTable
        ** x10_7 = *(x19 + 8)
    *x19 = x9_3 + i
    *(x19 + 8) = &x9_3[5]
    *(x19 + 0x10) = x11_3
    
    if (x10_7 != x20_1)
        struct Botan::ASN1_Object::Botan::Cert_Extension::(anonymous namespace)::Policy_Information::VTable
            ** x22_2 = x10_7
        
        do
            x22_2 = &x22_2[-5]
            *x22_2 = &_vtable_for_Botan::Cert_Extension::(anonymous namespace)::Policy_Information{for `Botan::ASN1_Object'}
            arg1 = x22_2[2]
            x22_2[1] = _vtable_for_Botan::OID + 0x10
            
            if (arg1 != 0)
                x10_7[-2] = arg1
                operator delete(arg1)
            
            x10_7 = x22_2
        while (x20_1 != x22_2)

if (x20_1 != 0)
    return operator delete(x20_1) __tailcall
