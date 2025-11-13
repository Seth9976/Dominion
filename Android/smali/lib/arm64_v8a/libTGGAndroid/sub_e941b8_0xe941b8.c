// 函数: sub_e941b8
// 地址: 0xe941b8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* result
int64_t x1_1
result, x1_1 = std::__ndk1::__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, std::__ndk1::less<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, true>, std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > > >::__equal_range_multi<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >(
    arg2)

if (result != x1_1)
    int64_t (* var_f8)()
    int64_t* x19_1 = &var_f8
    void* __offset(
        vtable_for_std::__ndk1::basic_stringbuf<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, 
        0x10) var_160
    int64_t* x26_1 = &var_160
    void* var_1a8
    int64_t* var_1f0_1 = &var_1a8
    int64_t* x25_1 = result
    char var_120
    char* var_1e0_1 = &var_120
    void* __offset(
        VTT_for_std::__ndk1::basic_stringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, 
        0x8) var_200_1 = _VTT_for_std::__ndk1::basic_stringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
        + 8
    
    do
        uint64_t x10_1 = zx.q(*arg3)
        uint64_t x8_5 = *(arg3 + 8)
        int32_t x9_2 = x10_1.d & 1
        uint64_t x10_2 = x10_1 u>> 1
        uint64_t x11_1
        
        x11_1 = x9_2 == 0 ? x10_2 : x8_5
        
        if (x11_1 != 6)
            goto label_e942e4
        
        result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
            arg3, 0, -ffffffffffffffff, "RFC822")
        void* __offset(vtable_for_Botan::ASN1_String, 0x10) var_178
        int64_t* i
        
        if (result.d != 0)
            uint64_t x10_3 = zx.q(*arg3)
            x8_5 = *(arg3 + 8)
            x9_2 = x10_3.d & 1
            x10_2 = x10_3 u>> 1
        label_e942e4:
            uint64_t x11_2
            
            if ((x9_2 & 0xff) == 0)
                x11_2 = x10_2
            else
                x11_2 = x8_5
            
            if (x11_2 == 3)
                result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                    arg3, 0, -ffffffffffffffff, &data_76182a)
                
                if (result.d == 0)
                    goto label_e94524
                
                uint64_t x10_4 = zx.q(*arg3)
                x8_5 = *(arg3 + 8)
                x9_2 = x10_4.d & 1
                x10_2 = x10_4 u>> 1
            
            uint64_t x11_3
            
            if ((x9_2 & 0xff) == 0)
                x11_3 = x10_2
            else
                x11_3 = x8_5
            
            if (x11_3 == 3)
                result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                    arg3, 0, -ffffffffffffffff, &data_78618f)
                
                if (result.d == 0)
                    goto label_e94524
                
                uint64_t x10_5 = zx.q(*arg3)
                x8_5 = *(arg3 + 8)
                x9_2 = x10_5.d & 1
                x10_2 = x10_5 u>> 1
            
            uint64_t x11_4
            
            if ((x9_2 & 0xff) == 0)
                x11_4 = x10_2
            else
                x11_4 = x8_5
            
            if (x11_4 == 2)
                result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                    arg3, 0, -ffffffffffffffff, &data_735823)
                
                if (result.d == 0)
                    var_178.d = _byteswap(Botan::string_to_ipv4(&x25_1[7]))
                    result = Botan::DER_Encoder::add_object(arg1, zx.q(arg4), 0x80, &var_178)
                label_e945c4:
                    i = x25_1[1]
                    
                    if (i == 0)
                        goto label_e94658
                    
                    goto label_e945d4
                
                uint64_t x10_6 = zx.q(*arg3)
                x8_5 = *(arg3 + 8)
                x9_2 = x10_6.d & 1
                x10_2 = x10_6 u>> 1
            
            uint64_t x8_6
            
            if ((x9_2 & 0xff) == 0)
                x8_6 = x10_2
            else
                x8_6 = x8_5
            
            if (x8_6 != 2)
                goto label_e945c4
            
            result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                arg3, 0, -ffffffffffffffff, &data_746477)
            
            if (result.d != 0)
                goto label_e945c4
            
            int64_t var_170_1 = 0
            void* __offset(
                vtable_for_std::__ndk1::basic_stringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, 
                0x40) var_168_1 = _vtable_for_std::__ndk1::basic_stringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
                + 0x40
            var_f8 = construction_vtable_for_std::__ndk1::basic_istream<char, std::__ndk1::char_traits<char> >-in-std::__ndk1::basic_stringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
                + 0x40
            var_178 = construction_vtable_for_std::__ndk1::basic_istream<char, std::__ndk1::char_traits<char> >-in-std::__ndk1::basic_stringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
                + 0x18
            std::__ndk1::ios_base::init(x19_1)
            int32_t var_68_1 = 0xffffffff
            int64_t var_70_1 = 0
            var_f8 = _vtable_for_std::__ndk1::basic_stringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
                + 0x68
            var_178 = _vtable_for_std::__ndk1::basic_stringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
                + 0x18
            void* __offset(
                vtable_for_std::__ndk1::basic_stringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, 
                0x40) var_168_2 = _vtable_for_std::__ndk1::basic_stringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
                + 0x40
            std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >::basic_streambuf()
            var_160 = _vtable_for_std::__ndk1::basic_stringbuf<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
                + 0x10
            *var_1e0_1 = zx.o(0)
            *(var_1e0_1 + 0x10) = zx.o(0)
            int32_t var_100_1 = 0x18
            std::__ndk1::basic_stringbuf<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::str(
                x26_1)
            void* __offset(vtable_for_Botan::X509_DN, 0x10) var_1b0 =
                _vtable_for_Botan::X509_DN + 0x10
            __builtin_memset(&var_1f0_1[2], 0, 0x20)
            *var_1f0_1 = zx.o(0)
            Botan::operator>>(&var_178, &var_1b0)
            (*var_1b0)(&var_1b0, arg1)
            var_1b0 = _vtable_for_Botan::X509_DN + 0x10
            void* var_190
            
            if (var_190 != 0)
                void* var_188_1 = var_190
                operator delete(var_190)
            
            void* x26_2 = var_1a8
            
            if (x26_2 != 0)
                void* var_1a0
                void* x19_2 = var_1a0
                void* x0_12
                
                if (x19_2 != x26_2)
                    bool cond:3_1
                    
                    do
                        uint32_t x8_16 = zx.d(*(x19_2 - 0x20))
                        *(x19_2 - 0x40) = _vtable_for_Botan::ASN1_String + 0x10
                        
                        if ((x8_16 & 1) != 0)
                            operator delete(*(x19_2 - 0x10))
                        
                        void* x0_14 = *(x19_2 - 0x38)
                        
                        if (x0_14 != 0)
                            *(x19_2 - 0x30) = x0_14
                            operator delete(x0_14)
                        
                        void* x0_15 = *(x19_2 - 0x58)
                        *(x19_2 - 0x60) = _vtable_for_Botan::OID + 0x10
                        
                        if (x0_15 != 0)
                            *(x19_2 - 0x50) = x0_15
                            operator delete(x0_15)
                        
                        cond:3_1 = x26_2 == x19_2 - 0x60
                        x19_2 -= 0x60
                    while (not(cond:3_1))
                    x0_12 = var_1a8
                else
                    x0_12 = x26_2
                
                var_1a0 = x26_2
                operator delete(x0_12)
                x19_1 = &var_f8
            
            uint32_t x11_6 = zx.d(var_120)
            var_178 = _vtable_for_std::__ndk1::basic_stringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
                + 0x18
            void* __offset(
                vtable_for_std::__ndk1::basic_stringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, 
                0x40) var_168_3 = _vtable_for_std::__ndk1::basic_stringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
                + 0x40
            var_f8 = _vtable_for_std::__ndk1::basic_stringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
                + 0x68
            var_160 = _vtable_for_std::__ndk1::basic_stringbuf<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
                + 0x10
            void* var_110
            
            if ((x11_6 & 1) != 0)
                operator delete(var_110)
            x26_1 = &var_160
            std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >::~basic_streambuf()
            std::__ndk1::basic_iostream<char, std::__ndk1::char_traits<char> >::~basic_iostream()
            result = std::__ndk1::basic_ios<char, std::__ndk1::char_traits<char> >::~basic_ios()
            i = x25_1[1]
            
            if (i != 0)
                goto label_e945d4
            
            goto label_e94658
        
    label_e94524:
        var_178 = _vtable_for_Botan::ASN1_String + 0x10
        int64_t* result_1
        __builtin_memset(&result_1, 0, 0x18)
        char var_158
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
            &var_158)
        int32_t var_140_1 = 0x16
        void* var_148
        void* x3
        void var_157
        
        if ((zx.d(var_158) & 1) == 0)
            x3 = &var_157
        else
            x3 = var_148
        Botan::DER_Encoder::add_object(arg1, zx.q(arg4), 0x80, x3)
        uint32_t x8_20 = zx.d(var_158)
        var_178 = _vtable_for_Botan::ASN1_String + 0x10
        
        if ((x8_20 & 1) != 0)
            operator delete(var_148)
        
        result = result_1
        
        if (result == 0)
            goto label_e945c4
        
        int64_t* result_2 = result
        result = operator delete(result)
        i = x25_1[1]
        
        if (i != 0)
        label_e945d4:
            
            do
                x25_1 = i
                i = *i
            while (i != 0)
        else
        label_e94658:
            void* x8_25 = &x25_1[2]
            int64_t* x9_9 = *x8_25
            
            if (*x9_9 == x25_1)
                x25_1 = x9_9
            else
                void* i_1
                
                do
                    i_1 = *x8_25
                    x8_25 = i_1 + 0x10
                    x25_1 = *x8_25
                while (*x25_1 != i_1)
    while (x25_1 != x1_1)

return result
