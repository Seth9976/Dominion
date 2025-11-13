// 函数: _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6resizeEmc
// 地址: 0x10e20dc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8 = zx.q(*arg1)
uint64_t x8_1

if ((x8.d & 1) != 0)
    x8_1 = *(arg1 + 8)
    
    if (x8_1 u>= arg2)
        (*(arg1 + 0x10))[arg2] = 0
        *(arg1 + 8) = arg2
    else
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
            arg1, arg2 - x8_1.b)
else
    x8_1 = x8 u>> 1
    
    if (x8_1 u< arg2)
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
            arg1, arg2 - x8_1.b)
    else
        *(arg1 + arg2 + 1) = 0
        *arg1 = (arg2.d << 1).b
