// 函数: _ZNK5Botan3TLS7Session7encryptERKNS_11OctetStringERNS_21RandomNumberGeneratorE
// 地址: 0xe1a47c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char var_80
__builtin_strcpy(&var_80, "\"HMAC(SHA-512-256)")
int16_t var_98 = 0
Botan::MessageAuthenticationCode::create_or_throw(&var_80, &var_98)
void* var_88

if ((zx.d(var_98.b) & 1) != 0)
    operator delete(var_88)

int128_t var_7f

if ((zx.d(var_80) & 1) != 0)
    operator delete(var_7f:0xf.q)

*(arg2 + 8)
int64_t* result
Botan::SymmetricAlgorithm::set_key(&result[1], *arg2)
uint64_t x0_5 = (**result)(result)
__builtin_memset(&var_80, 0, 0x18)

if (x0_5 == 0)
    goto label_e1a55c

if ((x0_5 & 0xffffffff80000000) == 0)
    int64_t x0_7 = operator new(x0_5)
    int64_t x21_1 = x0_7 + x0_5
    var_80.q = x0_7
    var_7f:0xf.q = x21_1
    memset(x0_7, 0, x0_5)
    var_7f:7.q = x21_1
label_e1a55c:
    void* x0_8 = operator new(0x20)
    __builtin_strncpy(x0_8, "BOTAN TLS SESSION KEY NAME", 0x1b)
    (*(*result + 0x18))(result, x0_8, 0x1a)
    operator delete(x0_8)
    (*(*result + 0x20))(result, var_80.q)
    void* x20_3 = var_80.q
    int64_t x0_12 = var_7f:7.q
    size_t x21_2 = x0_12 - x20_3
    
    if (x21_2 u<= 3)
        int64_t x8_9 = var_7f:0xf.q
        
        if (x8_9 - x0_12 u>= 4 - x21_2)
            memset(x0_12, 0, 4 - x21_2)
            var_7f:7.q = x0_12 + 4 - x21_2
        else
            void* x8_10 = x8_9 - x20_3
            int64_t x11_1 = x8_10 << 1
            int64_t x9_2
            
            x9_2 = x11_1 u> 4 ? x11_1 : 4
            
            int64_t x27_1
            
            x27_1 = x8_10 u< 0x3fffffffffffffff ? x9_2 : 0x7fffffffffffffff
            
            int64_t x0_14 = operator new(x27_1)
            memset(x0_14 + x21_2, 0, 4 - x21_2)
            
            if (x21_2 s>= 1)
                memcpy(x0_14, x20_3, x21_2)
            
            var_80.q = x0_14
            var_7f:7.q = x0_14 + 4
            var_7f:0xf.q = x0_14 + x27_1
            
            if (x20_3 != 0)
                operator delete(x20_3)
    else if (x21_2 != 4)
        var_7f:7.q = x20_3 + 4
    
    int64_t* x0_18 = operator new(0xc)
    x0_18[1].d = 0
    *x0_18 = 0
    int64_t* entry_x2
    (*(*entry_x2 + 0x10))(entry_x2, x0_18, 0xc)
    int64_t* x0_20 = operator new(0x10)
    *x0_20 = 0
    x0_20[1] = 0
    (*(*entry_x2 + 0x10))(entry_x2, x0_20, 0x10)
    (*(*result + 0x18))(result, x0_20, 0x10)
    Botan::Buffered_Computation::final()
    Botan::TLS::Session::DER_encode()
    void* var_b0
    void* x9_3 = var_b0
    uint64_t* entry_x8
    __builtin_memset(entry_x8, 0, 0x18)
    int64_t var_a8
    void* x8_19 = var_a8 - x9_3
    uint64_t __saved_x0_1 = x8_19 + 0x38
    uint64_t __saved_x0_7
    uint64_t x8_21
    
    if (x8_19 == -0x38)
        __saved_x0_7 = 0
        x8_21 = 0 - __saved_x0_1
        
        if (x8_21 u< 8)
        label_e1a73c:
            int64_t x8_22 = x8_21 << 1
            int64_t x23_1
            
            x23_1 = x8_22 u> 8 ? x8_22 : 8
            
            __saved_x0_7 = operator new(x23_1)
            *__saved_x0_7 = 0
            *entry_x8 = __saved_x0_7
            entry_x8[1] = __saved_x0_7 + 8
            entry_x8[2] = __saved_x0_7 + x23_1
            
            if (__saved_x0_1 != 0)
                operator delete(__saved_x0_1)
                __saved_x0_7 = *entry_x8
        else
            *__saved_x0_1 = 0
            entry_x8[1] = __saved_x0_1 + 8
    else
        __saved_x0_7 = operator new(__saved_x0_1)
        uint64_t x8_20 = __saved_x0_7 + __saved_x0_1
        __saved_x0_1 = __saved_x0_7
        *entry_x8 = __saved_x0_7
        entry_x8[1] = __saved_x0_7
        entry_x8[2] = x8_20
        x8_21 = x8_20 - __saved_x0_1
        
        if (x8_21 u< 8)
            goto label_e1a73c
        
        *__saved_x0_1 = 0
        entry_x8[1] = __saved_x0_1 + 8
    *__saved_x0_7 = 0x6c399d5a8b06
    uint64_t x25_2 = *entry_x8
    int64_t x24_1 = entry_x8[1]
    int64_t x23_2 = var_80.q
    size_t x26_2 = x24_1 - x25_2
    uint64_t x28_2 = var_7f:7.q - x23_2 + x26_2
    
    if (entry_x8[2] - x25_2 u< x28_2)
        uint64_t x0_28 = operator new(x28_2)
        x24_1 = x0_28 + x26_2
        
        if (x26_2 s>= 1)
            memcpy(x0_28, x25_2, x26_2)
        
        *entry_x8 = x0_28
        entry_x8[1] = x24_1
        entry_x8[2] = x0_28 + x28_2
        
        if (x25_2 != 0)
            operator delete(x25_2)
            x24_1 = entry_x8[1]
            x23_2 = var_80.q
    
    std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >::insert<std::__ndk1::__wrap_iter<uint8_t const*> >(
        entry_x8, x24_1, x23_2)
    uint64_t __saved_x0_4 = *entry_x8
    int64_t x23_3 = entry_x8[1]
    size_t x24_2 = x23_3 - __saved_x0_4
    
    if (entry_x8[2] - __saved_x0_4 u< x24_2 + 0x10)
        uint64_t x0_33 = operator new(x24_2 + 0x10)
        x23_3 = x0_33 + x24_2
        
        if (x24_2 s>= 1)
            memcpy(x0_33, __saved_x0_4, x24_2)
        
        *entry_x8 = x0_33
        entry_x8[1] = x23_3
        entry_x8[2] = x0_33 + x24_2 + 0x10
        
        if (__saved_x0_4 != 0)
            operator delete(__saved_x0_4)
            x23_3 = entry_x8[1]
    
    std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >::insert<std::__ndk1::__wrap_iter<uint8_t const*> >(
        entry_x8, x23_3, x0_20)
    uint64_t __saved_x0_5 = *entry_x8
    int64_t x23_4 = entry_x8[1]
    size_t x24_3 = x23_4 - __saved_x0_5
    
    if (entry_x8[2] - __saved_x0_5 u< x24_3 + 0xc)
        uint64_t x0_38 = operator new(x24_3 + 0xc)
        x23_4 = x0_38 + x24_3
        
        if (x24_3 s>= 1)
            memcpy(x0_38, __saved_x0_5, x24_3)
        
        *entry_x8 = x0_38
        entry_x8[1] = x23_4
        entry_x8[2] = x0_38 + x24_3 + 0xc
        
        if (__saved_x0_5 != 0)
            operator delete(__saved_x0_5)
            x23_4 = entry_x8[1]
    
    std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >::insert<std::__ndk1::__wrap_iter<uint8_t const*> >(
        entry_x8, x23_4, x0_18)
    char var_d0 = 0x16
    int64_t var_cf
    __builtin_strncpy(&var_cf, "AES-256/GCM", 0xc)
    int16_t var_e8 = 0
    Botan::AEAD_Mode::create_or_throw(&var_d0, 0, &var_e8)
    void* var_d8
    
    if ((zx.d(var_e8.b) & 1) != 0)
        operator delete(var_d8)
    void* var_c0
    
    if ((zx.d(var_d0) & 1) != 0)
        operator delete(var_c0)
    int64_t* var_b8
    
    if (((*(*var_b8 + 0x68))(var_b8, 0xc) & 1) == 0)
        Botan::assertion_failure("aead->valid_nonce_length(TLS_SESSION_CRYPT_AEAD_NONCE_LEN)", 
            &data_793a18, "encrypt", "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 
            0x154a8)
    else if ((*(*var_b8 + 0x80))(var_b8) == 0x10)
        Botan::SymmetricAlgorithm::set_key(var_b8, var_98.q)
        uint64_t x1_15 = *entry_x8
        (*(*var_b8 + 0x90))(var_b8, x1_15, entry_x8[1] - x1_15)
        (*(*var_b8 + 0x30))(var_b8, x0_18, 0xc)
        (*(*var_b8 + 0x40))(var_b8, &var_b0, 0)
        uint64_t x26_5 = *entry_x8
        int64_t x25_7 = entry_x8[1]
        void* x24_4 = var_b0
        size_t x27_4 = x25_7 - x26_5
        uint64_t fp = var_a8 - x24_4 + x27_4
        
        if (entry_x8[2] - x26_5 u< fp)
            uint64_t x0_54 = operator new(fp)
            x25_7 = x0_54 + x27_4
            
            if (x27_4 s>= 1)
                memcpy(x0_54, x26_5, x27_4)
            
            *entry_x8 = x0_54
            entry_x8[1] = x25_7
            entry_x8[2] = x0_54 + fp
            
            if (x26_5 != 0)
                operator delete(x26_5)
                x25_7 = entry_x8[1]
                x24_4 = var_b0
        
        std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >::insert<std::__ndk1::__wrap_iter<uint8_t const*> >(
            entry_x8, x25_7, x24_4)
        (*(*var_b8 + 8))(var_b8)
        void* x0_59 = var_b0
        
        if (x0_59 != 0)
            void* var_a8_1 = x0_59
            int64_t var_a0
            Botan::deallocate_memory(x0_59, var_a0 - x0_59, 1)
        
        void* x0_60 = var_98.q
        
        if (x0_60 != 0)
            void* var_90_1 = x0_60
            Botan::deallocate_memory(x0_60, var_88 - x0_60, 1)
        
        operator delete(x0_20)
        operator delete(x0_18)
        void* x0_63 = var_80.q
        
        if (x0_63 != 0)
            var_7f:7.q = x0_63
            operator delete(x0_63)
        
        if (result == 0)
            return result
        
        return (*(*result + 0x10))()
    
    Botan::assertion_failure("aead->tag_size() == TLS_SESSION_CRYPT_AEAD_TAG_SIZE", &data_793a18, 
        "encrypt", "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0x154a9)

sub_c776cc(std::__ndk1::__vector_base_common<true>::__throw_length_error())
noreturn
