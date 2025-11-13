// 函数: _ZN5Botan8Blowfish14salted_set_keyEPKhmS2_mmb
// 地址: 0xce7948
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg5 != 0 && (arg5 & 3) == 0)
    int64_t x8_2 = *(arg1 + 0x20)
    uint8_t* x25_1
    
    x25_1 = arg3 u< 0x48 ? arg3 : 0x48
    
    int64_t x27_1 = arg6
    int64_t x10_1 = *(arg1 + 0x28) - x8_2
    std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >* x23_1 = arg1
    
    if (x10_1 s>> 2 u<= 0x11)
        std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::__append(&arg1[0x20])
        x8_2 = *(arg1 + 0x20)
    else if (x10_1 != 0x48)
        *(x23_1 + 0x28) = x8_2 + 0x48
    
    if (x8_2 != 0)
        __builtin_memcpy(x8_2, 
            "\x88\x6a\x3f\x24\xd3\x08\xa3\x85\x2e\x8a\x19\x13\x44\x73\x70\x03\x22\x38\x09\xa4\xd0\x31\x"
        "9f\x29\x98\xfa\x2e\x08\x89\x6c\x4e\xec\xe6\x21\x28\x45\x77\x13\xd0\x38\xcf\x66\x54\xbe\x6c"
        "0c\xe9\x34\xb7\x29\xac\xc0\xdd\x50\x7c\xc9\xb5\xd5\x84\x3f\x17\x09\x47\xb5\xd9\xd5\x16\x92"
        "1b\xfb\x79\x89", 
            0x48)
        int64_t x0_1 = *(x23_1 + 8)
        int64_t x8_4 = *(x23_1 + 0x10) - x0_1
        
        if (x8_4 s>> 2 u<= 0x3ff)
            std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::__append(x23_1 + 8)
            x0_1 = *(x23_1 + 8)
        else if (x8_4 != 0x1000)
            *(x23_1 + 0x10) = x0_1 + 0x1000
        
        if (x0_1 != 0)
            memcpy(x0_1, 0x82a690, 0x1000)
            int64_t result = Botan::Blowfish::key_expansion(x23_1, arg2, x25_1, arg4)
            
            if (x27_1 != 0)
                int64_t i = 0
                
                do
                    int64_t j = 0
                    int64_t var_58
                    int32_t entry_x6
                    
                    if ((entry_x6 & 1) == 0)
                        do
                            int32_t* x13_3 = *(x23_1 + 0x20)
                            int32_t x9_27 = (0xffff00ff & ((0xff00ffff
                                & zx.d(*(arg2 + j u% x25_1)) << 0x18)
                                | zx.d(*(arg2 + (j + 1) u% x25_1)) << 0x10))
                                | zx.d(*(arg2 + (j + 2) u% x25_1)) << 8
                                | zx.d(*(arg2 + (j + 3) u% x25_1))
                            *(x13_3 + j) ^= x9_27
                            j += 4
                        while (j != 0x48)
                        
                        var_58 = 0
                        Botan::Blowfish::generate_sbox(x23_1, &arg1[0x20], &var_58:4, &var_58, 0, 0)
                        Botan::Blowfish::generate_sbox(x23_1, x23_1 + 8, &var_58:4, &var_58, 0, 0)
                        
                        for (int64_t j_1 = 0; j_1 != 0x48; j_1 += 4)
                            int32_t* x13_4 = *(x23_1 + 0x20)
                            int32_t x9_35 = (0xffff00ff & ((0xff00ffff
                                & zx.d(*(arg4 + j_1 u% arg5)) << 0x18)
                                | zx.d(*(arg4 + (j_1 + 1) u% arg5)) << 0x10))
                                | zx.d(*(arg4 + (j_1 + 2) u% arg5)) << 8
                                | zx.d(*(arg4 + (j_1 + 3) u% arg5))
                            *(x13_4 + j_1) ^= x9_35
                    else
                        do
                            int32_t* x13_1 = *(x23_1 + 0x20)
                            int32_t x9_11 = (0xffff00ff & ((0xff00ffff
                                & zx.d(*(arg4 + j u% arg5)) << 0x18)
                                | zx.d(*(arg4 + (j + 1) u% arg5)) << 0x10))
                                | zx.d(*(arg4 + (j + 2) u% arg5)) << 8
                                | zx.d(*(arg4 + (j + 3) u% arg5))
                            *(x13_1 + j) ^= x9_11
                            j += 4
                        while (j != 0x48)
                        
                        var_58 = 0
                        Botan::Blowfish::generate_sbox(x23_1, &arg1[0x20], &var_58:4, &var_58, 0, 0)
                        Botan::Blowfish::generate_sbox(x23_1, x23_1 + 8, &var_58:4, &var_58, 0, 0)
                        
                        for (int64_t j_2 = 0; j_2 != 0x48; j_2 += 4)
                            int32_t* x13_2 = *(x23_1 + 0x20)
                            int32_t x9_19 = (0xffff00ff & ((0xff00ffff
                                & zx.d(*(arg2 + j_2 u% x25_1)) << 0x18)
                                | zx.d(*(arg2 + (j_2 + 1) u% x25_1)) << 0x10))
                                | zx.d(*(arg2 + (j_2 + 2) u% x25_1)) << 8
                                | zx.d(*(arg2 + (j_2 + 3) u% x25_1))
                            *(x13_2 + j_2) ^= x9_19
                    
                    var_58 = 0
                    Botan::Blowfish::generate_sbox(x23_1, &arg1[0x20], &var_58:4, &var_58, 0, 0)
                    result =
                        Botan::Blowfish::generate_sbox(x23_1, x23_1 + 8, &var_58:4, &var_58, 0, 0)
                    i += 1
                while (i != 1 << x27_1)
            
            return result
    
    Botan::assertion_failure("n > 0 implies in != nullptr && out != nullptr", 
        "If n > 0 then args are not null", "copy_mem", 
        "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x401)

Botan::throw_invalid_argument("Invalid salt length for Blowfish salted key schedule", 
    "salted_set_key", "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp")
return Botan::Blowfish::clear() __tailcall
