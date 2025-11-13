// 函数: _ZN5Botan2OS17read_env_variableERNSt6__ndk112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEERKS7_
// 地址: 0xd66844
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::assign(
    arg1)

if (getauxval(0x17) != 0)
    return 0

void* __offset(
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, 
    0x1) name

if ((zx.d(*arg2) & 1) != 0)
    name = *(arg2 + 0x10)
else
    name = arg2 + 1

char* x0_2 = getenv(name)

if (x0_2 != 0)
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::assign(
        arg1)

return zx.q(x0_2 != 0 ? 1 : 0)
