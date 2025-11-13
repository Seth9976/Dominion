// 函数: _ZNK5Botan19GOST_3410_PublicKey20algorithm_identifierEv
// 地址: 0xd84aa0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x24 = _ReadMSR(tpidr_el0)
int64_t x9 = *(x24 + 0x28)
void* result_1
__builtin_memset(&result_1, 0, 0x18)
int64_t* entry_x0
(*(*(entry_x0 + *(*entry_x0 - 0x90)) + 0x28))()
*(*entry_x0 - 0x88)
void* x0_2 = Botan::EC_Group::data()
void* __offset(vtable_for_Botan::OID, 0x10) var_138 = _vtable_for_Botan::OID + 0x10
void* var_130_1
__builtin_memset(&var_130_1, 0, 0x18)
int64_t x9_5 = *(x0_2 + 0x1c8)
int64_t x8_4 = *(x0_2 + 0x1d0)
uint64_t x22 = x8_4 - x9_5

if (x8_4 == x9_5)
label_d84b88:
    int64_t* var_c0_1 = nullptr
    int64_t var_b0_1 = (zx.o(0)).q
    int128_t var_a0
    __builtin_memset(&var_a0, 0, 0x20)
    struct std::__ndk1::__function::__base<void (uint8_t const*, uint64_t)>::std::__ndk1::__function::__func<Botan::DER_Encoder::DER_Encoder(std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >&)::$_2, std::__ndk1::allocator<Botan::DER_Encoder::DER_Encoder(std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >&)::$_2>, void (uint8_t const*, uint64_t)>::VTable
        * const var_80 = &_vtable_for_std::__ndk1::__function::__func<Botan::DER_Encoder::DER_Encoder(std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >&)::$_2, std::__ndk1::allocator<Botan::DER_Encoder::DER_Encoder(std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >&)::$_2>, void (uint8_t const*, uint64_t)>{for `std::__ndk1::__function::__base<void (uint8_t const*, uint64_t)>'}
    int64_t* var_78_1 = &result_1
    struct std::__ndk1::__function::__base<void (uint8_t const*, uint64_t)>::std::__ndk1::__function::__func<Botan::DER_Encoder::DER_Encoder(std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >&)::$_2, std::__ndk1::allocator<Botan::DER_Encoder::DER_Encoder(std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >&)::$_2>, void (uint8_t const*, uint64_t)>::VTable
        * const* var_60_1 = &var_80
    void var_e0
    sub_f2410c(&var_80, &var_e0)
    
    if (&var_80 == var_60_1)
        (*var_60_1)->vFunc_4()
    else if (var_60_1 != 0)
        (*var_60_1)->j_operator delete()
    
    Botan::DER_Encoder::start_cons(&var_e0, 0x10)
    (*var_138)(&var_138, &var_e0)
    Botan::DER_Encoder::end_cons()
    void* x22_1 = var_a0:8.q
    
    if (x22_1 != 0)
        int128_t var_90
        void* x20_3 = var_90.q
        void* x0_11
        
        if (x20_3 == x22_1)
            x0_11 = x22_1
        else
            do
                x20_3 -= 0x38
                sub_f230d4(&var_90:8, x20_3)
            while (x22_1 != x20_3)
            
            x0_11 = var_a0:8.q
        
        var_90.q = x22_1
        operator delete(x0_11)
    
    int64_t x0_12 = var_b0_1
    
    if (x0_12 != 0)
        var_b0_1 = x0_12
        Botan::deallocate_memory(x0_12, var_a0.q - x0_12, 1)
    
    if (&var_e0 == var_c0_1)
        (*(*var_c0_1 + 0x20))()
    else if (var_c0_1 != 0)
        (*(*var_c0_1 + 0x28))()
    
    void* var_118
    Botan::OID* entry_x8
    Botan::AlgorithmIdentifier::AlgorithmIdentifier(entry_x8, &var_118)
    void* x0_15 = var_130_1
    var_138 = _vtable_for_Botan::OID + 0x10
    
    if (x0_15 != 0)
        void* var_128_3 = x0_15
        operator delete(x0_15)
    
    var_118 = _vtable_for_Botan::OID + 0x10
    void* var_110
    
    if (var_110 != 0)
        void* var_108_1 = var_110
        operator delete(var_110)
    
    void* result = result_1
    
    if (result != 0)
        void* result_2 = result
        result = operator delete(result)
    
    if (*(x24 + 0x28) == x9)
        return result
else
    if ((x22 & 0xffffffff80000000) == 0)
        void* x0_4 = operator new(x22)
        var_130_1 = x0_4
        void* var_128_1 = x0_4
        void* var_120_1 = x0_4 + (x22 s>> 2 << 2)
        int64_t x1_1 = *(x0_2 + 0x1c8)
        void* x21_1 = x0_4
        size_t x20_2 = *(x0_2 + 0x1d0) - x1_1
        
        if (x20_2 s>= 1)
            memcpy(x21_1, x1_1, x20_2)
            x21_1 += x20_2
        
        void* var_128_2 = x21_1
        goto label_d84b88
    
    std::__ndk1::__vector_base_common<true>::__throw_length_error()

__stack_chk_fail()
noreturn
