// 函数: _ZNSt6__ndk117moneypunct_bynameIwLb0EE4initEPKc
// 地址: 0x10dab38
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x25 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x25 + 0x28)
int64_t* entry_x1
int64_t* x21 = entry_x1
locale_t x0 = newlocale(0x1fbf, entry_x1, nullptr)
int64_t pwc
mbstate_t ps_1
int64_t var_1e0

if (x0 == 0)
    size_t x0_37 = strlen(x21)
    
    if (x0_37 u>= -0x10)
        std::__ndk1::__basic_string_common<true>::__throw_length_error()
    label_10db1a4:
        std::__ndk1::__throw_runtime_error("locale not supported")
    label_10db1b0:
        std::__ndk1::__throw_runtime_error("locale not supported")
    label_10db1bc:
        x0_37 = std::__ndk1::__throw_runtime_error("locale not supported")
    
    int64_t x20_1
    
    if (x0_37 u>= 0x17)
        uint64_t x22_7 = (x0_37 + 0x10) & 0xfffffffffffffff0
        int64_t x0_39 = operator new(x22_7)
        x20_1 = x0_39
        size_t var_200_1 = x0_37
        int64_t var_1f8_1 = x0_39
        pwc = x22_7 | 1
        memcpy(x20_1, x21, x0_37)
    else
        x20_1 = &pwc | 1
        pwc.b = (x0_37.d << 1).b
        
        if (x0_37 != 0)
            memcpy(x20_1, x21, x0_37)
    
    *(x20_1 + x0_37) = 0
    int128_t* x0_42
    int128_t v0_4
    x0_42, v0_4 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::insert(
        &pwc, nullptr)
    v0_4 = *x0_42
    var_1e0 = x0_42[1].q
    ps_1.__count = v0_4.d
    ps_1.__value.__wch = v0_4:4.d
    __builtin_memset(x0_42, 0, 0x18)
    sub_10cdaec()
    noreturn

locale_t newloc = uselocale(x0)
x21 = localeconv()

if (newloc != 0)
    uselocale(newloc)

char* s = x21[5]
size_t x0_6

if (zx.d(*s) != 0)
    ps_1.__count = 0
    ps_1.__value.__wch = 0
    size_t n = __strlen_chk(s, -1)
    locale_t newloc_1 = uselocale(x0)
    x0_6 = mbrtowc(&pwc, s, n, &ps_1)
    
    if (newloc_1 != 0)
        uselocale(newloc_1)

int32_t x8_2

if (zx.d(*s) != 0 && (x0_6 == -3 || x0_6 u< -3))
    x8_2 = pwc.d
else
    x8_2 = -1

*(arg1 + 0x10) = x8_2
char* s_1 = x21[6]
size_t x0_11

if (zx.d(*s_1) != 0)
    ps_1.__count = 0
    ps_1.__value.__wch = 0
    size_t n_1 = __strlen_chk(s_1, -1)
    locale_t newloc_2 = uselocale(x0)
    x0_11 = mbrtowc(&pwc, s_1, n_1, &ps_1)
    
    if (newloc_2 != 0)
        uselocale(newloc_2)

int32_t x8_4

if (zx.d(*s_1) != 0 && (x0_11 == -3 || x0_11 u< -3))
    x8_4 = pwc.d
else
    x8_4 = -1

*(arg1 + 0x14) = x8_4
x21[7]
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::assign(
    &arg1[0x18])
char const* var_218 = x21[4]
mbstate_t ps
__builtin_memset(&ps, 0, 8)
locale_t newloc_3 = uselocale(x0)
size_t x0_16
int128_t v0_1
int128_t v1_1
x0_16, v0_1, v1_1 = mbsrtowcs(&ps_1, &var_218, 0x64, &ps)

if (newloc_3 != 0)
    v0_1, v1_1 = uselocale(newloc_3)

if (x0_16 == -1)
    goto label_10db1a4

uint64_t x8_6 = zx.q(arg1[0x30])
uint64_t x1_4
uint64_t x3_4

if ((x8_6.d & 1) != 0)
    x8_6 = *(arg1 + 0x30)
    x1_4 = (x8_6 & 0xfffffffffffffffe) - 1
    
    if (x0_16 u> x1_4)
        x3_4 = *(arg1 + 0x38)
        v0_1, v1_1 = std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> >::__grow_by(
            &arg1[0x30], x1_4, x0_16 - x1_4, x3_4, 0, x3_4)
        x8_6 = zx.q(arg1[0x30])
else if (x0_16 u> 4)
    x3_4 = x8_6 u>> 1
    x1_4 = 4
    v0_1, v1_1 = std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> >::__grow_by(
        &arg1[0x30], x1_4, x0_16 - x1_4, x3_4, 0, x3_4)
    x8_6 = zx.q(arg1[0x30])
void* x9_3
void* x11_1

if ((x8_6.d & 1) != 0)
    x11_1 = *(arg1 + 0x40)
    
    if (x0_16 != 0)
    label_10dad18:
        int64_t x10_1 = x0_16 << 2
        mbstate_t* i
        
        if (x10_1 - 4 u< 0x1c || (x11_1 u< &ps_1 + x10_1 && &ps_1 u< x11_1 + x10_1))
            x9_3 = x11_1
            i = &ps_1
        label_10dad60:
            
            do
                int32_t __count = i->__count
                i = &i->__value
                *x9_3 = __count
                x9_3 += 4
            while (&ps_1 + (x0_16 << 2) != i)
        else
            int64_t i_9 = (((x10_1 - 4) u>> 2) + 1) & 0x7ffffffffffffff8
            int64_t x15_1 = i_9 << 2
            int64_t* x14_1 = &var_1e0
            x9_3 = x11_1 + x15_1
            i = &ps_1 + x15_1
            void* x11_6 = x11_1 + 0x10
            int64_t i_6 = i_9
            int64_t i_1
            
            do
                v0_1 = *(x14_1 - 0x10)
                v1_1 = *x14_1
                x14_1 = &x14_1[4]
                i_1 = i_6
                i_6 -= 8
                *(x11_6 - 0x10) = v0_1
                *x11_6 = v1_1
                x11_6 += 0x20
            while (i_1 != 8)
            
            if (((x10_1 - 4) u>> 2) + 1 != i_9)
                goto label_10dad60
    else
        x9_3 = x11_1
else
    x11_1 = &arg1[0x34]
    
    if (x0_16 != 0)
        goto label_10dad18
    
    x9_3 = x11_1
*x9_3 = 0

if ((zx.d(arg1[0x30]) & 1) != 0)
    *(arg1 + 0x38) = x0_16
else
    arg1[0x30] = (x0_16.d << 1).b

uint32_t x8_10 = zx.d(*(x21 + 0x51))
uint32_t x8_11

x8_11 = x8_10 == 0xff ? 0 : x8_10

*(arg1 + 0x78) = x8_11

if (zx.d(*(x21 + 0x56)) == 0)
    std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> >::assign(
        &arg1[0x48])
    
    if (zx.d(*(x21 + 0x57)) == 0)
        std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> >::assign(
            &arg1[0x60])
    else
    label_10dae24:
        var_218 = x21[9]
        __builtin_memset(&ps, 0, 8)
        locale_t newloc_5 = uselocale(x0)
        size_t x0_26
        int128_t v0_3
        int128_t v1_3
        x0_26, v0_3, v1_3 = mbsrtowcs(&ps_1, &var_218, 0x64, &ps)
        
        if (newloc_5 != 0)
            v0_3, v1_3 = uselocale(newloc_5)
        
        if (x0_26 == -1)
            goto label_10db1bc
        
        uint64_t x8_17 = zx.q(arg1[0x60])
        uint64_t x1_9
        uint64_t x3_8
        
        if ((x8_17.d & 1) != 0)
            x8_17 = *(arg1 + 0x60)
            x1_9 = (x8_17 & 0xfffffffffffffffe) - 1
            
            if (x0_26 u> x1_9)
                x3_8 = *(arg1 + 0x68)
                v0_3, v1_3 = std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> >::__grow_by(
                    &arg1[0x60], x1_9, x0_26 - x1_9, x3_8, 0, x3_8)
                x8_17 = zx.q(arg1[0x60])
        else if (x0_26 u> 4)
            x3_8 = x8_17 u>> 1
            x1_9 = 4
            v0_3, v1_3 = std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> >::__grow_by(
                &arg1[0x60], x1_9, x0_26 - x1_9, x3_8, 0, x3_8)
            x8_17 = zx.q(arg1[0x60])
        void* x9_9
        void* x11_4
        
        if ((x8_17.d & 1) != 0)
            x11_4 = *(arg1 + 0x70)
            
            if (x0_26 != 0)
            label_10daf9c:
                int64_t x10_5 = x0_26 << 2
                void* i_2
                
                if (x10_5 - 4 u< 0x1c || (x11_4 u< &ps_1 + x10_5 && &ps_1 u< x11_4 + x10_5))
                    x9_9 = x11_4
                    i_2 = &ps_1
                label_10dafe4:
                    
                    do
                        int32_t x11_5 = *i_2
                        i_2 += 4
                        *x9_9 = x11_5
                        x9_9 += 4
                    while (&ps_1 + (x0_26 << 2) != i_2)
                else
                    int64_t i_11 = (((x10_5 - 4) u>> 2) + 1) & 0x7ffffffffffffff8
                    int64_t x15_3 = i_11 << 2
                    int64_t* x14_3 = &var_1e0
                    x9_9 = x11_4 + x15_3
                    i_2 = &ps_1 + x15_3
                    void* x11_8 = x11_4 + 0x10
                    int64_t i_8 = i_11
                    int64_t i_3
                    
                    do
                        v0_3 = *(x14_3 - 0x10)
                        v1_3 = *x14_3
                        x14_3 = &x14_3[4]
                        i_3 = i_8
                        i_8 -= 8
                        *(x11_8 - 0x10) = v0_3
                        *x11_8 = v1_3
                        x11_8 += 0x20
                    while (i_3 != 8)
                    
                    if (((x10_5 - 4) u>> 2) + 1 != i_11)
                        goto label_10dafe4
            else
                x9_9 = x11_4
        else
            x11_4 = &arg1[0x64]
            
            if (x0_26 != 0)
                goto label_10daf9c
            
            x9_9 = x11_4
        *x9_9 = 0
        
        if ((zx.d(arg1[0x60]) & 1) != 0)
            *(arg1 + 0x68) = x0_26
        else
            arg1[0x60] = (x0_26.d << 1).b
else
    var_218 = x21[8]
    __builtin_memset(&ps, 0, 8)
    locale_t newloc_4 = uselocale(x0)
    size_t x0_21
    int128_t v0_2
    int128_t v1_2
    x0_21, v0_2, v1_2 = mbsrtowcs(&ps_1, &var_218, 0x64, &ps)
    
    if (newloc_4 != 0)
        v0_2, v1_2 = uselocale(newloc_4)
    
    if (x0_21 == -1)
        goto label_10db1b0
    
    uint64_t x8_14 = zx.q(arg1[0x48])
    uint64_t x1_6
    uint64_t x3_6
    
    if ((x8_14.d & 1) != 0)
        x8_14 = *(arg1 + 0x48)
        x1_6 = (x8_14 & 0xfffffffffffffffe) - 1
        
        if (x0_21 u> x1_6)
            x3_6 = *(arg1 + 0x50)
            v0_2, v1_2 = std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> >::__grow_by(
                &arg1[0x48], x1_6, x0_21 - x1_6, x3_6, 0, x3_6)
            x8_14 = zx.q(arg1[0x48])
    else if (x0_21 u> 4)
        x3_6 = x8_14 u>> 1
        x1_6 = 4
        v0_2, v1_2 = std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> >::__grow_by(
            &arg1[0x48], x1_6, x0_21 - x1_6, x3_6, 0, x3_6)
        x8_14 = zx.q(arg1[0x48])
    void* x9_6
    void* x11_2
    
    if ((x8_14.d & 1) != 0)
        x11_2 = *(arg1 + 0x58)
        
        if (x0_21 != 0)
        label_10daec0:
            int64_t x10_3 = x0_21 << 2
            void* i_4
            
            if (x10_3 - 4 u< 0x1c || (x11_2 u< &ps_1 + x10_3 && &ps_1 u< x11_2 + x10_3))
                x9_6 = x11_2
                i_4 = &ps_1
            label_10daf08:
                
                do
                    int32_t x11_3 = *i_4
                    i_4 += 4
                    *x9_6 = x11_3
                    x9_6 += 4
                while (&ps_1 + (x0_21 << 2) != i_4)
            else
                int64_t i_10 = (((x10_3 - 4) u>> 2) + 1) & 0x7ffffffffffffff8
                int64_t x15_2 = i_10 << 2
                int64_t* x14_2 = &var_1e0
                x9_6 = x11_2 + x15_2
                i_4 = &ps_1 + x15_2
                void* x11_7 = x11_2 + 0x10
                int64_t i_7 = i_10
                int64_t i_5
                
                do
                    v0_2 = *(x14_2 - 0x10)
                    v1_2 = *x14_2
                    x14_2 = &x14_2[4]
                    i_5 = i_7
                    i_7 -= 8
                    *(x11_7 - 0x10) = v0_2
                    *x11_7 = v1_2
                    x11_7 += 0x20
                while (i_5 != 8)
                
                if (((x10_3 - 4) u>> 2) + 1 != i_10)
                    goto label_10daf08
        else
            x9_6 = x11_2
    else
        x11_2 = &arg1[0x4c]
        
        if (x0_21 != 0)
            goto label_10daec0
        
        x9_6 = x11_2
    *x9_6 = 0
    
    if ((zx.d(arg1[0x48]) & 1) != 0)
        *(arg1 + 0x50) = x0_21
        
        if (zx.d(*(x21 + 0x57)) != 0)
            goto label_10dae24
        
        std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> >::assign(
            &arg1[0x60])
    else
        arg1[0x48] = (x0_21.d << 1).b
        
        if (zx.d(*(x21 + 0x57)) != 0)
            goto label_10dae24
        
        std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> >::assign(
            &arg1[0x60])

std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> >::basic_string(
    &pwc)
sub_10db370(&arg1[0x7c], &pwc, 0, *(x21 + 0x52), *(x21 + 0x53), *(x21 + 0x56))
sub_10db370(&arg1[0x80], &arg1[0x30], 0, *(x21 + 0x54), *(x21 + 0x55), *(x21 + 0x57))
void* var_1f8

if ((zx.d(pwc.b) & 1) != 0)
    operator delete(var_1f8)
int64_t result = freelocale(x0)

if (*(x25 + 0x28) == x8)
    return result

__stack_chk_fail()
noreturn
