// 函数: _ZNK5Botan14Cert_Extension20Certificate_Policies12encode_innerEv
// 地址: 0xeb4190
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8 = _ReadMSR(tpidr_el0)
int64_t x8_1 = *(x8 + 0x28)
void* var_118
__builtin_memset(&var_118, 0, 0x18)
void* entry_x0
void* x8_2 = *(entry_x0 + 8)
struct Botan::ASN1_Object::Botan::Cert_Extension::(anonymous namespace)::Policy_Information::VTable*
     const var_100

if (*(entry_x0 + 0x10) == x8_2)
label_eb42b8:
    int64_t entry_x8
    __builtin_memset(entry_x8, 0, 0x18)
    int64_t* result_1 = nullptr
    int64_t var_d0_1 = (zx.o(0)).q
    int128_t var_c0
    __builtin_memset(&var_c0, 0, 0x20)
    struct std::__ndk1::__function::__base<void (uint8_t const*, uint64_t)>::std::__ndk1::__function::__func<Botan::DER_Encoder::DER_Encoder(std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >&)::$_2, std::__ndk1::allocator<Botan::DER_Encoder::DER_Encoder(std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >&)::$_2>, void (uint8_t const*, uint64_t)>::VTable
        * const var_a0 = &_vtable_for_std::__ndk1::__function::__func<Botan::DER_Encoder::DER_Encoder(std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >&)::$_2, std::__ndk1::allocator<Botan::DER_Encoder::DER_Encoder(std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >&)::$_2>, void (uint8_t const*, uint64_t)>{for `std::__ndk1::__function::__base<void (uint8_t const*, uint64_t)>'}
    int64_t var_98_1 = entry_x8
    struct std::__ndk1::__function::__base<void (uint8_t const*, uint64_t)>::std::__ndk1::__function::__func<Botan::DER_Encoder::DER_Encoder(std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >&)::$_2, std::__ndk1::allocator<Botan::DER_Encoder::DER_Encoder(std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >&)::$_2>, void (uint8_t const*, uint64_t)>::VTable
        * const* var_80_1 = &var_a0
    sub_f2410c(&var_a0, &var_100)
    
    if (&var_a0 == var_80_1)
        (*var_80_1)->vFunc_4()
    else if (var_80_1 != 0)
        (*var_80_1)->j_operator delete()
    
    Botan::DER_Encoder::start_cons(&var_100, 0x10)
    void* x8_11 = var_118
    struct 
        Botan::ASN1_Object::Botan::Cert_Extension::(anonymous namespace)::Policy_Information::VTable
        ** var_110
    
    if (var_110 != x8_11)
        int64_t x20_2 = 0
        int64_t i = 0
        
        do
            int64_t* x0_8 = x8_11 + x20_2
            (**x0_8)(x0_8, &var_100)
            x8_11 = var_118
            i += 1
            x20_2 += 0x28
        while (i != ((var_110 - x8_11) s>> 3) * -0x3333333333333333)
    
    Botan::DER_Encoder::end_cons()
    void* x21_1 = var_c0:8.q
    
    if (x21_1 != 0)
        int128_t var_b0
        void* x19_1 = var_b0.q
        void* x0_10
        
        if (x19_1 == x21_1)
            x0_10 = x21_1
        else
            do
                x19_1 -= 0x38
                sub_f230d4(&var_b0:8, x19_1)
            while (x21_1 != x19_1)
            
            x0_10 = var_c0:8.q
        
        var_b0.q = x21_1
        operator delete(x0_10)
    
    int64_t x0_11 = var_d0_1
    
    if (x0_11 != 0)
        var_d0_1 = x0_11
        Botan::deallocate_memory(x0_11, var_c0.q - x0_11, 1)
    
    int64_t* result = result_1
    
    if (&var_100 == result)
        result = (*(*result + 0x20))()
    else if (result != 0)
        result = (*(*result + 0x28))()
    
    void* x19_2 = var_118
    
    if (x19_2 != 0)
        struct Botan::ASN1_Object::Botan::Cert_Extension::(anonymous namespace)::Policy_Information::VTable
            ** x8_18 = var_110
        void* x0_13
        
        if (x8_18 == x19_2)
            x0_13 = x19_2
        else
            struct Botan::ASN1_Object::Botan::Cert_Extension::(anonymous namespace)::Policy_Information::VTable
                ** x21_2 = x8_18
            
            do
                x21_2 = &x21_2[-5]
                *x21_2 = &_vtable_for_Botan::Cert_Extension::(anonymous namespace)::Policy_Information{for `Botan::ASN1_Object'}
                void* x0_12 = x21_2[2]
                x21_2[1] = _vtable_for_Botan::OID + 0x10
                
                if (x0_12 != 0)
                    x8_18[-2] = x0_12
                    operator delete(x0_12)
                
                x8_18 = x21_2
            while (x19_2 != x21_2)
            
            x0_13 = var_118
        
        void* var_110_1 = x19_2
        result = operator delete(x0_13)
    
    if (*(x8 + 0x28) == x8_1)
        return result
else
    int64_t x27_1 = 0
    int64_t x28_1 = 0
    
    while (true)
        var_100 = &_vtable_for_Botan::Cert_Extension::(anonymous namespace)::Policy_Information{for `Botan::ASN1_Object'}
        void* __offset(vtable_for_Botan::OID, 0x10) var_f8_1 = _vtable_for_Botan::OID + 0x10
        void* var_f0_1
        __builtin_memset(&var_f0_1, 0, 0x18)
        void* x26_1 = x8_2 + x27_1
        int64_t x9_3 = *(x26_1 + 8)
        int64_t x8_3 = *(x26_1 + 0x10)
        uint64_t x23_1 = x8_3 - x9_3
        
        if (x8_3 != x9_3)
            if ((x23_1 & 0xffffffff80000000) != 0)
                std::__ndk1::__vector_base_common<true>::__throw_length_error()
                break
            
            void* x0_1 = operator new(x23_1)
            var_f0_1 = x0_1
            void* var_e8_1 = x0_1
            void* var_e0_1 = x0_1 + (x23_1 s>> 2 << 2)
            int64_t x1_1 = *(x26_1 + 8)
            void* x22_1 = x0_1
            size_t x23_2 = *(x26_1 + 0x10) - x1_1
            
            if (x23_2 s>= 1)
                memcpy(x22_1, x1_1, x23_2)
                x22_1 += x23_2
            
            void* var_e8_2 = x22_1
        
        sub_eb45dc(&var_118, &var_100)
        void* x0_4 = var_f0_1
        var_100 = &_vtable_for_Botan::Cert_Extension::(anonymous namespace)::Policy_Information{for `Botan::ASN1_Object'}
        void* __offset(vtable_for_Botan::OID, 0x10) var_f8_2 = _vtable_for_Botan::OID + 0x10
        
        if (x0_4 != 0)
            void* var_e8_3 = x0_4
            operator delete(x0_4)
        
        x8_2 = *(entry_x0 + 8)
        x28_1 += 1
        x27_1 += 0x20
        
        if (x28_1 == (*(entry_x0 + 0x10) - x8_2) s>> 5)
            goto label_eb42b8
__stack_chk_fail()
noreturn
