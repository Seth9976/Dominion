// 函数: _ZN5Botan3TLS21Datagram_Handshake_IO20Handshake_Reassembly12add_fragmentEPKhmmthm
// 地址: 0xe71494
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint32_t x8 = zx.d(*arg1)
int64_t entry_x6
int64_t x23 = entry_x6
int64_t x21 = arg4

if (x8 == 0xff)
    *(arg1 + 0x10) = arg5.w
    *arg1 = (arg6.d).b
    *(arg1 + 8) = x23
label_e71508:
    
    if (zx.d(*(arg1 + 0x10)) == zx.d(arg5.w))
        if (x23 u< x21)
            void** x0_19 = __cxa_allocate_exception(0x20)
            int64_t x0_20
            int128_t v2_2
            x0_20, v2_2 = operator new(0x30)
            v2_2 = data_71b820
            int64_t var_70_2 = x0_20
            __builtin_strncpy(x0_20, "Fragment offset past end of message", 0x24)
            int128_t var_80_2 = v2_2
            *x0_19 = _vtable_for_Botan::Exception + 0x10
            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                &x0_19[1])
            *x0_19 = _vtable_for_Botan::Decoding_Error + 0x10
            __cxa_throw(x0_19, _typeinfo_for_Botan::Decoding_Error, Botan::Exception::~Exception)
            noreturn
        
        if (x21 + arg3 u> x23)
            void** x0_24 = __cxa_allocate_exception(0x20)
            int64_t x0_25
            int128_t v0_1
            x0_25, v0_1 = operator new(0x30)
            v0_1 = data_71b5a0
            int64_t var_70_3 = x0_25
            __builtin_strncpy(x0_25, "Fragment overlaps past end of message", 0x26)
            int128_t var_80_3 = v0_1
            *x0_24 = _vtable_for_Botan::Exception + 0x10
            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                &x0_24[1])
            *x0_24 = _vtable_for_Botan::Decoding_Error + 0x10
            __cxa_throw(x0_24, _typeinfo_for_Botan::Decoding_Error, Botan::Exception::~Exception)
            noreturn
        
        if (x21 == 0 && x23 == arg3)
            *(arg1 + 0x20)
            std::__ndk1::__tree<std::__ndk1::__value_type<uint64_t, uint8_t>, std::__ndk1::__map_value_compare<uint64_t, std::__ndk1::__value_type<uint64_t, uint8_t>, std::__ndk1::less<uint64_t>, true>, std::__ndk1::allocator<std::__ndk1::__value_type<uint64_t, uint8_t> > >::destroy(
                &arg1[0x18])
            *(arg1 + 0x18) = &arg1[0x20]
            *(arg1 + 0x20) = 0
            *(arg1 + 0x28) = 0
            return std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >::assign<uint8_t const*>(
                &arg1[0x30], arg2) __tailcall
        
        if (arg3 != 0)
            int64_t x24_1 = 0
            
            do
                void* fp_1 = *(arg1 + 0x20)
                char x26_1 = *(arg2 + x24_1)
                int64_t x27_1 = x24_1 + x21
                std::__ndk1::__tree_node_base<void*>* x23_1
                void* x28_1
                
                if (fp_1 != 0)
                    x28_1 = &arg1[0x20]
                    
                    while (true)
                        int64_t x8_6 = *(fp_1 + 0x20)
                        
                        if (x27_1 u>= x8_6)
                            if (x8_6 u>= x27_1)
                                goto label_e71604
                            
                            x28_1 = fp_1 + 8
                            void* x8_8 = *x28_1
                            
                            if (x8_8 == 0)
                                goto label_e71604
                            
                            fp_1 = x8_8
                        else
                            void* x8_7 = *fp_1
                            
                            if (x8_7 == 0)
                                x28_1 = fp_1
                                x23_1 = *x28_1
                                
                                if (x23_1 != 0)
                                    goto label_e7159c
                                
                                break
                            
                            x28_1 = fp_1
                            fp_1 = x8_7
                    
                    goto label_e71610
                
                fp_1 = &arg1[0x20]
                x28_1 = &arg1[0x20]
            label_e71604:
                x23_1 = *x28_1
                
                if (x23_1 == 0)
                label_e71610:
                    std::__ndk1::__tree_node_base<void*>* x0_4 = operator new(0x30)
                    *(x0_4 + 0x20) = x27_1
                    *(x0_4 + 0x28) = 0
                    *x0_4 = 0
                    *(x0_4 + 8) = 0
                    *(x0_4 + 0x10) = fp_1
                    *x28_1 = x0_4
                    x23_1 = x0_4
                    int64_t x8_10 = **(arg1 + 0x18)
                    std::__ndk1::__tree_node_base<void*>* x1_3
                    
                    if (x8_10 != 0)
                        *(arg1 + 0x18) = x8_10
                        x1_3 = *x28_1
                    else
                        x1_3 = x23_1
                    
                    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>(
                        *(arg1 + 0x20), x1_3)
                    *(arg1 + 0x28) += 1
                
            label_e7159c:
                x24_1 += 1
                *(x23_1 + 0x28) = x26_1
            while (x24_1 != arg3)
            
            x23 = *(arg1 + 8)
        
        if (*(arg1 + 0x28) == x23)
            void* x20_1 = *(arg1 + 0x30)
            int64_t x0_5 = *(arg1 + 0x38)
            size_t x21_1 = x0_5 - x20_1
            size_t x22_1 = x23 - x21_1
            
            if (x23 u> x21_1)
                int64_t x9_3 = *(arg1 + 0x40)
                
                if (x9_3 - x0_5 u>= x22_1)
                    if (x22_1 != 0)
                        memset(x0_5, 0, x22_1)
                        x0_5 += x22_1
                    
                    *(arg1 + 0x38) = x0_5
                else
                    if ((x23 & 0xffffffff80000000) != 0)
                        int64_t* x0_30 =
                            std::__ndk1::__vector_base_common<true>::__throw_length_error()
                        char var_80
                        void* var_70
                        
                        if ((zx.d(var_80) & 1) != 0)
                            operator delete(var_70)
                        sub_1101e04(x0_30)
                        noreturn
                    
                    void* x8_14 = x9_3 - x20_1
                    int64_t x10_5 = x8_14 << 1
                    int64_t x10_6
                    
                    x10_6 = x10_5 u< x23 ? x23 : x10_5
                    
                    int64_t x25_2
                    
                    x25_2 = x8_14 u< 0x3fffffffffffffff ? x10_6 : 0x7fffffffffffffff
                    
                    int64_t x24_2
                    
                    if (x25_2 == 0)
                        x24_2 = 0
                    else
                        x24_2 = operator new(x25_2)
                    
                    memset(x24_2 + x21_1, 0, x22_1)
                    
                    if (x21_1 s>= 1)
                        memcpy(x24_2, x20_1, x21_1)
                    
                    *(arg1 + 0x30) = x24_2
                    *(arg1 + 0x38) = x24_2 + x23
                    *(arg1 + 0x40) = x24_2 + x25_2
                    
                    if (x20_1 != 0)
                        operator delete(x20_1)
            else if (x23 u< x21_1)
                *(arg1 + 0x38) = x20_1 + x23
            
            if (*(arg1 + 8) != 0)
                int64_t i = 0
                
                do
                    void* x25_4 = *(arg1 + 0x20)
                    std::__ndk1::__tree_node_base<void*>* x21_2
                    void* x24_3
                    
                    if (x25_4 != 0)
                        x24_3 = &arg1[0x20]
                        
                        while (true)
                            int64_t x8_21 = *(x25_4 + 0x20)
                            
                            if (i u>= x8_21)
                                if (x8_21 u>= i)
                                    goto label_e717d8
                                
                                x24_3 = x25_4 + 8
                                void* x8_23 = *x24_3
                                
                                if (x8_23 == 0)
                                    goto label_e717d8
                                
                                x25_4 = x8_23
                            else
                                void* x8_22 = *x25_4
                                
                                if (x8_22 == 0)
                                    x24_3 = x25_4
                                    x21_2 = *x24_3
                                    
                                    if (x21_2 != 0)
                                        goto label_e71774
                                    
                                    break
                                
                                x24_3 = x25_4
                                x25_4 = x8_22
                        
                        goto label_e717e4
                    
                    x25_4 = &arg1[0x20]
                    x24_3 = &arg1[0x20]
                label_e717d8:
                    x21_2 = *x24_3
                    
                    if (x21_2 == 0)
                    label_e717e4:
                        std::__ndk1::__tree_node_base<void*>* x0_12 = operator new(0x30)
                        *(x0_12 + 0x20) = i
                        *(x0_12 + 0x28) = 0
                        *x0_12 = 0
                        *(x0_12 + 8) = 0
                        *(x0_12 + 0x10) = x25_4
                        *x24_3 = x0_12
                        x21_2 = x0_12
                        int64_t x8_25 = **(arg1 + 0x18)
                        std::__ndk1::__tree_node_base<void*>* x1_5
                        
                        if (x8_25 != 0)
                            *(arg1 + 0x18) = x8_25
                            x1_5 = *x24_3
                        else
                            x1_5 = x21_2
                        
                        std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>(
                            *(arg1 + 0x20), x1_5)
                        *(arg1 + 0x28) += 1
                    
                label_e71774:
                    (*(arg1 + 0x30))[i] = *(x21_2 + 0x28)
                    i += 1
                while (i != *(arg1 + 8))
            
            *(arg1 + 0x20)
            std::__ndk1::__tree<std::__ndk1::__value_type<uint64_t, uint8_t>, std::__ndk1::__map_value_compare<uint64_t, std::__ndk1::__value_type<uint64_t, uint8_t>, std::__ndk1::less<uint64_t>, true>, std::__ndk1::allocator<std::__ndk1::__value_type<uint64_t, uint8_t> > >::destroy(
                &arg1[0x18])
            *(arg1 + 0x18) = &arg1[0x20]
            *(arg1 + 0x20) = 0
            *(arg1 + 0x28) = 0
        
        return 
else
    int64_t x9_1 = *(arg1 + 8)
    
    if (*(arg1 + 0x38) - *(arg1 + 0x30) == x9_1)
        return 
    
    if (x8 == zx.d((arg6.d).b) && x9_1 == x23)
        goto label_e71508

void** x0_14 = __cxa_allocate_exception(0x20)
int64_t x0_15
int128_t v2_1
x0_15, v2_1 = operator new(0x40)
(*"d DTLS handshake header")[0].o
int64_t var_70_1 = x0_15
v2_1 = data_71c540
__builtin_strncpy(x0_15, "Inconsistent values in fragmented DTLS handshake header", 0x38)
int128_t var_80_1 = v2_1
*x0_14 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0_14[1])
*x0_14 = _vtable_for_Botan::Decoding_Error + 0x10
__cxa_throw(x0_14, _typeinfo_for_Botan::Decoding_Error, Botan::Exception::~Exception)
noreturn
