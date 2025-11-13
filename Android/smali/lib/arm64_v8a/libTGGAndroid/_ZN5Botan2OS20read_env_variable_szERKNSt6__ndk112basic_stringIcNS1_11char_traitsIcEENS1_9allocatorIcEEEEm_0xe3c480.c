// 函数: _ZN5Botan2OS20read_env_variable_szERKNSt6__ndk112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEm
// 地址: 0xe3c480
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t result = arg2
int64_t var_38
__builtin_memset(&var_38, 0, 0x18)
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::assign(
    &var_38)

if (getauxval(0x17) == 0)
    void* __offset(
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, 
        0x1) name
    
    if ((zx.d(*arg1) & 1) != 0)
        name = *(arg1 + 0x10)
    else
        name = arg1 + 1
    
    if (getenv(name) != 0)
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::assign(
            &var_38)
        result = std::__ndk1::stoul(&var_38, nullptr, 0xa)

void* var_28

if ((zx.d(var_38.b) & 1) != 0)
    operator delete(var_28)
return result
