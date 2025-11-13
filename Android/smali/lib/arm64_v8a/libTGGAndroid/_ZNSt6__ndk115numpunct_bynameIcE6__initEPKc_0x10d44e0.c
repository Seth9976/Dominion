// 函数: _ZNSt6__ndk115numpunct_bynameIcE6__initEPKc
// 地址: 0x10d44e0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x25 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x25 + 0x28)
int64_t* entry_x1
int64_t result = strcmp(entry_x1, 0x739c3c)

if (result.d != 0)
    locale_t x0_1 = newlocale(0x1fbf, entry_x1, nullptr)
    int64_t pwc
    mbstate_t ps[0x2]
    
    if (x0_1 == 0)
        size_t x0_25 = strlen(entry_x1)
        
        if (x0_25 u>= -0x10)
            x0_25 = std::__ndk1::__basic_string_common<true>::__throw_length_error()
        
        int64_t x20_1
        
        if (x0_25 u>= 0x17)
            uint64_t x22_4 = (x0_25 + 0x10) & 0xfffffffffffffff0
            int64_t x0_27 = operator new(x22_4)
            x20_1 = x0_27
            size_t var_80_1 = x0_25
            int64_t var_78_1 = x0_27
            pwc = x22_4 | 1
            memcpy(x20_1, entry_x1, x0_25)
        else
            x20_1 = &pwc | 1
            pwc.b = (x0_25.d << 1).b
            
            if (x0_25 != 0)
                memcpy(x20_1, entry_x1, x0_25)
        
        *(x20_1 + x0_25) = 0
        int128_t* x0_30
        int128_t v0
        x0_30, v0 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::insert(
            &pwc, nullptr)
        int64_t var_60 = x0_30[1].q
        ps = *x0_30
        __builtin_memset(x0_30, 0, 0x18)
        sub_10cdaec()
        noreturn
    
    locale_t newloc = uselocale(x0_1)
    struct lconv* x0_2 = localeconv()
    
    if (newloc != 0)
        uselocale(newloc)
    
    char* decimal_point = x0_2->decimal_point
    uint32_t x8_1 = zx.d(*decimal_point)
    
    if (x8_1 != 0)
        if (zx.d(decimal_point[1]) == 0)
            arg1[0x10] = x8_1.b
        else
            ps[0].__count.q = 0
            size_t n = __strlen_chk(decimal_point, -1)
            locale_t newloc_1 = uselocale(x0_1)
            size_t x0_7 = mbrtowc(&pwc, decimal_point, n, &ps)
            
            if (newloc_1 != 0)
                uselocale(newloc_1)
            
            if (x0_7 u< -2)
                wint_t c = pwc.d
                locale_t newloc_2 = uselocale(x0_1)
                int32_t x0_11 = wctob(c)
                
                if (newloc_2 != 0)
                    uselocale(newloc_2)
                
                if (x0_11 != 0xffffffff)
                    arg1[0x10] = x0_11.b
                else if (c == 0x202f || c == 0xa0)
                    arg1[0x10] = (0x20).b
    
    char* thousands_sep = x0_2->thousands_sep
    uint32_t x8_2 = zx.d(*thousands_sep)
    
    if (x8_2 != 0)
        if (zx.d(thousands_sep[1]) == 0)
            arg1[0x11] = x8_2.b
        else
            ps[0].__count.q = 0
            size_t n_1 = __strlen_chk(thousands_sep, -1)
            locale_t newloc_3 = uselocale(x0_1)
            size_t x0_16 = mbrtowc(&pwc, thousands_sep, n_1, &ps)
            
            if (newloc_3 != 0)
                uselocale(newloc_3)
            
            if (x0_16 u< -2)
                wint_t c_1 = pwc.d
                locale_t newloc_4 = uselocale(x0_1)
                int32_t x0_20 = wctob(c_1)
                
                if (newloc_4 != 0)
                    uselocale(newloc_4)
                
                if (x0_20 != 0xffffffff)
                    arg1[0x11] = x0_20.b
                else if (c_1 == 0x202f || c_1 == 0xa0)
                    arg1[0x11] = (0x20).b
    
    x0_2->grouping
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::assign(
        &arg1[0x18])
    result = freelocale(x0_1)

if (*(x25 + 0x28) == x8)
    return result

__stack_chk_fail()
noreturn
