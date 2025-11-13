// 函数: _ZN5Botan26probe_provider_private_keyERKNSt6__ndk112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEENS0_6vectorIS6_NS4_IS6_EEEE
// 地址: 0xdf8010
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >** 
    entry_x8
__builtin_memset(entry_x8, 0, 0x18)
char* i = *arg2

for (int64_t x23 = *(arg2 + 8); i != x23; i = &i[0x18])
    uint64_t x8 = zx.q(*i)
    uint64_t x8_1
    
    if ((x8.d & 1) == 0)
        x8_1 = x8 u>> 1
    else
        x8_1 = *(i + 8)
    
    if (x8_1 == 4 && std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
            i, 0, -ffffffffffffffff, "base").d == 0)
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
            * x22_1 = entry_x8[1]
        
        if (x22_1 == entry_x8[2])
            std::__ndk1::vector<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::allocator<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > >::__push_back_slow_path<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&>(
                entry_x8)
        else
            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                x22_1)
            entry_x8[1] = x22_1 + 0x18
