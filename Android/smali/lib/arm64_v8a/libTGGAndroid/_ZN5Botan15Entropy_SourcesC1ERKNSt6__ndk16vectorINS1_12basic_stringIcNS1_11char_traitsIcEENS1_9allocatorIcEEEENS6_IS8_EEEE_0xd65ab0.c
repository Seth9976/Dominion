// 函数: _ZN5Botan15Entropy_SourcesC1ERKNSt6__ndk16vectorINS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS6_IS8_EEEE
// 地址: 0xd65ab0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*arg1 = 0
*(arg1 + 8) = 0
*(arg1 + 0x10) = 0
int64_t* entry_x1
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >* 
    x20 = *entry_x1
int64_t x21 = entry_x1[1]

if (x20 == x21)
    return 

std::__ndk1::vector<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::allocator<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > >
     const& x19_1 = arg1

do
    Botan::Entropy_Source::create(x20)
    std::__ndk1::vector<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::allocator<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > >
        * var_28
    std::__ndk1::vector<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::allocator<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > >
        * x8_1 = var_28
    
    if (x8_1 == 0)
        var_28 = nullptr
    else
        int64_t* x9_1 = *(x19_1 + 8)
        
        if (x9_1 u>= *(x19_1 + 0x10))
            std::__ndk1::vector<std::__ndk1::unique_ptr<Botan::Entropy_Source, std::__ndk1::default_delete<Botan::Entropy_Source> >, std::__ndk1::allocator<std::__ndk1::unique_ptr<Botan::Entropy_Source, std::__ndk1::default_delete<Botan::Entropy_Source> > > >::__push_back_slow_path<std::__ndk1::unique_ptr<Botan::Entropy_Source, std::__ndk1::default_delete<Botan::Entropy_Source> > >(
                x19_1)
        else
            var_28 = nullptr
            *x9_1 = x8_1
            *(x19_1 + 8) = &x9_1[1]
        
        arg1 = var_28
        var_28 = nullptr
        
        if (arg1 != 0)
            (*(*arg1 + 0x18))()
    
    x20 += 0x18
while (x21 != x20)
