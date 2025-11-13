// 函数: _ZN5Botan10Extensions11decode_fromERNS_11BER_DecoderE
// 地址: 0xeaf5f8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x21 = *(arg1 + 8)
void** x8 = *(arg1 + 0x10)

if (x8 != x21)
    void** x24_1 = x8
    
    do
        x24_1 = &x24_1[-4]
        *x24_1 = _vtable_for_Botan::OID + 0x10
        void* x0 = x24_1[1]
        
        if (x0 != 0)
            x8[-2] = x0
            operator delete(x0)
        
        x8 = x24_1
    while (x21 != x24_1)

*(arg1 + 0x28)
*(arg1 + 0x10) = x21
std::__ndk1::__tree<std::__ndk1::__value_type<Botan::OID, Botan::Extensions::Extensions_Info>, std::__ndk1::__map_value_compare<Botan::OID, std::__ndk1::__value_type<Botan::OID, Botan::Extensions::Extensions_Info>, std::__ndk1::less<Botan::OID>, true>, std::__ndk1::allocator<std::__ndk1::__value_type<Botan::OID, Botan::Extensions::Extensions_Info> > >::destroy(
    arg1 + 0x20)
*(arg1 + 0x20) = arg1 + 0x28
*(arg1 + 0x28) = 0
*(arg1 + 0x30) = 0
int64_t entry_x1
Botan::BER_Decoder::start_cons(entry_x1, 0x10)
int32_t var_90
int64_t* var_70

while (((*(*var_70 + 0x18))() & (var_90 == 0xff00 ? 1 : 0) & 1) == 0)
    Botan::OID* var_b8 = _vtable_for_Botan::OID + 0x10
    void* var_b0
    __builtin_memset(&var_b0, 0, 0x18)
    void* var_d8
    __builtin_memset(&var_d8, 0, 0x18)
    void var_98
    Botan::BER_Decoder::start_cons(&var_98, 0x10)
    bool var_110
    (*(var_b8 + 8))(&var_b8, &var_110)
    char var_118_1 = 0
    bool var_bc
    Botan::BER_Decoder::decode(
        Botan::BER_Decoder::decode_optional<bool>(&var_110, &var_bc, 1, nullptr), &var_d8, 4, 4)
    Botan::BER_Decoder::end_cons()
    int64_t* var_e0
    int64_t* x0_9 = var_e0
    var_e0 = nullptr
    
    if (x0_9 != 0)
        (*(*x0_9 + 0x38))()
    
    void* var_100
    
    if (var_100 != 0)
        void* var_f8_1 = var_100
        int64_t var_f0
        Botan::deallocate_memory(var_100, var_f0 - var_100, 1)
    
    Botan::Extensions::create_extn_obj(&var_b8, var_bc, &var_d8)
    var_118_1.q = 0
    Botan::Extensions::Extensions_Info::Extensions_Info(&var_110, zx.q(var_bc), &var_d8)
    void** fp_1 = *(arg1 + 0x10)
    
    if (fp_1 == *(arg1 + 0x18))
        std::__ndk1::vector<Botan::OID, std::__ndk1::allocator<Botan::OID> >::__push_back_slow_path<Botan::OID const&>(
            arg1 + 8)
    else
        fp_1[2] = 0
        fp_1[3] = 0
        *fp_1 = _vtable_for_Botan::OID + 0x10
        fp_1[1] = 0
        void* x9_1 = var_b0
        int64_t var_a8_1
        uint64_t x24_2 = var_a8_1 - x9_1
        
        if (var_a8_1 != x9_1)
            if ((x24_2 & 0xffffffff80000000) != 0)
                sub_c776cc(std::__ndk1::__vector_base_common<true>::__throw_length_error())
                noreturn
            
            int64_t x0_14 = operator new(x24_2)
            fp_1[1] = x0_14
            fp_1[2] = x0_14
            fp_1[3] = x0_14 + (x24_2 s>> 2 << 2)
            void* x1_7 = var_b0
            int64_t x23_4 = x0_14
            size_t x22_3 = var_a8_1 - x1_7
            
            if (x22_3 s>= 1)
                memcpy(x23_4, x1_7, x22_3)
                x23_4 += x22_3
            
            fp_1[2] = x23_4
        
        *(arg1 + 0x10) = &fp_1[4]
    
    std::__ndk1::__tree<std::__ndk1::__value_type<Botan::OID, Botan::Extensions::Extensions_Info>, std::__ndk1::__map_value_compare<Botan::OID, std::__ndk1::__value_type<Botan::OID, Botan::Extensions::Extensions_Info>, std::__ndk1::less<Botan::OID>, true>, std::__ndk1::allocator<std::__ndk1::__value_type<Botan::OID, Botan::Extensions::Extensions_Info> > >::__emplace_unique_key_args<Botan::OID, Botan::OID&, Botan::Extensions::Extensions_Info&>(
        arg1 + 0x20, &var_b8)
    
    if (var_100 != 0)
        void* var_f8_2 = var_100
        operator delete(var_100)
    
    int64_t* var_108
    
    if (var_108 != 0)
        int64_t x9_2
        int32_t i
        
        do
            x9_2 = __ldaxr(&var_108[1])
            i = __stlxr(x9_2 - 1, &var_108[1])
        while (i != 0)
        
        if (x9_2 == 0)
            (*(*var_108 + 0x10))(var_108)
            std::__ndk1::__shared_weak_count::__release_weak()
    
    void* x0_19 = var_d8
    
    if (x0_19 != 0)
        void* var_d0_1 = x0_19
        operator delete(x0_19)
    
    void* x0_20 = var_b0
    var_b8 = _vtable_for_Botan::OID + 0x10
    
    if (x0_20 != 0)
        void* var_a8_2 = x0_20
        operator delete(x0_20)

Botan::BER_Decoder::verify_end()
int64_t var_68_1 = 0
int64_t* var_68

if (var_68 != 0)
    (*(*var_68 + 0x38))()

void* result

if (result == 0)
    return result

void* result_1 = result
int64_t var_78
return Botan::deallocate_memory(result, var_78 - result, 1)
