// 函数: _ZNK5Botan3TLS11Text_Policy18hide_unknown_usersEv
// 地址: 0xe843e8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char var_28
__builtin_strncpy(&var_28, "$hide_unknown_users", 0x14)
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >* 
    entry_x0
int32_t x0 = Botan::TLS::Text_Policy::get_bool(entry_x0, &var_28)
int128_t var_27

if ((zx.d(var_28) & 1) != 0)
    operator delete(var_27:0xf.q)
return zx.q(x0) & 1
