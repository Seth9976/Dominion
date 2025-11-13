// 函数: _ZN5Botan9CryptoBox7encryptEPKhmRKNSt6__ndk112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEERNS_21RandomNumberGeneratorE
// 地址: 0xd075e4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t* result_1
__builtin_memset(&result_1, 0, 0x18)
void* var_60_1
void* var_58_1
int32_t* result_5

if (arg2 == -0x22)
    result_5 = nullptr
label_d0765c:
    *result_5 = 0x24c2ef
    (*(*arg4 + 0x10))(arg4, &result_5[1], 0xa)
    
    if (arg2 == 0)
        goto label_d076ac
    
    if (arg1 != 0)
        memmove(result_1 + 0x22, arg1, arg2)
    label_d076ac:
        char var_80
        __builtin_strncpy(&var_80, "*PBKDF2(HMAC(SHA-512))", 0x17)
        int16_t var_98 = 0
        Botan::PBKDF::create_or_throw(&var_80, &var_98)
        void* var_88
        
        if ((zx.d(var_98.b) & 1) != 0)
            operator delete(var_88)
        
        int128_t var_7f
        
        if ((zx.d(var_80) & 1) != 0)
            operator delete(var_7f:0xf.q)
        
        uint64_t var_48
        Botan::PBKDF::derive_key(var_48, 0x50, arg3, &result_1[1], 0xa)
        uint64_t x23_1 = var_80.q
        var_98.b = 0x1c
        __builtin_strncpy(&var_98:1, "Serpent/CTR-BE", 0xf)
        int16_t var_c0 = 0
        Botan::Cipher_Mode::create_or_throw(&var_98, 0, &var_c0)
        void* var_b0
        
        if ((zx.d(var_c0.b) & 1) != 0)
            operator delete(var_b0)
        
        if ((zx.d(var_98.b) & 1) != 0)
            operator delete(var_88)
        
        int64_t* var_a0
        Botan::SymmetricAlgorithm::set_key(var_a0, x23_1)
        (*(*var_a0 + 0x30))(var_a0, x23_1 + 0x40, 0x10)
        (*(*var_a0 + 0x40))(var_a0, &result_1, 0x22)
        var_98.b = 0x1a
        __builtin_strncpy(&var_98:1, "HMAC(SHA-512)", 0xe)
        var_c0 = 0
        Botan::MessageAuthenticationCode::create_or_throw(&var_98, &var_c0)
        
        if ((zx.d(var_c0.b) & 1) != 0)
            operator delete(var_b0)
        
        if ((zx.d(var_98.b) & 1) != 0)
            operator delete(var_88)
        
        int64_t* var_c8
        Botan::SymmetricAlgorithm::set_key(&var_c8[1], x23_1 + 0x20)
        
        if (arg2 != 0)
            (*(*var_c8 + 0x18))(var_c8, result_1 + 0x22, arg2)
        
        Botan::Buffered_Computation::final()
        int128_t* x8_17 = var_98.q
        
        if (x8_17 != 0)
            int32_t* result_4 = result_1
            int128_t v0_1 = *x8_17
            *(result_4 + 0x1e) = x8_17[1].d
            *(result_4 + 0xe) = v0_1
            void* x0_19
            int128_t v0_2
            x0_19, v0_2 = operator new(0x20)
            var_c0.o = data_71c520
            __builtin_strncpy(x0_19, "BOTAN CRYPTOBOX MESSAGE", 0x18)
            Botan::PEM_Code::encode(result_4, var_60_1 - result_4, &var_c0, 0x40)
            
            if ((zx.d(var_c0.b) & 1) != 0)
                operator delete(x0_19)
            
            void* x0_22 = var_98.q
            
            if (x0_22 != 0)
                int64_t var_91 = x0_22
                Botan::deallocate_memory(x0_22, var_88 - x0_22, 1)
            
            if (var_c8 != 0)
                (*(*var_c8 + 0x10))(var_c8)
            
            (*(*var_a0 + 8))(var_a0)
            void* x0_25 = var_80.q
            
            if (x0_25 != 0)
                int64_t x8_24 = var_7f:0xf.q
                var_7f:7.q = x0_25
                Botan::deallocate_memory(x0_25, x8_24 - x0_25, 1)
            
            (*(*var_48 + 0x18))(var_48)
            int32_t* result = result_1
            
            if (result == 0)
                return result
            
            int32_t* result_2 = result
            return Botan::deallocate_memory(result, var_58_1 - result, 1)
        
        Botan::assertion_failure("n > 0 implies in != nullptr && out != nullptr", 
            "If n > 0 then args are not null", "copy_mem", 
            "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x401)
        std::__ndk1::__vector_base_common<true>::__throw_length_error()
else
    if (((arg2 + 0x22) & 0xffffffff80000000) == 0)
        int32_t* result_3 = Botan::allocate_memory(arg2 + 0x22, 1)
        void* x26_1 = result_3 + arg2 + 0x22
        result_5 = result_3
        result_1 = result_3
        var_58_1 = x26_1
        memset(result_3, 0, arg2 + 0x22)
        var_60_1 = x26_1
        goto label_d0765c
    
    std::__ndk1::__vector_base_common<true>::__throw_length_error()
sub_c776cc(Botan::assertion_failure("n > 0 implies in != nullptr && out != nullptr", 
    "If n > 0 then args are not null", "copy_mem", 
    "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x401))
noreturn
