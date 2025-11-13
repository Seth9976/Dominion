// 函数: _ZNK5Botan3TLS15Certificate_Req9serializeEv
// 地址: 0xe414ac
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t fp = _ReadMSR(tpidr_el0)
int64_t x8 = *(fp + 0x28)
std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >* entry_x8
__builtin_memset(entry_x8, 0, 0x18)
uint8_t* result_1
__builtin_memset(&result_1, 0, 0x18)
void* entry_x0
void* x25 = *(entry_x0 + 0x20)
uint8_t* result_3
void* x22_1

if (*(entry_x0 + 0x28) == x25)
    x22_1 = nullptr
    result_3 = nullptr
label_e416e8:
    Botan::TLS::append_tls_length_value<uint8_t, std::__ndk1::allocator<uint8_t> >(entry_x8, 
        result_3, x22_1 - result_3, 1)
    int64_t x22_5 = *(entry_x0 + 0x38)
    int64_t x8_11 = *(entry_x0 + 0x40)
    uint64_t x21_2 = x8_11 - x22_5
    uint8_t* var_100
    void* __offset(vtable_for_Botan::TLS::Signature_Algorithms, 0x10) var_d0
    
    if (x8_11 == x22_5)
    label_e417f4:
        __builtin_memset(&var_100, 0, 0x18)
        int64_t x8_19 = *(entry_x0 + 8)
        uint8_t* x1_10
        int64_t x8_28
        
        if (*(entry_x0 + 0x10) == x8_19)
            x8_28 = 0
            x1_10 = nullptr
        else
            int64_t i = 0
            
            do
                int128_t v0_1
                v0_1.q = 0
                v0_1:8.q = 0
                int64_t* var_b0_1 = nullptr
                int128_t var_90
                __builtin_memset(&var_90, 0, 0x20)
                int64_t var_a0_1 = (zx.o(0)).q
                int64_t* x0_21 = x8_19 + i * 0x38
                (**x0_21)(x0_21, &var_d0, v0_1)
                Botan::DER_Encoder::get_contents()
                uint8_t* var_118
                int64_t var_110
                Botan::TLS::append_tls_length_value<uint8_t, std::__ndk1::allocator<uint8_t> >(
                    &var_100, var_118, var_110 - var_118, 2)
                int64_t var_108
                
                if (var_118 != 0)
                    Botan::deallocate_memory(var_118, var_108 - var_118, 1)
                void* x27_3 = var_90:8.q
                
                if (x27_3 != 0)
                    int128_t var_80
                    void* x22_8 = var_80.q
                    void* x0_25
                    
                    if (x22_8 == x27_3)
                        x0_25 = x27_3
                    else
                        do
                            x22_8 -= 0x38
                            sub_f230d4(&var_80:8, x22_8)
                        while (x27_3 != x22_8)
                        
                        x0_25 = var_90:8.q
                    
                    var_80.q = x27_3
                    operator delete(x0_25)
                
                int64_t x0_26 = var_a0_1
                
                if (x0_26 != 0)
                    var_a0_1 = x0_26
                    Botan::deallocate_memory(x0_26, var_90.q - x0_26, 1)
                
                if (&var_d0 == var_b0_1)
                    (*(*var_b0_1 + 0x20))()
                else if (var_b0_1 != 0)
                    (*(*var_b0_1 + 0x28))()
                
                x8_19 = *(entry_x0 + 8)
                i += 1
            while (i != ((*(entry_x0 + 0x10) - x8_19) s>> 3) * 0x6db6db6db6db6db7)
            
            x1_10 = var_100
            int64_t var_f8_2
            x8_28 = var_f8_2
        
        Botan::TLS::append_tls_length_value<uint8_t, std::__ndk1::allocator<uint8_t> >(entry_x8, 
            x1_10, x8_28 - x1_10, 2)
        uint8_t* x0_29 = var_100
        
        if (x0_29 != 0)
            uint8_t* var_f8_3 = x0_29
            operator delete(x0_29)
        
        uint8_t* result = result_1
        
        if (result != 0)
            uint8_t* result_2 = result
            result = operator delete(result)
        
        if (*(fp + 0x28) == x8)
            return result
    else
        var_d0 = _vtable_for_Botan::TLS::Signature_Algorithms + 0x10
        int64_t var_c8_1
        __builtin_memset(&var_c8_1, 0, 0x18)
        
        if ((x21_2 & 0xffffffff80000000) == 0)
            void* x0_12 = operator new(x21_2)
            void* var_b8_1 = x0_12 + (x21_2 s>> 1 << 1)
            memcpy(x0_12, x22_5, x21_2)
            void* var_c0_1 = x0_12 + x21_2
            Botan::TLS::Signature_Algorithms::serialize(&var_d0)
            void* x24_2 = *entry_x8
            void* x23_2 = *(entry_x8 + 8)
            uint8_t* x22_6 = var_100
            void* x25_2 = x23_2 - x24_2
            int64_t var_f8
            void* x27_1 = var_f8 - x22_6 + x25_2
            
            if (*(entry_x8 + 0x10) - x24_2 u< x27_1)
                void* x0_15 = operator new(x27_1)
                x23_2 = x0_15 + x25_2
                
                if (x25_2 s>= 1)
                    memcpy(x0_15, x24_2, x25_2)
                
                *entry_x8 = x0_15
                *(entry_x8 + 8) = x23_2
                *(entry_x8 + 0x10) = x0_15 + x27_1
                
                if (x24_2 != 0)
                    operator delete(x24_2)
                    x23_2 = *(entry_x8 + 8)
                    x22_6 = var_100
            
            std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >::insert<std::__ndk1::__wrap_iter<uint8_t const*> >(
                entry_x8, x23_2, x22_6)
            uint8_t* x0_19 = var_100
            
            if (x0_19 != 0)
                uint8_t* var_f8_1 = x0_19
                operator delete(x0_19)
            
            var_d0 = _vtable_for_Botan::TLS::Signature_Algorithms + 0x10
            
            if (x0_12 != 0)
                void* var_c0_2 = x0_12
                operator delete(x0_12)
            
            goto label_e417f4
        
        std::__ndk1::__vector_base_common<true>::__throw_length_error()
else
    int64_t fp_1 = 0
    int64_t x28_1 = 0
    
    while (true)
        char* x24_1 = x25 + fp_1
        uint64_t x10_1 = zx.q(*x24_1)
        uint64_t x8_6 = *(x24_1 + 8)
        int32_t x9_1 = x10_1.d & 1
        uint64_t x10_2 = x10_1 u>> 1
        uint64_t x11_1
        
        x11_1 = x9_1 == 0 ? x10_2 : x8_6
        
        if (x11_1 != 3)
            goto label_e41594
        
        void* var_e0_1
        void* var_d8_1
        void* x8_8
        char x21_1
        void* x22_2
        
        if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                x24_1, 0, -ffffffffffffffff, &data_76da56) != 0)
            uint64_t x10_3 = zx.q(*x24_1)
            x8_6 = *(x24_1 + 8)
            x9_1 = x10_3.d & 1
            x10_2 = x10_3 u>> 1
        label_e41594:
            uint64_t x11_2
            
            if ((x9_1 & 0xff) == 0)
                x11_2 = x10_2
            else
                x11_2 = x8_6
            
            if (x11_2 != 3)
                goto label_e415d4
            
            if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                    x24_1, 0, -ffffffffffffffff, &data_72065f) == 0)
                x21_1 = 2
                x22_2 = var_e0_1
                x8_8 = var_d8_1
                
                if (x22_2 u< x8_8)
                    goto label_e41518
                
                goto label_e41634
            
            uint64_t x10_4 = zx.q(*x24_1)
            x8_6 = *(x24_1 + 8)
            x9_1 = x10_4.d & 1
            x10_2 = x10_4 u>> 1
        label_e415d4:
            uint64_t x8_7
            
            if ((x9_1 & 0xff) == 0)
                x8_7 = x10_2
            else
                x8_7 = x8_6
            
            int32_t x0_5
            
            if (x8_7 == 5)
                x0_5 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                    x24_1, 0, -ffffffffffffffff, "ECDSA")
            
            if (x8_7 != 5 || x0_5 != 0)
                void** x0_30 = __cxa_allocate_exception(0x20)
                std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
                    "Unknown cert type ", x25 + fp_1)
                *x0_30 = _vtable_for_Botan::Exception + 0x10
                std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                    &x0_30[1])
                *x0_30 = _vtable_for_Botan::Invalid_Argument + 0x10
                __cxa_throw(x0_30, _typeinfo_for_Botan::Invalid_Argument, 
                    Botan::Exception::~Exception)
                noreturn
            
            x21_1 = 0x40
            x22_2 = var_e0_1
            x8_8 = var_d8_1
            
            if (x22_2 u< x8_8)
                goto label_e41518
            
            goto label_e41634
        
        x21_1 = 1
        x22_2 = var_e0_1
        x8_8 = var_d8_1
        
        if (x22_2 u>= x8_8)
        label_e41634:
            uint8_t* result_4 = result_1
            void* x25_1 = x22_2 - result_4
            
            if (x25_1 + 1 s< 0)
                std::__ndk1::__vector_base_common<true>::__throw_length_error()
                break
            
            void* x8_9 = x8_8 - result_4
            int64_t x10_5 = x8_9 << 1
            int64_t x9_3
            
            if (x10_5 u< x25_1 + 1)
                x9_3 = x25_1 + 1
            else
                x9_3 = x10_5
            
            int64_t x26_1
            
            x26_1 = x8_9 u< 0x3fffffffffffffff ? x9_3 : 0x7fffffffffffffff
            
            uint8_t* result_5
            
            if (x26_1 == 0)
                result_5 = nullptr
                *x25_1 = x21_1
                x22_1 = x25_1 + 1
                
                if (x25_1 s>= 1)
                    memcpy(result_5, result_4, x25_1)
            else
                result_5 = operator new(x26_1)
                char* x22_3 = result_5 + x25_1
                *x22_3 = x21_1
                x22_1 = &x22_3[1]
                
                if (x25_1 s>= 1)
                    memcpy(result_5, result_4, x25_1)
            
            result_1 = result_5
            var_e0_1 = x22_1
            var_d8_1 = &result_5[x26_1]
            
            if (result_4 != 0)
                operator delete(result_4)
        else
        label_e41518:
            *x22_2 = x21_1
            x22_1 = x22_2 + 1
            var_e0_1 = x22_1
        
        x25 = *(entry_x0 + 0x20)
        x28_1 += 1
        fp_1 += 0x18
        
        if (x28_1 == ((*(entry_x0 + 0x28) - x25) s>> 3) * -0x5555555555555555)
            result_3 = result_1
            goto label_e416e8
    
    std::__ndk1::__vector_base_common<true>::__throw_length_error()
__stack_chk_fail()
noreturn
