// 函数: _ZNK5Botan9Roughtime5Chain9responsesEv
// 地址: 0xe07ea0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8 = _ReadMSR(tpidr_el0)
int64_t x8_1 = *(x8 + 0x28)
void** entry_x8
__builtin_memset(entry_x8, 0, 0x18)
int64_t* entry_x0
int64_t x21 = *entry_x0

if (entry_x0[1] != x21)
    int64_t* x20_1 = entry_x0
    uint64_t i = 0
    int32_t i_1 = 1
    
    do
        int128_t var_b0
        int128_t v2
        
        if (i_1 != 1)
            Botan::Roughtime::nonce_from_blind(x21 + mulu.dp.d(i_1 - 2, 0x78), 
                x21 + i * 0x78 + 0x38)
        else
            void* x8_7 = x21 + i * 0x78
            v2 = *(x8_7 + 0x48)
            int128_t var_90_1 = *(x8_7 + 0x58)
            int128_t var_80_1 = *(x8_7 + 0x68)
            var_b0 = *(x8_7 + 0x38)
            int128_t var_a0_1 = v2
        
        Botan::Roughtime::Response::from_bits(x21 + i * 0x78, &var_b0)
        int128_t var_148
        int128_t v0
        int128_t v1
        int128_t v3
        entry_x0, v0, v1, v2, v3 = Botan::Roughtime::Response::validate(&var_148)
        
        if ((entry_x0.d & 1) == 0)
            void** x0_6 = __cxa_allocate_exception(0x20)
            int64_t x0_7
            int128_t v0_1
            x0_7, v0_1 = operator new(0x20)
            int64_t var_170 = x0_7
            int128_t var_180 = data_71b7d0
            __builtin_strncpy(x0_7, "Invalid signature or public key", 0x20)
            std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
                "Roughtime ", &var_180)
            *x0_6 = _vtable_for_Botan::Exception + 0x10
            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                &x0_6[1])
            *x0_6 = _vtable_for_Botan::Decoding_Error + 0x10
            char var_160
            void* var_150
            
            if ((zx.d(var_160) & 1) != 0)
                operator delete(var_150)
            *x0_6 = _vtable_for_Botan::Roughtime::Roughtime_Error + 0x10
            __cxa_throw(x0_6, _typeinfo_for_Botan::Roughtime::Roughtime_Error, 
                Botan::Exception::~Exception)
            noreturn
        
        int128_t* x8_10 = entry_x8[1]
        int128_t var_138
        int128_t var_128
        int128_t var_118
        int128_t var_108
        int128_t var_f8
        int128_t var_e8
        int128_t var_d8
        int128_t var_c8
        int64_t var_b8
        
        if (x8_10 != entry_x8[2])
            *x8_10 = var_148
            x8_10[1] = var_138
            x8_10[4] = var_108
            x8_10[5] = var_f8
            x8_10[2] = var_128
            x8_10[3] = var_118
            x8_10[9].q = var_b8
            x8_10[7] = var_d8
            x8_10[8] = var_c8
            x8_10[6] = var_e8
            entry_x8[1] = x8_10 + 0x98
        else
            void* x21_1 = *entry_x8
            size_t x22_1 = x8_10 - x21_1
            int64_t x24_1 = (x22_1 s>> 3) * -0x79435e50d79435e5
            
            if (x24_1 + 1 u> 0x1af286bca1af286)
                std::__ndk1::__vector_base_common<true>::__throw_length_error()
                sub_ef2a0c()
                noreturn
            
            int64_t x9_5 = x24_1 << 1
            int64_t x8_13
            
            if (x9_5 u< x24_1 + 1)
                x8_13 = x24_1 + 1
            else
                x8_13 = x9_5
            
            int64_t x25_1
            
            x25_1 = x24_1 u< 0xd79435e50d7943 ? x8_13 : 0x1af286bca1af286
            
            int64_t* x23_1
            
            if (x25_1 == 0)
                x23_1 = nullptr
            else
                if (x25_1 u> 0x1af286bca1af286)
                    sub_ef2a0c()
                    noreturn
                
                entry_x0, v0, v1, v2, v3 = operator new(x25_1 * 0x98)
                x23_1 = entry_x0
            
            int128_t* x28_1 = x23_1 + x24_1 * 0x98
            *x28_1 = var_148
            x28_1[1] = var_138
            void* x24_2 = x28_1 - x22_1
            x28_1[4] = var_108
            x28_1[5] = var_f8
            x28_1[2] = var_128
            x28_1[3] = var_118
            x28_1[7] = var_d8
            x28_1[8] = var_c8
            x28_1[9].q = var_b8
            x28_1[6] = var_e8
            
            if (x22_1 s>= 1)
                entry_x0, v0, v1, v2, v3 = memcpy(x24_2, x21_1, x22_1)
            
            *entry_x8 = x24_2
            entry_x8[1] = x28_1 + 0x98
            entry_x8[2] = x23_1 + x25_1 * 0x98
            
            if (x21_1 != 0)
                entry_x0, v0, v1, v2, v3 = operator delete(x21_1)
        x21 = *x20_1
        i = zx.q(i_1)
        i_1 += 1
    while (((x20_1[1] - x21) s>> 3) * -0x1111111111111111 u> i)

if (*(x8 + 0x28) == x8_1)
    return 

__stack_chk_fail()
noreturn
