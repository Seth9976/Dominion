// 函数: _ZNSt6__ndk117moneypunct_bynameIcLb1EE4initEPKc
// 地址: 0x10da6b8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x25 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x25 + 0x28)
int64_t* entry_x1
locale_t x0 = newlocale(0x1fbf, entry_x1, nullptr)
int64_t pwc
mbstate_t ps

if (x0 == 0)
    size_t x0_33 = strlen(entry_x1)
    
    if (x0_33 u>= -0x10)
        x0_33 = std::__ndk1::__basic_string_common<true>::__throw_length_error()
    
    int64_t x20_1
    
    if (x0_33 u>= 0x17)
        uint64_t x22_6 = (x0_33 + 0x10) & 0xfffffffffffffff0
        int64_t x0_35 = operator new(x22_6)
        x20_1 = x0_35
        size_t var_80_1 = x0_33
        int64_t var_78_1 = x0_35
        pwc = x22_6 | 1
        memcpy(x20_1, entry_x1, x0_33)
    else
        x20_1 = &pwc | 1
        pwc.b = (x0_33.d << 1).b
        
        if (x0_33 != 0)
            memcpy(x20_1, entry_x1, x0_33)
    
    *(x20_1 + x0_33) = 0
    int128_t* x0_38
    int128_t v0
    x0_38, v0 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::insert(
        &pwc, nullptr)
    v0 = *x0_38
    int64_t var_60_1 = x0_38[1].q
    ps.__count = v0.d
    ps.__value.__wch = v0:4.d
    __builtin_memset(x0_38, 0, 0x18)
    sub_10cdaec()
    noreturn

locale_t newloc = uselocale(x0)
struct lconv* x0_1 = localeconv()

if (newloc != 0)
    uselocale(newloc)

char* mon_decimal_point = x0_1->mon_decimal_point
uint32_t x8_1 = zx.d(*mon_decimal_point)

if (x8_1 == 0)
    arg1[0x10] = (0xff).b
else if (zx.d(mon_decimal_point[1]) == 0)
    arg1[0x10] = x8_1.b
else
    ps.__count = 0
    ps.__value.__wch = 0
    size_t n = __strlen_chk(mon_decimal_point, -1)
    locale_t newloc_1 = uselocale(x0)
    size_t x0_6 = mbrtowc(&pwc, mon_decimal_point, n, &ps)
    
    if (newloc_1 != 0)
        uselocale(newloc_1)
    
    if (x0_6 u< -2)
        wint_t c = pwc.d
        locale_t newloc_3 = uselocale(x0)
        int32_t x0_26 = wctob(c)
        
        if (newloc_3 != 0)
            uselocale(newloc_3)
        
        if (x0_26 != 0xffffffff)
            arg1[0x10] = x0_26.b
        else if (c == 0x202f || c == 0xa0)
            arg1[0x10] = (0x20).b
        else
            arg1[0x10] = (0xff).b
    else
        arg1[0x10] = (0xff).b

char* mon_thousands_sep = x0_1->mon_thousands_sep
uint32_t x22_3 = zx.d(*mon_thousands_sep)

if (x22_3 == 0)
    x22_3 = 0xff
else if (zx.d(mon_thousands_sep[1]) != 0)
    ps.__count = 0
    ps.__value.__wch = 0
    size_t n_1 = __strlen_chk(mon_thousands_sep, -1)
    locale_t newloc_2 = uselocale(x0)
    size_t x0_11 = mbrtowc(&pwc, mon_thousands_sep, n_1, &ps)
    
    if (newloc_2 != 0)
        uselocale(newloc_2)
    
    if (x0_11 u< -2)
        wint_t c_1 = pwc.d
        locale_t newloc_4 = uselocale(x0)
        x22_3 = wctob(c_1)
        
        if (newloc_4 != 0)
            uselocale(newloc_4)
        
        if (x22_3 == 0xffffffff)
            x22_3 = 0x20
            
            if (c_1 != 0xa0 && c_1 != 0x202f)
                x22_3 = 0xff
    else
        x22_3 = 0xff

arg1[0x11] = x22_3.b
x0_1->mon_grouping
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::assign(
    &arg1[0x18])
x0_1->int_curr_symbol
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::assign(
    &arg1[0x30])
uint32_t int_frac_digits = zx.d(x0_1->int_frac_digits)
uint32_t int_frac_digits_1

int_frac_digits_1 = int_frac_digits == 0xff ? 0 : int_frac_digits

*(arg1 + 0x78) = int_frac_digits_1

if (zx.d(x0_1->int_p_sign_posn) == 0)
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::assign(
        &arg1[0x48])
else
    x0_1->positive_sign
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::assign(
        &arg1[0x48])

if (zx.d(x0_1->int_n_sign_posn) == 0)
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::assign(
        &arg1[0x60])
else
    x0_1->negative_sign
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::assign(
        &arg1[0x60])

std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &ps)
sub_10da124(&arg1[0x7c], &ps, 1, x0_1->int_p_cs_precedes, x0_1->int_p_sep_by_space, 
    x0_1->int_p_sign_posn)
sub_10da124(&arg1[0x80], &arg1[0x30], 1, x0_1->int_n_cs_precedes, x0_1->int_n_sep_by_space, 
    x0_1->int_n_sign_posn)
void* var_60

if ((zx.d(ps.__count.b) & 1) != 0)
    operator delete(var_60)
int64_t result = freelocale(x0)

if (*(x25 + 0x28) == x8)
    return result

__stack_chk_fail()
noreturn
