// 函数: _ZNSt6__ndk112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEE6insertENS_11__wrap_iterIPKwEEw
// 地址: 0x10e4020
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8 = zx.q(*arg1)
uint64_t x19 = arg1
uint64_t x20
uint64_t x22
int64_t x23

if ((x8.d & 1) != 0)
    x22 = *(x19 + 8)
    x23 = *(x19 + 0x10)
    x20 = (arg2 - x23) s>> 2
    
    if ((*x19 & 0xfffffffffffffffe) - 1 != x22)
    label_10e40b0:
        
        if (x22 != x20)
            wchar_t* s2 = x23 + (x20 << 2)
            wmemmove(&s2[1], s2, x22 - x20)
    else
        std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> >::__grow_by(
            x19, x22, 1, x22, x20, 0)
        x23 = *(x19 + 0x10)
else
    x23 = x19 + 4
    x22 = x8 u>> 1
    x20 = (arg2 - x23) s>> 2
    
    if (x22.d != 4)
        goto label_10e40b0
    
    x22 = 4
    std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> >::__grow_by(
        x19, x22, 1, x22, x20, 0)
    x23 = *(x19 + 0x10)

int32_t entry_x2
*(x23 + (x20 << 2)) = entry_x2
*(x23 + ((x22 + 1) << 2)) = 0
uint32_t x8_5 = zx.d(*x19)
int64_t x8_7

if ((x8_5 & 1) != 0)
    *(x19 + 8) = x22 + 1
    
    if ((x8_5 & 1) != 0)
        x8_7 = *(x19 + 0x10)
    else
        x8_7 = x19 + 4
else
    int32_t x8_6 = (x22 + 1).d << 1
    *x19 = x8_6.b
    
    if ((x8_6 & 1) == 0)
        x8_7 = x19 + 4
    else
        x8_7 = *(x19 + 0x10)

return x8_7 + (x20 << 2)
