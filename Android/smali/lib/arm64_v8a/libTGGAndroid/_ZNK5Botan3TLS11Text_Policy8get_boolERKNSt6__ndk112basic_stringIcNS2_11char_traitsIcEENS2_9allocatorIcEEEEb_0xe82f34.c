// 函数: _ZNK5Botan3TLS11Text_Policy8get_boolERKNSt6__ndk112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEb
// 地址: 0xe82f34
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t entry_x2
int32_t x19 = entry_x2
char var_50 = 0
char var_38

if (arg1 + 0x10 == std::__ndk1::__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, std::__ndk1::less<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, true>, std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > > >::find<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >(
        arg1 + 8))
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &var_38)
else
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &var_38)

void* var_40

if ((zx.d(var_50) & 1) != 0)
    operator delete(var_40)
uint64_t x10 = zx.q(var_38)
uint64_t var_30
uint64_t x8_2 = var_30
int32_t x9 = x10.d & 1
uint64_t x10_1 = x10 u>> 1
uint64_t x11

x11 = x9 == 0 ? x10_1 : x8_2

if (x11 == 0)
    goto label_e830a4

if (x11 != 4)
    goto label_e82fe0

void* var_28

if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
    &var_38, 0, -ffffffffffffffff, "true") == 0)
label_e8309c:
    x19 = 1
label_e830a4:
    
    if ((zx.d(var_38) & 1) != 0)
        operator delete(var_28)
else
    uint64_t x10_2 = zx.q(var_38)
    x8_2 = var_30
    x9 = x10_2.d & 1
    x10_1 = x10_2 u>> 1
label_e82fe0:
    uint64_t x11_1
    
    if ((x9 & 0xff) == 0)
        x11_1 = x10_1
    else
        x11_1 = x8_2
    
    if (x11_1 == 4)
        if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                &var_38, 0, -ffffffffffffffff, "True") == 0)
            goto label_e8309c
        
        uint64_t x10_3 = zx.q(var_38)
        x8_2 = var_30
        x9 = x10_3.d & 1
        x10_1 = x10_3 u>> 1
    
    uint64_t x11_2
    
    if ((x9 & 0xff) == 0)
        x11_2 = x10_1
    else
        x11_2 = x8_2
    
    if (x11_2 != 5)
        goto label_e83060
    
    if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
            &var_38, 0, -ffffffffffffffff, "false") != 0)
        uint64_t x10_4 = zx.q(var_38)
        x8_2 = var_30
        x9 = x10_4.d & 1
        x10_1 = x10_4 u>> 1
    label_e83060:
        uint64_t x8_3
        
        if ((x9 & 0xff) == 0)
            x8_3 = x10_1
        else
            x8_3 = x8_2
        
        int32_t x0_12
        
        if (x8_3 == 5)
            x0_12 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                &var_38, 0, -ffffffffffffffff, "False")
        
        if (x8_3 != 5 || x0_12 != 0)
            void** x0_15 = __cxa_allocate_exception(0x20)
            std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
                "Invalid boolean '", &var_38)
            char var_68[0x18]
            int128_t* x0_17 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
                &var_68)
            int64_t var_40_1 = x0_17[1].q
            var_50 = (*x0_17).b
            __builtin_memset(x0_17, 0, 0x18)
            *x0_15 = _vtable_for_Botan::Exception + 0x10
            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                &x0_15[1])
            *x0_15 = _vtable_for_Botan::Decoding_Error + 0x10
            __cxa_throw(x0_15, _typeinfo_for_Botan::Decoding_Error, Botan::Exception::~Exception)
            noreturn
    
    x19 = 0
    
    if ((zx.d(var_38) & 1) != 0)
        operator delete(var_28)
return zx.q(x19) & 1
