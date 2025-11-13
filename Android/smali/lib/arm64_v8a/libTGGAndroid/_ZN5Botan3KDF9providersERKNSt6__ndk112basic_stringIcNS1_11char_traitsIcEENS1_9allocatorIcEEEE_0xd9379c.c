// 函数: _ZN5Botan3KDF9providersERKNSt6__ndk112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE
// 地址: 0xd9379c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char var_60 = 8
int32_t var_5f
__builtin_strncpy(&var_5f, "base", 5)
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >* 
    var_48
__builtin_memset(&var_48, 0, 0x18)
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >* 
    x0 = operator new(0x18)
var_48 = x0
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >* 
    var_40 = x0
void* __offset(
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, 
    0x18) var_38 = x0 + 0x18
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    x0)
int64_t result = Botan::probe_providers_of<Botan::KDF>(arg1, &var_48)
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >* 
    x19_1 = var_48

if (x19_1 != 0)
    void* __offset(
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, 
        0x18) __saved_x8_2 = x0 + 0x18
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >* 
        x0_3
    
    if (__saved_x8_2 == x19_1)
        x0_3 = x19_1
    else
        void* __offset(
            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, 
            0x18) __saved_x8_1 = __saved_x8_2
        
        do
            __saved_x8_1 -= 0x18
            
            if ((zx.d(*__saved_x8_1) & 1) != 0)
                operator delete(*(__saved_x8_2 - 8))
            
            __saved_x8_2 = __saved_x8_1
        while (x19_1 != __saved_x8_1)
        
        x0_3 = var_48
    
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >* 
        var_40_2 = x19_1
    result = operator delete(x0_3)

return result
