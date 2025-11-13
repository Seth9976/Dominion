// 函数: sub_10c861c
// 地址: 0x10c861c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*arg1 = &_vtable_for_std::__ndk1::locale::__imp{for `std::__ndk1::locale::facet'}
arg1[1] = arg3 - 1
*(arg1 + 0x30) = zx.o(0)
arg1[2] = &arg1[6]
arg1[0x22].b = 1
__builtin_memset(&arg1[8], 0, 0xd0)
arg1[3] = &arg1[0x22]
arg1[4] = &arg1[0x22]
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &arg1[0x24])

if ((zx.d(data_24bad20) & 1) == 0 && __cxa_guard_acquire(&data_24bad20) != 0)
    sub_10c6b9c(&data_24bb940, 1)
    data_24bad10 = &data_24bb940
    data_24bad18 = &data_24bad10
    __cxa_guard_release(&data_24bad20)

void* x8_2 = data_24bad10

if (x8_2 != arg1)
    sub_10dd1d8(&arg1[2], *(x8_2 + 0x10), *(x8_2 + 0x18))

int64_t x9 = arg1[2]
int64_t x8_3 = arg1[3]

if (x8_3 != x9)
    uint64_t i = 0
    int32_t i_1 = 1
    
    do
        if (*(x9 + (i << 3)) != 0)
            std::__ndk1::__shared_count::__add_shared()
            x9 = arg1[2]
            x8_3 = arg1[3]
        
        i = zx.q(i_1)
        i_1 += 1
    while (i u< (x8_3 - x9) s>> 3)

std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >* 
    x0_3 = operator new(0x18)
std::__ndk1::collate_byname<char>::collate_byname(x0_3, &arg1[0x24])
sub_10c8d28(arg1, x0_3)
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >* 
    x0_5 = operator new(0x18)
std::__ndk1::collate_byname<wchar_t>::collate_byname(x0_5, &arg1[0x24])
sub_10c8e54(arg1, x0_5)
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >* 
    x0_7 = operator new(0x28)
std::__ndk1::ctype_byname<char>::ctype_byname(x0_7, &arg1[0x24])
sub_10c8f80(arg1, x0_7)
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >* 
    x0_9 = operator new(0x18)
std::__ndk1::ctype_byname<wchar_t>::ctype_byname(x0_9, &arg1[0x24])
sub_10c90ac(arg1, x0_9)
void** x0_11 = operator new(0x10)
*x0_11 = _vtable_for_std::__ndk1::codecvt_byname<char, char, mbstate_t> + 0x10
x0_11[1] = -1
sub_10c91d8(arg1, x0_11)
char* x0_13 = operator new(0x18)
void* x1_10

if ((zx.d(arg1[0x24].b) & 1) != 0)
    x1_10 = arg1[0x26]
else
    x1_10 = arg1 + 0x121

std::__ndk1::codecvt<wchar_t, char, mbstate_t>::codecvt(x0_13, x1_10)
*x0_13 = _vtable_for_std::__ndk1::codecvt_byname<wchar_t, char, mbstate_t> + 0x10
sub_10c9304(arg1, x0_13)
void** x0_15 = operator new(0x10)
*x0_15 = _vtable_for_std::__ndk1::codecvt_byname<char16_t, char, mbstate_t> + 0x10
x0_15[1] = -1
sub_10c9430(arg1, x0_15)
void** x0_17 = operator new(0x10)
*x0_17 = _vtable_for_std::__ndk1::codecvt_byname<char32_t, char, mbstate_t> + 0x10
x0_17[1] = -1
sub_10c955c(arg1, x0_17)
char* x0_19 = operator new(0x30)
__builtin_memset(&x0_19[0x18], 0, 0x18)
*(x0_19 + 0x10) = 0x2c2e
*x0_19 = _vtable_for_std::__ndk1::numpunct_byname<char> + 0x10
*(x0_19 + 8) = -1
arg1[0x26]
arg1[0x24].b
std::__ndk1::numpunct_byname<char>::__init(x0_19)
sub_10c9688(arg1, x0_19)
char* x0_21 = operator new(0x30)
__builtin_memset(&x0_21[0x18], 0, 0x18)
*(x0_21 + 0x10) = 0x2c0000002e
*x0_21 = _vtable_for_std::__ndk1::numpunct_byname<wchar_t> + 0x10
*(x0_21 + 8) = -1
arg1[0x26]
arg1[0x24].b
std::__ndk1::numpunct_byname<wchar_t>::__init(x0_21)
sub_10c97b4(arg1, x0_21)
void** x0_23 = operator new(0x88)
sub_10c9a0c(x0_23, &arg1[0x24], 0)
sub_10c98e0(arg1, x0_23)
void** x0_25 = operator new(0x88)
sub_10c9c1c(x0_25, &arg1[0x24], 0)
sub_10c9af0(arg1, x0_25)
void** x0_27 = operator new(0x88)
sub_10c9e2c(x0_27, &arg1[0x24], 0)
sub_10c9d00(arg1, x0_27)
void** x0_29 = operator new(0x88)
sub_10ca03c(x0_29, &arg1[0x24], 0)
sub_10c9f10(arg1, x0_29)
void** x0_31 = operator new(0x440)
*x0_31 = _vtable_for_std::__ndk1::time_get<char, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> > >
    + 0x10
x0_31[1] = -1
x0_31[2] = _vtable_for_std::__ndk1::time_get<char, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> > >
    + 0x70
std::__ndk1::__time_get_storage<char>::__time_get_storage(&x0_31[3])
*x0_31 = _vtable_for_std::__ndk1::time_get_byname<char, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> > >
    + 0x10
x0_31[2] = _vtable_for_std::__ndk1::time_get_byname<char, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> > >
    + 0xa8
sub_10ca120(arg1, x0_31)
void** x0_34 = operator new(0x440)
*x0_34 = _vtable_for_std::__ndk1::time_get<wchar_t, std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> > >
    + 0x10
x0_34[1] = -1
x0_34[2] = _vtable_for_std::__ndk1::time_get<wchar_t, std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> > >
    + 0x70
std::__ndk1::__time_get_storage<wchar_t>::__time_get_storage(&x0_34[3])
*x0_34 = _vtable_for_std::__ndk1::time_get_byname<wchar_t, std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> > >
    + 0x10
x0_34[2] = _vtable_for_std::__ndk1::time_get_byname<wchar_t, std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> > >
    + 0xa8
sub_10ca24c(arg1, x0_34)
void** x0_37 = operator new(0x18)
sub_10ca4a4(x0_37, &arg1[0x24], 0)
sub_10ca378(arg1, x0_37)
void** x0_39 = operator new(0x18)
sub_10ca6b8(x0_39, &arg1[0x24], 0)
sub_10ca58c(arg1, x0_39)
void** x0_41 = operator new(0x10)
*x0_41 = _vtable_for_std::__ndk1::messages_byname<char> + 0x10
x0_41[1] = -1
sub_10ca7a0(arg1, x0_41)
void** x0_43 = operator new(0x10)
*x0_43 = _vtable_for_std::__ndk1::messages_byname<wchar_t> + 0x10
x0_43[1] = -1
return sub_10ca8cc(arg1, x0_43)
