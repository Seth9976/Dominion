// 函数: _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE2atEm
// 地址: 0x10e1b10
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8 = zx.q(*arg1)
int64_t entry_x1

if ((x8.d & 1) != 0)
    if (*(arg1 + 8) u> entry_x1)
        return *(arg1 + 0x10) + entry_x1
else if (entry_x1 u< x8 u>> 1)
    return arg1 + 1 + entry_x1
return std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::assign(
    std::__ndk1::__basic_string_common<true>::__throw_out_of_range()) __tailcall
