// 函数: _ZN5Botan18PasswordHashFamily9providersERKNSt6__ndk112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE
// 地址: 0xde7d0c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char var_78 = 8
int32_t var_77
__builtin_strncpy(&var_77, "base", 5)
char var_60 = 0xe
int32_t var_5f
__builtin_strncpy(&var_5f, "openssl", 8)
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >* 
    var_48
__builtin_memset(&var_48, 0, 0x18)
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >* 
    x0 = operator new(0x30)
var_48 = x0
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >* 
    var_40 = x0
void* __offset(
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, 
    0x30) var_38 = x0 + 0x30
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    x0)
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    x0 + 0x18)
int64_t result = Botan::probe_providers_of<Botan::PasswordHashFamily>(arg1, &var_48)
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >* 
    x19_1 = var_48

if (x19_1 != 0)
    void* __saved_x8_2 = x0 + 0x30
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >* 
        x0_4
    
    if (__saved_x8_2 == x19_1)
        x0_4 = x19_1
    else
        void* __saved_x8_1 = __saved_x8_2
        
        do
            __saved_x8_1 -= 0x18
            
            if ((zx.d(*__saved_x8_1) & 1) != 0)
                operator delete(*(__saved_x8_2 - 8))
            
            __saved_x8_2 = __saved_x8_1
        while (x19_1 != __saved_x8_1)
        
        x0_4 = var_48
    
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >* 
        var_40_2 = x19_1
    result = operator delete(x0_4)

return result
