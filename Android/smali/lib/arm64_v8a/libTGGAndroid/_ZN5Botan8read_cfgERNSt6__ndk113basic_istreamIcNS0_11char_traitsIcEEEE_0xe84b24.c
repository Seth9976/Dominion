// 函数: _ZN5Botan8read_cfgERNSt6__ndk113basic_istreamIcNS0_11char_traitsIcEEEE
// 地址: 0xe84b24
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void** entry_x8
entry_x8[2] = 0
entry_x8[1] = 0
*entry_x8 = &entry_x8[1]
void* __offset(std::__ndk1::basic_istream<char, std::__ndk1::char_traits<char> >, 0x20) x25_1 =
    arg1 + 0x20
int64_t* x8_2 = *arg1 - 0x18

if (*(x25_1 + *x8_2) != 0)
    return 

void** x21_1 = arg1
uint64_t x20_1 = 0
int64_t var_80
char* x26_1 = &var_80 | 1

do
    __builtin_memset(&var_80, 0, 0x18)
    *x8_2
    std::__ndk1::ios_base::getloc()
    int128_t var_a0
    int64_t* x0_3 = std::__ndk1::locale::use_facet(&var_a0)
    char x0_4 = (*(*x0_3 + 0x38))(x0_3, 0xa)
    std::__ndk1::locale::~locale()
    std::__ndk1::getline<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
        x21_1, &var_80, x0_4)
    uint32_t x8_8 = zx.d(var_80.b)
    x20_1 += 1
    uint64_t var_78
    
    if ((x8_8 & 1) != 0)
        void* var_70_1
        
        if (var_78 == 0)
            operator delete(var_70_1)
        else if (zx.d(*var_70_1) == 0x23)
        label_e84bb4:
            
            if ((x8_8 & 1) != 0)
                operator delete(var_70_1)
        else
        label_e84c84:
            char var_c0[0x10]
            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                &var_c0, &var_80, 0, 
                std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::find(
                    &var_80, 0x23))
            int128_t v0_1
            arg1, v0_1 = Botan::clean_ws(&var_c0)
            
            if ((zx.d(var_80.b) & 1) != 0)
                arg1, v0_1 = operator delete(var_70_1)
            
            var_a0.w = 0
            var_80.o = var_a0
            void* var_90
            var_70_1 = var_90
            void* var_b0
            
            if ((zx.d(var_c0[0]) & 1) != 0)
                operator delete(var_b0)
            
            uint64_t fp_1 = zx.q(var_80.b)
            char var_d8[0x10]
            void* x2_3
            int64_t x24_2
            char* x28_1
            
            if ((fp_1.d & 1) != 0)
                x2_3 = var_78
                
                if (x2_3 != 0)
                    if (x2_3 s>= 1)
                        x28_1 = var_70_1
                        x24_2 = x28_1 + x2_3
                        goto label_e84d08
                    
                label_e84e20:
                    void** x0_25 = __cxa_allocate_exception(0x20)
                    std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
                        "Bad read_cfg input '", &var_80)
                    int128_t* x0_27
                    int128_t v0_2
                    x0_27, v0_2 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
                        &var_d8)
                    int64_t var_b0_1 = x0_27[1].q
                    var_c0 = *x0_27
                    __builtin_memset(x0_27, 0, 0x18)
                    std::__ndk1::to_string(x20_1)
                    char var_f0
                    uint64_t x1_9
                    uint64_t var_e0
                    
                    if ((zx.d(var_f0) & 1) == 0)
                        x1_9 = &var_f0 | 1
                    else
                        x1_9 = var_e0
                    int128_t* x0_30
                    int128_t v0_3
                    x0_30, v0_3 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
                        &var_c0, x1_9)
                    int64_t var_90_1 = x0_30[1].q
                    var_a0 = *x0_30
                    __builtin_memset(x0_30, 0, 0x18)
                    *x0_25 = _vtable_for_Botan::Exception + 0x10
                    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                        &x0_25[1])
                    *x0_25 = _vtable_for_Botan::Decoding_Error + 0x10
                    __cxa_throw(x0_25, _typeinfo_for_Botan::Decoding_Error, 
                        Botan::Exception::~Exception)
                    noreturn
                
                operator delete(var_70_1)
            else if (fp_1.d u>= 2)
                x2_3 = fp_1 u>> 1
                x24_2 = &var_80 + x2_3 + 1
                x28_1 = x26_1
            label_e84d08:
                char* x0_12 = x28_1
                
                while (true)
                    char* x0_13 = memchr(x0_12, 0x3d, x2_3)
                    
                    if (x0_13 == 0)
                        goto label_e84e20
                    
                    if (zx.d(*x0_13) == 0x3d)
                        void* x3_2
                        
                        if (x0_13 != x24_2)
                            x3_2 = x0_13 - x28_1
                        else
                            x3_2 = -ffffffffffffffff
                        
                        if (x3_2 + 1 u< 2)
                            goto label_e84e20
                        
                        uint64_t x8_15
                        
                        if ((fp_1.d & 1) == 0)
                            x8_15 = fp_1 u>> 1
                        else
                            x8_15 = var_78
                        
                        if (x3_2 == x8_15 - 1)
                            goto label_e84e20
                        
                        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                            &var_c0, &var_80, 0, x3_2)
                        Botan::clean_ws(&var_c0)
                        
                        if ((zx.d(var_c0[0]) & 1) != 0)
                            operator delete(var_b0)
                        
                        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                            &var_d8, &var_80, x3_2 + 1, -ffffffffffffffff)
                        Botan::clean_ws(&var_d8)
                        void* var_c8
                        
                        if ((zx.d(var_d8[0]) & 1) != 0)
                            operator delete(var_c8)
                        var_d8[0].q = &var_a0
                        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::operator=(std::__ndk1::__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, std::__ndk1::less<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, true>, std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > > >::__emplace_unique_key_args<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::piecewise_construct_t const&, std::__ndk1::tuple<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&>, std::__ndk1::tuple<> >(
                            entry_x8, &var_a0) + 0x38)
                        
                        if ((zx.d(var_c0[0]) & 1) != 0)
                            operator delete(var_b0)
                        
                        if ((zx.d(var_a0.b) & 1) != 0)
                            operator delete(var_90)
                        
                        x8_8 = zx.d(var_80.b)
                        break
                    
                    x0_12 = &x0_13[1]
                    x2_3 = x24_2 - x0_12
                    
                    if (x2_3 s< 1)
                        goto label_e84e20
                
                goto label_e84bb4
    else if (x8_8 u>= 2)
        if (zx.d(*x26_1) == 0x23)
            goto label_e84bb4
        
        goto label_e84c84
    x8_2 = *x21_1 - 0x18
while (*(x25_1 + *x8_2) == 0)
