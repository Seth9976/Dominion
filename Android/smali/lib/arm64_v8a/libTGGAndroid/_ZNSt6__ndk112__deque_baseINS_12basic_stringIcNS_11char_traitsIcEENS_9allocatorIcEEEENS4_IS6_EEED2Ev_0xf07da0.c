// 函数: _ZNSt6__ndk112__deque_baseINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEED2Ev
// 地址: 0xf07da0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

std::__ndk1::__deque_base<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::allocator<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > >::clear()
int64_t* entry_x0
int64_t* x20 = entry_x0[1]
int64_t x21 = entry_x0[2]

if (x20 != x21)
    do
        void* x0 = *x20
        x20 = &x20[1]
        operator delete(x0)
    while (x21 != x20)
    
    int64_t x9_1 = entry_x0[1]
    int64_t x8_1 = entry_x0[2]
    
    if (x8_1 != x9_1)
        entry_x0[2] = x8_1 + ((-1 ^ (x8_1 - x9_1 - 8) u>> 3) << 3)

void* result = *entry_x0

if (result == 0)
    return result

return operator delete(result) __tailcall
