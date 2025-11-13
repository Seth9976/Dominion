// 函数: _ZNSt6__ndk112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEE2atEm
// 地址: 0x10e3c60
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8 = zx.q(*arg1)
int64_t entry_x1

if ((x8.d & 1) != 0)
    if (*(arg1 + 8) u> entry_x1)
        return *(arg1 + 0x10) + (entry_x1 << 2)
else if (entry_x1 u< x8 u>> 1)
    return arg1 + 4 + (entry_x1 << 2)
return std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> >::assign(
    std::__ndk1::__basic_string_common<true>::__throw_out_of_range()) __tailcall
