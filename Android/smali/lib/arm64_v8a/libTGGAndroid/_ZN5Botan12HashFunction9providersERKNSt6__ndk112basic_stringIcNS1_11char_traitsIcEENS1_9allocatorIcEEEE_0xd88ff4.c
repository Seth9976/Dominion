// 函数: _ZN5Botan12HashFunction9providersERKNSt6__ndk112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE
// 地址: 0xd88ff4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char var_90 = 8
int32_t var_8f
__builtin_strncpy(&var_8f, "base", 5)
char var_78 = 0xe
int32_t var_77
__builtin_strncpy(&var_77, "openssl", 8)
char var_60 = 0x18
int64_t var_5f
__builtin_strncpy(&var_5f, "commoncrypto", 0xd)
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >* 
    var_48
__builtin_memset(&var_48, 0, 0x18)
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >* 
    x0 = operator new(0x48)
var_48 = x0
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >* 
    var_40 = x0
void* __offset(
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, 
    0x48) var_38 = x0 + 0x48
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    x0)
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    x0 + 0x18)
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    x0 + 0x30)
int64_t result = Botan::probe_providers_of<Botan::HashFunction>(arg1, &var_48)
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >* 
    x19_1 = var_48

if (x19_1 != 0)
    void* x8_2 = x0 + 0x48
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >* 
        x0_5
    
    if (x8_2 == x19_1)
        x0_5 = x19_1
    else
        void* x20_1 = x8_2
        
        do
            x20_1 -= 0x18
            
            if ((zx.d(*x20_1) & 1) != 0)
                operator delete(*(x8_2 - 8))
            
            x8_2 = x20_1
        while (x19_1 != x20_1)
        
        x0_5 = var_48
    
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >* 
        var_40_2 = x19_1
    result = operator delete(x0_5)

return result
