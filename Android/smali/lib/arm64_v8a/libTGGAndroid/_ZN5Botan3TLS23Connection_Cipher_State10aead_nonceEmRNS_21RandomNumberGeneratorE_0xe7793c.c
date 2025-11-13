// 函数: _ZN5Botan3TLS23Connection_Cipher_State10aead_nonceEmRNS_21RandomNumberGeneratorE
// 地址: 0xe7793c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x9 = *(arg1 + 0x28)
uint64_t x20 = arg1
int64_t* entry_x8

if (x9 == 2)
    __builtin_memset(entry_x8, 0, 0x18)
    int128_t v0_1
    int128_t v1_1
    int128_t v2_1
    int128_t v3_1
    int128_t v4_1
    int128_t v5_1
    int128_t v6_1
    int128_t v7_1
    arg1, v0_1, v1_1, v2_1, v3_1, v4_1, v5_1, v6_1, v7_1 = operator new(0xc)
    uint64_t x9_3 = _byteswap(arg2)
    *arg1 = 0
    entry_x8[1] = arg1 + 0xc
    entry_x8[2] = arg1 + 0xc
    *entry_x8 = arg1
    *(arg1 + 4) = x9_3
    void* x9_4 = *(x20 + 0x10)
    int64_t x8_8 = *(x20 + 0x18)
    void* x11_1 = x8_8 - x9_4
    void* x10_1 = x11_1 & 0xffffffffffffffe0
    
    if (x10_1 != 0)
        int64_t x12_1 = 0
        
        if (x10_1 == 0x20 || arg1 + 0x18 + x10_1 - 0x20 u< arg1 + 0x18
                || arg1 + 0x10 + x10_1 - 0x20 u< arg1 + 0x10 || arg1 + 8 + x10_1 - 0x20 u< arg1 + 8
                || arg1 + x10_1 - 0x20 u< arg1)
            goto label_e77b4c
        
        if (arg1 u>= x9_4 + x10_1 || x9_4 u>= arg1 + x10_1)
            int64_t i_11 = (((x10_1 - 0x20) u>> 5) + 1) & 0xffffffffffffffe
            x12_1 = i_11 << 5
            int64_t i_8 = i_11
            void* x16_2 = x9_4
            uint64_t x17_2 = arg1
            int64_t i
            
            do
                v0_1.q = *x17_2
                v1_1.q = *(x17_2 + 8)
                v2_1.q = *(x17_2 + 0x10)
                v3_1.q = *(x17_2 + 0x18)
                v0_1:8.q = *(x17_2 + 0x20)
                v1_1:8.q = *(x17_2 + 0x28)
                v2_1:8.q = *(x17_2 + 0x30)
                v3_1:8.q = *(x17_2 + 0x38)
                v4_1.q = *x16_2
                v5_1.q = *(x16_2 + 8)
                v6_1.q = *(x16_2 + 0x10)
                v7_1.q = *(x16_2 + 0x18)
                v4_1:8.q = *(x16_2 + 0x20)
                v5_1:8.q = *(x16_2 + 0x28)
                v6_1:8.q = *(x16_2 + 0x30)
                v7_1:8.q = *(x16_2 + 0x38)
                x16_2 += 0x40
                i = i_8
                i_8 -= 2
                int128_t v16_1 = v4_1 ^ v0_1
                int128_t v17_1 = v5_1 ^ v1_1
                int128_t v18_1 = v6_1 ^ v2_1
                int128_t v19_1 = v7_1 ^ v3_1
                *x17_2 = v16_1.q
                *(x17_2 + 8) = v17_1.q
                *(x17_2 + 0x10) = v18_1.q
                *(x17_2 + 0x18) = v19_1.q
                *(x17_2 + 0x20) = v16_1:8.q
                *(x17_2 + 0x28) = v17_1:8.q
                *(x17_2 + 0x30) = v18_1:8.q
                *(x17_2 + 0x38) = v19_1:8.q
                x17_2 += 0x40
            while (i != 2)
            
            if (((x10_1 - 0x20) u>> 5) + 1 != i_11)
                goto label_e77b4c
        else
            x12_1 = 0
        label_e77b4c:
            void* i_7 = x12_1 - x10_1
            void* x12_5 = x9_4 + x12_1 + 0x10
            void* x14_4 = arg1 + x12_1 + 0x10
            void* i_1
            
            do
                v2_1 = *(x12_5 - 0x10)
                v3_1 = *x12_5
                i_1 = i_7
                i_7 += 0x20
                x12_5 += 0x20
                v1_1 = v3_1 ^ *x14_4
                *(x14_4 - 0x10) ^= v2_1
                *x14_4 = v1_1
                x14_4 += 0x20
            while (i_1 != -0x20)
    
    if (x10_1 != x11_1)
        void* x12_6 = x11_1 - x10_1
        
        if (x12_6 u< 8 || (arg1 + x10_1 u< x8_8 && x9_4 + x10_1 u< arg1 + x11_1))
            goto label_e77c44
        
        void* i_10
        
        if (x12_6 u>= 0x20)
            i_10 = x12_6 & 0xffffffffffffffe0
            void* x13_5 = x9_4 + x10_1 + 0x10
            void* x14_6 = arg1 + x10_1 + 0x10
            void* i_9 = i_10
            void* i_2
            
            do
                v0_1 = *(x13_5 - 0x10)
                v1_1 = *x13_5
                x13_5 += 0x20
                i_2 = i_9
                i_9 -= 0x20
                v1_1 ^= *x14_6
                *(x14_6 - 0x10) ^= v0_1
                *x14_6 = v1_1
                x14_6 += 0x20
            while (i_2 != 0x20)
            
            if (x12_6 != i_10)
                if ((x12_6 & 0x18) != 0)
                    goto label_e77c04
                
                x10_1 += i_10
            label_e77c44:
                void* x9_5 = x10_1 + x9_4
                void* i_5 = x9_5 - x8_8
                void* x10_2 = arg1 + x10_1
                void* i_3
                
                do
                    char x11_3 = *x9_5
                    x9_5 += 1
                    i_3 = i_5
                    i_5 += 1
                    *x10_2 ^= x11_3
                    x10_2 += 1
                while (i_3 u< -1)
        else
            i_10 = nullptr
        label_e77c04:
            void* x13_6 = x12_6 & 0xfffffffffffffff8
            void* x15_3 = i_10 + x10_1
            x10_1 += x13_6
            void* x14_7 = x9_4 + x15_3
            int64_t* x15_4 = arg1 + x15_3
            void* i_6 = i_10 - x13_6
            void* i_4
            
            do
                v0_1.q = *x14_7
                x14_7 += 8
                v1_1.q = *x15_4
                i_4 = i_6
                i_6 += 8
                *x15_4 = (v1_1 ^ v0_1).q
                x15_4 = &x15_4[1]
            while (i_4 != -8)
            
            if (x12_6 != x13_6)
                goto label_e77c44
else
    int128_t var_50
    void* var_40
    
    if (x9 == 1)
        int32_t* x23_1 = *(x20 + 0x10)
        
        if (*(x20 + 0x18) - x23_1 != 4)
            Botan::assertion_failure("m_nonce.size() == 4", &data_793a18, "aead_nonce", 
                "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0x14e20)
        label_e77d54:
            Botan::assertion_failure("n > 0 implies in != nullptr && out != nullptr", 
                "If n > 0 then args are not null", "copy_mem", 
                "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x401)
        label_e77d5c:
            int64_t* x0_7 = std::__ndk1::__vector_base_common<true>::__throw_length_error()
            
            if ((zx.d(var_50.b) & 1) != 0)
                operator delete(var_40)
            
            sub_1101e04(x0_7)
            noreturn
        
        __builtin_memset(entry_x8, 0, 0x18)
        arg1 = operator new(0xc)
        uint64_t* x21_1 = arg1
        *arg1 = 0
        *(arg1 + 8) = 0
        entry_x8[1] = arg1 + 0xc
        entry_x8[2] = arg1 + 0xc
        *entry_x8 = arg1
        
        if (x23_1 == 0)
            goto label_e77d54
        
        int32_t x8_5 = *x23_1
        uint64_t x9_2 = _byteswap(arg2)
        *x21_1 = x8_5
        *(x21_1 + *(x20 + 0x30)) = x9_2
    else
        if (x9 != 0)
            void** x0_3 = __cxa_allocate_exception(0x20)
            int64_t x0_4
            int128_t v0_3
            x0_4, v0_3 = operator new(0x20)
            int64_t var_40_1 = x0_4
            int128_t var_50_1 = data_71c370
            __builtin_strncpy(x0_4, "Unknown nonce format specified", 0x1f)
            *x0_3 = _vtable_for_Botan::Exception + 0x10
            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                &x0_3[1])
            *x0_3 = _vtable_for_Botan::Invalid_State + 0x10
            __cxa_throw(x0_3, _typeinfo_for_Botan::Invalid_State, Botan::Exception::~Exception)
            noreturn
        
        int64_t x9_1 = *(x20 + 0x10)
        int64_t x8 = *(x20 + 0x18)
        
        if (x8 == x9_1)
            uint64_t x22_1 = *(x20 + 0x38)
            __builtin_memset(&var_50, 0, 0x18)
            int64_t x20_1
            void* x23_2
            
            if (x22_1 != 0)
                if ((x22_1 & 0xffffffff80000000) != 0)
                    goto label_e77d5c
                
                int64_t x0_1 = operator new(x22_1)
                x23_2 = x0_1 + x22_1
                x20_1 = x0_1
                var_50.q = x0_1
                var_40 = x23_2
                memset(x0_1, 0, x22_1)
                var_50:8.q = x23_2
                goto label_e77ae8
            
            x23_2 = nullptr
            x20_1 = 0
        label_e77ae8:
            int64_t* entry_x2
            int128_t v0_2
            arg1, v0_2 = (*(*entry_x2 + 0x10))(entry_x2, x20_1, x23_2 - x20_1)
            *entry_x8 = var_50
            entry_x8[2] = var_40
        else
            *entry_x8 = x9_1
            entry_x8[1] = x8
            int64_t x8_1 = *(x20 + 0x20)
            __builtin_memset(x20 + 0x10, 0, 0x18)
            entry_x8[2] = x8_1
