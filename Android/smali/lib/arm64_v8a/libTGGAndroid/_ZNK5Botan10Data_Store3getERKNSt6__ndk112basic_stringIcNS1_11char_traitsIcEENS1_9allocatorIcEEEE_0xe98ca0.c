// 函数: _ZNK5Botan10Data_Store3getERKNSt6__ndk112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE
// 地址: 0xe98ca0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >** 
    entry_x8
__builtin_memset(entry_x8, 0, 0x18)
void** result
int64_t x1
result, x1 = std::__ndk1::__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, std::__ndk1::less<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, true>, std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > > >::__equal_range_multi<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >(
    arg1)
void** x21 = result

if (result == x1)
    return result

while (true)
    result = std::__ndk1::vector<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::allocator<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > >::__push_back_slow_path<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&>(
        entry_x8)
    
    while (true)
        void** i = x21[1]
        
        if (i != 0)
            do
                x21 = i
                i = *i
            while (i != 0)
            
            goto label_e98d40
        
        void* x8_2 = &x21[2]
        void** x9_1 = *x8_2
        
        if (*x9_1 == x21)
            x21 = x9_1
            
            if (x21 == x1)
                return result
        else
            void* i_1
            
            do
                i_1 = *x8_2
                x8_2 = i_1 + 0x10
                x21 = *x8_2
            while (*x21 != i_1)
        label_e98d40:
            
            if (x21 == x1)
                return result
        
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
            * x22_1 = entry_x8[1]
        
        if (x22_1 == entry_x8[2])
            break
        
        result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
            x22_1)
        entry_x8[1] = x22_1 + 0x18
