// 函数: _ZNK5Botan3TLS15Handshake_State14srp_identifierEv
// 地址: 0xe72e50
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* entry_x0
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >* 
    entry_x8

if (zx.d(*(entry_x0 + 0x68)) != 0 && *(entry_x0 + 0x3c) == 4)
    int64_t* i_2 = *(entry_x0 + 0x100) + 0x90
    int64_t* i = *i_2
    
    if (i != 0)
        int64_t* i_1 = i_2
        
        do
            int32_t x11_1 = i[4].d
            
            if (x11_1 s>= 0xc)
                i_1 = i
            
            i = i[zx.q(x11_1 s< 0xc ? 1 : 0)]
        while (i != 0)
        
        if (i_1 != i_2 && i_1[4].d s<= 0xc)
            entry_x0 = i_1[5]
            
            if (entry_x0 != 0 && __dynamic_cast(entry_x0, _typeinfo_for_Botan::TLS::Extension, 
                    _typeinfo_for_Botan::TLS::SRP_Identifier, 0) != 0)
                return std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                    entry_x8) __tailcall

*entry_x8 = 0
