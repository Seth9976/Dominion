// 函数: _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6__initEPKcm
// 地址: 0x10e0934
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

size_t entry_x2

if (entry_x2 u>= -0x10)
    return std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::at(
        std::__ndk1::__basic_string_common<true>::__throw_length_error()) __tailcall

void* x20_1

if (entry_x2 u>= 0x17)
    uint64_t x22_1 = (entry_x2 + 0x10) & 0xfffffffffffffff0
    void* x0_1 = operator new(x22_1)
    *(arg1 + 8) = entry_x2
    *(arg1 + 0x10) = x0_1
    *arg1 = x22_1 | 1
    x20_1 = x0_1
    memcpy(x20_1, arg2, entry_x2)
else
    *arg1 = (entry_x2.d << 1).b
    x20_1 = &arg1[1]
    
    if (entry_x2 != 0)
        memcpy(x20_1, arg2, entry_x2)

*(x20_1 + entry_x2) = 0
