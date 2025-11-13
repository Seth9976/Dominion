// 函数: _ZN5Botan12replace_charERKNSt6__ndk112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEcc
// 地址: 0xe8fc08
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >* 
    entry_x8
int64_t result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    entry_x8)
int64_t x8 = 0

while (true)
    uint64_t x10_2 = zx.q(*entry_x8)
    
    if ((x10_2.d & 1) != 0)
        if (x8 == *(entry_x8 + 8))
            return result
        
        char* x10_1 = *(entry_x8 + 0x10)
        
        if (zx.d(x10_1[x8]) == zx.d(arg2))
            x10_1[x8] = arg3
    else
        if (x8 == x10_2 u>> 1)
            return result
        
        if (zx.d(*(entry_x8 + 1 + x8)) == zx.d(arg2))
            (entry_x8 + 1)[x8] = arg3
    
    x8 += 1
