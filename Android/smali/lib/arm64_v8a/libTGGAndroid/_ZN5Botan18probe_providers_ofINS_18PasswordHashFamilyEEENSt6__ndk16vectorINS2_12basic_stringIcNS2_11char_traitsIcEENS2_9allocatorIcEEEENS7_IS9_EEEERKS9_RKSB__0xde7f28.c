// 函数: _ZN5Botan18probe_providers_ofINS_18PasswordHashFamilyEEENSt6__ndk16vectorINS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEENS7_IS9_EEEERKS9_RKSB_
// 地址: 0xde7f28
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >** 
    entry_x8
__builtin_memset(entry_x8, 0, 0x18)
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >* 
    x20 = *arg2
int64_t x24 = *(arg2 + 8)

if (x20 != x24)
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > 
        const& x21_1 = arg1
    
    do
        arg1 = Botan::PasswordHashFamily::create(x21_1, x20)
        int64_t* var_38
        
        if (var_38 != 0)
            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
                * x23_1 = entry_x8[1]
            
            if (x23_1 == entry_x8[2])
                std::__ndk1::vector<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::allocator<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > >::__push_back_slow_path<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&>(
                    entry_x8)
            else
                std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                    x23_1)
                entry_x8[1] = x23_1 + 0x18
            
            arg1 = (*(*var_38 + 8))(var_38)
        
        x20 += 0x18
    while (x24 != x20)

return arg1
