// 函数: sub_cb3710
// 地址: 0xcb3710
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if ((zx.d(arg41) & 1) != 0)
    operator delete(arg43)

char arg_e0

if ((zx.d(arg_e0) & 1) != 0)
    operator delete(arg32)

__cxa_begin_catch(arg1)
__cxa_end_catch()
int64_t x20_1 = arg2
int64_t x27 = arg3
label_cb28cc:
char* arg_138
(*(*arg4 + 0x18))(arg4, zx.q(arg5), zx.q(arg7), &arg_138)
(*(*arg4 + 0x10))(arg4, zx.q(arg5), zx.q(arg7), x27, arg8, &arg_e0)
uint64_t x8_28 = zx.q(arg41)
int32_t temp0_1 = x8_28.d & 1
void* x2_8

if (temp0_1 == 0)
    x2_8 = x8_28 u>> 1
else
    x2_8 = arg42

void* x1_12

x1_12 = temp0_1 == 0 ? arg21 : arg43

std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(arg27, x1_12, x2_8)
label_cb2920:

if ((zx.d(arg41) & 1) != 0)
label_cb2928:
    operator delete(arg43)

while (true)
    if ((zx.d(arg_e0) & 1) != 0)
        operator delete(arg32)
    
    while (true)
        Botan::BER_Decoder::get_next_object()
        int64_t x8_40 = arg41.q
        
        if (arg38 != 0)
            arg39 = arg38
            Botan::deallocate_memory(arg38, arg40 - arg38, 1)
        
        int64_t* x0_31 = arg53
        arg53 = nullptr
        arg38.o = arg42.o
        arg40 = arg44
        
        if (x0_31 != 0)
            (*(*x0_31 + 0x38))()
        
        if (arg51 != 0)
            void* arg_298 = arg51
            Botan::deallocate_memory(arg51, arg52 - arg51, 1)
        
        char* x0_33 = arg_138
        
        if (x0_33 != 0)
            arg37 = x0_33
            operator delete(x0_33)
        
        arg5 = x8_40.d
        
        if (arg5 == 0xff00)
            void* result = arg38
            
            if (result != 0)
                arg39 = result
                result = Botan::deallocate_memory(result, arg40 - result, 1)
            
            if (*(arg16 + 0x28) == arg54)
                return result
            
            __stack_chk_fail()
            noreturn
        
        int64_t x21_1 = x27
        int64_t x19_1 = x20_1
        arg7 = x8_40:4.d
        int64_t* arg_190 = nullptr
        __builtin_memset(arg25, 0, 0x30)
        struct std::__ndk1::__function::__base<void (uint8_t const*, uint64_t)>::std::__ndk1::__function::__func<Botan::DER_Encoder::DER_Encoder(std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >&)::$_2, std::__ndk1::allocator<Botan::DER_Encoder::DER_Encoder(std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >&)::$_2>, void (uint8_t const*, uint64_t)>::VTable
            * const arg_280 = &_vtable_for_std::__ndk1::__function::__func<Botan::DER_Encoder::DER_Encoder(std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >&)::$_2, std::__ndk1::allocator<Botan::DER_Encoder::DER_Encoder(std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >&)::$_2>, void (uint8_t const*, uint64_t)>{for `std::__ndk1::__function::__base<void (uint8_t const*, uint64_t)>'}
        __builtin_memset(&arg_138, 0, 0x18)
        char** arg_288 = &arg_138
        arg52 = &arg_280
        sub_f2410c(&arg_280, &arg41)
        
        if (&arg_280 == arg52)
            (*arg52)->vFunc_4()
        else if (arg52 != 0)
            (*arg52)->j_operator delete()
        
        Botan::DER_Encoder::add_object(&arg41, zx.q(arg5), zx.q(arg7), arg38)
        
        if (arg48 != 0)
            void* x23_2 = arg49
            void* x0_7
            
            if (x23_2 == arg48)
                x0_7 = arg48
            else
                do
                    x23_2 -= 0x38
                    sub_f230d4(arg6, x23_2)
                while (arg48 != x23_2)
                
                x0_7 = arg48
            
            arg49 = arg48
            operator delete(x0_7)
        
        void* arg_1a8
        
        if (arg46 != 0)
            arg_1a8 = arg46
            Botan::deallocate_memory(arg46, arg47 - arg46, 1)
        
        if (&arg41 == arg_190)
            (*(*arg_190 + 0x20))()
        else if (arg_190 != 0)
            (*(*arg_190 + 0x28))()
        
        Botan::BER_Decoder::BER_Decoder(&arg_280)
        arg8 = arg39 - arg38
        int16_t arg_120
        
        if ((arg7 & 0x20) != 0)
            Botan::BER_Decoder::BER_Decoder(&arg41, arg38)
            x20_1 = x19_1
            x27 = x21_1
            
            if (arg24 u>= x21_1)
                arg_120 = 0
                (*(*arg4 + 0x10))(arg4, zx.q(arg5), zx.q(arg7), x27, arg8, &arg_120)
                uint64_t x8_33 = zx.q(arg_e0)
                int32_t temp1_1 = x8_33.d & 1
                uint64_t x2_10
                
                if (temp1_1 == 0)
                    x2_10 = x8_33 u>> 1
                else
                    x2_10 = arg31
                
                char* x1_14
                
                x1_14 = temp1_1 == 0 ? arg23 : arg32
                
                std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(arg27, 
                    x1_14, x2_10)
                
                if ((zx.d(arg_e0) & 1) != 0)
                    operator delete(arg32)
                
                if ((zx.d(arg_120.b) & 1) != 0)
                    operator delete(arg36)
                
                Botan::ASN1_Formatter::decode(arg4, arg27, &arg41)
            else
                (*(*arg4 + 0x18))(arg4, zx.q(arg5), zx.q(arg7), &arg_138)
                (*(*arg4 + 0x10))(arg4, zx.q(arg5), zx.q(arg7), x27, arg8, &arg_120)
                uint64_t x8_21 = zx.q(arg_e0)
                int32_t temp2_1 = x8_21.d & 1
                uint64_t x2_5
                
                if (temp2_1 == 0)
                    x2_5 = x8_21 u>> 1
                else
                    x2_5 = arg31
                
                char* x1_9
                
                x1_9 = temp2_1 == 0 ? arg23 : arg32
                
                std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(arg27, 
                    x1_9, x2_5)
                
                if ((zx.d(arg_e0) & 1) != 0)
                    operator delete(arg32)
                
                if ((zx.d(arg_120.b) & 1) != 0)
                    operator delete(arg36)
            
            if (arg46 != 0)
                (*(*arg46 + 0x38))()
            
            if (arg43 != 0)
                Botan::deallocate_memory(arg43, arg_190 - arg43, 1)
        else
            x20_1 = x19_1
            x27 = x21_1
            char arg_c0
            int32_t arg_1d8
            int64_t (* arg_1e0)()
            int64_t arg_268
            int32_t arg_270
            
            if ((arg7 & 0xc0) == 0)
                int16_t arg_a8
                void* x0_68
                
                if (arg5 == 6)
                    arg41.q = arg15
                    __builtin_memset(x20_1, 0, 0x18)
                    Botan::OID::decode_from(&arg41)
                    Botan::OIDS::oid2str_or_empty(&arg41)
                    uint64_t x8_47 = zx.q(arg_e0)
                    uint64_t x8_48
                    
                    if ((x8_47.d & 1) == 0)
                        x8_48 = x8_47 u>> 1
                    else
                        x8_48 = arg31
                    
                    if (x8_48 == 0)
                        Botan::OID::to_string()
                        
                        if ((zx.d(arg_e0) & 1) != 0)
                            operator delete(arg32)
                        
                        arg_e0.o = arg_120.o
                        arg32 = arg36
                    else
                        Botan::OID::to_string()
                        int128_t* x0_37
                        int128_t v0_2
                        x0_37, v0_2 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::insert(
                            &arg_a8, nullptr)
                        arg30 = x0_37[1].q
                        arg_c0.o = *x0_37
                        __builtin_memset(x0_37, 0, 0x18)
                        int128_t* x0_39
                        int128_t v0_3
                        x0_39, v0_3 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
                            &arg_c0)
                        arg36 = x0_39[1].q
                        arg_120.o = *x0_39
                        __builtin_memset(x0_39, 0, 0x18)
                        char* x1_20
                        
                        if ((zx.d(arg_120.b) & 1) == 0)
                            x1_20 = arg20
                        else
                            x1_20 = arg36
                        
                        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
                            &arg_e0, x1_20)
                        
                        if ((zx.d(arg_120.b) & 1) == 0)
                            if ((zx.d(arg_c0) & 1) != 0)
                                goto label_cb2e40
                            
                            goto label_cb2b5c
                        
                        operator delete(arg36)
                        
                        if ((zx.d(arg_c0) & 1) == 0)
                        label_cb2b5c:
                            
                            if ((zx.d(arg_a8.b) & 1) != 0)
                                operator delete(arg28)
                        else
                        label_cb2e40:
                            operator delete(arg30)
                            
                            if ((zx.d(arg_a8.b) & 1) != 0)
                                operator delete(arg28)
                    
                    (*(*arg4 + 0x10))(arg4, 6, zx.q(arg7), x27, arg8, &arg_e0)
                    uint64_t x8_80 = zx.q(arg_120.b)
                    int32_t temp9_1 = x8_80.d & 1
                    uint64_t x2_21
                    
                    if (temp9_1 == 0)
                        x2_21 = x8_80 u>> 1
                    else
                        x2_21 = arg35
                    
                    char* x1_31
                    
                    x1_31 = temp9_1 == 0 ? arg20 : arg36
                    
                    std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(
                        arg27, x1_31, x2_21)
                    
                    if ((zx.d(arg_120.b) & 1) == 0)
                        if ((zx.d(arg_e0) & 1) != 0)
                            goto label_cb2ed8
                        
                        goto label_cb2eb0
                    
                    operator delete(arg36)
                    
                    if ((zx.d(arg_e0) & 1) == 0)
                    label_cb2eb0:
                        x0_68 = arg42
                        arg41.q = _vtable_for_Botan::OID + 0x10
                        
                        if (x0_68 == 0)
                            continue
                    else
                    label_cb2ed8:
                        operator delete(arg32)
                        x0_68 = arg42
                        arg41.q = _vtable_for_Botan::OID + 0x10
                        
                        if (x0_68 == 0)
                            continue
                    
                label_cb2eec:
                    arg43 = x0_68
                    operator delete(x0_68)
                    continue
                else if ((arg5 & 0xfffffff7) != 2)
                    if (arg5 == 5)
                        arg_e0.w = 0
                        (*(*arg4 + 0x10))(arg4, 5, zx.q(arg7), x27, arg8, &arg_e0)
                        uint64_t x8_90 = zx.q(arg41)
                        int32_t temp3_1 = x8_90.d & 1
                        uint64_t x2_23
                        
                        if (temp3_1 == 0)
                            x2_23 = x8_90 u>> 1
                        else
                            x2_23 = arg42
                        
                        char* x1_33
                        
                        x1_33 = temp3_1 == 0 ? arg21 : arg43
                        
                        std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(
                            arg27, x1_33, x2_23)
                        goto label_cb2920
                    
                    if (arg5 == 1)
                        Botan::BER_Decoder::decode(&arg_280, &arg_120, 1)
                        uint32_t x8_68 = zx.d(arg_120.b)
                        char const* const x1_29
                        
                        if (x8_68 == 0)
                            x1_29 = "false"
                        else
                            x1_29 = "true"
                        
                        size_t x20_4
                        
                        x20_4 = x8_68 == 0 ? 5 : 4
                        
                        arg_e0 = (x20_4.d << 1).b
                        memcpy(arg23, x1_29, x20_4)
                        *((&arg_e0 | x20_4) + 1) = 0
                        (*(*arg4 + 0x10))(arg4, 1, zx.q(arg7), x27, arg8, &arg_e0)
                        uint64_t x8_72 = zx.q(arg41)
                        int32_t temp12_1 = x8_72.d & 1
                        uint64_t x2_19
                        
                        if (temp12_1 == 0)
                            x2_19 = x8_72 u>> 1
                        else
                            x2_19 = arg42
                        
                        char* x1_30
                        
                        x1_30 = temp12_1 == 0 ? arg21 : arg43
                        
                        std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(
                            arg27, x1_30, x2_19)
                        x20_1 = x19_1
                        
                        if ((zx.d(arg41) & 1) != 0)
                            goto label_cb2928
                        
                        break
                    
                    if (arg5 - 3 u> 1)
                        if (arg5 u<= 0x1e && (1 << arg5 & 0x545c1000) != 0)
                            arg_e0.w = 0
                            arg41.q = arg13
                            __builtin_memset(x20_1, 0, 0x18)
                            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                                arg14)
                            uint64_t x8_103 = zx.q(arg_190.b)
                            
                            if ((x8_103.d & 1) != 0)
                                int64_t x8_134 = arg45
                                void* x9_42 = arg46
                                uint64_t x10_21
                                
                                do
                                    if (x8_134 == 0)
                                        goto label_cb3458
                                    
                                    x10_21 = zx.q(*x9_42)
                                    x9_42 += 1
                                    x8_134 -= 1
                                while (zx.d(*(&data_84a2f8 + x10_21)) != 0)
                            else
                                char* x9_30 = arg10
                                uint64_t x8_104 = x8_103 u>> 1
                                uint64_t x10_14
                                
                                do
                                    if (x8_104 == 0)
                                    label_cb3458:
                                        arg_1a8.d = 0x13
                                        
                                        if ((zx.d(arg_e0) & 1) == 0)
                                            goto label_cb3478
                                        
                                        goto label_cb3464
                                    
                                    x10_14 = zx.q(*x9_30)
                                    x9_30 = &x9_30[1]
                                    x8_104 -= 1
                                while (zx.d(*(&data_84a2f8 + x10_14)) != 0)
                            
                            arg_1a8.d = 0xc
                            
                            if ((zx.d(arg_e0) & 1) != 0)
                            label_cb3464:
                                operator delete(arg32)
                            
                        label_cb3478:
                            (*(arg41.q + 8))(&arg41, &arg_280)
                            (*(*arg4 + 0x10))(arg4, zx.q(arg5), zx.q(arg7), x27, arg8, arg14)
                            uint64_t x8_138 = zx.q(arg_e0)
                            int32_t temp13_1 = x8_138.d & 1
                            uint64_t x2_38
                            
                            if (temp13_1 == 0)
                                x2_38 = x8_138 u>> 1
                            else
                                x2_38 = arg31
                            
                            void* x1_54
                            
                            x1_54 = temp13_1 == 0 ? arg23 : arg32
                            
                            std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(
                                arg27, x1_54, x2_38)
                            
                            if ((zx.d(arg_e0) & 1) != 0)
                                operator delete(arg32)
                            
                            arg41.q = _vtable_for_Botan::ASN1_String + 0x10
                            
                            if ((zx.d(arg_190.b) & 1) != 0)
                                operator delete(arg46)
                            
                            x0_68 = arg42
                            
                            if (x0_68 == 0)
                                continue
                        else if (arg5 - 0x17 u> 1)
                            std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(
                                std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >::operator<<(std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(
                                    std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >::operator<<(std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(
                                        arg27, "Unknown ASN.1 tag class=", 0x18)), 
                                    " type=", 6)), 
                                "\n", 1)
                            continue
                        else
                            arg41.q = arg9
                            __builtin_memset(x20_1, 0, 0x18)
                            arg_190.d = 0xff00
                            Botan::ASN1_Time::decode_from(&arg41)
                            Botan::ASN1_Time::readable_string()
                            (*(*arg4 + 0x10))(arg4, zx.q(arg5), zx.q(arg7), x27, arg8, &arg_120)
                            uint64_t x8_145 = zx.q(arg_e0)
                            int32_t temp10_1 = x8_145.d & 1
                            uint64_t x2_40
                            
                            if (temp10_1 == 0)
                                x2_40 = x8_145 u>> 1
                            else
                                x2_40 = arg31
                            
                            char* x1_56
                            
                            x1_56 = temp10_1 == 0 ? arg23 : arg32
                            
                            std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(
                                arg27, x1_56, x2_40)
                            
                            if ((zx.d(arg_e0) & 1) != 0)
                                operator delete(arg32)
                            
                            if ((zx.d(arg_120.b) & 1) == 0)
                                continue
                            else
                                operator delete(arg36)
                                continue
                        
                        goto label_cb2eec
                else
                    arg43 = nullptr
                    arg44 = -1
                    arg41.q = 0
                    arg42 = nullptr
                    arg_190.d = 1
                    
                    if (arg5 == 0xa)
                        Botan::BER_Decoder::decode(&arg_280, &arg41, 0xa)
                    else if (arg5 == 2)
                        Botan::BER_Decoder::decode(&arg_280, &arg41, 2)
                    
                    Botan::BigInt::encode(&arg41)
                    char* x23_3 = arg_e0.q
                    uint64_t x8_87 = arg31
                    
                    if (x23_3 == x8_87)
                        if (arg32 == x23_3)
                            char* x0_85 = operator new(1)
                            x8_87 = &x0_85[1]
                            *x0_85 = 0
                            arg_e0.q = x0_85
                            arg31 = x8_87
                            arg32 = x8_87
                            
                            if (x23_3 != 0)
                                operator delete(x23_3)
                                x8_87 = arg31
                        else
                            *x23_3 = 0
                            x8_87 = &x23_3[1]
                            arg31 = &x23_3[1]
                    
                    uint8_t* x0_87 = arg_e0.q
                    Botan::hex_encode(x0_87, x8_87 - x0_87, true)
                    (*(*arg4 + 0x10))(arg4, zx.q(arg5), zx.q(arg7), x27, arg8, &arg_c0)
                    uint64_t x8_111 = zx.q(arg_120.b)
                    int32_t temp6_1 = x8_111.d & 1
                    uint64_t x2_32
                    
                    if (temp6_1 == 0)
                        x2_32 = x8_111 u>> 1
                    else
                        x2_32 = arg35
                    
                    char* x1_43
                    
                    x1_43 = temp6_1 == 0 ? arg20 : arg36
                    
                    std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(
                        arg27, x1_43, x2_32)
                    
                    if ((zx.d(arg_120.b) & 1) == 0)
                        if ((zx.d(arg_c0) & 1) != 0)
                            goto label_cb3258
                        
                        goto label_cb3210
                    
                    operator delete(arg36)
                    uint64_t x0_90
                    
                    if ((zx.d(arg_c0) & 1) == 0)
                    label_cb3210:
                        x0_90 = arg_e0.q
                        
                        if (x0_90 != 0)
                            arg31 = x0_90
                            operator delete(x0_90)
                    else
                    label_cb3258:
                        operator delete(arg30)
                        x0_90 = arg_e0.q
                        
                        if (x0_90 != 0)
                            arg31 = x0_90
                            operator delete(x0_90)
                    void* x0_91 = arg41.q
                    
                    if (x0_91 == 0)
                        continue
                    else
                        arg42 = x0_91
                        Botan::deallocate_memory(x0_91, (arg43 - x0_91) s>> 2, 4)
                        continue
                __builtin_memset(&arg_120, 0, 0x18)
                Botan::BER_Decoder::decode(&arg_280, &arg_120, zx.q(arg5), zx.q(arg5))
                
                if (arg24 u>= x27)
                    Botan::BER_Decoder::BER_Decoder(&arg_e0)
                    arg41.q = construction_vtable_for_std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >-in-std::__ndk1::basic_ostringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
                        + 0x18
                    arg_1e0 = construction_vtable_for_std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >-in-std::__ndk1::basic_ostringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
                        + 0x40
                    std::__ndk1::ios_base::init(arg19)
                    arg_268 = 0
                    arg_270 = 0xffffffff
                    arg41.q = _vtable_for_std::__ndk1::basic_ostringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
                        + 0x18
                    arg_1e0 = _vtable_for_std::__ndk1::basic_ostringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
                        + 0x40
                    std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >::basic_streambuf()
                    arg42 = arg12
                    __builtin_memset(arg17, 0, 0x20)
                    arg_1d8 = 0x10
                    Botan::ASN1_Formatter::decode(arg4, &arg41, &arg_e0)
                    arg_a8 = 0
                    (*(*arg4 + 0x10))(arg4, zx.q(arg5), zx.q(arg7), x27, arg8, &arg_a8)
                    uint64_t x8_123 = zx.q(arg_c0)
                    int32_t temp7_1 = x8_123.d & 1
                    uint64_t x2_35
                    
                    if (temp7_1 == 0)
                        x2_35 = x8_123 u>> 1
                    else
                        x2_35 = arg29
                    
                    char* x1_48
                    
                    x1_48 = temp7_1 == 0 ? arg18 : arg30
                    
                    std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(
                        arg27, x1_48, x2_35)
                    
                    if ((zx.d(arg_c0) & 1) != 0)
                        operator delete(arg30)
                    
                    if ((zx.d(arg_a8.b) & 1) != 0)
                        operator delete(arg28)
                    
                    std::__ndk1::basic_stringbuf<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::str()
                    uint64_t x8_127 = zx.q(arg_c0)
                    int32_t temp15_1 = x8_127.d & 1
                    uint64_t x2_36
                    
                    if (temp15_1 == 0)
                        x2_36 = x8_127 u>> 1
                    else
                        x2_36 = arg29
                    
                    char* x1_49
                    
                    x1_49 = temp15_1 == 0 ? arg18 : arg30
                    
                    std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(
                        arg27, x1_49, x2_36)
                    
                    if ((zx.d(arg_c0) & 1) != 0)
                        operator delete(arg30)
                    
                    arg_1e0 = _vtable_for_std::__ndk1::basic_ostringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
                        + 0x40
                    arg41.q = _vtable_for_std::__ndk1::basic_ostringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
                        + 0x18
                    arg42 = _vtable_for_std::__ndk1::basic_stringbuf<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
                        + 0x10
                    
                    if ((zx.d(arg48.b) & 1) != 0)
                        operator delete(arg50)
                    
                    std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >::~basic_streambuf()
                    std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >::~basic_ostream()
                    std::__ndk1::basic_ios<char, std::__ndk1::char_traits<char> >::~basic_ios()
                    
                    if (arg34 != 0)
                        (*(*arg34 + 0x38))()
                    
                    if (arg32 != 0)
                        Botan::deallocate_memory(arg32, arg33 - arg32, 1)
                else
                    (*(*arg4 + 0x18))(arg4, zx.q(arg5), zx.q(arg7), &arg_120)
                    (*(*arg4 + 0x10))(arg4, zx.q(arg5), zx.q(arg7), x27, arg8, &arg_e0)
                    uint64_t x8_96 = zx.q(arg41)
                    int32_t temp8_1 = x8_96.d & 1
                    uint64_t x2_27
                    
                    if (temp8_1 == 0)
                        x2_27 = x8_96 u>> 1
                    else
                        x2_27 = arg42
                    
                    char* x1_37
                    
                    x1_37 = temp8_1 == 0 ? arg21 : arg43
                    
                    std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(
                        arg27, x1_37, x2_27)
                    
                    if ((zx.d(arg41) & 1) != 0)
                        operator delete(arg43)
                    
                    if ((zx.d(arg_e0) & 1) != 0)
                        operator delete(arg32)
            else
                if (zx.d(arg4[1].b) == 0)
                    goto label_cb28cc
                
                char* x10_1 = arg_138
                void* x8_16 = arg37 - x10_1
                
                if (x8_16 u>= 3 && (zx.d(*x10_1) | 4) == 0x86)
                    size_t i_2 = zx.q(x10_1[1])
                    
                    if (x8_16 - 2 == i_2)
                        void* x10_2 = &x10_1[2]
                        size_t i_1 = i_2
                        size_t i
                        
                        do
                            int32_t x12_1 = sx.d(*x10_2)
                            
                            if ((x12_1 & 0x80000000) != 0)
                                goto label_cb28a4
                            
                            uint64_t x12_2 = zx.q(x12_1.b)
                            
                            if ((zx.d(*(x12_2 + *_ctype_ + 1)) & 7) == 0 && x12_2.d - 0x2d u>= 3
                                    && x12_2.d != 0x3a)
                                goto label_cb28a4
                            
                            i = i_1
                            i_1 -= 1
                            x10_2 += 1
                        while (i != 1)
                        char* fp_2
                        
                        if (i_2.d u>= 0x17)
                            void* x20_5 = (x8_16 + 0xe) & 0xfffffffffffffff0
                            char* x0_81 = operator new(x20_5)
                            fp_2 = x0_81
                            arg31 = i_2
                            arg32 = x0_81
                            arg_e0.q = x20_5 | 1
                            x20_1 = x19_1
                            memcpy(fp_2, &x10_1[2], i_2)
                        else
                            fp_2 = arg23
                            arg_e0 = (i_2.d << 1).b
                            
                            if (i_2.d != 0)
                                memcpy(fp_2, &x10_1[2], i_2)
                        
                        fp_2[i_2] = 0
                        x27 = x21_1
                        (*(*arg4 + 0x10))(arg4, zx.q(arg5), zx.q(arg7), x21_1, x21_1, &arg_e0)
                        uint64_t x8_108 = zx.q(arg41)
                        int32_t temp14_1 = x8_108.d & 1
                        void* x2_30
                        
                        if (temp14_1 == 0)
                            x2_30 = x8_108 u>> 1
                        else
                            x2_30 = arg42
                        
                        char* x1_40
                        
                        x1_40 = temp14_1 == 0 ? arg21 : arg43
                        
                        std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(
                            arg27, x1_40, x2_30)
                        goto label_cb2920
                
            label_cb28a4:
                x27 = x21_1
                
                if (arg24 u< x21_1)
                    goto label_cb28cc
                
                __builtin_memset(&arg_120, 0, 0x18)
                Botan::BER_Decoder::decode(&arg_280, &arg_120, zx.q(arg5), zx.q(arg5))
                Botan::BER_Decoder::BER_Decoder(&arg_e0)
                arg41.q = construction_vtable_for_std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >-in-std::__ndk1::basic_ostringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
                    + 0x18
                arg_1e0 = construction_vtable_for_std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >-in-std::__ndk1::basic_ostringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
                    + 0x40
                std::__ndk1::ios_base::init(arg19)
                arg_268 = 0
                arg_270 = 0xffffffff
                arg41.q = _vtable_for_std::__ndk1::basic_ostringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
                    + 0x18
                arg_1e0 = _vtable_for_std::__ndk1::basic_ostringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
                    + 0x40
                std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >::basic_streambuf()
                arg42 = _vtable_for_std::__ndk1::basic_stringbuf<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
                    + 0x10
                __builtin_memset(arg17, 0, 0x20)
                arg_1d8 = 0x10
                Botan::ASN1_Formatter::decode(arg4, &arg41, &arg_e0)
                std::__ndk1::basic_stringbuf<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::str()
                uint64_t x8_61 = zx.q(arg_c0)
                int32_t temp4_1 = x8_61.d & 1
                uint64_t x2_16
                
                if (temp4_1 == 0)
                    x2_16 = x8_61 u>> 1
                else
                    x2_16 = arg29
                
                char* x1_25
                
                x1_25 = temp4_1 == 0 ? arg18 : arg30
                
                std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(arg27, 
                    x1_25, x2_16)
                
                if ((zx.d(arg_c0) & 1) != 0)
                    operator delete(arg30)
                
                arg_1e0 = _vtable_for_std::__ndk1::basic_ostringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
                    + 0x40
                arg41.q = _vtable_for_std::__ndk1::basic_ostringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
                    + 0x18
                arg42 = _vtable_for_std::__ndk1::basic_stringbuf<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
                    + 0x10
                
                if ((zx.d(arg48.b) & 1) != 0)
                    operator delete(arg50)
                
                std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >::~basic_streambuf()
                std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >::~basic_ostream()
                std::__ndk1::basic_ios<char, std::__ndk1::char_traits<char> >::~basic_ios()
                
                if (arg34 != 0)
                    (*(*arg34 + 0x38))()
                
                if (arg32 != 0)
                    Botan::deallocate_memory(arg32, arg33 - arg32, 1)
            uint64_t x0_55 = arg_120.q
            
            if (x0_55 != 0)
                arg35 = x0_55
                operator delete(x0_55)
