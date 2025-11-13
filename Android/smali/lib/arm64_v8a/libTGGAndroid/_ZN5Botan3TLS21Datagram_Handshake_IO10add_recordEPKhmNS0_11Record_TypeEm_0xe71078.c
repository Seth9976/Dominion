// 函数: _ZN5Botan3TLS21Datagram_Handshake_IO10add_recordEPKhmNS0_11Record_TypeEm
// 地址: 0xe71078
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t i = arg3
uint64_t x21 = arg2
int64_t entry_x4
uint32_t x23 = (entry_x4 u>> 0x30).d

if (arg4.d == 0x14)
    if (i != 1 || zx.d(*x21) != 1)
        void** x0_9 = __cxa_allocate_exception(0x20)
        int64_t x0_10
        int128_t v0_1
        x0_10, v0_1 = operator new(0x20)
        int64_t var_70_1 = x0_10
        int128_t var_80_1 = data_71af80
        __builtin_strncpy(x0_10, "Invalid ChangeCipherSpec", 0x19)
        *x0_9 = _vtable_for_Botan::Exception + 0x10
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
            &x0_9[1])
        *x0_9 = _vtable_for_Botan::Decoding_Error + 0x10
        __cxa_throw(x0_9, _typeinfo_for_Botan::Decoding_Error, Botan::Exception::~Exception)
        noreturn
    
    void* x20_2 = &arg1[0x30]
    void* x21_1 = *x20_2
    
    if (x21_1 == 0)
        x21_1 = x20_2
    else
        x20_2 = &arg1[0x30]
        
        while (true)
            uint32_t x8_2 = zx.d(*(x21_1 + 0x1a))
            
            if (x8_2 u<= x23)
                if (x8_2 u>= x23)
                    break
                
                x20_2 = x21_1 + 8
                void* x8_4 = *x20_2
                
                if (x8_4 == 0)
                    break
                
                x21_1 = x8_4
            else
                void* x8_3 = *x21_1
                
                if (x8_3 == 0)
                    x20_2 = x21_1
                    
                    if (*x20_2 != 0)
                        goto label_e71320
                    
                    goto label_e712b0
                
                x20_2 = x21_1
                x21_1 = x8_3
    
    if (*x20_2 == 0)
    label_e712b0:
        int64_t* x0_3 = operator new(0x20)
        *(x0_3 + 0x1a) = x23.w
        *x0_3 = 0
        x0_3[1] = 0
        x0_3[2] = x21_1
        *x20_2 = x0_3
        int64_t x8_23 = **(arg1 + 0x28)
        int64_t* x1_2
        
        if (x8_23 == 0)
            x1_2 = x0_3
        else
            *(arg1 + 0x28) = x8_23
            x1_2 = *x20_2
        
        std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>(
            *(arg1 + 0x30), x1_2)
        *(arg1 + 0x38) += 1
else if (i u>= 0xc)
    void* x26_1 = &arg1[0x18]
    void* var_90_1 = x26_1
    
    do
        uint64_t x23_1 =
            (-0xff01 & zx.q(*(x21 + 9)) << 0x10) | zx.q(*(x21 + 0xa)) << 8 | zx.q(*(x21 + 0xb))
        int64_t i_1 = i
        i -= x23_1 + 0xc
        
        if (i_1 u< x23_1 + 0xc)
            void** x0_5 = __cxa_allocate_exception(0x20)
            int64_t x0_6
            int128_t v0
            x0_6, v0 = operator new(0x20)
            int64_t var_70 = x0_6
            int128_t var_80 = data_71bd10
            __builtin_strncpy(x0_6, "Bad lengths in DTLS header", 0x1b)
            *x0_5 = _vtable_for_Botan::Exception + 0x10
            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                &x0_5[1])
            *x0_5 = _vtable_for_Botan::Decoding_Error + 0x10
            __cxa_throw(x0_5, _typeinfo_for_Botan::Decoding_Error, Botan::Exception::~Exception)
            noreturn
        
        uint32_t x9_4 = zx.d(*(arg1 + 0x90))
        uint32_t x20_4 = _byteswap(zx.d(*(x21 + 4))) u>> 0x10
        
        if (x20_4 u>= x9_4)
            uint64_t x5_1 = zx.q(*x21)
            *(x21 + 1)
            *(x21 + 2)
            uint64_t fp_1 = zx.q(*(x21 + 6))
            uint64_t x12_1 = zx.q(*(x21 + 7))
            void* x24_1 = *x26_1
            uint64_t x13_1 = zx.q(*(x21 + 8))
            std::__ndk1::__tree_node_base<void*>* x25_1
            
            if (x24_1 != 0)
                while (true)
                    uint32_t x8_14 = zx.d(*(x24_1 + 0x20))
                    
                    if (x20_4 u>= x8_14)
                        if (x8_14 u>= x20_4)
                            goto label_e71224
                        
                        x26_1 = x24_1 + 8
                        void* x8_16 = *x26_1
                        
                        if (x8_16 == 0)
                            goto label_e71224
                        
                        x24_1 = x8_16
                    else
                        void* x8_15 = *x24_1
                        
                        if (x8_15 == 0)
                            x26_1 = x24_1
                            x25_1 = *x26_1
                            
                            if (x25_1 != 0)
                                goto label_e71170
                            
                            break
                        
                        x26_1 = x24_1
                        x24_1 = x8_15
                
                goto label_e71234
            
            x24_1 = x26_1
        label_e71224:
            x25_1 = *x26_1
            
            if (x25_1 == 0)
            label_e71234:
                uint64_t var_a8_1 = zx.q(*(x21 + 3))
                std::__ndk1::__tree_node_base<void*>* x0_2 = operator new(0x70)
                *(x0_2 + 0x28) = 0
                *(x0_2 + 0x28) = 0xff
                *(x0_2 + 0x20) = x20_4.w
                *(x0_2 + 0x30) = 0
                *(x0_2 + 0x38) = 0
                *(x0_2 + 0x38) = 0
                *(x0_2 + 0x48) = 0
                __builtin_memset(x0_2 + 0x50, 0, 0x20)
                *x0_2 = 0
                *(x0_2 + 8) = 0
                *(x0_2 + 0x10) = x24_1
                *(x0_2 + 0x40) = x0_2 + 0x48
                *x26_1 = x0_2
                x25_1 = x0_2
                int64_t x8_20 = **(arg1 + 0x10)
                std::__ndk1::__tree_node_base<void*>* x1
                
                if (x8_20 != 0)
                    *(arg1 + 0x10) = x8_20
                    x1 = *x26_1
                else
                    x1 = x25_1
                
                std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>(
                    *(arg1 + 0x18), x1)
                x5_1 = zx.q(x5_1.d)
                *(arg1 + 0x20) += 1
            
        label_e71170:
            Botan::TLS::Datagram_Handshake_IO::Handshake_Reassembly::add_fragment(x25_1 + 0x28, 
                x21 + 0xc, x23_1, zx.w((fp_1 << 0x10).b) | ((0xff & x12_1) << 8).w | x13_1.w, 
                x23.b, x5_1)
            x26_1 = var_90_1
        
        x21 += x23_1 + 0xc
    while (i u> 0xb)

label_e71320:
