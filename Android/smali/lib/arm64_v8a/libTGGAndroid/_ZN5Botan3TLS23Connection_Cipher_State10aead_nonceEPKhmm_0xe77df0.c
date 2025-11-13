// 函数: _ZN5Botan3TLS23Connection_Cipher_State10aead_nonceEPKhmm
// 地址: 0xe77df0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x9 = *(arg1 + 0x28)
uint8_t const* x20 = arg1
int64_t* entry_x8

if (x9 == 2)
    __builtin_memset(entry_x8, 0, 0x18)
    int128_t v0_2
    int128_t v1_2
    int128_t v2_2
    int128_t v3_2
    int128_t v4_2
    int128_t v5_2
    int128_t v6_2
    int128_t v7_2
    arg1, v0_2, v1_2, v2_2, v3_2, v4_2, v5_2, v6_2, v7_2 = operator new(0xc)
    uint64_t entry_x3
    uint64_t x9_2 = _byteswap(entry_x3)
    *arg1 = 0
    entry_x8[1] = &arg1[0xc]
    entry_x8[2] = &arg1[0xc]
    *entry_x8 = arg1
    *(arg1 + 4) = x9_2
    void* x9_3 = *(x20 + 0x10)
    int64_t x8_7 = *(x20 + 0x18)
    void* x11_2 = x8_7 - x9_3
    void* x10_2 = x11_2 & 0xffffffffffffffe0
    
    if (x10_2 != 0)
        int64_t x12_2 = 0
        
        if (x10_2 == 0x20 || &arg1[0x18] + x10_2 - 0x20 u< &arg1[0x18]
                || &arg1[0x10] + x10_2 - 0x20 u< &arg1[0x10] || &arg1[8] + x10_2 - 0x20 u< &arg1[8]
                || arg1 + x10_2 - 0x20 u< arg1)
            goto label_e78028
        
        if (arg1 u>= x9_3 + x10_2 || x9_3 u>= arg1 + x10_2)
            int64_t i_11 = (((x10_2 - 0x20) u>> 5) + 1) & 0xffffffffffffffe
            x12_2 = i_11 << 5
            int64_t i_8 = i_11
            void* x16_3 = x9_3
            uint8_t const* x17_3 = arg1
            int64_t i
            
            do
                v0_2.q = *x17_3
                v1_2.q = *(x17_3 + 8)
                v2_2.q = *(x17_3 + 0x10)
                v3_2.q = *(x17_3 + 0x18)
                v0_2:8.q = *(x17_3 + 0x20)
                v1_2:8.q = *(x17_3 + 0x28)
                v2_2:8.q = *(x17_3 + 0x30)
                v3_2:8.q = *(x17_3 + 0x38)
                v4_2.q = *x16_3
                v5_2.q = *(x16_3 + 8)
                v6_2.q = *(x16_3 + 0x10)
                v7_2.q = *(x16_3 + 0x18)
                v4_2:8.q = *(x16_3 + 0x20)
                v5_2:8.q = *(x16_3 + 0x28)
                v6_2:8.q = *(x16_3 + 0x30)
                v7_2:8.q = *(x16_3 + 0x38)
                x16_3 += 0x40
                i = i_8
                i_8 -= 2
                int128_t v16_2 = v4_2 ^ v0_2
                int128_t v17_2 = v5_2 ^ v1_2
                int128_t v18_2 = v6_2 ^ v2_2
                int128_t v19_2 = v7_2 ^ v3_2
                *x17_3 = v16_2.q
                *(x17_3 + 8) = v17_2.q
                *(x17_3 + 0x10) = v18_2.q
                *(x17_3 + 0x18) = v19_2.q
                *(x17_3 + 0x20) = v16_2:8.q
                *(x17_3 + 0x28) = v17_2:8.q
                *(x17_3 + 0x30) = v18_2:8.q
                *(x17_3 + 0x38) = v19_2:8.q
                x17_3 = &x17_3[0x40]
            while (i != 2)
            
            if (((x10_2 - 0x20) u>> 5) + 1 != i_11)
                goto label_e78028
        else
            x12_2 = 0
        label_e78028:
            void* i_7 = x12_2 - x10_2
            void* x12_6 = x9_3 + x12_2 + 0x10
            void* x14_5 = &arg1[x12_2 + 0x10]
            void* i_1
            
            do
                v2_2 = *(x12_6 - 0x10)
                v3_2 = *x12_6
                i_1 = i_7
                i_7 += 0x20
                x12_6 += 0x20
                v1_2 = v3_2 ^ *x14_5
                *(x14_5 - 0x10) ^= v2_2
                *x14_5 = v1_2
                x14_5 += 0x20
            while (i_1 != -0x20)
    
    if (x10_2 != x11_2)
        void* x12_7 = x11_2 - x10_2
        
        if (x12_7 u< 8 || (arg1 + x10_2 u< x8_7 && x9_3 + x10_2 u< arg1 + x11_2))
            goto label_e78120
        
        void* i_10
        
        if (x12_7 u>= 0x20)
            i_10 = x12_7 & 0xffffffffffffffe0
            void* x13_6 = x9_3 + x10_2 + 0x10
            int128_t* x14_7 = arg1 + x10_2 + 0x10
            void* i_9 = i_10
            void* i_2
            
            do
                v0_2 = *(x13_6 - 0x10)
                v1_2 = *x13_6
                x13_6 += 0x20
                i_2 = i_9
                i_9 -= 0x20
                v1_2 ^= *x14_7
                x14_7[-1] ^= v0_2
                *x14_7 = v1_2
                x14_7 = &x14_7[2]
            while (i_2 != 0x20)
            
            if (x12_7 != i_10)
                if ((x12_7 & 0x18) != 0)
                    goto label_e780e0
                
                x10_2 += i_10
            label_e78120:
                void* x9_5 = x10_2 + x9_3
                void* i_5 = x9_5 - x8_7
                char* x10_3 = arg1 + x10_2
                void* i_3
                
                do
                    char x11_4 = *x9_5
                    x9_5 += 1
                    i_3 = i_5
                    i_5 += 1
                    *x10_3 ^= x11_4
                    x10_3 = &x10_3[1]
                while (i_3 u< -1)
        else
            i_10 = nullptr
        label_e780e0:
            void* x13_7 = x12_7 & 0xfffffffffffffff8
            void* x15_4 = i_10 + x10_2
            x10_2 += x13_7
            void* x14_8 = x9_3 + x15_4
            void* x15_5 = arg1 + x15_4
            void* i_6 = i_10 - x13_7
            void* i_4
            
            do
                v0_2.q = *x14_8
                x14_8 += 8
                v1_2.q = *x15_5
                i_4 = i_6
                i_6 += 8
                *x15_5 = (v1_2 ^ v0_2).q
                x15_5 += 8
            while (i_4 != -8)
            
            if (x12_7 != x13_7)
                goto label_e78120
else if (x9 == 1)
    int32_t* x24_1 = *(x20 + 0x10)
    
    if (*(x20 + 0x18) - x24_1 != 4)
        Botan::assertion_failure("m_nonce.size() == 4", &data_793a18, "aead_nonce", 
            "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0x14e46)
    label_e78218:
        void** x0_8 = __cxa_allocate_exception(0x20)
        int64_t x0_9
        int128_t v0_4
        x0_9, v0_4 = operator new(0x30)
        (*"hort to be valid")[0].o
        int64_t var_50_4 = x0_9
        v0_4 = data_71cbb0
        __builtin_strncpy(x0_9, "Invalid AEAD packet too short to be valid", 0x2a)
        int128_t var_60_2 = v0_4
        *x0_8 = _vtable_for_Botan::Exception + 0x10
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
            &x0_8[1])
        *x0_8 = _vtable_for_Botan::Decoding_Error + 0x10
        __cxa_throw(x0_8, _typeinfo_for_Botan::Decoding_Error, Botan::Exception::~Exception)
        noreturn
    
    size_t x23_2 = *(x20 + 0x38)
    
    if (x23_2 u> arg3)
        goto label_e78218
    
    __builtin_memset(entry_x8, 0, 0x18)
    arg1 = operator new(0xc)
    *arg1 = 0
    *(arg1 + 8) = 0
    entry_x8[1] = &arg1[0xc]
    entry_x8[2] = &arg1[0xc]
    *entry_x8 = arg1
    
    if (x24_1 == 0)
        Botan::assertion_failure("n > 0 implies in != nullptr && out != nullptr", 
            "If n > 0 then args are not null", "copy_mem", 
            "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x401)
    label_e782c8:
        void** x0_13 = __cxa_allocate_exception(0x20)
        int64_t x0_14
        int128_t v0_5
        x0_14, v0_5 = operator new(0x30)
        v0_5 = data_71aa70
        int64_t var_50_5 = x0_14
        __builtin_strncpy(x0_14, "Invalid CBC packet too short to be valid", 0x29)
        int128_t var_60_3 = v0_5
        *x0_13 = _vtable_for_Botan::Exception + 0x10
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
            &x0_13[1])
        *x0_13 = _vtable_for_Botan::Decoding_Error + 0x10
        __cxa_throw(x0_13, _typeinfo_for_Botan::Decoding_Error, Botan::Exception::~Exception)
        noreturn
    
    *arg1 = *x24_1
    
    if (x23_2 != 0)
        if (arg2 != 0)
            return memcpy(&arg1[*(x20 + 0x30)], arg2, x23_2) __tailcall
        
        goto label_e78374
else
    if (x9 != 0)
        void** x0_4 = __cxa_allocate_exception(0x20)
        int64_t x0_5
        int128_t v0_3
        x0_5, v0_3 = operator new(0x20)
        int64_t var_50_3 = x0_5
        int128_t var_60_1 = data_71c370
        __builtin_strncpy(x0_5, "Unknown nonce format specified", 0x1f)
        *x0_4 = _vtable_for_Botan::Exception + 0x10
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
            &x0_4[1])
        *x0_4 = _vtable_for_Botan::Invalid_State + 0x10
        __cxa_throw(x0_4, _typeinfo_for_Botan::Invalid_State, Botan::Exception::~Exception)
        noreturn
    
    uint64_t x22 = *(x20 + 0x38)
    char var_60
    
    if (x22 == 0)
        int64_t x9_4 = *(x20 + 0x10)
        int64_t x8_8 = *(x20 + 0x18)
        
        if (x8_8 == x9_4)
            if (x22 u> arg3)
                goto label_e782c8
            
            var_60 = 0
            var_60:8.q = 0
            int64_t var_50_2 = 0
            __builtin_memset(entry_x8, 0, 0x18)
        else
            *entry_x8 = x9_4
            entry_x8[1] = x8_8
            int64_t x8_9 = *(x20 + 0x20)
            __builtin_memset(&x20[0x10], 0, 0x18)
            entry_x8[2] = x8_9
    else
        if (x22 u> arg3)
            goto label_e782c8
        
        var_60 = 0
        var_60:8.q = 0
        void* var_50 = nullptr
        
        if ((x22 & 0xffffffff80000000) != 0)
            std::__ndk1::__vector_base_common<true>::__throw_length_error()
        label_e78374:
            int64_t* x0_18 = Botan::assertion_failure(
                "n > 0 implies in != nullptr && out != nullptr", "If n > 0 then args are not null", 
                "copy_mem", "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x401)
            
            if ((zx.d(var_60) & 1) != 0)
                operator delete(var_50)
            
            sub_1101e04(x0_18)
            noreturn
        
        int64_t x0_1 = operator new(x22)
        int64_t x23_1 = x0_1 + x22
        var_60 = x0_1.b
        int64_t var_50_1 = x23_1
        memcpy(x0_1, arg2, x22)
        var_60:8.q = x23_1
        __builtin_memset(entry_x8, 0, 0x18)
