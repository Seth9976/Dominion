// 函数: sub_10c6b9c
// 地址: 0x10c6b9c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x25 = _ReadMSR(tpidr_el0)
int64_t x10 = *(x25 + 0x28)
*arg1 = &_vtable_for_std::__ndk1::locale::__imp{for `std::__ndk1::locale::facet'}
arg1[1] = arg2 - 1
*(arg1 + 0x30) = zx.o(0)
arg1[2] = &arg1[6]
arg1[0x22].b = 1
arg1[4] = &arg1[0x22]
__builtin_memset(&arg1[8], 0, 0xd0)
void* var_98 = &arg1[0x22]
arg1[3] = arg1[2]
arg1[0x24].w = 0x4302
*(arg1 + 0x122) = 0
data_24bb6e0 = _vtable_for_std::__ndk1::collate<char> + 0x10
data_24bb6e8 = 0
int64_t var_80 = 0
int64_t (* const var_90)() = std::__ndk1::collate<char>::id
int64_t (* const var_88)() = std::__ndk1::locale::id::__init
int64_t (* const** var_78)()
int64_t (* const* var_70)()

if (*std::__ndk1::collate<char>::id != -1)
    var_78 = &var_70
    var_70 = &var_90
    std::__ndk1::__call_once(std::__ndk1::collate<char>::id, &var_78, sub_10dd4b0)

int64_t x22 = sx.q(*(std::__ndk1::collate<char>::id + 8)) - 1
std::__ndk1::__shared_count::__add_shared()
int128_t* x8_5 = arg1[2]
int64_t x10_1 = (arg1[3] - x8_5) s>> 3

if (x10_1 u<= x22)
    if (x22 + 1 u> x10_1)
        sub_10dd360(&arg1[2], x22 + 1 - x10_1)
        x8_5 = arg1[2]
    else if (x22 + 1 u< x10_1)
        arg1[3] = x8_5 + ((x22 + 1) << 3)

if (*(x8_5 + (x22 << 3)) != 0)
    std::__ndk1::__shared_count::__release_shared()
    x8_5 = arg1[2]

*(x8_5 + (x22 << 3)) = &data_24bb6e0
var_90 = std::__ndk1::collate<wchar_t>::id
int64_t (* const var_88_1)() = std::__ndk1::locale::id::__init
data_24bb6f0 = _vtable_for_std::__ndk1::collate<wchar_t> + 0x10
data_24bb6f8 = 0
int64_t var_80_1 = 0

if (*std::__ndk1::collate<wchar_t>::id != -1)
    var_78 = &var_70
    var_70 = &var_90
    std::__ndk1::__call_once(std::__ndk1::collate<wchar_t>::id, &var_78, sub_10dd4b0)

int64_t x22_1 = sx.q(*(std::__ndk1::collate<wchar_t>::id + 8)) - 1
std::__ndk1::__shared_count::__add_shared()
int128_t* x8_8 = arg1[2]
int64_t x10_2 = (arg1[3] - x8_8) s>> 3

if (x10_2 u<= x22_1)
    if (x22_1 + 1 u> x10_2)
        sub_10dd360(&arg1[2], x22_1 + 1 - x10_2)
        x8_8 = arg1[2]
    else if (x22_1 + 1 u< x10_2)
        arg1[3] = x8_8 + ((x22_1 + 1) << 3)

if (*(x8_8 + (x22_1 << 3)) != 0)
    std::__ndk1::__shared_count::__release_shared()
    x8_8 = arg1[2]

*(x8_8 + (x22_1 << 3)) = &data_24bb6f0
data_24bb710 = &data_878ac0
data_24bb718 = 0
data_24bb700 = _vtable_for_std::__ndk1::ctype<char> + 0x10
data_24bb708 = 0
var_90 = std::__ndk1::ctype<char>::id
int64_t (* const var_88_2)() = std::__ndk1::locale::id::__init
int64_t var_80_2 = 0

if (*std::__ndk1::ctype<char>::id != -1)
    var_78 = &var_70
    var_70 = &var_90
    std::__ndk1::__call_once(std::__ndk1::ctype<char>::id, &var_78, sub_10dd4b0)

int64_t x22_2 = sx.q(*(std::__ndk1::ctype<char>::id + 8)) - 1
std::__ndk1::__shared_count::__add_shared()
int128_t* x8_11 = arg1[2]
int64_t x10_3 = (arg1[3] - x8_11) s>> 3

if (x10_3 u<= x22_2)
    if (x22_2 + 1 u> x10_3)
        sub_10dd360(&arg1[2], x22_2 + 1 - x10_3)
        x8_11 = arg1[2]
    else if (x22_2 + 1 u< x10_3)
        arg1[3] = x8_11 + ((x22_2 + 1) << 3)

if (*(x8_11 + (x22_2 << 3)) != 0)
    std::__ndk1::__shared_count::__release_shared()
    x8_11 = arg1[2]

*(x8_11 + (x22_2 << 3)) = &data_24bb700
var_90 = std::__ndk1::ctype<wchar_t>::id
int64_t (* const var_88_3)() = std::__ndk1::locale::id::__init
data_24bb720 = _vtable_for_std::__ndk1::ctype<wchar_t> + 0x10
data_24bb728 = 0
int64_t var_80_3 = 0

if (*std::__ndk1::ctype<wchar_t>::id != -1)
    var_78 = &var_70
    var_70 = &var_90
    std::__ndk1::__call_once(std::__ndk1::ctype<wchar_t>::id, &var_78, sub_10dd4b0)

int64_t x22_3 = sx.q(*(std::__ndk1::ctype<wchar_t>::id + 8)) - 1
std::__ndk1::__shared_count::__add_shared()
int128_t* x8_14 = arg1[2]
int64_t x10_4 = (arg1[3] - x8_14) s>> 3

if (x10_4 u<= x22_3)
    if (x22_3 + 1 u> x10_4)
        sub_10dd360(&arg1[2], x22_3 + 1 - x10_4)
        x8_14 = arg1[2]
    else if (x22_3 + 1 u< x10_4)
        arg1[3] = x8_14 + ((x22_3 + 1) << 3)

if (*(x8_14 + (x22_3 << 3)) != 0)
    std::__ndk1::__shared_count::__release_shared()
    x8_14 = arg1[2]

*(x8_14 + (x22_3 << 3)) = &data_24bb720
var_90 = std::__ndk1::codecvt<char, char, mbstate_t>::id
int64_t (* const var_88_4)() = std::__ndk1::locale::id::__init
data_24bb730 = _vtable_for_std::__ndk1::codecvt<char, char, mbstate_t> + 0x10
data_24bb738 = 0
int64_t var_80_4 = 0

if (*std::__ndk1::codecvt<char, char, mbstate_t>::id != -1)
    var_78 = &var_70
    var_70 = &var_90
    std::__ndk1::__call_once(std::__ndk1::codecvt<char, char, mbstate_t>::id, &var_78, sub_10dd4b0)

int64_t x22_4 = sx.q(*(std::__ndk1::codecvt<char, char, mbstate_t>::id + 8)) - 1
std::__ndk1::__shared_count::__add_shared()
int128_t* x8_17 = arg1[2]
int64_t x10_5 = (arg1[3] - x8_17) s>> 3

if (x10_5 u<= x22_4)
    if (x22_4 + 1 u> x10_5)
        sub_10dd360(&arg1[2], x22_4 + 1 - x10_5)
        x8_17 = arg1[2]
    else if (x22_4 + 1 u< x10_5)
        arg1[3] = x8_17 + ((x22_4 + 1) << 3)

if (*(x8_17 + (x22_4 << 3)) != 0)
    std::__ndk1::__shared_count::__release_shared()
    x8_17 = arg1[2]

*(x8_17 + (x22_4 << 3)) = &data_24bb730
data_24bb740 = _vtable_for_std::__ndk1::codecvt<wchar_t, char, mbstate_t> + 0x10
data_24bb748 = 0

if ((zx.d(data_24bad08) & 1) == 0 && __cxa_guard_acquire(&data_24bad08) != 0)
    data_24bad00 = newlocale(0x1fbf, 0x739c3c, nullptr)
    __cxa_guard_release(&data_24bad08)

data_24bb750 = data_24bad00
int64_t var_80_5 = 0
var_90 = std::__ndk1::codecvt<wchar_t, char, mbstate_t>::id
int64_t (* const var_88_5)() = std::__ndk1::locale::id::__init

if (*std::__ndk1::codecvt<wchar_t, char, mbstate_t>::id != -1)
    var_78 = &var_70
    var_70 = &var_90
    std::__ndk1::__call_once(std::__ndk1::codecvt<wchar_t, char, mbstate_t>::id, &var_78, 
        sub_10dd4b0)

int64_t x22_5 = sx.q(*(std::__ndk1::codecvt<wchar_t, char, mbstate_t>::id + 8)) - 1
std::__ndk1::__shared_count::__add_shared()
int128_t* x8_22 = arg1[2]
int64_t x10_6 = (arg1[3] - x8_22) s>> 3

if (x10_6 u<= x22_5)
    if (x22_5 + 1 u> x10_6)
        sub_10dd360(&arg1[2], x22_5 + 1 - x10_6)
        x8_22 = arg1[2]
    else if (x22_5 + 1 u< x10_6)
        arg1[3] = x8_22 + ((x22_5 + 1) << 3)

if (*(x8_22 + (x22_5 << 3)) != 0)
    std::__ndk1::__shared_count::__release_shared()
    x8_22 = arg1[2]

*(x8_22 + (x22_5 << 3)) = &data_24bb740
var_90 = std::__ndk1::codecvt<char16_t, char, mbstate_t>::id
int64_t (* const var_88_6)() = std::__ndk1::locale::id::__init
data_24bb760 = _vtable_for_std::__ndk1::codecvt<char16_t, char, mbstate_t> + 0x10
data_24bb768 = 0
int64_t var_80_6 = 0

if (*std::__ndk1::codecvt<char16_t, char, mbstate_t>::id != -1)
    var_78 = &var_70
    var_70 = &var_90
    std::__ndk1::__call_once(std::__ndk1::codecvt<char16_t, char, mbstate_t>::id, &var_78, 
        sub_10dd4b0)

int64_t x22_6 = sx.q(*(std::__ndk1::codecvt<char16_t, char, mbstate_t>::id + 8)) - 1
std::__ndk1::__shared_count::__add_shared()
int128_t* x8_25 = arg1[2]
int64_t x10_7 = (arg1[3] - x8_25) s>> 3

if (x10_7 u<= x22_6)
    if (x22_6 + 1 u> x10_7)
        sub_10dd360(&arg1[2], x22_6 + 1 - x10_7)
        x8_25 = arg1[2]
    else if (x22_6 + 1 u< x10_7)
        arg1[3] = x8_25 + ((x22_6 + 1) << 3)

if (*(x8_25 + (x22_6 << 3)) != 0)
    std::__ndk1::__shared_count::__release_shared()
    x8_25 = arg1[2]

*(x8_25 + (x22_6 << 3)) = &data_24bb760
var_90 = std::__ndk1::codecvt<char32_t, char, mbstate_t>::id
int64_t (* const var_88_7)() = std::__ndk1::locale::id::__init
data_24bb770 = _vtable_for_std::__ndk1::codecvt<char32_t, char, mbstate_t> + 0x10
data_24bb778 = 0
int64_t var_80_7 = 0

if (*std::__ndk1::codecvt<char32_t, char, mbstate_t>::id != -1)
    var_78 = &var_70
    var_70 = &var_90
    std::__ndk1::__call_once(std::__ndk1::codecvt<char32_t, char, mbstate_t>::id, &var_78, 
        sub_10dd4b0)

int64_t x22_7 = sx.q(*(std::__ndk1::codecvt<char32_t, char, mbstate_t>::id + 8)) - 1
std::__ndk1::__shared_count::__add_shared()
int128_t* x8_28 = arg1[2]
int64_t x10_8 = (arg1[3] - x8_28) s>> 3

if (x10_8 u<= x22_7)
    if (x22_7 + 1 u> x10_8)
        sub_10dd360(&arg1[2], x22_7 + 1 - x10_8)
        x8_28 = arg1[2]
    else if (x22_7 + 1 u< x10_8)
        arg1[3] = x8_28 + ((x22_7 + 1) << 3)

if (*(x8_28 + (x22_7 << 3)) != 0)
    std::__ndk1::__shared_count::__release_shared()
    x8_28 = arg1[2]

*(x8_28 + (x22_7 << 3)) = &data_24bb770
data_24bb790 = 0x2c2e
__builtin_memset(&data_24bb798, 0, 0x18)
var_90 = std::__ndk1::numpunct<char>::id
int64_t (* const var_88_8)() = std::__ndk1::locale::id::__init
data_24bb780 = _vtable_for_std::__ndk1::numpunct<char> + 0x10
data_24bb788 = 0
int64_t var_80_8 = 0

if (*std::__ndk1::numpunct<char>::id != -1)
    var_78 = &var_70
    var_70 = &var_90
    std::__ndk1::__call_once(std::__ndk1::numpunct<char>::id, &var_78, sub_10dd4b0)

int64_t x22_8 = sx.q(*(std::__ndk1::numpunct<char>::id + 8)) - 1
std::__ndk1::__shared_count::__add_shared()
int128_t* x8_31 = arg1[2]
int64_t x10_9 = (arg1[3] - x8_31) s>> 3

if (x10_9 u<= x22_8)
    if (x22_8 + 1 u> x10_9)
        sub_10dd360(&arg1[2], x22_8 + 1 - x10_9)
        x8_31 = arg1[2]
    else if (x22_8 + 1 u< x10_9)
        arg1[3] = x8_31 + ((x22_8 + 1) << 3)

if (*(x8_31 + (x22_8 << 3)) != 0)
    std::__ndk1::__shared_count::__release_shared()
    x8_31 = arg1[2]

*(x8_31 + (x22_8 << 3)) = &data_24bb780
__builtin_memset(&data_24bb7c8, 0, 0x18)
var_90 = std::__ndk1::numpunct<wchar_t>::id
int64_t (* const var_88_9)() = std::__ndk1::locale::id::__init
data_24bb7b0 = _vtable_for_std::__ndk1::numpunct<wchar_t> + 0x10
data_24bb7b8 = 0
data_24bb7c0 = 0x2c0000002e
int64_t var_80_9 = 0

if (*std::__ndk1::numpunct<wchar_t>::id != -1)
    var_78 = &var_70
    var_70 = &var_90
    std::__ndk1::__call_once(std::__ndk1::numpunct<wchar_t>::id, &var_78, sub_10dd4b0)

int64_t x22_9 = sx.q(*(std::__ndk1::numpunct<wchar_t>::id + 8)) - 1
std::__ndk1::__shared_count::__add_shared()
int128_t* x8_34 = arg1[2]
int64_t x10_10 = (arg1[3] - x8_34) s>> 3

if (x10_10 u<= x22_9)
    if (x22_9 + 1 u> x10_10)
        sub_10dd360(&arg1[2], x22_9 + 1 - x10_10)
        x8_34 = arg1[2]
    else if (x22_9 + 1 u< x10_10)
        arg1[3] = x8_34 + ((x22_9 + 1) << 3)

if (*(x8_34 + (x22_9 << 3)) != 0)
    std::__ndk1::__shared_count::__release_shared()
    x8_34 = arg1[2]

*(x8_34 + (x22_9 << 3)) = &data_24bb7b0
var_90 = std::__ndk1::num_get<char, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> > >::id
int64_t (* const var_88_10)() = std::__ndk1::locale::id::__init
data_24bb7e0 = _vtable_for_std::__ndk1::num_get<char, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> > >
    + 0x10
data_24bb7e8 = 0
int64_t var_80_10 = 0

if (*std::__ndk1::num_get<char, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> > >::id
        != -1)
    var_78 = &var_70
    var_70 = &var_90
    std::__ndk1::__call_once(
        std::__ndk1::num_get<char, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> > >::id, 
        &var_78, sub_10dd4b0)

int64_t x22_10 = sx.q(*(std::__ndk1::num_get<char, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> > >::id
    + 8)) - 1
std::__ndk1::__shared_count::__add_shared()
int128_t* x8_37 = arg1[2]
int64_t x10_11 = (arg1[3] - x8_37) s>> 3

if (x10_11 u<= x22_10)
    if (x22_10 + 1 u> x10_11)
        sub_10dd360(&arg1[2], x22_10 + 1 - x10_11)
        x8_37 = arg1[2]
    else if (x22_10 + 1 u< x10_11)
        arg1[3] = x8_37 + ((x22_10 + 1) << 3)

if (*(x8_37 + (x22_10 << 3)) != 0)
    std::__ndk1::__shared_count::__release_shared()
    x8_37 = arg1[2]

*(x8_37 + (x22_10 << 3)) = &data_24bb7e0
var_90 = std::__ndk1::num_get<wchar_t, std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> > >::id
int64_t (* const var_88_11)() = std::__ndk1::locale::id::__init
data_24bb7f0 = _vtable_for_std::__ndk1::num_get<wchar_t, std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> > >
    + 0x10
data_24bb7f8 = 0
int64_t var_80_11 = 0

if (*std::__ndk1::num_get<wchar_t, std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> > >::id
        != -1)
    var_78 = &var_70
    var_70 = &var_90
    std::__ndk1::__call_once(
        std::__ndk1::num_get<wchar_t, std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> > >::id, 
        &var_78, sub_10dd4b0)

int64_t x22_11 = sx.q(*(std::__ndk1::num_get<wchar_t, std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> > >::id
    + 8)) - 1
std::__ndk1::__shared_count::__add_shared()
int128_t* x8_40 = arg1[2]
int64_t x10_12 = (arg1[3] - x8_40) s>> 3

if (x10_12 u<= x22_11)
    if (x22_11 + 1 u> x10_12)
        sub_10dd360(&arg1[2], x22_11 + 1 - x10_12)
        x8_40 = arg1[2]
    else if (x22_11 + 1 u< x10_12)
        arg1[3] = x8_40 + ((x22_11 + 1) << 3)

if (*(x8_40 + (x22_11 << 3)) != 0)
    std::__ndk1::__shared_count::__release_shared()
    x8_40 = arg1[2]

*(x8_40 + (x22_11 << 3)) = &data_24bb7f0
var_90 = std::__ndk1::num_put<char, std::__ndk1::ostreambuf_iterator<char, std::__ndk1::char_traits<char> > >::id
int64_t (* const var_88_12)() = std::__ndk1::locale::id::__init
data_24bb800 = _vtable_for_std::__ndk1::num_put<char, std::__ndk1::ostreambuf_iterator<char, std::__ndk1::char_traits<char> > >
    + 0x10
data_24bb808 = 0
int64_t var_80_12 = 0

if (*std::__ndk1::num_put<char, std::__ndk1::ostreambuf_iterator<char, std::__ndk1::char_traits<char> > >::id
        != -1)
    var_78 = &var_70
    var_70 = &var_90
    std::__ndk1::__call_once(
        std::__ndk1::num_put<char, std::__ndk1::ostreambuf_iterator<char, std::__ndk1::char_traits<char> > >::id, 
        &var_78, sub_10dd4b0)

int64_t x22_12 = sx.q(*(std::__ndk1::num_put<char, std::__ndk1::ostreambuf_iterator<char, std::__ndk1::char_traits<char> > >::id
    + 8)) - 1
std::__ndk1::__shared_count::__add_shared()
int128_t* x8_43 = arg1[2]
int64_t x10_13 = (arg1[3] - x8_43) s>> 3

if (x10_13 u<= x22_12)
    if (x22_12 + 1 u> x10_13)
        sub_10dd360(&arg1[2], x22_12 + 1 - x10_13)
        x8_43 = arg1[2]
    else if (x22_12 + 1 u< x10_13)
        arg1[3] = x8_43 + ((x22_12 + 1) << 3)

if (*(x8_43 + (x22_12 << 3)) != 0)
    std::__ndk1::__shared_count::__release_shared()
    x8_43 = arg1[2]

*(x8_43 + (x22_12 << 3)) = &data_24bb800
var_90 = std::__ndk1::num_put<wchar_t, std::__ndk1::ostreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> > >::id
int64_t (* const var_88_13)() = std::__ndk1::locale::id::__init
data_24bb810 = _vtable_for_std::__ndk1::num_put<wchar_t, std::__ndk1::ostreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> > >
    + 0x10
data_24bb818 = 0
int64_t var_80_13 = 0

if (*std::__ndk1::num_put<wchar_t, std::__ndk1::ostreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> > >::id
        != -1)
    var_78 = &var_70
    var_70 = &var_90
    std::__ndk1::__call_once(
        std::__ndk1::num_put<wchar_t, std::__ndk1::ostreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> > >::id, 
        &var_78, sub_10dd4b0)

int64_t x22_13 = sx.q(*(std::__ndk1::num_put<wchar_t, std::__ndk1::ostreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> > >::id
    + 8)) - 1
std::__ndk1::__shared_count::__add_shared()
int128_t* x8_46 = arg1[2]
int64_t x10_14 = (arg1[3] - x8_46) s>> 3

if (x10_14 u<= x22_13)
    if (x22_13 + 1 u> x10_14)
        sub_10dd360(&arg1[2], x22_13 + 1 - x10_14)
        x8_46 = arg1[2]
    else if (x22_13 + 1 u< x10_14)
        arg1[3] = x8_46 + ((x22_13 + 1) << 3)

if (*(x8_46 + (x22_13 << 3)) != 0)
    std::__ndk1::__shared_count::__release_shared()
    x8_46 = arg1[2]

*(x8_46 + (x22_13 << 3)) = &data_24bb810
var_90 = std::__ndk1::moneypunct<char, false>::id
int64_t (* const var_88_14)() = std::__ndk1::locale::id::__init
data_24bb820 = _vtable_for_std::__ndk1::moneypunct<char, false> + 0x10
data_24bb828 = 0
int64_t var_80_14 = 0

if (*std::__ndk1::moneypunct<char, false>::id != -1)
    var_78 = &var_70
    var_70 = &var_90
    std::__ndk1::__call_once(std::__ndk1::moneypunct<char, false>::id, &var_78, sub_10dd4b0)

int64_t x22_14 = sx.q(*(std::__ndk1::moneypunct<char, false>::id + 8)) - 1
std::__ndk1::__shared_count::__add_shared()
int128_t* x8_49 = arg1[2]
int64_t x10_15 = (arg1[3] - x8_49) s>> 3

if (x10_15 u<= x22_14)
    if (x22_14 + 1 u> x10_15)
        sub_10dd360(&arg1[2], x22_14 + 1 - x10_15)
        x8_49 = arg1[2]
    else if (x22_14 + 1 u< x10_15)
        arg1[3] = x8_49 + ((x22_14 + 1) << 3)

if (*(x8_49 + (x22_14 << 3)) != 0)
    std::__ndk1::__shared_count::__release_shared()
    x8_49 = arg1[2]

*(x8_49 + (x22_14 << 3)) = &data_24bb820
var_90 = std::__ndk1::moneypunct<char, true>::id
int64_t (* const var_88_15)() = std::__ndk1::locale::id::__init
data_24bb830 = _vtable_for_std::__ndk1::moneypunct<char, true> + 0x10
data_24bb838 = 0
int64_t var_80_15 = 0

if (*std::__ndk1::moneypunct<char, true>::id != -1)
    var_78 = &var_70
    var_70 = &var_90
    std::__ndk1::__call_once(std::__ndk1::moneypunct<char, true>::id, &var_78, sub_10dd4b0)

int64_t x22_15 = sx.q(*(std::__ndk1::moneypunct<char, true>::id + 8)) - 1
std::__ndk1::__shared_count::__add_shared()
int128_t* x8_52 = arg1[2]
int64_t x10_16 = (arg1[3] - x8_52) s>> 3

if (x10_16 u<= x22_15)
    if (x22_15 + 1 u> x10_16)
        sub_10dd360(&arg1[2], x22_15 + 1 - x10_16)
        x8_52 = arg1[2]
    else if (x22_15 + 1 u< x10_16)
        arg1[3] = x8_52 + ((x22_15 + 1) << 3)

if (*(x8_52 + (x22_15 << 3)) != 0)
    std::__ndk1::__shared_count::__release_shared()
    x8_52 = arg1[2]

*(x8_52 + (x22_15 << 3)) = &data_24bb830
var_90 = std::__ndk1::moneypunct<wchar_t, false>::id
int64_t (* const var_88_16)() = std::__ndk1::locale::id::__init
data_24bb840 = _vtable_for_std::__ndk1::moneypunct<wchar_t, false> + 0x10
data_24bb848 = 0
int64_t var_80_16 = 0

if (*std::__ndk1::moneypunct<wchar_t, false>::id != -1)
    var_78 = &var_70
    var_70 = &var_90
    std::__ndk1::__call_once(std::__ndk1::moneypunct<wchar_t, false>::id, &var_78, sub_10dd4b0)

int64_t x22_16 = sx.q(*(std::__ndk1::moneypunct<wchar_t, false>::id + 8)) - 1
std::__ndk1::__shared_count::__add_shared()
int128_t* x8_55 = arg1[2]
int64_t x10_17 = (arg1[3] - x8_55) s>> 3

if (x10_17 u<= x22_16)
    if (x22_16 + 1 u> x10_17)
        sub_10dd360(&arg1[2], x22_16 + 1 - x10_17)
        x8_55 = arg1[2]
    else if (x22_16 + 1 u< x10_17)
        arg1[3] = x8_55 + ((x22_16 + 1) << 3)

if (*(x8_55 + (x22_16 << 3)) != 0)
    std::__ndk1::__shared_count::__release_shared()
    x8_55 = arg1[2]

*(x8_55 + (x22_16 << 3)) = &data_24bb840
var_90 = std::__ndk1::moneypunct<wchar_t, true>::id
int64_t (* const var_88_17)() = std::__ndk1::locale::id::__init
data_24bb850 = _vtable_for_std::__ndk1::moneypunct<wchar_t, true> + 0x10
data_24bb858 = 0
int64_t var_80_17 = 0

if (*std::__ndk1::moneypunct<wchar_t, true>::id != -1)
    var_78 = &var_70
    var_70 = &var_90
    std::__ndk1::__call_once(std::__ndk1::moneypunct<wchar_t, true>::id, &var_78, sub_10dd4b0)

int64_t x22_17 = sx.q(*(std::__ndk1::moneypunct<wchar_t, true>::id + 8)) - 1
std::__ndk1::__shared_count::__add_shared()
int128_t* x8_58 = arg1[2]
int64_t x10_18 = (arg1[3] - x8_58) s>> 3

if (x10_18 u<= x22_17)
    if (x22_17 + 1 u> x10_18)
        sub_10dd360(&arg1[2], x22_17 + 1 - x10_18)
        x8_58 = arg1[2]
    else if (x22_17 + 1 u< x10_18)
        arg1[3] = x8_58 + ((x22_17 + 1) << 3)

if (*(x8_58 + (x22_17 << 3)) != 0)
    std::__ndk1::__shared_count::__release_shared()
    x8_58 = arg1[2]

*(x8_58 + (x22_17 << 3)) = &data_24bb850
var_90 = std::__ndk1::money_get<char, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> > >::id
int64_t (* const var_88_18)() = std::__ndk1::locale::id::__init
data_24bb860 = _vtable_for_std::__ndk1::money_get<char, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> > >
    + 0x10
data_24bb868 = 0
int64_t var_80_18 = 0

if (*std::__ndk1::money_get<char, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> > >::id
        != -1)
    var_78 = &var_70
    var_70 = &var_90
    std::__ndk1::__call_once(
        std::__ndk1::money_get<char, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> > >::id, 
        &var_78, sub_10dd4b0)

int64_t x22_18 = sx.q(*(std::__ndk1::money_get<char, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> > >::id
    + 8)) - 1
std::__ndk1::__shared_count::__add_shared()
int128_t* x8_61 = arg1[2]
int64_t x10_19 = (arg1[3] - x8_61) s>> 3

if (x10_19 u<= x22_18)
    if (x22_18 + 1 u> x10_19)
        sub_10dd360(&arg1[2], x22_18 + 1 - x10_19)
        x8_61 = arg1[2]
    else if (x22_18 + 1 u< x10_19)
        arg1[3] = x8_61 + ((x22_18 + 1) << 3)

if (*(x8_61 + (x22_18 << 3)) != 0)
    std::__ndk1::__shared_count::__release_shared()
    x8_61 = arg1[2]

*(x8_61 + (x22_18 << 3)) = &data_24bb860
var_90 = std::__ndk1::money_get<wchar_t, std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> > >::id
int64_t (* const var_88_19)() = std::__ndk1::locale::id::__init
data_24bb870 = _vtable_for_std::__ndk1::money_get<wchar_t, std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> > >
    + 0x10
data_24bb878 = 0
int64_t var_80_19 = 0

if (*std::__ndk1::money_get<wchar_t, std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> > >::id
        != -1)
    var_78 = &var_70
    var_70 = &var_90
    std::__ndk1::__call_once(
        std::__ndk1::money_get<wchar_t, std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> > >::id, 
        &var_78, sub_10dd4b0)

int64_t x22_19 = sx.q(*(std::__ndk1::money_get<wchar_t, std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> > >::id
    + 8)) - 1
std::__ndk1::__shared_count::__add_shared()
int128_t* x8_64 = arg1[2]
int64_t x10_20 = (arg1[3] - x8_64) s>> 3

if (x10_20 u<= x22_19)
    if (x22_19 + 1 u> x10_20)
        sub_10dd360(&arg1[2], x22_19 + 1 - x10_20)
        x8_64 = arg1[2]
    else if (x22_19 + 1 u< x10_20)
        arg1[3] = x8_64 + ((x22_19 + 1) << 3)

if (*(x8_64 + (x22_19 << 3)) != 0)
    std::__ndk1::__shared_count::__release_shared()
    x8_64 = arg1[2]

*(x8_64 + (x22_19 << 3)) = &data_24bb870
var_90 = std::__ndk1::money_put<char, std::__ndk1::ostreambuf_iterator<char, std::__ndk1::char_traits<char> > >::id
int64_t (* const var_88_20)() = std::__ndk1::locale::id::__init
data_24bb880 = _vtable_for_std::__ndk1::money_put<char, std::__ndk1::ostreambuf_iterator<char, std::__ndk1::char_traits<char> > >
    + 0x10
data_24bb888 = 0
int64_t var_80_20 = 0

if (*std::__ndk1::money_put<char, std::__ndk1::ostreambuf_iterator<char, std::__ndk1::char_traits<char> > >::id
        != -1)
    var_78 = &var_70
    var_70 = &var_90
    std::__ndk1::__call_once(
        std::__ndk1::money_put<char, std::__ndk1::ostreambuf_iterator<char, std::__ndk1::char_traits<char> > >::id, 
        &var_78, sub_10dd4b0)

int64_t x22_20 = sx.q(*(std::__ndk1::money_put<char, std::__ndk1::ostreambuf_iterator<char, std::__ndk1::char_traits<char> > >::id
    + 8)) - 1
std::__ndk1::__shared_count::__add_shared()
int128_t* x8_67 = arg1[2]
int64_t x10_21 = (arg1[3] - x8_67) s>> 3

if (x10_21 u<= x22_20)
    if (x22_20 + 1 u> x10_21)
        sub_10dd360(&arg1[2], x22_20 + 1 - x10_21)
        x8_67 = arg1[2]
    else if (x22_20 + 1 u< x10_21)
        arg1[3] = x8_67 + ((x22_20 + 1) << 3)

if (*(x8_67 + (x22_20 << 3)) != 0)
    std::__ndk1::__shared_count::__release_shared()
    x8_67 = arg1[2]

*(x8_67 + (x22_20 << 3)) = &data_24bb880
var_90 = std::__ndk1::money_put<wchar_t, std::__ndk1::ostreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> > >::id
int64_t (* const var_88_21)() = std::__ndk1::locale::id::__init
data_24bb890 = _vtable_for_std::__ndk1::money_put<wchar_t, std::__ndk1::ostreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> > >
    + 0x10
data_24bb898 = 0
int64_t var_80_21 = 0

if (*std::__ndk1::money_put<wchar_t, std::__ndk1::ostreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> > >::id
        != -1)
    var_78 = &var_70
    var_70 = &var_90
    std::__ndk1::__call_once(
        std::__ndk1::money_put<wchar_t, std::__ndk1::ostreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> > >::id, 
        &var_78, sub_10dd4b0)

int64_t x22_21 = sx.q(*(std::__ndk1::money_put<wchar_t, std::__ndk1::ostreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> > >::id
    + 8)) - 1
std::__ndk1::__shared_count::__add_shared()
int128_t* x8_70 = arg1[2]
int64_t x10_22 = (arg1[3] - x8_70) s>> 3

if (x10_22 u<= x22_21)
    if (x22_21 + 1 u> x10_22)
        sub_10dd360(&arg1[2], x22_21 + 1 - x10_22)
        x8_70 = arg1[2]
    else if (x22_21 + 1 u< x10_22)
        arg1[3] = x8_70 + ((x22_21 + 1) << 3)

if (*(x8_70 + (x22_21 << 3)) != 0)
    std::__ndk1::__shared_count::__release_shared()
    x8_70 = arg1[2]

*(x8_70 + (x22_21 << 3)) = &data_24bb890
var_90 = std::__ndk1::time_get<char, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> > >::id
int64_t (* const var_88_22)() = std::__ndk1::locale::id::__init
data_24bb8a0 = _vtable_for_std::__ndk1::time_get<char, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> > >
    + 0x10
data_24bb8a8 = 0
data_24bb8b0 = _vtable_for_std::__ndk1::time_get<char, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> > >
    + 0x70
int64_t var_80_22 = 0

if (*std::__ndk1::time_get<char, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> > >::id
        != -1)
    var_78 = &var_70
    var_70 = &var_90
    std::__ndk1::__call_once(
        std::__ndk1::time_get<char, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> > >::id, 
        &var_78, sub_10dd4b0)

int64_t x22_22 = sx.q(*(std::__ndk1::time_get<char, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> > >::id
    + 8)) - 1
std::__ndk1::__shared_count::__add_shared()
int128_t* x8_73 = arg1[2]
int64_t x10_24 = (arg1[3] - x8_73) s>> 3

if (x10_24 u<= x22_22)
    if (x22_22 + 1 u> x10_24)
        sub_10dd360(&arg1[2], x22_22 + 1 - x10_24)
        x8_73 = arg1[2]
    else if (x22_22 + 1 u< x10_24)
        arg1[3] = x8_73 + ((x22_22 + 1) << 3)

if (*(x8_73 + (x22_22 << 3)) != 0)
    std::__ndk1::__shared_count::__release_shared()
    x8_73 = arg1[2]

*(x8_73 + (x22_22 << 3)) = &data_24bb8a0
var_90 = std::__ndk1::time_get<wchar_t, std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> > >::id
int64_t (* const var_88_23)() = std::__ndk1::locale::id::__init
data_24bb8c0 = _vtable_for_std::__ndk1::time_get<wchar_t, std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> > >
    + 0x10
data_24bb8c8 = 0
data_24bb8d0 = _vtable_for_std::__ndk1::time_get<wchar_t, std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> > >
    + 0x70
int64_t var_80_23 = 0

if (*std::__ndk1::time_get<wchar_t, std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> > >::id
        != -1)
    var_78 = &var_70
    var_70 = &var_90
    std::__ndk1::__call_once(
        std::__ndk1::time_get<wchar_t, std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> > >::id, 
        &var_78, sub_10dd4b0)

int64_t x22_23 = sx.q(*(std::__ndk1::time_get<wchar_t, std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> > >::id
    + 8)) - 1
std::__ndk1::__shared_count::__add_shared()
int128_t* x8_76 = arg1[2]
int64_t x10_26 = (arg1[3] - x8_76) s>> 3

if (x10_26 u<= x22_23)
    if (x22_23 + 1 u> x10_26)
        sub_10dd360(&arg1[2], x22_23 + 1 - x10_26)
        x8_76 = arg1[2]
    else if (x22_23 + 1 u< x10_26)
        arg1[3] = x8_76 + ((x22_23 + 1) << 3)

if (*(x8_76 + (x22_23 << 3)) != 0)
    std::__ndk1::__shared_count::__release_shared()
    x8_76 = arg1[2]

*(x8_76 + (x22_23 << 3)) = &data_24bb8c0
data_24bb8e0 = _vtable_for_std::__ndk1::locale::facet + 0x10
data_24bb8e8 = 0

if ((zx.d(data_24bad08) & 1) == 0 && __cxa_guard_acquire(&data_24bad08) != 0)
    data_24bad00 = newlocale(0x1fbf, 0x739c3c, nullptr)
    __cxa_guard_release(&data_24bad08)

data_24bb8f0 = data_24bad00
data_24bb8e0 = _vtable_for_std::__ndk1::time_put<char, std::__ndk1::ostreambuf_iterator<char, std::__ndk1::char_traits<char> > >
    + 0x10
var_90 = std::__ndk1::time_put<char, std::__ndk1::ostreambuf_iterator<char, std::__ndk1::char_traits<char> > >::id
int64_t (* const var_88_24)() = std::__ndk1::locale::id::__init
int64_t var_80_24 = 0

if (*std::__ndk1::time_put<char, std::__ndk1::ostreambuf_iterator<char, std::__ndk1::char_traits<char> > >::id
        != -1)
    var_78 = &var_70
    var_70 = &var_90
    std::__ndk1::__call_once(
        std::__ndk1::time_put<char, std::__ndk1::ostreambuf_iterator<char, std::__ndk1::char_traits<char> > >::id, 
        &var_78, sub_10dd4b0)

int64_t x27 = sx.q(*(std::__ndk1::time_put<char, std::__ndk1::ostreambuf_iterator<char, std::__ndk1::char_traits<char> > >::id
    + 8)) - 1
std::__ndk1::__shared_count::__add_shared()
int128_t* x8_82 = arg1[2]
int64_t x10_27 = (arg1[3] - x8_82) s>> 3

if (x10_27 u<= x27)
    if (x27 + 1 u> x10_27)
        sub_10dd360(&arg1[2], x27 + 1 - x10_27)
        x8_82 = arg1[2]
    else if (x27 + 1 u< x10_27)
        arg1[3] = x8_82 + ((x27 + 1) << 3)

if (*(x8_82 + (x27 << 3)) != 0)
    std::__ndk1::__shared_count::__release_shared()
    x8_82 = arg1[2]

*(x8_82 + (x27 << 3)) = &data_24bb8e0
data_24bb900 = _vtable_for_std::__ndk1::locale::facet + 0x10
data_24bb908 = 0

if ((zx.d(data_24bad08) & 1) == 0 && __cxa_guard_acquire(&data_24bad08) != 0)
    data_24bad00 = newlocale(0x1fbf, 0x739c3c, nullptr)
    __cxa_guard_release(&data_24bad08)

data_24bb910 = data_24bad00
data_24bb900 = _vtable_for_std::__ndk1::time_put<wchar_t, std::__ndk1::ostreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> > >
    + 0x10
var_90 = std::__ndk1::time_put<wchar_t, std::__ndk1::ostreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> > >::id
int64_t (* const var_88_25)() = std::__ndk1::locale::id::__init
int64_t var_80_25 = 0

if (*std::__ndk1::time_put<wchar_t, std::__ndk1::ostreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> > >::id
        != -1)
    var_78 = &var_70
    var_70 = &var_90
    std::__ndk1::__call_once(
        std::__ndk1::time_put<wchar_t, std::__ndk1::ostreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> > >::id, 
        &var_78, sub_10dd4b0)

int64_t x22_24 = sx.q(*(std::__ndk1::time_put<wchar_t, std::__ndk1::ostreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> > >::id
    + 8)) - 1
std::__ndk1::__shared_count::__add_shared()
int128_t* x8_88 = arg1[2]
int64_t x10_28 = (arg1[3] - x8_88) s>> 3

if (x10_28 u<= x22_24)
    if (x22_24 + 1 u> x10_28)
        sub_10dd360(&arg1[2], x22_24 + 1 - x10_28)
        x8_88 = arg1[2]
    else if (x22_24 + 1 u< x10_28)
        arg1[3] = x8_88 + ((x22_24 + 1) << 3)

if (*(x8_88 + (x22_24 << 3)) != 0)
    std::__ndk1::__shared_count::__release_shared()
    x8_88 = arg1[2]

*(x8_88 + (x22_24 << 3)) = &data_24bb900
var_90 = std::__ndk1::messages<char>::id
int64_t (* const var_88_26)() = std::__ndk1::locale::id::__init
data_24bb920 = _vtable_for_std::__ndk1::messages<char> + 0x10
data_24bb928 = 0
int64_t var_80_26 = 0

if (*std::__ndk1::messages<char>::id != -1)
    var_78 = &var_70
    var_70 = &var_90
    std::__ndk1::__call_once(std::__ndk1::messages<char>::id, &var_78, sub_10dd4b0)

int64_t x22_25 = sx.q(*(std::__ndk1::messages<char>::id + 8)) - 1
std::__ndk1::__shared_count::__add_shared()
int128_t* x8_91 = arg1[2]
int64_t x10_29 = (arg1[3] - x8_91) s>> 3

if (x10_29 u<= x22_25)
    if (x22_25 + 1 u> x10_29)
        sub_10dd360(&arg1[2], x22_25 + 1 - x10_29)
        x8_91 = arg1[2]
    else if (x22_25 + 1 u< x10_29)
        arg1[3] = x8_91 + ((x22_25 + 1) << 3)

if (*(x8_91 + (x22_25 << 3)) != 0)
    std::__ndk1::__shared_count::__release_shared()
    x8_91 = arg1[2]

*(x8_91 + (x22_25 << 3)) = &data_24bb920
var_90 = std::__ndk1::messages<wchar_t>::id
int64_t (* const var_88_27)() = std::__ndk1::locale::id::__init
data_24bb930 = _vtable_for_std::__ndk1::messages<wchar_t> + 0x10
data_24bb938 = 0
int64_t var_80_27 = 0

if (*std::__ndk1::messages<wchar_t>::id != -1)
    var_78 = &var_70
    var_70 = &var_90
    std::__ndk1::__call_once(std::__ndk1::messages<wchar_t>::id, &var_78, sub_10dd4b0)

int64_t x22_26 = sx.q(*(std::__ndk1::messages<wchar_t>::id + 8)) - 1
std::__ndk1::__shared_count::__add_shared()
int128_t* x8_94 = arg1[2]
int64_t x10_30 = (arg1[3] - x8_94) s>> 3

if (x10_30 u<= x22_26)
    if (x22_26 + 1 u> x10_30)
        sub_10dd360(&arg1[2], x22_26 + 1 - x10_30)
        x8_94 = arg1[2]
    else if (x22_26 + 1 u< x10_30)
        arg1[3] = x8_94 + ((x22_26 + 1) << 3)

int64_t result = *(x8_94 + (x22_26 << 3))

if (result != 0)
    result = std::__ndk1::__shared_count::__release_shared()
    x8_94 = arg1[2]

*(x8_94 + (x22_26 << 3)) = &data_24bb930

if (*(x25 + 0x28) == x10)
    return result

__stack_chk_fail()
noreturn
