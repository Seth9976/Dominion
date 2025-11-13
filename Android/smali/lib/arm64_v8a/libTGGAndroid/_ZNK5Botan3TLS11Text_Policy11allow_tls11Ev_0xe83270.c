// 函数: _ZNK5Botan3TLS11Text_Policy11allow_tls11Ev
// 地址: 0xe83270
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char var_28 = 0x16
int64_t var_27
__builtin_strncpy(&var_27, "allow_tls11", 0xc)
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >* 
    entry_x0
int32_t x0 = Botan::TLS::Text_Policy::get_bool(entry_x0, &var_28)
void* var_18

if ((zx.d(var_28) & 1) != 0)
    operator delete(var_18)
return zx.q(x0) & 1
