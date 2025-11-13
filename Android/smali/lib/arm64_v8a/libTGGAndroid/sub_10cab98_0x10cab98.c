// 函数: sub_10cab98
// 地址: 0x10cab98
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t result
result.q = 0
result:8.q = 0
*arg1 = &_vtable_for_std::__ndk1::locale::__imp{for `std::__ndk1::locale::facet'}
arg1[1] = -1
*(arg1 + 0x30) = zx.o(0)
arg1[2] = &arg1[6]
arg1[0x22].b = 1
__builtin_memset(&arg1[8], 0, 0xd0)
arg1[3] = &arg1[0x22]
arg1[4] = &arg1[0x22]
arg1[0x24].w = 0x2a02
*(arg1 + 0x122) = 0

if (arg1 != arg2)
    result = sub_10dd1d8(&arg1[2], *(arg2 + 0x10), *(arg2 + 0x18))

int64_t x9 = arg1[2]
int64_t x8_2 = arg1[3]

if (x8_2 != x9)
    uint64_t i = 0
    int32_t i_1 = 1
    
    do
        if (*(x9 + (i << 3)) != 0)
            result = std::__ndk1::__shared_count::__add_shared()
            x9 = arg1[2]
            x8_2 = arg1[3]
        
        i = zx.q(i_1)
        i_1 += 1
    while (i u< (x8_2 - x9) s>> 3)

if ((arg4 & 8) != 0)
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >* 
        x0_2 = operator new(0x18)
    std::__ndk1::collate_byname<char>::collate_byname(x0_2, arg3)
    sub_10c8d28(arg1, x0_2)
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >* 
        x0_4 = operator new(0x18)
    std::__ndk1::collate_byname<wchar_t>::collate_byname(x0_4, arg3)
    result = sub_10c8e54(arg1, x0_4)

if ((arg4 & 1) != 0)
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >* 
        x0_6 = operator new(0x28)
    std::__ndk1::ctype_byname<char>::ctype_byname(x0_6, arg3)
    sub_10c8f80(arg1, x0_6)
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >* 
        x0_8 = operator new(0x18)
    std::__ndk1::ctype_byname<wchar_t>::ctype_byname(x0_8, arg3)
    sub_10c90ac(arg1, x0_8)
    void** x0_10 = operator new(0x10)
    *x0_10 = _vtable_for_std::__ndk1::codecvt_byname<char, char, mbstate_t> + 0x10
    x0_10[1] = -1
    sub_10c91d8(arg1, x0_10)
    char* x0_12 = operator new(0x18)
    void** x23_5 = x0_12
    uint64_t x1_10
    
    if ((zx.d(*arg3) & 1) != 0)
        x1_10 = *(arg3 + 0x10)
    else
        x1_10 = arg3 + 1
    
    std::__ndk1::codecvt<wchar_t, char, mbstate_t>::codecvt(x0_12, x1_10)
    *x23_5 = _vtable_for_std::__ndk1::codecvt_byname<wchar_t, char, mbstate_t> + 0x10
    sub_10c9304(arg1, x23_5)
    void** x0_14 = operator new(0x10)
    *x0_14 = _vtable_for_std::__ndk1::codecvt_byname<char16_t, char, mbstate_t> + 0x10
    x0_14[1] = -1
    sub_10c9430(arg1, x0_14)
    void** x0_16 = operator new(0x10)
    *x0_16 = _vtable_for_std::__ndk1::codecvt_byname<char32_t, char, mbstate_t> + 0x10
    x0_16[1] = -1
    result = sub_10c955c(arg1, x0_16)

if ((arg4 & 0x10) != 0)
    void** x0_18 = operator new(0x88)
    sub_10c9a0c(x0_18, arg3, 0)
    sub_10c98e0(arg1, x0_18)
    void** x0_20 = operator new(0x88)
    sub_10c9c1c(x0_20, arg3, 0)
    sub_10c9af0(arg1, x0_20)
    void** x0_22 = operator new(0x88)
    sub_10c9e2c(x0_22, arg3, 0)
    sub_10c9d00(arg1, x0_22)
    void** x0_24 = operator new(0x88)
    sub_10ca03c(x0_24, arg3, 0)
    result = sub_10c9f10(arg1, x0_24)

if ((arg4 & 2) != 0)
    char* x0_26 = operator new(0x30)
    __builtin_memset(&x0_26[0x18], 0, 0x18)
    *(x0_26 + 0x10) = 0x2c2e
    *x0_26 = _vtable_for_std::__ndk1::numpunct_byname<char> + 0x10
    *(x0_26 + 8) = -1
    *(arg3 + 0x10)
    *arg3
    std::__ndk1::numpunct_byname<char>::__init(x0_26)
    sub_10c9688(arg1, x0_26)
    char* x0_28 = operator new(0x30)
    __builtin_memset(&x0_28[0x18], 0, 0x18)
    *(x0_28 + 0x10) = 0x2c0000002e
    *x0_28 = _vtable_for_std::__ndk1::numpunct_byname<wchar_t> + 0x10
    *(x0_28 + 8) = -1
    *(arg3 + 0x10)
    *arg3
    std::__ndk1::numpunct_byname<wchar_t>::__init(x0_28)
    result = sub_10c97b4(arg1, x0_28)

if ((arg4 & 4) != 0)
    void** x0_30 = operator new(0x440)
    *x0_30 = _vtable_for_std::__ndk1::time_get<char, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> > >
        + 0x10
    x0_30[1] = -1
    x0_30[2] = _vtable_for_std::__ndk1::time_get<char, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> > >
        + 0x70
    std::__ndk1::__time_get_storage<char>::__time_get_storage(&x0_30[3])
    *x0_30 = _vtable_for_std::__ndk1::time_get_byname<char, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> > >
        + 0x10
    x0_30[2] = _vtable_for_std::__ndk1::time_get_byname<char, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> > >
        + 0xa8
    sub_10ca120(arg1, x0_30)
    void** x0_33 = operator new(0x440)
    *x0_33 = _vtable_for_std::__ndk1::time_get<wchar_t, std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> > >
        + 0x10
    x0_33[1] = -1
    x0_33[2] = _vtable_for_std::__ndk1::time_get<wchar_t, std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> > >
        + 0x70
    std::__ndk1::__time_get_storage<wchar_t>::__time_get_storage(&x0_33[3])
    *x0_33 = _vtable_for_std::__ndk1::time_get_byname<wchar_t, std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> > >
        + 0x10
    x0_33[2] = _vtable_for_std::__ndk1::time_get_byname<wchar_t, std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> > >
        + 0xa8
    sub_10ca24c(arg1, x0_33)
    void** x0_36 = operator new(0x18)
    sub_10ca4a4(x0_36, arg3, 0)
    sub_10ca378(arg1, x0_36)
    void** x0_38 = operator new(0x18)
    sub_10ca6b8(x0_38, arg3, 0)
    result = sub_10ca58c(arg1, x0_38)

if ((arg4 & 0x20) == 0)
    return result

void** x0_40 = operator new(0x10)
*x0_40 = _vtable_for_std::__ndk1::messages_byname<char> + 0x10
x0_40[1] = -1
sub_10ca7a0(arg1, x0_40)
void** x0_42 = operator new(0x10)
*x0_42 = _vtable_for_std::__ndk1::messages_byname<wchar_t> + 0x10
x0_42[1] = -1
return sub_10ca8cc(arg1, x0_42)
