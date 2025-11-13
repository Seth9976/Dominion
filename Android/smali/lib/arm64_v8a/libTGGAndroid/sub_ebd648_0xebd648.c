// 函数: sub_ebd648
// 地址: 0xebd648
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

__builtin_memset(arg1, 0, 0x18)

if (arg2 == arg3)
    return 

int64_t x21_1 = arg2
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >* 
    x19_1 = arg1

do
    int128_t v0_1
    arg1, v0_1 = Botan::OID::to_formatted_string()
    int128_t* x8_1 = *(x19_1 + 8)
    int128_t var_48
    void* var_38
    
    if (x8_1 u< *(x19_1 + 0x10))
        x8_1[1].q = var_38
        *x8_1 = var_48
        *(x19_1 + 8) = x8_1 + 0x18
    else
        std::__ndk1::vector<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::allocator<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > >::__push_back_slow_path<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >(
            x19_1)
        
        if ((zx.d(var_48.b) & 1) != 0)
            operator delete(var_38)
    x21_1 += 0x20
while (arg3 != x21_1)
