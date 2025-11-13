// 函数: _ZNK5Botan3TLS12Client_Hello14next_protocolsEv
// 地址: 0xe4a628
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* entry_x0
int64_t* result = entry_x0 + 0x90
int64_t* i = *result
std::__ndk1::vector<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::allocator<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > >
    * entry_x8

if (i != 0)
    int64_t* x8 = result
    
    do
        int32_t x10_1 = i[4].d
        
        if (x10_1 s>= 0x10)
            x8 = i
        
        i = i[zx.q(x10_1 s< 0x10 ? 1 : 0)]
    while (i != 0)
    
    if (x8 != result && x8[4].d s<= 0x10)
        result = x8[5]
        
        if (result != 0)
            result = __dynamic_cast(result, _typeinfo_for_Botan::TLS::Extension, 
                _typeinfo_for_Botan::TLS::Application_Layer_Protocol_Notification, 0)
            
            if (result != 0)
                return std::__ndk1::vector<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::allocator<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > >::vector(
                    entry_x8) __tailcall

__builtin_memset(entry_x8, 0, 0x18)
return result
