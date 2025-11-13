// 函数: _ZNSt6__ndk110to_wstringEe
// 地址: 0x10e79a0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x21 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x21 + 0x28)
wchar_t* s
int128_t v0
s, v0 = operator new(0x60)
int128_t var_60 = data_71bdb0
wmemset(s, 0, 0x14)
s[0x14] = 0
std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> >::append(
    &var_60, 3)
uint64_t x8_1 = zx.q(var_60.b)
uint64_t x24

if ((x8_1.d & 1) == 0)
    x24 = x8_1 u>> 1
else
    x24 = var_60:8.q

int64_t result
uint64_t x8_3
int128_t v0_1

while (true)
    wchar_t* s_1
    
    if ((x8_1.d & 1) == 0)
        s_1 = &var_60 | 4
    else
        s_1 = s
    
    result, v0_1 = swprintf(s_1, x24 + 1, 0x7ac6f0, arg1.o)
    uint64_t x8_4
    
    if ((result.d & 0x80000000) == 0)
        x8_3 = zx.q(result.d)
        bool cond:1_1 = x24 u>= x8_3
        x24 = x8_3
        
        if (cond:1_1)
            break
        
        x8_4 = zx.q(var_60.b)
        
        if ((x8_4.d & 1) != 0)
            goto label_10e7ab8
        
        goto label_10e7a80
    
    x24 = 1 | (0x7fffffffffffffff & x24) << 1
    x8_4 = zx.q(var_60.b)
    uint64_t x8_2
    
    if ((x8_4.d & 1) == 0)
    label_10e7a80:
        x8_2 = x8_4 u>> 1
        
        if (x24 u<= x8_2)
            char x9_2 = (x24.d << 1).b
            *(&var_60 + (x24 << 2) + 4) = 0
            var_60.b = x9_2
            x8_1 = zx.q(x9_2)
            continue
        
        std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> >::append(
            &var_60, x24.d - x8_2.d)
    else
    label_10e7ab8:
        x8_2 = var_60:8.q
        
        if (x8_2 u< x24)
            std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> >::append(
                &var_60, x24.d - x8_2.d)
        else
            s[x24] = 0
            var_60:8.q = x24
    x8_1 = zx.q(var_60.b)

uint64_t x9_3 = zx.q(var_60.b)
uint64_t x9_4

if ((x9_3.d & 1) != 0)
    x9_4 = var_60:8.q
    
    if (x9_4 u>= x8_3)
        s[x8_3] = 0
        var_60:8.q = x8_3
    else
        result, v0_1 = std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> >::append(
            &var_60, x8_3.d - x9_4.d)
else
    x9_4 = x9_3 u>> 1
    
    if (x9_4 u< x8_3)
        result, v0_1 = std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> >::append(
            &var_60, x8_3.d - x9_4.d)
    else
        *(&var_60 + (x8_3 << 2) + 4) = 0
        var_60.b = (result.d << 1).b
int128_t* entry_x8
entry_x8[1].q = s
*entry_x8 = var_60

if (*(x21 + 0x28) == x8)
    return result

__stack_chk_fail()
noreturn
