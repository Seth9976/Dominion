// 函数: _ZNK5Botan8DL_Group13inverse_mod_qERKNS_6BigIntE
// 地址: 0xd1a528
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >* 
    x0 = Botan::DL_Group::data()
char var_38 = 0x1a
int64_t var_37
__builtin_strncpy(&var_37, "inverse_mod_q", 0xe)
Botan::DL_Group_Data::assert_q_is_set(x0)
Botan::BigInt* entry_x1
return Botan::inverse_mod(entry_x1, Botan::DL_Group::data() + 0x28)
