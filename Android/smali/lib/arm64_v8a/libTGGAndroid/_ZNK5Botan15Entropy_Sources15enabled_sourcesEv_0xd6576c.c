// 函数: _ZNK5Botan15Entropy_Sources15enabled_sourcesEv
// 地址: 0xd6576c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >* 
    entry_x8
__builtin_memset(entry_x8, 0, 0x18)
int64_t* entry_x0
int64_t x8 = *entry_x0

if (entry_x0[1] == x8)
    return 

int64_t* x20_1 = entry_x0
int64_t i = 0

do
    int128_t v0_1
    entry_x0, v0_1 = (***(x8 + (i << 3)))()
    int128_t* x8_2 = *(entry_x8 + 8)
    int128_t var_48
    void* var_38
    
    if (x8_2 u< *(entry_x8 + 0x10))
        x8_2[1].q = var_38
        *x8_2 = var_48
        *(entry_x8 + 8) = x8_2 + 0x18
    else
        std::__ndk1::vector<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::allocator<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > >::__push_back_slow_path<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >(
            entry_x8)
        
        if ((zx.d(var_48.b) & 1) != 0)
            operator delete(var_38)
    x8 = *x20_1
    i += 1
while (i != (x20_1[1] - x8) s>> 3)
