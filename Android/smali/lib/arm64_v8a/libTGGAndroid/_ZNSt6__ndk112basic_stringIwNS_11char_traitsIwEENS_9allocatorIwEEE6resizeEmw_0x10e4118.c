// 函数: _ZNSt6__ndk112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEE6resizeEmw
// 地址: 0x10e4118
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8 = zx.q(*arg1)
uint64_t x8_1

if ((x8.d & 1) != 0)
    x8_1 = *(arg1 + 8)
    
    if (x8_1 u>= arg2)
        *(*(arg1 + 0x10) + (arg2 << 2)) = 0
        *(arg1 + 8) = arg2
    else
        std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> >::append(
            arg1, arg2 - x8_1.d)
else
    x8_1 = x8 u>> 1
    
    if (x8_1 u< arg2)
        std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> >::append(
            arg1, arg2 - x8_1.d)
    else
        *(arg1 + (arg2 << 2) + 4) = 0
        *arg1 = (arg2 << 1).b
