// 函数: _ZNK5Botan14ASN1_Formatter6decodeERNSt6__ndk113basic_ostreamIcNS1_11char_traitsIcEEEERNS_11BER_DecoderEm
// 地址: 0xcb24b0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8 = _ReadMSR(tpidr_el0)
int64_t x8_1 = *(x8 + 0x28)
int64_t entry_x3
int64_t x27 = entry_x3
uint64_t var_288 = arg3
Botan::BER_Decoder::get_next_object()
int32_t i_1
int32_t i = i_1
void* result_1
int64_t var_1b8

if (i != 0xff00)
    int64_t var_2a8_1 = x27 + 1
    char var_260
    char* x9_3 = &var_260 | 1
    int16_t var_200
    char* j_23 = &var_200 | 1
    int64_t x10_1 = *(arg1 + 0x10) - 1
    void* var_180
    int64_t* var_290_1 = &var_180
    char var_240
    char* j_21 = &var_240 | 1
    void* __offset(vtable_for_Botan::ASN1_String, 0x10) var_1b0
    void* x8_6 = &var_1b0 | 1
    int64_t (* var_140)()
    int64_t* var_2c0_1 = &var_140
    void* var_168
    int64_t* var_2d0_1 = &var_168
    int64_t* var_190
    int64_t* var_2e8_1 = &var_190
    void* __offset(
        VTT_for_std::__ndk1::basic_ostringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, 
        0x8) var_300_1 = _VTT_for_std::__ndk1::basic_ostringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
        + 8
    
    do
        int64_t x21_1 = x27
        var_190 = nullptr
        __builtin_memset(&var_290_1[2], 0, 0x20)
        *var_290_1 = zx.o(0)
        struct std::__ndk1::__function::__base<void (uint8_t const*, uint64_t)>::std::__ndk1::__function::__func<Botan::DER_Encoder::DER_Encoder(std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >&)::$_2, std::__ndk1::allocator<Botan::DER_Encoder::DER_Encoder(std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >&)::$_2>, void (uint8_t const*, uint64_t)>::VTable
            * const var_a0 = &_vtable_for_std::__ndk1::__function::__func<Botan::DER_Encoder::DER_Encoder(std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >&)::$_2, std::__ndk1::allocator<Botan::DER_Encoder::DER_Encoder(std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >&)::$_2>, void (uint8_t const*, uint64_t)>{for `std::__ndk1::__function::__base<void (uint8_t const*, uint64_t)>'}
        void* var_1e8
        __builtin_memset(&var_1e8, 0, 0x18)
        int64_t* var_98_1 = &var_1e8
        struct std::__ndk1::__function::__base<void (uint8_t const*, uint64_t)>::std::__ndk1::__function::__func<Botan::DER_Encoder::DER_Encoder(std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >&)::$_2, std::__ndk1::allocator<Botan::DER_Encoder::DER_Encoder(std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >&)::$_2>, void (uint8_t const*, uint64_t)>::VTable
            * const* var_80_1 = &var_a0
        sub_f2410c(&var_a0, &var_1b0)
        
        if (&var_a0 == var_80_1)
            (*var_80_1)->vFunc_4()
        else if (var_80_1 != 0)
            (*var_80_1)->j_operator delete()
        
        int32_t var_1cc
        Botan::DER_Encoder::add_object(&var_1b0, zx.q(i), zx.q(var_1cc), result_1)
        void* x28_1 = var_168
        void* var_158
        
        if (x28_1 != 0)
            void* var_160
            void* x23_1 = var_160
            void* x0_5
            
            if (x23_1 == x28_1)
                x0_5 = x28_1
            else
                do
                    x23_1 -= 0x38
                    sub_f230d4(&var_158, x23_1)
                while (x28_1 != x23_1)
                
                x0_5 = var_168
            
            var_160 = x28_1
            operator delete(x0_5)
        
        void* x0_6 = var_180
        void* var_178
        
        if (x0_6 != 0)
            var_178 = x0_6
            int64_t var_170
            Botan::deallocate_memory(x0_6, var_170 - x0_6, 1)
        
        int64_t* x0_7 = var_190
        
        if (&var_1b0 == x0_7)
            (*(*x0_7 + 0x20))()
        else if (x0_7 != 0)
            (*(*x0_7 + 0x28))()
        
        Botan::BER_Decoder::BER_Decoder(&var_a0)
        void* result_3
        void* x28_2 = result_3 - result_1
        void* __offset(vtable_for_Botan::ASN1_String, 0x10) var_1a8
        int64_t var_198
        uint64_t j_3
        char* j_11
        char* j_12
        void* __offset(vtable_for_Botan::ASN1_String, 0x10) var_1a0
        
        if ((var_1cc & 0x20) != 0)
            Botan::BER_Decoder::BER_Decoder(&var_1b0, result_1)
            x27 = x21_1
            
            if (x10_1 u>= x21_1)
                var_200 = 0
                (*(*arg1 + 0x10))(arg1, zx.q(i), zx.q(var_1cc), x27, x28_2, &var_200)
                uint64_t x8_38 = zx.q(var_240)
                int32_t temp0_1 = x8_38.d & 1
                uint64_t j_6
                
                if (temp0_1 == 0)
                    j_6 = x8_38 u>> 1
                else
                    j_6 = j_3
                
                char* j_15
                
                j_15 = temp0_1 == 0 ? j_21 : j_11
                
                std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(arg2, 
                    j_15, j_6)
                
                if ((zx.d(var_240) & 1) != 0)
                    operator delete(j_11)
                
                if ((zx.d(var_200.b) & 1) != 0)
                    operator delete(j_12)
                
                Botan::ASN1_Formatter::decode(arg1, arg2, &var_1b0)
            else
                (*(*arg1 + 0x18))(arg1, zx.q(i), zx.q(var_1cc), &var_1e8)
                (*(*arg1 + 0x10))(arg1, zx.q(i), zx.q(var_1cc), x27, x28_2, &var_200)
                uint64_t x8_26 = zx.q(var_240)
                int32_t temp1_1 = x8_26.d & 1
                uint64_t j_5
                
                if (temp1_1 == 0)
                    j_5 = x8_26 u>> 1
                else
                    j_5 = j_3
                
                char* j_14
                
                j_14 = temp1_1 == 0 ? j_21 : j_11
                
                std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(arg2, 
                    j_14, j_5)
                
                if ((zx.d(var_240) & 1) != 0)
                    operator delete(j_11)
                
                if ((zx.d(var_200.b) & 1) != 0)
                    operator delete(j_12)
            
            void* x0_25 = var_180
            
            if (x0_25 != 0)
                (*(*x0_25 + 0x38))()
            
            if (var_1a0 != 0)
                Botan::deallocate_memory(var_1a0, var_190 - var_1a0, 1)
        else
            x27 = x21_1
            uint64_t var_258
            char* var_250
            int64_t var_220
            int64_t* var_210
            
            if ((var_1cc & 0xc0) != 0)
                if (zx.d(*(arg1 + 8)) != 0)
                    char* x10_2 = var_1e8
                    int64_t var_1e0_1
                    void* x8_21 = var_1e0_1 - x10_2
                    uint64_t j_2
                    
                    if (x8_21 u>= 3 && (zx.d(*x10_2) | 4) == 0x86)
                        j_2 = zx.q(x10_2[1])
                    
                    if (x8_21 u>= 3 && (zx.d(*x10_2) | 4) == 0x86 && x8_21 - 2 == j_2)
                        void* x10_3 = &x10_2[2]
                        uint64_t j_1 = j_2
                        uint64_t j
                        
                        do
                            int32_t x12_1 = sx.d(*x10_3)
                            
                            if ((x12_1 & 0x80000000) != 0)
                                goto label_cb28a4
                            
                            uint64_t x12_2 = zx.q(x12_1.b)
                            
                            if ((zx.d(*(x12_2 + *_ctype_ + 1)) & 7) == 0 && x12_2.d - 0x2d u>= 3
                                    && x12_2.d != 0x3a)
                                goto label_cb28a4
                            
                            j = j_1
                            j_1 -= 1
                            x10_3 += 1
                        while (j != 1)
                        char* j_22
                        
                        if (j_2.d u>= 0x17)
                            uint64_t x20_3 = (x8_21 + 0xe) & 0xfffffffffffffff0
                            char* j_13 = operator new(x20_3)
                            j_22 = j_13
                            j_3 = j_2
                            j_11 = j_13
                            var_240.q = x20_3 | 1
                            memcpy(j_22, &x10_2[2], j_2)
                        else
                            j_22 = j_21
                            var_240 = (j_2.d << 1).b
                            
                            if (j_2.d != 0)
                                memcpy(j_22, &x10_2[2], j_2)
                        
                        j_22[j_2] = 0
                        x27 = x21_1
                        (*(*arg1 + 0x10))(arg1, zx.q(i), zx.q(var_1cc), x21_1, x21_1, &var_240)
                        uint64_t x8_111 = zx.q(var_1b0.b)
                        int32_t temp14_1 = x8_111.d & 1
                        uint64_t x2_27
                        
                        if (temp14_1 == 0)
                            x2_27 = x8_111 u>> 1
                        else
                            x2_27 = var_1a8
                        
                        void* __offset(vtable_for_Botan::ASN1_String, 0x10) x1_34
                        
                        x1_34 = temp14_1 == 0 ? x8_6 : var_1a0
                        
                        std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(
                            arg2, x1_34, x2_27)
                        goto label_cb2920
                    
                label_cb28a4:
                    x27 = x21_1
                    
                    if (x10_1 u>= x21_1)
                        __builtin_memset(&var_200, 0, 0x18)
                        Botan::BER_Decoder::decode(&var_a0, &var_200, zx.q(i), zx.q(i))
                        Botan::BER_Decoder::BER_Decoder(&var_240)
                        var_1b0 = construction_vtable_for_std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >-in-std::__ndk1::basic_ostringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
                            + 0x18
                        var_140 = construction_vtable_for_std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >-in-std::__ndk1::basic_ostringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
                            + 0x40
                        std::__ndk1::ios_base::init(var_2c0_1)
                        int64_t var_b8_1 = 0
                        int32_t var_b0_1 = 0xffffffff
                        var_1b0 = _vtable_for_std::__ndk1::basic_ostringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
                            + 0x18
                        var_140 = _vtable_for_std::__ndk1::basic_ostringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
                            + 0x40
                        std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >::basic_streambuf()
                        void* __offset(
                            vtable_for_std::__ndk1::basic_stringbuf<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, 
                            0x10) var_1a8_1 = _vtable_for_std::__ndk1::basic_stringbuf<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
                            + 0x10
                        *var_2d0_1 = zx.o(0)
                        *(var_2d0_1 + 0x10) = zx.o(0)
                        int32_t var_148_1 = 0x10
                        Botan::ASN1_Formatter::decode(arg1, &var_1b0, &var_240)
                        std::__ndk1::basic_stringbuf<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::str()
                        uint64_t x8_65 = zx.q(var_260)
                        int32_t temp4_1 = x8_65.d & 1
                        uint64_t x2_13
                        
                        if (temp4_1 == 0)
                            x2_13 = x8_65 u>> 1
                        else
                            x2_13 = var_258
                        
                        char* x1_20
                        
                        x1_20 = temp4_1 == 0 ? x9_3 : var_250
                        
                        std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(
                            arg2, x1_20, x2_13)
                        
                        if ((zx.d(var_260) & 1) != 0)
                            operator delete(var_250)
                        
                        uint32_t x10_10 = zx.d(var_168.b)
                        var_140 = _vtable_for_std::__ndk1::basic_ostringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
                            + 0x40
                        var_1b0 = _vtable_for_std::__ndk1::basic_ostringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
                            + 0x18
                        var_1a8 = _vtable_for_std::__ndk1::basic_stringbuf<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
                            + 0x10
                        
                        if ((x10_10 & 1) != 0)
                            operator delete(var_158)
                        
                        std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >::~basic_streambuf()
                        std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >::~basic_ostream()
                        std::__ndk1::basic_ios<char, std::__ndk1::char_traits<char> >::~basic_ios()
                        
                        if (var_210 != 0)
                            (*(*var_210 + 0x38))()
                        
                        if (j_11 != 0)
                            Botan::deallocate_memory(j_11, var_220 - j_11, 1)
                        
                        goto label_cb2d24
                
                (*(*arg1 + 0x18))(arg1, zx.q(i), zx.q(var_1cc), &var_1e8)
                (*(*arg1 + 0x10))(arg1, zx.q(i), zx.q(var_1cc), x27, x28_2, &var_240)
                uint64_t x8_33 = zx.q(var_1b0.b)
                int32_t temp2_1 = x8_33.d & 1
                uint64_t x2_6
                
                if (temp2_1 == 0)
                    x2_6 = x8_33 u>> 1
                else
                    x2_6 = var_1a8
                
                void* x1_10
                
                x1_10 = temp2_1 == 0 ? x8_6 : var_1a0
                
                std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(arg2, 
                    x1_10, x2_6)
                goto label_cb2920
            
            int16_t var_278
            void* var_268
            uint64_t var_1f8
            void* __offset(vtable_for_Botan::ASN1_String, 0x10) x0_63
            
            if (i == 6)
                var_1b0 = _vtable_for_Botan::OID + 0x10
                __builtin_memset(&var_1a8, 0, 0x18)
                Botan::OID::decode_from(&var_1b0)
                Botan::OIDS::oid2str_or_empty(&var_1b0)
                uint64_t x8_52 = zx.q(var_240)
                uint64_t j_9
                
                if ((x8_52.d & 1) == 0)
                    j_9 = x8_52 u>> 1
                else
                    j_9 = j_3
                
                if (j_9 == 0)
                    Botan::OID::to_string()
                    
                    if ((zx.d(var_240) & 1) != 0)
                        operator delete(j_11)
                    
                    var_240.o = var_200.o
                    j_11 = j_12
                else
                    Botan::OID::to_string()
                    int128_t* x0_35
                    int128_t v0_2
                    x0_35, v0_2 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::insert(
                        &var_278, nullptr)
                    var_250 = x0_35[1].q
                    var_260.o = *x0_35
                    __builtin_memset(x0_35, 0, 0x18)
                    int128_t* x0_37
                    int128_t v0_3
                    x0_37, v0_3 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
                        &var_260)
                    j_12 = x0_37[1].q
                    var_200.o = *x0_37
                    __builtin_memset(x0_37, 0, 0x18)
                    char* j_18
                    
                    if ((zx.d(var_200.b) & 1) == 0)
                        j_18 = j_23
                    else
                        j_18 = j_12
                    
                    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
                        &var_240, j_18)
                    
                    if ((zx.d(var_200.b) & 1) == 0)
                        if ((zx.d(var_260) & 1) != 0)
                            goto label_cb2e40
                        
                        goto label_cb2b5c
                    
                    operator delete(j_12)
                    
                    if ((zx.d(var_260) & 1) == 0)
                    label_cb2b5c:
                        
                        if ((zx.d(var_278.b) & 1) != 0)
                            operator delete(var_268)
                    else
                    label_cb2e40:
                        operator delete(var_250)
                        
                        if ((zx.d(var_278.b) & 1) != 0)
                            operator delete(var_268)
                
                (*(*arg1 + 0x10))(arg1, 6, zx.q(var_1cc), x27, x28_2, &var_240)
                uint64_t x8_84 = zx.q(var_200.b)
                int32_t temp9_1 = x8_84.d & 1
                uint64_t x2_18
                
                if (temp9_1 == 0)
                    x2_18 = x8_84 u>> 1
                else
                    x2_18 = var_1f8
                
                char* j_19
                
                j_19 = temp9_1 == 0 ? j_23 : j_12
                
                std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(arg2, 
                    j_19, x2_18)
                
                if ((zx.d(var_200.b) & 1) == 0)
                    if ((zx.d(var_240) & 1) != 0)
                        goto label_cb2ed8
                    
                    goto label_cb2eb0
                
                operator delete(j_12)
                
                if ((zx.d(var_240) & 1) == 0)
                label_cb2eb0:
                    x0_63 = var_1a8
                    var_1b0 = _vtable_for_Botan::OID + 0x10
                    
                    if (x0_63 != 0)
                        var_1a0 = x0_63
                        operator delete(x0_63)
                else
                label_cb2ed8:
                    operator delete(j_11)
                    x0_63 = var_1a8
                    var_1b0 = _vtable_for_Botan::OID + 0x10
                    
                    if (x0_63 != 0)
                        var_1a0 = x0_63
                        operator delete(x0_63)
            else if ((i & 0xfffffff7) == 2)
                var_198 = -1
                __builtin_memset(&var_1b0, 0, 0x18)
                var_190.d = 1
                
                if (i == 0xa)
                    Botan::BER_Decoder::decode(&var_a0, &var_1b0, 0xa)
                else if (i == 2)
                    Botan::BER_Decoder::decode(&var_a0, &var_1b0, 2)
                
                Botan::BigInt::encode(&var_1b0)
                void* x23_2 = var_240.q
                char* j_10 = j_3
                
                if (x23_2 == j_10)
                    if (j_11 == x23_2)
                        char* x0_79 = operator new(1)
                        j_10 = &x0_79[1]
                        *x0_79 = 0
                        var_240.q = x0_79
                        j_3 = j_10
                        j_11 = j_10
                        
                        if (x23_2 != 0)
                            operator delete(x23_2)
                            j_10 = j_3
                    else
                        *x23_2 = 0
                        j_10 = x23_2 + 1
                        j_3 = x23_2 + 1
                
                uint8_t* x0_81 = var_240.q
                Botan::hex_encode(x0_81, j_10 - x0_81, true)
                (*(*arg1 + 0x10))(arg1, zx.q(i), zx.q(var_1cc), x27, x28_2, &var_260)
                uint64_t x8_114 = zx.q(var_200.b)
                int32_t temp6_1 = x8_114.d & 1
                uint64_t x2_29
                
                if (temp6_1 == 0)
                    x2_29 = x8_114 u>> 1
                else
                    x2_29 = var_1f8
                
                char* j_20
                
                j_20 = temp6_1 == 0 ? j_23 : j_12
                
                std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(arg2, 
                    j_20, x2_29)
                
                if ((zx.d(var_200.b) & 1) == 0)
                    if ((zx.d(var_260) & 1) != 0)
                        goto label_cb3258
                    
                    goto label_cb3210
                
                operator delete(j_12)
                uint64_t j_4
                
                if ((zx.d(var_260) & 1) == 0)
                label_cb3210:
                    j_4 = var_240.q
                    
                    if (j_4 != 0)
                        j_3 = j_4
                        operator delete(j_4)
                else
                label_cb3258:
                    operator delete(var_250)
                    j_4 = var_240.q
                    
                    if (j_4 != 0)
                        j_3 = j_4
                        operator delete(j_4)
                void* __offset(vtable_for_Botan::ASN1_String, 0x10) x0_84 = var_1b0
                
                if (x0_84 != 0)
                    var_1a8 = x0_84
                    Botan::deallocate_memory(x0_84, (var_1a0 - x0_84) s>> 2, 4)
            else if (i == 5)
                var_240.w = 0
                (*(*arg1 + 0x10))(arg1, 5, zx.q(var_1cc), x27, x28_2, &var_240)
                uint64_t x8_93 = zx.q(var_1b0.b)
                int32_t temp3_1 = x8_93.d & 1
                uint64_t x2_20
                
                if (temp3_1 == 0)
                    x2_20 = x8_93 u>> 1
                else
                    x2_20 = var_1a8
                
                void* x1_27
                
                x1_27 = temp3_1 == 0 ? x8_6 : var_1a0
                
                std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(arg2, 
                    x1_27, x2_20)
            label_cb2920:
                
                if ((zx.d(var_1b0.b) & 1) == 0)
                    goto label_cb2930
                
            label_cb2928:
                operator delete(var_1a0)
            label_cb2930:
                
                if ((zx.d(var_240) & 1) != 0)
                    operator delete(j_11)
            else
                if (i == 1)
                    Botan::BER_Decoder::decode(&var_a0, &var_200, 1)
                    uint32_t x8_72 = zx.d(var_200.b)
                    char const* const x1_24
                    
                    if (x8_72 == 0)
                        x1_24 = "false"
                    else
                        x1_24 = "true"
                    
                    size_t x20_2
                    
                    x20_2 = x8_72 == 0 ? 5 : 4
                    
                    var_240 = (x20_2.d << 1).b
                    memcpy(j_21, x1_24, x20_2)
                    *((&var_240 | x20_2) + 1) = 0
                    (*(*arg1 + 0x10))(arg1, 1, zx.q(var_1cc), x27, x28_2, &var_240)
                    uint64_t x8_76 = zx.q(var_1b0.b)
                    int32_t temp12_1 = x8_76.d & 1
                    uint64_t x2_16
                    
                    if (temp12_1 == 0)
                        x2_16 = x8_76 u>> 1
                    else
                        x2_16 = var_1a8
                    
                    void* x1_25
                    
                    x1_25 = temp12_1 == 0 ? x8_6 : var_1a0
                    
                    std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(
                        arg2, x1_25, x2_16)
                    
                    if ((zx.d(var_1b0.b) & 1) != 0)
                        goto label_cb2928
                    
                    goto label_cb2930
                
                if (i - 3 u<= 1)
                    __builtin_memset(&var_200, 0, 0x18)
                    Botan::BER_Decoder::decode(&var_a0, &var_200, zx.q(i), zx.q(i))
                    
                    if (x10_1 u>= x27)
                        Botan::BER_Decoder::BER_Decoder(&var_240)
                        var_1b0 = construction_vtable_for_std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >-in-std::__ndk1::basic_ostringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
                            + 0x18
                        var_140 = construction_vtable_for_std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >-in-std::__ndk1::basic_ostringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
                            + 0x40
                        std::__ndk1::ios_base::init(var_2c0_1)
                        int64_t var_b8_2 = 0
                        int32_t var_b0_2 = 0xffffffff
                        var_1b0 = _vtable_for_std::__ndk1::basic_ostringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
                            + 0x18
                        var_140 = _vtable_for_std::__ndk1::basic_ostringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
                            + 0x40
                        std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >::basic_streambuf()
                        void* __offset(
                            vtable_for_std::__ndk1::basic_stringbuf<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, 
                            0x10) var_1a8_2 = _vtable_for_std::__ndk1::basic_stringbuf<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
                            + 0x10
                        *var_2d0_1 = zx.o(0)
                        *(var_2d0_1 + 0x10) = zx.o(0)
                        int32_t var_148_2 = 0x10
                        Botan::ASN1_Formatter::decode(arg1, &var_1b0, &var_240)
                        var_278 = 0
                        (*(*arg1 + 0x10))(arg1, zx.q(i), zx.q(var_1cc), x27, x28_2, &var_278)
                        uint64_t x8_126 = zx.q(var_260)
                        int32_t temp7_1 = x8_126.d & 1
                        uint64_t x2_32
                        
                        if (temp7_1 == 0)
                            x2_32 = x8_126 u>> 1
                        else
                            x2_32 = var_258
                        
                        char* x1_40
                        
                        x1_40 = temp7_1 == 0 ? x9_3 : var_250
                        
                        std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(
                            arg2, x1_40, x2_32)
                        
                        if ((zx.d(var_260) & 1) != 0)
                            operator delete(var_250)
                        
                        if ((zx.d(var_278.b) & 1) != 0)
                            operator delete(var_268)
                        
                        std::__ndk1::basic_stringbuf<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::str()
                        uint64_t x8_130 = zx.q(var_260)
                        int32_t temp15_1 = x8_130.d & 1
                        uint64_t x2_33
                        
                        if (temp15_1 == 0)
                            x2_33 = x8_130 u>> 1
                        else
                            x2_33 = var_258
                        
                        char* x1_41
                        
                        x1_41 = temp15_1 == 0 ? x9_3 : var_250
                        
                        std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(
                            arg2, x1_41, x2_33)
                        
                        if ((zx.d(var_260) & 1) != 0)
                            operator delete(var_250)
                        
                        uint32_t x10_21 = zx.d(var_168.b)
                        var_140 = _vtable_for_std::__ndk1::basic_ostringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
                            + 0x40
                        var_1b0 = _vtable_for_std::__ndk1::basic_ostringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
                            + 0x18
                        var_1a8 = _vtable_for_std::__ndk1::basic_stringbuf<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
                            + 0x10
                        
                        if ((x10_21 & 1) != 0)
                            operator delete(var_158)
                        
                        std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >::~basic_streambuf()
                        std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >::~basic_ostream()
                        std::__ndk1::basic_ios<char, std::__ndk1::char_traits<char> >::~basic_ios()
                        
                        if (var_210 != 0)
                            (*(*var_210 + 0x38))()
                        
                        if (j_11 != 0)
                            Botan::deallocate_memory(j_11, var_220 - j_11, 1)
                    else
                        (*(*arg1 + 0x18))(arg1, zx.q(i), zx.q(var_1cc), &var_200)
                        (*(*arg1 + 0x10))(arg1, zx.q(i), zx.q(var_1cc), x27, x28_2, &var_240)
                        uint64_t x8_99 = zx.q(var_1b0.b)
                        int32_t temp8_1 = x8_99.d & 1
                        uint64_t x2_24
                        
                        if (temp8_1 == 0)
                            x2_24 = x8_99 u>> 1
                        else
                            x2_24 = var_1a8
                        
                        void* x1_31
                        
                        x1_31 = temp8_1 == 0 ? x8_6 : var_1a0
                        
                        std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(
                            arg2, x1_31, x2_24)
                        
                        if ((zx.d(var_1b0.b) & 1) != 0)
                            operator delete(var_1a0)
                        
                        if ((zx.d(var_240) & 1) != 0)
                            operator delete(j_11)
                    
                label_cb2d24:
                    uint64_t x0_50 = var_200.q
                    
                    if (x0_50 != 0)
                        var_1f8 = x0_50
                        operator delete(x0_50)
                else if (i u<= 0x1e && (1 << i & 0x545c1000) != 0)
                    var_240.w = 0
                    var_1b0 = _vtable_for_Botan::ASN1_String + 0x10
                    __builtin_memset(&var_1a8, 0, 0x18)
                    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                        var_2e8_1)
                    uint64_t x8_106 = zx.q(var_190.b)
                    
                    if ((x8_106.d & 1) != 0)
                        int64_t var_188
                        int64_t x8_137 = var_188
                        void* x9_46 = var_180
                        uint64_t x10_22
                        
                        do
                            if (x8_137 == 0)
                                goto label_cb3458
                            
                            x10_22 = zx.q(*x9_46)
                            x9_46 += 1
                            x8_137 -= 1
                        while (zx.d(*(&data_84a2f8 + x10_22)) != 0)
                    else
                        void* x9_34 = &var_190:1
                        uint64_t x8_107 = x8_106 u>> 1
                        uint64_t x10_15
                        
                        do
                            if (x8_107 == 0)
                            label_cb3458:
                                var_178.d = 0x13
                                
                                if ((zx.d(var_240) & 1) == 0)
                                    goto label_cb3478
                                
                                goto label_cb3464
                            
                            x10_15 = zx.q(*x9_34)
                            x9_34 += 1
                            x8_107 -= 1
                        while (zx.d(*(&data_84a2f8 + x10_15)) != 0)
                    
                    var_178.d = 0xc
                    
                    if ((zx.d(var_240) & 1) != 0)
                    label_cb3464:
                        operator delete(j_11)
                    
                label_cb3478:
                    (*(var_1b0 + 8))(&var_1b0, &var_a0)
                    (*(*arg1 + 0x10))(arg1, zx.q(i), zx.q(var_1cc), x27, x28_2, var_2e8_1)
                    uint64_t x8_141 = zx.q(var_240)
                    int32_t temp13_1 = x8_141.d & 1
                    uint64_t j_7
                    
                    if (temp13_1 == 0)
                        j_7 = x8_141 u>> 1
                    else
                        j_7 = j_3
                    
                    char* j_16
                    
                    j_16 = temp13_1 == 0 ? j_21 : j_11
                    
                    std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(
                        arg2, j_16, j_7)
                    
                    if ((zx.d(var_240) & 1) != 0)
                        operator delete(j_11)
                    
                    uint32_t x8_144 = zx.d(var_190.b)
                    var_1b0 = _vtable_for_Botan::ASN1_String + 0x10
                    
                    if ((x8_144 & 1) != 0)
                        operator delete(var_180)
                    
                    x0_63 = var_1a8
                    
                    if (x0_63 != 0)
                        var_1a0 = x0_63
                        operator delete(x0_63)
                else if (i - 0x17 u> 1)
                    std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(
                        std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >::operator<<(std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(
                            std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >::operator<<(std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(
                                arg2, "Unknown ASN.1 tag class=", 0x18)), 
                            " type=", 6)), 
                        "\n", 1)
                else
                    var_1b0 = _vtable_for_Botan::ASN1_Time + 0x10
                    __builtin_memset(&var_1a8, 0, 0x18)
                    var_190.d = 0xff00
                    Botan::ASN1_Time::decode_from(&var_1b0)
                    Botan::ASN1_Time::readable_string()
                    (*(*arg1 + 0x10))(arg1, zx.q(i), zx.q(var_1cc), x27, x28_2, &var_200)
                    uint64_t x8_148 = zx.q(var_240)
                    int32_t temp10_1 = x8_148.d & 1
                    uint64_t j_8
                    
                    if (temp10_1 == 0)
                        j_8 = x8_148 u>> 1
                    else
                        j_8 = j_3
                    
                    char* j_17
                    
                    j_17 = temp10_1 == 0 ? j_21 : j_11
                    
                    std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(
                        arg2, j_17, j_8)
                    
                    if ((zx.d(var_240) & 1) != 0)
                        operator delete(j_11)
                    
                    if ((zx.d(var_200.b) & 1) != 0)
                        operator delete(j_12)
        Botan::BER_Decoder::get_next_object()
        i_1.q = var_1b0
        
        if (result_1 != 0)
            result_3 = result_1
            Botan::deallocate_memory(result_1, var_1b8 - result_1, 1)
        
        int64_t* var_70
        int64_t* x0_29 = var_70
        var_70 = nullptr
        result_1.o = var_1a8.o
        var_1b8 = var_198
        
        if (x0_29 != 0)
            (*(*x0_29 + 0x38))()
        
        void* var_90
        
        if (var_90 != 0)
            void* var_88_1 = var_90
            Botan::deallocate_memory(var_90, var_80_1 - var_90, 1)
        
        void* x0_31 = var_1e8
        
        if (x0_31 != 0)
            void* var_1e0_2 = x0_31
            operator delete(x0_31)
        
        i = i_1
    while (i != 0xff00)

void* result = result_1

if (result != 0)
    void* result_2 = result
    result = Botan::deallocate_memory(result, var_1b8 - result, 1)

if (*(x8 + 0x28) == x8_1)
    return result

__stack_chk_fail()
noreturn
