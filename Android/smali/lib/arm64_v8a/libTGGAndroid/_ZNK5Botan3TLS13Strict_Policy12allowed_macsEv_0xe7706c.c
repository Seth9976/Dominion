// 函数: _ZNK5Botan3TLS13Strict_Policy12allowed_macsEv
// 地址: 0xe7706c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* entry_x8
__builtin_memset(entry_x8, 0, 0x18)
char var_38 = 8
int32_t var_37
__builtin_strncpy(&var_37, "AEAD", 5)
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >* 
    x0 = operator new(0x18)
*entry_x8 = x0
entry_x8[1] = x0
entry_x8[2] = x0 + 0x18
int64_t result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    x0)
entry_x8[1] = x0 + 0x18
return result
