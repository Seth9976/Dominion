// 函数: _ZN5Botan11PK_Verifier15check_signatureEPKhm
// 地址: 0xdff368
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8 = *(arg1 + 8)
int64_t entry_i
int64_t i_1 = entry_i
uint64_t x21 = arg2
int32_t x19
int128_t var_f0
uint8_t var_b0[0x10]
void* var_a0

if (x8 == 1)
    void* var_78
    __builtin_memset(&var_78, 0, 0x18)
    Botan::BER_Decoder::BER_Decoder(&var_b0, x21)
    Botan::BER_Decoder::start_cons(&var_b0, 0x10)
    
    if (*(arg1 + 0x10) == 0 || *(arg1 + 0x18) == 0)
        Botan::assertion_failure("m_parts != 0 && m_part_size != 0", &data_793a18, 
            "check_signature", "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 
            0x10364)
    label_dff67c:
        void** x0_25 = __cxa_allocate_exception(0x20)
        int64_t x0_26
        int128_t v1
        x0_26, v1 = operator new(0x40)
        v1 = data_71b7e0
        int64_t var_130_1 = x0_26
        __builtin_strncpy(x0_26, "PK_Verifier: signature is not the canonical DER encoding", 0x39)
        int128_t var_140_1 = v1
        *x0_25 = _vtable_for_Botan::Exception + 0x10
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
            &x0_25[1])
        *x0_25 = _vtable_for_Botan::Decoding_Error + 0x10
        __cxa_throw(x0_25, _typeinfo_for_Botan::Decoding_Error, Botan::Exception::~Exception)
        noreturn
    
    int64_t x22_1 = 0
    int128_t var_140
    void* var_120
    void* var_118
    int64_t* var_c8
    void* var_70_1
    
    while (((*(*var_c8 + 0x18))() & (var_f0:8.d == 0xff00 ? 1 : 0) & 1) == 0)
        int64_t var_108_1 = -1
        __builtin_memset(&var_120, 0, 0x18)
        int32_t var_100_1 = 1
        Botan::BER_Decoder::decode(&var_f0, &var_120, 2)
        Botan::BigInt::encode_1363(&var_120, *(arg1 + 0x18))
        void* x25_1 = var_78
        void* x1_4 = var_70_1
        int64_t x24_1 = var_140.q
        size_t x26_1 = x1_4 - x25_1
        uint64_t x27_1 = var_140:8.q - x24_1 + x26_1
        void* var_68_1
        
        if (var_68_1 - x25_1 u< x27_1)
            void* x0_9 = operator new(x27_1)
            
            if (x26_1 s>= 1)
                memcpy(x0_9, x25_1, x26_1)
            
            x1_4 = x0_9 + x26_1
            var_78 = x0_9
            var_70_1 = x1_4
            var_68_1 = x0_9 + x27_1
            
            if (x25_1 != 0)
                operator delete(x25_1)
                x1_4 = var_70_1
                x24_1 = var_140.q
        
        std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >::insert<std::__ndk1::__wrap_iter<uint8_t const*> >(
            &var_78, x1_4, x24_1)
        void* x0_13 = var_140.q
        
        if (x0_13 != 0)
            var_140:8.q = x0_13
            int64_t var_130
            Botan::deallocate_memory(x0_13, var_130 - x0_13, 1)
        
        void* x0_14 = var_120
        
        if (x0_14 != 0)
            var_118 = x0_14
            int64_t var_110
            Botan::deallocate_memory(x0_14, (var_110 - x0_14) s>> 2, 4)
        
        x22_1 += 1
    
    if (*(arg1 + 0x10) != x22_1)
        void** x0_36 = __cxa_allocate_exception(0x20)
        int64_t x0_37
        int128_t v2
        x0_37, v2 = operator new(0x30)
        v2 = data_71b820
        int64_t var_110_1 = x0_37
        __builtin_strncpy(x0_37, "PK_Verifier: signature size invalid", 0x24)
        var_120.o = v2
        *x0_36 = _vtable_for_Botan::Exception + 0x10
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
            &x0_36[1])
        *x0_36 = _vtable_for_Botan::Decoding_Error + 0x10
        __cxa_throw(x0_36, _typeinfo_for_Botan::Decoding_Error, Botan::Exception::~Exception)
        noreturn
    
    sub_dfeb80(&var_120, &var_78, x22_1, *(arg1 + 0x18))
    void* x8_17 = var_120
    
    if (var_118 - x8_17 != i_1)
        goto label_dff67c
    
    var_140.b = 0
    
    if (i_1 != 0)
        int64_t i
        
        do
            char x9_4 = *x8_17
            x8_17 += 1
            char x10_1 = *x21
            x21 += 1
            i = i_1
            i_1 -= 1
            var_140.b = x10_1 ^ x9_4
        while (i != 1)
    
    int64_t* x0_16 = *arg1
    void* x1_9 = var_78
    x19 = (*(*x0_16 + 8))(x0_16, x1_9, var_70_1 - x1_9)
    void* x0_18 = var_120
    
    if (x0_18 != 0)
        void* var_118_1 = x0_18
        operator delete(x0_18)
    
    int64_t var_c0_1 = 0
    int64_t* var_c0
    
    if (var_c0 != 0)
        (*(*var_c0 + 0x38))()
    
    void* var_e0
    
    if (var_e0 != 0)
        void* var_d8_1 = var_e0
        int64_t var_d0
        Botan::deallocate_memory(var_e0, var_d0 - var_e0, 1)
    
    int64_t var_80_1 = 0
    int64_t* var_80
    
    if (var_80 != 0)
        (*(*var_80 + 0x38))()
    
    if (var_a0 != 0)
        void* var_98_1 = var_a0
        int64_t var_90
        Botan::deallocate_memory(var_a0, var_90 - var_a0, 1)
    
    void* x0_23 = var_78
    
    if (x0_23 != 0)
        void* var_70_2 = x0_23
        operator delete(x0_23)
else
    if (x8 != 0)
        void** x0_30 = __cxa_allocate_exception(0x20)
        int64_t x0_31
        int128_t v0
        x0_31, v0 = operator new(0x30)
        int64_t var_e0_1 = x0_31
        var_f0 = data_71c1e0
        __builtin_strncpy(x0_31, "PK_Verifier: Invalid signature format enum", 0x2b)
        std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
            "Internal error: ", &var_f0)
        *x0_30 = _vtable_for_Botan::Exception + 0x10
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
            &x0_30[1])
        
        if ((zx.d(var_b0[0]) & 1) != 0)
            operator delete(var_a0)
        
        *x0_30 = _vtable_for_Botan::Internal_Error + 0x10
        __cxa_throw(x0_30, _typeinfo_for_Botan::Internal_Error, Botan::Exception::~Exception)
        noreturn
    
    int64_t* x0 = *arg1
    x19 = (*(*x0 + 8))(x0, x21, i_1)
return zx.q(x19) & 1
