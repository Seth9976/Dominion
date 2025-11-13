// 函数: sub_e29dcc
// 地址: 0xe29dcc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char var_48
__builtin_strncpy(&var_48, " 1234567812345678", 0x12)
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::operator=(
    arg2)
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::assign(
    arg3)
std::__ndk1::allocator<char>* x0_3 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::find(
    arg1.b, 0x2c)
int64_t result

if (x0_3 == -1)
    result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::operator=(
        arg2)
else
    int128_t var_60
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &var_60, arg1, 0, x0_3)
    
    if ((zx.d(*arg2) & 1) != 0)
        operator delete(*(arg2 + 0x10))
    
    int128_t v0_1 = var_60
    int64_t var_50
    *(arg2 + 0x10) = var_50
    *arg2 = v0_1
    int128_t v0_2
    result, v0_2 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &var_60, arg1, x0_3 + 1, -ffffffffffffffff)
    
    if ((zx.d(*arg3) & 1) != 0)
        result, v0_2 = operator delete(*(arg3 + 0x10))
    
    v0_2 = var_60
    *(arg3 + 0x10) = var_50
    *arg3 = v0_2

if ((zx.d(var_48) & 1) == 0)
    return result

int128_t var_47
return operator delete(var_47:0xf.q)
