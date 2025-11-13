// 函数: sub_10cb19c
// 地址: 0x10cb19c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x27 = _ReadMSR(tpidr_el0)
int64_t x9 = *(x27 + 0x28)
int128_t result
result.q = 0
result:8.q = 0
*arg1 = &_vtable_for_std::__ndk1::locale::__imp{for `std::__ndk1::locale::facet'}
arg1[1] = -1
*(arg1 + 0x30) = zx.o(0)
arg1[2] = &arg1[6]
arg1[0x22].b = 1
arg1[4] = &arg1[0x22]
__builtin_memset(&arg1[8], 0, 0xd0)
arg1[3] = &arg1[0x22]
void* var_98 = &arg1[0x22]
arg1[0x24].w = 0x2a02
*(arg1 + 0x122) = 0

if (arg1 != arg2)
    result = sub_10dd1d8(&arg1[2], *(arg2 + 0x10), *(arg2 + 0x18))

int64_t x8_2 = arg1[3]
int128_t* x9_1 = arg1[2]

if (x8_2 != x9_1)
    uint64_t i = 0
    int32_t i_1 = 1
    
    do
        if (*(x9_1 + (i << 3)) != 0)
            result = std::__ndk1::__shared_count::__add_shared()
            x8_2 = arg1[3]
            x9_1 = arg1[2]
        
        i = zx.q(i_1)
        i_1 += 1
    while (i u< (x8_2 - x9_1) s>> 3)

int64_t (* const var_90)()
int64_t (* const** var_78)()
int64_t (* const* var_70)()

if ((arg4 & 8) != 0)
    int64_t var_80_1 = 0
    var_90 = std::__ndk1::collate<char>::id
    int64_t (* const var_88_1)() = std::__ndk1::locale::id::__init
    
    if (*std::__ndk1::collate<char>::id != -1)
        var_78 = &var_70
        var_70 = &var_90
        std::__ndk1::__call_once(std::__ndk1::collate<char>::id, &var_78, sub_10dd4b0)
    
    int64_t x8_4 = *(arg3 + 0x10)
    int64_t x24_1 = sx.q(*(std::__ndk1::collate<char>::id + 8)) - 1
    int64_t x23_1
    
    if (x24_1 u< (*(arg3 + 0x18) - x8_4) s>> 3)
        x23_1 = *(x8_4 + (x24_1 << 3))
    
    if (x24_1 u>= (*(arg3 + 0x18) - x8_4) s>> 3 || x23_1 == 0)
        sub_f43870()
        noreturn
    
    std::__ndk1::__shared_count::__add_shared()
    int128_t* x8_5 = arg1[2]
    int64_t x10_2 = (arg1[3] - x8_5) s>> 3
    
    if (x10_2 u<= x24_1)
        if (x24_1 + 1 u> x10_2)
            sub_10dd360(&arg1[2], x24_1 + 1 - x10_2)
            x8_5 = arg1[2]
        else if (x24_1 + 1 u< x10_2)
            arg1[3] = x8_5 + ((x24_1 + 1) << 3)
    
    if (*(x8_5 + (x24_1 << 3)) != 0)
        std::__ndk1::__shared_count::__release_shared()
        x8_5 = arg1[2]
    
    *(x8_5 + (x24_1 << 3)) = x23_1
    int64_t var_80_2 = 0
    var_90 = std::__ndk1::collate<wchar_t>::id
    int64_t (* const var_88_2)() = std::__ndk1::locale::id::__init
    
    if (*std::__ndk1::collate<wchar_t>::id != -1)
        var_78 = &var_70
        var_70 = &var_90
        std::__ndk1::__call_once(std::__ndk1::collate<wchar_t>::id, &var_78, sub_10dd4b0)
    
    int64_t x8_7 = *(arg3 + 0x10)
    int64_t x24_2 = sx.q(*(std::__ndk1::collate<wchar_t>::id + 8)) - 1
    int64_t x23_2
    
    if (x24_2 u< (*(arg3 + 0x18) - x8_7) s>> 3)
        x23_2 = *(x8_7 + (x24_2 << 3))
    
    if (x24_2 u>= (*(arg3 + 0x18) - x8_7) s>> 3 || x23_2 == 0)
        sub_f43870()
        noreturn
    
    result = std::__ndk1::__shared_count::__add_shared()
    int128_t* x8_8 = arg1[2]
    int64_t x10_4 = (arg1[3] - x8_8) s>> 3
    
    if (x10_4 u<= x24_2)
        if (x24_2 + 1 u> x10_4)
            result = sub_10dd360(&arg1[2], x24_2 + 1 - x10_4)
            x8_8 = arg1[2]
        else if (x24_2 + 1 u< x10_4)
            arg1[3] = x8_8 + ((x24_2 + 1) << 3)
    
    if (*(x8_8 + (x24_2 << 3)) != 0)
        result = std::__ndk1::__shared_count::__release_shared()
        x8_8 = arg1[2]
    
    *(x8_8 + (x24_2 << 3)) = x23_2

if ((arg4 & 1) != 0)
    int64_t var_80_3 = 0
    var_90 = std::__ndk1::ctype<char>::id
    int64_t (* const var_88_3)() = std::__ndk1::locale::id::__init
    
    if (*std::__ndk1::ctype<char>::id != -1)
        var_78 = &var_70
        var_70 = &var_90
        std::__ndk1::__call_once(std::__ndk1::ctype<char>::id, &var_78, sub_10dd4b0)
    
    int64_t x8_10 = *(arg3 + 0x10)
    int64_t x24_3 = sx.q(*(std::__ndk1::ctype<char>::id + 8)) - 1
    int64_t x23_3
    
    if (x24_3 u< (*(arg3 + 0x18) - x8_10) s>> 3)
        x23_3 = *(x8_10 + (x24_3 << 3))
    
    if (x24_3 u>= (*(arg3 + 0x18) - x8_10) s>> 3 || x23_3 == 0)
        sub_f43870()
        noreturn
    
    std::__ndk1::__shared_count::__add_shared()
    int128_t* x8_11 = arg1[2]
    int64_t x10_6 = (arg1[3] - x8_11) s>> 3
    
    if (x10_6 u<= x24_3)
        if (x24_3 + 1 u> x10_6)
            sub_10dd360(&arg1[2], x24_3 + 1 - x10_6)
            x8_11 = arg1[2]
        else if (x24_3 + 1 u< x10_6)
            arg1[3] = x8_11 + ((x24_3 + 1) << 3)
    
    if (*(x8_11 + (x24_3 << 3)) != 0)
        std::__ndk1::__shared_count::__release_shared()
        x8_11 = arg1[2]
    
    *(x8_11 + (x24_3 << 3)) = x23_3
    int64_t var_80_4 = 0
    var_90 = std::__ndk1::ctype<wchar_t>::id
    int64_t (* const var_88_4)() = std::__ndk1::locale::id::__init
    
    if (*std::__ndk1::ctype<wchar_t>::id != -1)
        var_78 = &var_70
        var_70 = &var_90
        std::__ndk1::__call_once(std::__ndk1::ctype<wchar_t>::id, &var_78, sub_10dd4b0)
    
    int64_t x8_13 = *(arg3 + 0x10)
    int64_t x24_4 = sx.q(*(std::__ndk1::ctype<wchar_t>::id + 8)) - 1
    int64_t x23_4
    
    if (x24_4 u< (*(arg3 + 0x18) - x8_13) s>> 3)
        x23_4 = *(x8_13 + (x24_4 << 3))
    
    if (x24_4 u>= (*(arg3 + 0x18) - x8_13) s>> 3 || x23_4 == 0)
        sub_f43870()
        noreturn
    
    std::__ndk1::__shared_count::__add_shared()
    int128_t* x8_14 = arg1[2]
    int64_t x10_8 = (arg1[3] - x8_14) s>> 3
    
    if (x10_8 u<= x24_4)
        if (x24_4 + 1 u> x10_8)
            sub_10dd360(&arg1[2], x24_4 + 1 - x10_8)
            x8_14 = arg1[2]
        else if (x24_4 + 1 u< x10_8)
            arg1[3] = x8_14 + ((x24_4 + 1) << 3)
    
    if (*(x8_14 + (x24_4 << 3)) != 0)
        std::__ndk1::__shared_count::__release_shared()
        x8_14 = arg1[2]
    
    *(x8_14 + (x24_4 << 3)) = x23_4
    int64_t var_80_5 = 0
    var_90 = std::__ndk1::codecvt<char, char, mbstate_t>::id
    int64_t (* const var_88_5)() = std::__ndk1::locale::id::__init
    
    if (*std::__ndk1::codecvt<char, char, mbstate_t>::id != -1)
        var_78 = &var_70
        var_70 = &var_90
        std::__ndk1::__call_once(std::__ndk1::codecvt<char, char, mbstate_t>::id, &var_78, 
            sub_10dd4b0)
    
    int64_t x8_16 = *(arg3 + 0x10)
    int64_t x24_5 = sx.q(*(std::__ndk1::codecvt<char, char, mbstate_t>::id + 8)) - 1
    int64_t x23_5
    
    if (x24_5 u< (*(arg3 + 0x18) - x8_16) s>> 3)
        x23_5 = *(x8_16 + (x24_5 << 3))
    
    if (x24_5 u>= (*(arg3 + 0x18) - x8_16) s>> 3 || x23_5 == 0)
        sub_f43870()
        noreturn
    
    std::__ndk1::__shared_count::__add_shared()
    int128_t* x8_17 = arg1[2]
    int64_t x10_10 = (arg1[3] - x8_17) s>> 3
    
    if (x10_10 u<= x24_5)
        if (x24_5 + 1 u> x10_10)
            sub_10dd360(&arg1[2], x24_5 + 1 - x10_10)
            x8_17 = arg1[2]
        else if (x24_5 + 1 u< x10_10)
            arg1[3] = x8_17 + ((x24_5 + 1) << 3)
    
    if (*(x8_17 + (x24_5 << 3)) != 0)
        std::__ndk1::__shared_count::__release_shared()
        x8_17 = arg1[2]
    
    *(x8_17 + (x24_5 << 3)) = x23_5
    int64_t var_80_6 = 0
    var_90 = std::__ndk1::codecvt<char16_t, char, mbstate_t>::id
    int64_t (* const var_88_6)() = std::__ndk1::locale::id::__init
    
    if (*std::__ndk1::codecvt<char16_t, char, mbstate_t>::id != -1)
        var_78 = &var_70
        var_70 = &var_90
        std::__ndk1::__call_once(std::__ndk1::codecvt<char16_t, char, mbstate_t>::id, &var_78, 
            sub_10dd4b0)
    
    int64_t x8_19 = *(arg3 + 0x10)
    int64_t x24_6 = sx.q(*(std::__ndk1::codecvt<char16_t, char, mbstate_t>::id + 8)) - 1
    int64_t x23_6
    
    if (x24_6 u< (*(arg3 + 0x18) - x8_19) s>> 3)
        x23_6 = *(x8_19 + (x24_6 << 3))
    
    if (x24_6 u>= (*(arg3 + 0x18) - x8_19) s>> 3 || x23_6 == 0)
        sub_f43870()
        noreturn
    
    std::__ndk1::__shared_count::__add_shared()
    int128_t* x8_20 = arg1[2]
    int64_t x10_12 = (arg1[3] - x8_20) s>> 3
    
    if (x10_12 u<= x24_6)
        if (x24_6 + 1 u> x10_12)
            sub_10dd360(&arg1[2], x24_6 + 1 - x10_12)
            x8_20 = arg1[2]
        else if (x24_6 + 1 u< x10_12)
            arg1[3] = x8_20 + ((x24_6 + 1) << 3)
    
    if (*(x8_20 + (x24_6 << 3)) != 0)
        std::__ndk1::__shared_count::__release_shared()
        x8_20 = arg1[2]
    
    *(x8_20 + (x24_6 << 3)) = x23_6
    int64_t var_80_7 = 0
    var_90 = std::__ndk1::codecvt<char32_t, char, mbstate_t>::id
    int64_t (* const var_88_7)() = std::__ndk1::locale::id::__init
    
    if (*std::__ndk1::codecvt<char32_t, char, mbstate_t>::id != -1)
        var_78 = &var_70
        var_70 = &var_90
        std::__ndk1::__call_once(std::__ndk1::codecvt<char32_t, char, mbstate_t>::id, &var_78, 
            sub_10dd4b0)
    
    int64_t x8_22 = *(arg3 + 0x10)
    int64_t x24_7 = sx.q(*(std::__ndk1::codecvt<char32_t, char, mbstate_t>::id + 8)) - 1
    int64_t x23_7
    
    if (x24_7 u< (*(arg3 + 0x18) - x8_22) s>> 3)
        x23_7 = *(x8_22 + (x24_7 << 3))
    
    if (x24_7 u>= (*(arg3 + 0x18) - x8_22) s>> 3 || x23_7 == 0)
        sub_f43870()
        noreturn
    
    std::__ndk1::__shared_count::__add_shared()
    int128_t* x8_23 = arg1[2]
    int64_t x10_14 = (arg1[3] - x8_23) s>> 3
    
    if (x10_14 u<= x24_7)
        if (x24_7 + 1 u> x10_14)
            sub_10dd360(&arg1[2], x24_7 + 1 - x10_14)
            x8_23 = arg1[2]
        else if (x24_7 + 1 u< x10_14)
            arg1[3] = x8_23 + ((x24_7 + 1) << 3)
    
    if (*(x8_23 + (x24_7 << 3)) != 0)
        std::__ndk1::__shared_count::__release_shared()
        x8_23 = arg1[2]
    
    *(x8_23 + (x24_7 << 3)) = x23_7
    int64_t var_80_8 = 0
    var_90 = std::__ndk1::codecvt<wchar_t, char, mbstate_t>::id
    int64_t (* const var_88_8)() = std::__ndk1::locale::id::__init
    
    if (*std::__ndk1::codecvt<wchar_t, char, mbstate_t>::id != -1)
        var_78 = &var_70
        var_70 = &var_90
        std::__ndk1::__call_once(std::__ndk1::codecvt<wchar_t, char, mbstate_t>::id, &var_78, 
            sub_10dd4b0)
    
    int64_t x8_25 = *(arg3 + 0x10)
    int64_t x24_8 = sx.q(*(std::__ndk1::codecvt<wchar_t, char, mbstate_t>::id + 8)) - 1
    int64_t x23_8
    
    if (x24_8 u< (*(arg3 + 0x18) - x8_25) s>> 3)
        x23_8 = *(x8_25 + (x24_8 << 3))
    
    if (x24_8 u>= (*(arg3 + 0x18) - x8_25) s>> 3 || x23_8 == 0)
        sub_f43870()
        noreturn
    
    result = std::__ndk1::__shared_count::__add_shared()
    int128_t* x8_26 = arg1[2]
    int64_t x10_16 = (arg1[3] - x8_26) s>> 3
    
    if (x10_16 u<= x24_8)
        if (x24_8 + 1 u> x10_16)
            result = sub_10dd360(&arg1[2], x24_8 + 1 - x10_16)
            x8_26 = arg1[2]
        else if (x24_8 + 1 u< x10_16)
            arg1[3] = x8_26 + ((x24_8 + 1) << 3)
    
    if (*(x8_26 + (x24_8 << 3)) != 0)
        result = std::__ndk1::__shared_count::__release_shared()
        x8_26 = arg1[2]
    
    *(x8_26 + (x24_8 << 3)) = x23_8

if ((arg4 & 0x10) != 0)
    int64_t var_80_9 = 0
    var_90 = std::__ndk1::moneypunct<char, false>::id
    int64_t (* const var_88_9)() = std::__ndk1::locale::id::__init
    
    if (*std::__ndk1::moneypunct<char, false>::id != -1)
        var_78 = &var_70
        var_70 = &var_90
        std::__ndk1::__call_once(std::__ndk1::moneypunct<char, false>::id, &var_78, sub_10dd4b0)
    
    int64_t x8_28 = *(arg3 + 0x10)
    int64_t x24_9 = sx.q(*(std::__ndk1::moneypunct<char, false>::id + 8)) - 1
    int64_t x23_9
    
    if (x24_9 u< (*(arg3 + 0x18) - x8_28) s>> 3)
        x23_9 = *(x8_28 + (x24_9 << 3))
    
    if (x24_9 u>= (*(arg3 + 0x18) - x8_28) s>> 3 || x23_9 == 0)
        sub_f43870()
        noreturn
    
    std::__ndk1::__shared_count::__add_shared()
    int128_t* x8_29 = arg1[2]
    int64_t x10_18 = (arg1[3] - x8_29) s>> 3
    
    if (x10_18 u<= x24_9)
        if (x24_9 + 1 u> x10_18)
            sub_10dd360(&arg1[2], x24_9 + 1 - x10_18)
            x8_29 = arg1[2]
        else if (x24_9 + 1 u< x10_18)
            arg1[3] = x8_29 + ((x24_9 + 1) << 3)
    
    if (*(x8_29 + (x24_9 << 3)) != 0)
        std::__ndk1::__shared_count::__release_shared()
        x8_29 = arg1[2]
    
    *(x8_29 + (x24_9 << 3)) = x23_9
    int64_t var_80_10 = 0
    var_90 = std::__ndk1::moneypunct<char, true>::id
    int64_t (* const var_88_10)() = std::__ndk1::locale::id::__init
    
    if (*std::__ndk1::moneypunct<char, true>::id != -1)
        var_78 = &var_70
        var_70 = &var_90
        std::__ndk1::__call_once(std::__ndk1::moneypunct<char, true>::id, &var_78, sub_10dd4b0)
    
    int64_t x8_31 = *(arg3 + 0x10)
    int64_t x24_10 = sx.q(*(std::__ndk1::moneypunct<char, true>::id + 8)) - 1
    int64_t x23_10
    
    if (x24_10 u< (*(arg3 + 0x18) - x8_31) s>> 3)
        x23_10 = *(x8_31 + (x24_10 << 3))
    
    if (x24_10 u>= (*(arg3 + 0x18) - x8_31) s>> 3 || x23_10 == 0)
        sub_f43870()
        noreturn
    
    std::__ndk1::__shared_count::__add_shared()
    int128_t* x8_32 = arg1[2]
    int64_t x10_20 = (arg1[3] - x8_32) s>> 3
    
    if (x10_20 u<= x24_10)
        if (x24_10 + 1 u> x10_20)
            sub_10dd360(&arg1[2], x24_10 + 1 - x10_20)
            x8_32 = arg1[2]
        else if (x24_10 + 1 u< x10_20)
            arg1[3] = x8_32 + ((x24_10 + 1) << 3)
    
    if (*(x8_32 + (x24_10 << 3)) != 0)
        std::__ndk1::__shared_count::__release_shared()
        x8_32 = arg1[2]
    
    *(x8_32 + (x24_10 << 3)) = x23_10
    int64_t var_80_11 = 0
    var_90 = std::__ndk1::moneypunct<wchar_t, false>::id
    int64_t (* const var_88_11)() = std::__ndk1::locale::id::__init
    
    if (*std::__ndk1::moneypunct<wchar_t, false>::id != -1)
        var_78 = &var_70
        var_70 = &var_90
        std::__ndk1::__call_once(std::__ndk1::moneypunct<wchar_t, false>::id, &var_78, sub_10dd4b0)
    
    int64_t x8_34 = *(arg3 + 0x10)
    int64_t x24_11 = sx.q(*(std::__ndk1::moneypunct<wchar_t, false>::id + 8)) - 1
    int64_t x23_11
    
    if (x24_11 u< (*(arg3 + 0x18) - x8_34) s>> 3)
        x23_11 = *(x8_34 + (x24_11 << 3))
    
    if (x24_11 u>= (*(arg3 + 0x18) - x8_34) s>> 3 || x23_11 == 0)
        sub_f43870()
        noreturn
    
    std::__ndk1::__shared_count::__add_shared()
    int128_t* x8_35 = arg1[2]
    int64_t x10_22 = (arg1[3] - x8_35) s>> 3
    
    if (x10_22 u<= x24_11)
        if (x24_11 + 1 u> x10_22)
            sub_10dd360(&arg1[2], x24_11 + 1 - x10_22)
            x8_35 = arg1[2]
        else if (x24_11 + 1 u< x10_22)
            arg1[3] = x8_35 + ((x24_11 + 1) << 3)
    
    if (*(x8_35 + (x24_11 << 3)) != 0)
        std::__ndk1::__shared_count::__release_shared()
        x8_35 = arg1[2]
    
    *(x8_35 + (x24_11 << 3)) = x23_11
    int64_t var_80_12 = 0
    var_90 = std::__ndk1::moneypunct<wchar_t, true>::id
    int64_t (* const var_88_12)() = std::__ndk1::locale::id::__init
    
    if (*std::__ndk1::moneypunct<wchar_t, true>::id != -1)
        var_78 = &var_70
        var_70 = &var_90
        std::__ndk1::__call_once(std::__ndk1::moneypunct<wchar_t, true>::id, &var_78, sub_10dd4b0)
    
    int64_t x8_37 = *(arg3 + 0x10)
    int64_t x24_12 = sx.q(*(std::__ndk1::moneypunct<wchar_t, true>::id + 8)) - 1
    int64_t x23_12
    
    if (x24_12 u< (*(arg3 + 0x18) - x8_37) s>> 3)
        x23_12 = *(x8_37 + (x24_12 << 3))
    
    if (x24_12 u>= (*(arg3 + 0x18) - x8_37) s>> 3 || x23_12 == 0)
        sub_f43870()
        noreturn
    
    std::__ndk1::__shared_count::__add_shared()
    int128_t* x8_38 = arg1[2]
    int64_t x10_24 = (arg1[3] - x8_38) s>> 3
    
    if (x10_24 u<= x24_12)
        if (x24_12 + 1 u> x10_24)
            sub_10dd360(&arg1[2], x24_12 + 1 - x10_24)
            x8_38 = arg1[2]
        else if (x24_12 + 1 u< x10_24)
            arg1[3] = x8_38 + ((x24_12 + 1) << 3)
    
    if (*(x8_38 + (x24_12 << 3)) != 0)
        std::__ndk1::__shared_count::__release_shared()
        x8_38 = arg1[2]
    
    *(x8_38 + (x24_12 << 3)) = x23_12
    int64_t var_80_13 = 0
    var_90 = std::__ndk1::money_get<char, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> > >::id
    int64_t (* const var_88_13)() = std::__ndk1::locale::id::__init
    
    if (*std::__ndk1::money_get<char, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> > >::id
            != -1)
        var_78 = &var_70
        var_70 = &var_90
        std::__ndk1::__call_once(
            std::__ndk1::money_get<char, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> > >::id, 
            &var_78, sub_10dd4b0)
    
    int64_t x8_40 = *(arg3 + 0x10)
    int64_t x24_13 = sx.q(*(std::__ndk1::money_get<char, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> > >::id
        + 8)) - 1
    int64_t x23_13
    
    if (x24_13 u< (*(arg3 + 0x18) - x8_40) s>> 3)
        x23_13 = *(x8_40 + (x24_13 << 3))
    
    if (x24_13 u>= (*(arg3 + 0x18) - x8_40) s>> 3 || x23_13 == 0)
        sub_f43870()
        noreturn
    
    std::__ndk1::__shared_count::__add_shared()
    int128_t* x8_41 = arg1[2]
    int64_t x10_26 = (arg1[3] - x8_41) s>> 3
    
    if (x10_26 u<= x24_13)
        if (x24_13 + 1 u> x10_26)
            sub_10dd360(&arg1[2], x24_13 + 1 - x10_26)
            x8_41 = arg1[2]
        else if (x24_13 + 1 u< x10_26)
            arg1[3] = x8_41 + ((x24_13 + 1) << 3)
    
    if (*(x8_41 + (x24_13 << 3)) != 0)
        std::__ndk1::__shared_count::__release_shared()
        x8_41 = arg1[2]
    
    *(x8_41 + (x24_13 << 3)) = x23_13
    int64_t var_80_14 = 0
    var_90 = std::__ndk1::money_get<wchar_t, std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> > >::id
    int64_t (* const var_88_14)() = std::__ndk1::locale::id::__init
    
    if (*std::__ndk1::money_get<wchar_t, std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> > >::id
            != -1)
        var_78 = &var_70
        var_70 = &var_90
        std::__ndk1::__call_once(
            std::__ndk1::money_get<wchar_t, std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> > >::id, 
            &var_78, sub_10dd4b0)
    
    int64_t x8_43 = *(arg3 + 0x10)
    int64_t x24_14 = sx.q(*(std::__ndk1::money_get<wchar_t, std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> > >::id
        + 8)) - 1
    int64_t x23_14
    
    if (x24_14 u< (*(arg3 + 0x18) - x8_43) s>> 3)
        x23_14 = *(x8_43 + (x24_14 << 3))
    
    if (x24_14 u>= (*(arg3 + 0x18) - x8_43) s>> 3 || x23_14 == 0)
        sub_f43870()
        noreturn
    
    std::__ndk1::__shared_count::__add_shared()
    int128_t* x8_44 = arg1[2]
    int64_t x10_28 = (arg1[3] - x8_44) s>> 3
    
    if (x10_28 u<= x24_14)
        if (x24_14 + 1 u> x10_28)
            sub_10dd360(&arg1[2], x24_14 + 1 - x10_28)
            x8_44 = arg1[2]
        else if (x24_14 + 1 u< x10_28)
            arg1[3] = x8_44 + ((x24_14 + 1) << 3)
    
    if (*(x8_44 + (x24_14 << 3)) != 0)
        std::__ndk1::__shared_count::__release_shared()
        x8_44 = arg1[2]
    
    *(x8_44 + (x24_14 << 3)) = x23_14
    int64_t var_80_15 = 0
    var_90 = std::__ndk1::money_put<char, std::__ndk1::ostreambuf_iterator<char, std::__ndk1::char_traits<char> > >::id
    int64_t (* const var_88_15)() = std::__ndk1::locale::id::__init
    
    if (*std::__ndk1::money_put<char, std::__ndk1::ostreambuf_iterator<char, std::__ndk1::char_traits<char> > >::id
            != -1)
        var_78 = &var_70
        var_70 = &var_90
        std::__ndk1::__call_once(
            std::__ndk1::money_put<char, std::__ndk1::ostreambuf_iterator<char, std::__ndk1::char_traits<char> > >::id, 
            &var_78, sub_10dd4b0)
    
    int64_t x8_46 = *(arg3 + 0x10)
    int64_t x24_15 = sx.q(*(std::__ndk1::money_put<char, std::__ndk1::ostreambuf_iterator<char, std::__ndk1::char_traits<char> > >::id
        + 8)) - 1
    int64_t x23_15
    
    if (x24_15 u< (*(arg3 + 0x18) - x8_46) s>> 3)
        x23_15 = *(x8_46 + (x24_15 << 3))
    
    if (x24_15 u>= (*(arg3 + 0x18) - x8_46) s>> 3 || x23_15 == 0)
        sub_f43870()
        noreturn
    
    std::__ndk1::__shared_count::__add_shared()
    int128_t* x8_47 = arg1[2]
    int64_t x10_30 = (arg1[3] - x8_47) s>> 3
    
    if (x10_30 u<= x24_15)
        if (x24_15 + 1 u> x10_30)
            sub_10dd360(&arg1[2], x24_15 + 1 - x10_30)
            x8_47 = arg1[2]
        else if (x24_15 + 1 u< x10_30)
            arg1[3] = x8_47 + ((x24_15 + 1) << 3)
    
    if (*(x8_47 + (x24_15 << 3)) != 0)
        std::__ndk1::__shared_count::__release_shared()
        x8_47 = arg1[2]
    
    *(x8_47 + (x24_15 << 3)) = x23_15
    int64_t var_80_16 = 0
    var_90 = std::__ndk1::money_put<wchar_t, std::__ndk1::ostreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> > >::id
    int64_t (* const var_88_16)() = std::__ndk1::locale::id::__init
    
    if (*std::__ndk1::money_put<wchar_t, std::__ndk1::ostreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> > >::id
            != -1)
        var_78 = &var_70
        var_70 = &var_90
        std::__ndk1::__call_once(
            std::__ndk1::money_put<wchar_t, std::__ndk1::ostreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> > >::id, 
            &var_78, sub_10dd4b0)
    
    int64_t x8_49 = *(arg3 + 0x10)
    int64_t x24_16 = sx.q(*(std::__ndk1::money_put<wchar_t, std::__ndk1::ostreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> > >::id
        + 8)) - 1
    int64_t x23_16
    
    if (x24_16 u< (*(arg3 + 0x18) - x8_49) s>> 3)
        x23_16 = *(x8_49 + (x24_16 << 3))
    
    if (x24_16 u>= (*(arg3 + 0x18) - x8_49) s>> 3 || x23_16 == 0)
        sub_f43870()
        noreturn
    
    result = std::__ndk1::__shared_count::__add_shared()
    int128_t* x8_50 = arg1[2]
    int64_t x10_32 = (arg1[3] - x8_50) s>> 3
    
    if (x10_32 u<= x24_16)
        if (x24_16 + 1 u> x10_32)
            result = sub_10dd360(&arg1[2], x24_16 + 1 - x10_32)
            x8_50 = arg1[2]
        else if (x24_16 + 1 u< x10_32)
            arg1[3] = x8_50 + ((x24_16 + 1) << 3)
    
    if (*(x8_50 + (x24_16 << 3)) != 0)
        result = std::__ndk1::__shared_count::__release_shared()
        x8_50 = arg1[2]
    
    *(x8_50 + (x24_16 << 3)) = x23_16

if ((arg4 & 2) != 0)
    int64_t var_80_17 = 0
    var_90 = std::__ndk1::numpunct<char>::id
    int64_t (* const var_88_17)() = std::__ndk1::locale::id::__init
    
    if (*std::__ndk1::numpunct<char>::id != -1)
        var_78 = &var_70
        var_70 = &var_90
        std::__ndk1::__call_once(std::__ndk1::numpunct<char>::id, &var_78, sub_10dd4b0)
    
    int64_t x8_52 = *(arg3 + 0x10)
    int64_t x24_17 = sx.q(*(std::__ndk1::numpunct<char>::id + 8)) - 1
    int64_t x23_17
    
    if (x24_17 u< (*(arg3 + 0x18) - x8_52) s>> 3)
        x23_17 = *(x8_52 + (x24_17 << 3))
    
    if (x24_17 u>= (*(arg3 + 0x18) - x8_52) s>> 3 || x23_17 == 0)
        sub_f43870()
        noreturn
    
    std::__ndk1::__shared_count::__add_shared()
    int128_t* x8_53 = arg1[2]
    int64_t x10_34 = (arg1[3] - x8_53) s>> 3
    
    if (x10_34 u<= x24_17)
        if (x24_17 + 1 u> x10_34)
            sub_10dd360(&arg1[2], x24_17 + 1 - x10_34)
            x8_53 = arg1[2]
        else if (x24_17 + 1 u< x10_34)
            arg1[3] = x8_53 + ((x24_17 + 1) << 3)
    
    if (*(x8_53 + (x24_17 << 3)) != 0)
        std::__ndk1::__shared_count::__release_shared()
        x8_53 = arg1[2]
    
    *(x8_53 + (x24_17 << 3)) = x23_17
    int64_t var_80_18 = 0
    var_90 = std::__ndk1::numpunct<wchar_t>::id
    int64_t (* const var_88_18)() = std::__ndk1::locale::id::__init
    
    if (*std::__ndk1::numpunct<wchar_t>::id != -1)
        var_78 = &var_70
        var_70 = &var_90
        std::__ndk1::__call_once(std::__ndk1::numpunct<wchar_t>::id, &var_78, sub_10dd4b0)
    
    int64_t x8_55 = *(arg3 + 0x10)
    int64_t x24_18 = sx.q(*(std::__ndk1::numpunct<wchar_t>::id + 8)) - 1
    int64_t x23_18
    
    if (x24_18 u< (*(arg3 + 0x18) - x8_55) s>> 3)
        x23_18 = *(x8_55 + (x24_18 << 3))
    
    if (x24_18 u>= (*(arg3 + 0x18) - x8_55) s>> 3 || x23_18 == 0)
        sub_f43870()
        noreturn
    
    std::__ndk1::__shared_count::__add_shared()
    int128_t* x8_56 = arg1[2]
    int64_t x10_36 = (arg1[3] - x8_56) s>> 3
    
    if (x10_36 u<= x24_18)
        if (x24_18 + 1 u> x10_36)
            sub_10dd360(&arg1[2], x24_18 + 1 - x10_36)
            x8_56 = arg1[2]
        else if (x24_18 + 1 u< x10_36)
            arg1[3] = x8_56 + ((x24_18 + 1) << 3)
    
    if (*(x8_56 + (x24_18 << 3)) != 0)
        std::__ndk1::__shared_count::__release_shared()
        x8_56 = arg1[2]
    
    *(x8_56 + (x24_18 << 3)) = x23_18
    int64_t var_80_19 = 0
    var_90 = std::__ndk1::num_get<char, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> > >::id
    int64_t (* const var_88_19)() = std::__ndk1::locale::id::__init
    
    if (*std::__ndk1::num_get<char, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> > >::id
            != -1)
        var_78 = &var_70
        var_70 = &var_90
        std::__ndk1::__call_once(
            std::__ndk1::num_get<char, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> > >::id, 
            &var_78, sub_10dd4b0)
    
    int64_t x8_58 = *(arg3 + 0x10)
    int64_t x24_19 = sx.q(*(std::__ndk1::num_get<char, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> > >::id
        + 8)) - 1
    int64_t x23_19
    
    if (x24_19 u< (*(arg3 + 0x18) - x8_58) s>> 3)
        x23_19 = *(x8_58 + (x24_19 << 3))
    
    if (x24_19 u>= (*(arg3 + 0x18) - x8_58) s>> 3 || x23_19 == 0)
        sub_f43870()
        noreturn
    
    std::__ndk1::__shared_count::__add_shared()
    int128_t* x8_59 = arg1[2]
    int64_t x10_38 = (arg1[3] - x8_59) s>> 3
    
    if (x10_38 u<= x24_19)
        if (x24_19 + 1 u> x10_38)
            sub_10dd360(&arg1[2], x24_19 + 1 - x10_38)
            x8_59 = arg1[2]
        else if (x24_19 + 1 u< x10_38)
            arg1[3] = x8_59 + ((x24_19 + 1) << 3)
    
    if (*(x8_59 + (x24_19 << 3)) != 0)
        std::__ndk1::__shared_count::__release_shared()
        x8_59 = arg1[2]
    
    *(x8_59 + (x24_19 << 3)) = x23_19
    int64_t var_80_20 = 0
    var_90 = std::__ndk1::num_get<wchar_t, std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> > >::id
    int64_t (* const var_88_20)() = std::__ndk1::locale::id::__init
    
    if (*std::__ndk1::num_get<wchar_t, std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> > >::id
            != -1)
        var_78 = &var_70
        var_70 = &var_90
        std::__ndk1::__call_once(
            std::__ndk1::num_get<wchar_t, std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> > >::id, 
            &var_78, sub_10dd4b0)
    
    int64_t x8_61 = *(arg3 + 0x10)
    int64_t x24_20 = sx.q(*(std::__ndk1::num_get<wchar_t, std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> > >::id
        + 8)) - 1
    int64_t x23_20
    
    if (x24_20 u< (*(arg3 + 0x18) - x8_61) s>> 3)
        x23_20 = *(x8_61 + (x24_20 << 3))
    
    if (x24_20 u>= (*(arg3 + 0x18) - x8_61) s>> 3 || x23_20 == 0)
        sub_f43870()
        noreturn
    
    std::__ndk1::__shared_count::__add_shared()
    int128_t* x8_62 = arg1[2]
    int64_t x10_40 = (arg1[3] - x8_62) s>> 3
    
    if (x10_40 u<= x24_20)
        if (x24_20 + 1 u> x10_40)
            sub_10dd360(&arg1[2], x24_20 + 1 - x10_40)
            x8_62 = arg1[2]
        else if (x24_20 + 1 u< x10_40)
            arg1[3] = x8_62 + ((x24_20 + 1) << 3)
    
    if (*(x8_62 + (x24_20 << 3)) != 0)
        std::__ndk1::__shared_count::__release_shared()
        x8_62 = arg1[2]
    
    *(x8_62 + (x24_20 << 3)) = x23_20
    int64_t var_80_21 = 0
    var_90 = std::__ndk1::num_put<char, std::__ndk1::ostreambuf_iterator<char, std::__ndk1::char_traits<char> > >::id
    int64_t (* const var_88_21)() = std::__ndk1::locale::id::__init
    
    if (*std::__ndk1::num_put<char, std::__ndk1::ostreambuf_iterator<char, std::__ndk1::char_traits<char> > >::id
            != -1)
        var_78 = &var_70
        var_70 = &var_90
        std::__ndk1::__call_once(
            std::__ndk1::num_put<char, std::__ndk1::ostreambuf_iterator<char, std::__ndk1::char_traits<char> > >::id, 
            &var_78, sub_10dd4b0)
    
    int64_t x8_64 = *(arg3 + 0x10)
    int64_t x24_21 = sx.q(*(std::__ndk1::num_put<char, std::__ndk1::ostreambuf_iterator<char, std::__ndk1::char_traits<char> > >::id
        + 8)) - 1
    int64_t x23_21
    
    if (x24_21 u< (*(arg3 + 0x18) - x8_64) s>> 3)
        x23_21 = *(x8_64 + (x24_21 << 3))
    
    if (x24_21 u>= (*(arg3 + 0x18) - x8_64) s>> 3 || x23_21 == 0)
        sub_f43870()
        noreturn
    
    std::__ndk1::__shared_count::__add_shared()
    int128_t* x8_65 = arg1[2]
    int64_t x10_42 = (arg1[3] - x8_65) s>> 3
    
    if (x10_42 u<= x24_21)
        if (x24_21 + 1 u> x10_42)
            sub_10dd360(&arg1[2], x24_21 + 1 - x10_42)
            x8_65 = arg1[2]
        else if (x24_21 + 1 u< x10_42)
            arg1[3] = x8_65 + ((x24_21 + 1) << 3)
    
    if (*(x8_65 + (x24_21 << 3)) != 0)
        std::__ndk1::__shared_count::__release_shared()
        x8_65 = arg1[2]
    
    *(x8_65 + (x24_21 << 3)) = x23_21
    int64_t var_80_22 = 0
    var_90 = std::__ndk1::num_put<wchar_t, std::__ndk1::ostreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> > >::id
    int64_t (* const var_88_22)() = std::__ndk1::locale::id::__init
    
    if (*std::__ndk1::num_put<wchar_t, std::__ndk1::ostreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> > >::id
            != -1)
        var_78 = &var_70
        var_70 = &var_90
        std::__ndk1::__call_once(
            std::__ndk1::num_put<wchar_t, std::__ndk1::ostreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> > >::id, 
            &var_78, sub_10dd4b0)
    
    int64_t x8_67 = *(arg3 + 0x10)
    int64_t x24_22 = sx.q(*(std::__ndk1::num_put<wchar_t, std::__ndk1::ostreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> > >::id
        + 8)) - 1
    int64_t x23_22
    
    if (x24_22 u< (*(arg3 + 0x18) - x8_67) s>> 3)
        x23_22 = *(x8_67 + (x24_22 << 3))
    
    if (x24_22 u>= (*(arg3 + 0x18) - x8_67) s>> 3 || x23_22 == 0)
        sub_f43870()
        noreturn
    
    result = std::__ndk1::__shared_count::__add_shared()
    int128_t* x8_68 = arg1[2]
    int64_t x10_44 = (arg1[3] - x8_68) s>> 3
    
    if (x10_44 u<= x24_22)
        if (x24_22 + 1 u> x10_44)
            result = sub_10dd360(&arg1[2], x24_22 + 1 - x10_44)
            x8_68 = arg1[2]
        else if (x24_22 + 1 u< x10_44)
            arg1[3] = x8_68 + ((x24_22 + 1) << 3)
    
    if (*(x8_68 + (x24_22 << 3)) != 0)
        result = std::__ndk1::__shared_count::__release_shared()
        x8_68 = arg1[2]
    
    *(x8_68 + (x24_22 << 3)) = x23_22

if ((arg4 & 4) != 0)
    int64_t var_80_23 = 0
    var_90 = std::__ndk1::time_get<char, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> > >::id
    int64_t (* const var_88_23)() = std::__ndk1::locale::id::__init
    
    if (*std::__ndk1::time_get<char, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> > >::id
            != -1)
        var_78 = &var_70
        var_70 = &var_90
        std::__ndk1::__call_once(
            std::__ndk1::time_get<char, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> > >::id, 
            &var_78, sub_10dd4b0)
    
    int64_t x8_70 = *(arg3 + 0x10)
    int64_t x24_23 = sx.q(*(std::__ndk1::time_get<char, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> > >::id
        + 8)) - 1
    int64_t x23_23
    
    if (x24_23 u< (*(arg3 + 0x18) - x8_70) s>> 3)
        x23_23 = *(x8_70 + (x24_23 << 3))
    
    if (x24_23 u>= (*(arg3 + 0x18) - x8_70) s>> 3 || x23_23 == 0)
        sub_f43870()
        noreturn
    
    std::__ndk1::__shared_count::__add_shared()
    int128_t* x8_71 = arg1[2]
    int64_t x10_46 = (arg1[3] - x8_71) s>> 3
    
    if (x10_46 u<= x24_23)
        if (x24_23 + 1 u> x10_46)
            sub_10dd360(&arg1[2], x24_23 + 1 - x10_46)
            x8_71 = arg1[2]
        else if (x24_23 + 1 u< x10_46)
            arg1[3] = x8_71 + ((x24_23 + 1) << 3)
    
    if (*(x8_71 + (x24_23 << 3)) != 0)
        std::__ndk1::__shared_count::__release_shared()
        x8_71 = arg1[2]
    
    *(x8_71 + (x24_23 << 3)) = x23_23
    int64_t var_80_24 = 0
    var_90 = std::__ndk1::time_get<wchar_t, std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> > >::id
    int64_t (* const var_88_24)() = std::__ndk1::locale::id::__init
    
    if (*std::__ndk1::time_get<wchar_t, std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> > >::id
            != -1)
        var_78 = &var_70
        var_70 = &var_90
        std::__ndk1::__call_once(
            std::__ndk1::time_get<wchar_t, std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> > >::id, 
            &var_78, sub_10dd4b0)
    
    int64_t x8_73 = *(arg3 + 0x10)
    int64_t x24_24 = sx.q(*(std::__ndk1::time_get<wchar_t, std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> > >::id
        + 8)) - 1
    int64_t x23_24
    
    if (x24_24 u< (*(arg3 + 0x18) - x8_73) s>> 3)
        x23_24 = *(x8_73 + (x24_24 << 3))
    
    if (x24_24 u>= (*(arg3 + 0x18) - x8_73) s>> 3 || x23_24 == 0)
        sub_f43870()
        noreturn
    
    std::__ndk1::__shared_count::__add_shared()
    int128_t* x8_74 = arg1[2]
    int64_t x10_48 = (arg1[3] - x8_74) s>> 3
    
    if (x10_48 u<= x24_24)
        if (x24_24 + 1 u> x10_48)
            sub_10dd360(&arg1[2], x24_24 + 1 - x10_48)
            x8_74 = arg1[2]
        else if (x24_24 + 1 u< x10_48)
            arg1[3] = x8_74 + ((x24_24 + 1) << 3)
    
    if (*(x8_74 + (x24_24 << 3)) != 0)
        std::__ndk1::__shared_count::__release_shared()
        x8_74 = arg1[2]
    
    *(x8_74 + (x24_24 << 3)) = x23_24
    int64_t var_80_25 = 0
    var_90 = std::__ndk1::time_put<char, std::__ndk1::ostreambuf_iterator<char, std::__ndk1::char_traits<char> > >::id
    int64_t (* const var_88_25)() = std::__ndk1::locale::id::__init
    
    if (*std::__ndk1::time_put<char, std::__ndk1::ostreambuf_iterator<char, std::__ndk1::char_traits<char> > >::id
            != -1)
        var_78 = &var_70
        var_70 = &var_90
        std::__ndk1::__call_once(
            std::__ndk1::time_put<char, std::__ndk1::ostreambuf_iterator<char, std::__ndk1::char_traits<char> > >::id, 
            &var_78, sub_10dd4b0)
    
    int64_t x8_76 = *(arg3 + 0x10)
    int64_t x24_25 = sx.q(*(std::__ndk1::time_put<char, std::__ndk1::ostreambuf_iterator<char, std::__ndk1::char_traits<char> > >::id
        + 8)) - 1
    int64_t x23_25
    
    if (x24_25 u< (*(arg3 + 0x18) - x8_76) s>> 3)
        x23_25 = *(x8_76 + (x24_25 << 3))
    
    if (x24_25 u>= (*(arg3 + 0x18) - x8_76) s>> 3 || x23_25 == 0)
        sub_f43870()
        noreturn
    
    std::__ndk1::__shared_count::__add_shared()
    int128_t* x8_77 = arg1[2]
    int64_t x10_50 = (arg1[3] - x8_77) s>> 3
    
    if (x10_50 u<= x24_25)
        if (x24_25 + 1 u> x10_50)
            sub_10dd360(&arg1[2], x24_25 + 1 - x10_50)
            x8_77 = arg1[2]
        else if (x24_25 + 1 u< x10_50)
            arg1[3] = x8_77 + ((x24_25 + 1) << 3)
    
    if (*(x8_77 + (x24_25 << 3)) != 0)
        std::__ndk1::__shared_count::__release_shared()
        x8_77 = arg1[2]
    
    *(x8_77 + (x24_25 << 3)) = x23_25
    int64_t var_80_26 = 0
    var_90 = std::__ndk1::time_put<wchar_t, std::__ndk1::ostreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> > >::id
    int64_t (* const var_88_26)() = std::__ndk1::locale::id::__init
    
    if (*std::__ndk1::time_put<wchar_t, std::__ndk1::ostreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> > >::id
            != -1)
        var_78 = &var_70
        var_70 = &var_90
        std::__ndk1::__call_once(
            std::__ndk1::time_put<wchar_t, std::__ndk1::ostreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> > >::id, 
            &var_78, sub_10dd4b0)
    
    int64_t x8_79 = *(arg3 + 0x10)
    int64_t x24_26 = sx.q(*(std::__ndk1::time_put<wchar_t, std::__ndk1::ostreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> > >::id
        + 8)) - 1
    int64_t x23_26
    
    if (x24_26 u< (*(arg3 + 0x18) - x8_79) s>> 3)
        x23_26 = *(x8_79 + (x24_26 << 3))
    
    if (x24_26 u>= (*(arg3 + 0x18) - x8_79) s>> 3 || x23_26 == 0)
        sub_f43870()
        noreturn
    
    result = std::__ndk1::__shared_count::__add_shared()
    int128_t* x8_80 = arg1[2]
    int64_t x10_52 = (arg1[3] - x8_80) s>> 3
    
    if (x10_52 u<= x24_26)
        if (x24_26 + 1 u> x10_52)
            result = sub_10dd360(&arg1[2], x24_26 + 1 - x10_52)
            x8_80 = arg1[2]
        else if (x24_26 + 1 u< x10_52)
            arg1[3] = x8_80 + ((x24_26 + 1) << 3)
    
    if (*(x8_80 + (x24_26 << 3)) != 0)
        result = std::__ndk1::__shared_count::__release_shared()
        x8_80 = arg1[2]
    
    *(x8_80 + (x24_26 << 3)) = x23_26

if ((arg4 & 0x20) != 0)
    int64_t var_80_27 = 0
    var_90 = std::__ndk1::messages<char>::id
    int64_t (* const var_88_27)() = std::__ndk1::locale::id::__init
    
    if (*std::__ndk1::messages<char>::id != -1)
        var_78 = &var_70
        var_70 = &var_90
        std::__ndk1::__call_once(std::__ndk1::messages<char>::id, &var_78, sub_10dd4b0)
    
    int64_t x8_82 = *(arg3 + 0x10)
    int64_t x24_27 = sx.q(*(std::__ndk1::messages<char>::id + 8)) - 1
    int64_t x22_1
    
    if (x24_27 u< (*(arg3 + 0x18) - x8_82) s>> 3)
        x22_1 = *(x8_82 + (x24_27 << 3))
    
    if (x24_27 u>= (*(arg3 + 0x18) - x8_82) s>> 3 || x22_1 == 0)
        sub_f43870()
        noreturn
    
    std::__ndk1::__shared_count::__add_shared()
    int128_t* x8_83 = arg1[2]
    int64_t x10_54 = (arg1[3] - x8_83) s>> 3
    
    if (x10_54 u<= x24_27)
        if (x24_27 + 1 u> x10_54)
            sub_10dd360(&arg1[2], x24_27 + 1 - x10_54)
            x8_83 = arg1[2]
        else if (x24_27 + 1 u< x10_54)
            arg1[3] = x8_83 + ((x24_27 + 1) << 3)
    
    if (*(x8_83 + (x24_27 << 3)) != 0)
        std::__ndk1::__shared_count::__release_shared()
        x8_83 = arg1[2]
    
    *(x8_83 + (x24_27 << 3)) = x22_1
    int64_t var_80_28 = 0
    var_90 = std::__ndk1::messages<wchar_t>::id
    int64_t (* const var_88_28)() = std::__ndk1::locale::id::__init
    
    if (*std::__ndk1::messages<wchar_t>::id != -1)
        var_78 = &var_70
        var_70 = &var_90
        std::__ndk1::__call_once(std::__ndk1::messages<wchar_t>::id, &var_78, sub_10dd4b0)
    
    int64_t x8_85 = *(arg3 + 0x10)
    int64_t x21_1 = sx.q(*(std::__ndk1::messages<wchar_t>::id + 8)) - 1
    int64_t x22_2
    
    if (x21_1 u< (*(arg3 + 0x18) - x8_85) s>> 3)
        x22_2 = *(x8_85 + (x21_1 << 3))
    
    if (x21_1 u>= (*(arg3 + 0x18) - x8_85) s>> 3 || x22_2 == 0)
        sub_f43870()
        noreturn
    
    result = std::__ndk1::__shared_count::__add_shared()
    int128_t* x8_86 = arg1[2]
    int64_t x10_56 = (arg1[3] - x8_86) s>> 3
    
    if (x10_56 u<= x21_1)
        if (x21_1 + 1 u> x10_56)
            result = sub_10dd360(&arg1[2], x21_1 + 1 - x10_56)
            x8_86 = arg1[2]
        else if (x21_1 + 1 u< x10_56)
            arg1[3] = x8_86 + ((x21_1 + 1) << 3)
    
    if (*(x8_86 + (x21_1 << 3)) != 0)
        result = std::__ndk1::__shared_count::__release_shared()
        x8_86 = arg1[2]
    
    *(x8_86 + (x21_1 << 3)) = x22_2

if (*(x27 + 0x28) == x9)
    return result

__stack_chk_fail()
noreturn
