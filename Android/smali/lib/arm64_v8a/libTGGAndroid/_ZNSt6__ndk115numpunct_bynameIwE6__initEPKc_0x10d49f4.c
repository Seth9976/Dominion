// 函数: _ZNSt6__ndk115numpunct_bynameIwE6__initEPKc
// 地址: 0x10d49f4
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
        size_t x0_17 = strlen(entry_x1)
        
        if (x0_17 u>= -0x10)
            x0_17 = std::__ndk1::__basic_string_common<true>::__throw_length_error()
        
        int64_t x20_1
        
        if (x0_17 u>= 0x17)
            uint64_t x22_4 = (x0_17 + 0x10) & 0xfffffffffffffff0
            int64_t x0_19 = operator new(x22_4)
            x20_1 = x0_19
            size_t var_80_1 = x0_17
            int64_t var_78_1 = x0_19
            pwc = x22_4 | 1
            memcpy(x20_1, entry_x1, x0_17)
        else
            x20_1 = &pwc | 1
            pwc.b = (x0_17.d << 1).b
            
            if (x0_17 != 0)
                memcpy(x20_1, entry_x1, x0_17)
        
        *(x20_1 + x0_17) = 0
        int128_t* x0_22
        int128_t v0
        x0_22, v0 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::insert(
            &pwc, nullptr)
        int64_t var_60 = x0_22[1].q
        ps = *x0_22
        __builtin_memset(x0_22, 0, 0x18)
        sub_10cdaec()
        noreturn
    
    locale_t newloc = uselocale(x0_1)
    struct lconv* x0_2 = localeconv()
    
    if (newloc != 0)
        uselocale(newloc)
    
    char* decimal_point = x0_2->decimal_point
    
    if (zx.d(*decimal_point) != 0)
        ps[0].__count.q = 0
        size_t n = __strlen_chk(decimal_point, -1)
        locale_t newloc_1 = uselocale(x0_1)
        size_t x0_7 = mbrtowc(&pwc, decimal_point, n, &ps)
        
        if (newloc_1 != 0)
            uselocale(newloc_1)
        
        if (x0_7 == -3 || x0_7 u< -3)
            *(arg1 + 0x10) = pwc.d
    
    char* thousands_sep = x0_2->thousands_sep
    
    if (zx.d(*thousands_sep) != 0)
        ps[0].__count.q = 0
        size_t n_1 = __strlen_chk(thousands_sep, -1)
        locale_t newloc_2 = uselocale(x0_1)
        size_t x0_12 = mbrtowc(&pwc, thousands_sep, n_1, &ps)
        
        if (newloc_2 != 0)
            uselocale(newloc_2)
        
        if (x0_12 == -3 || x0_12 u< -3)
            *(arg1 + 0x14) = pwc.d
    
    x0_2->grouping
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::assign(
        &arg1[0x18])
    result = freelocale(x0_1)

if (*(x25 + 0x28) == x8)
    return result

__stack_chk_fail()
noreturn
