// 函数: _ZNK5Botan8DL_Group12square_mod_qERKNS_6BigIntE
// 地址: 0xd1a838
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >* 
    x0 = Botan::DL_Group::data()
char var_38 = 0x18
int64_t var_37
__builtin_strncpy(&var_37, "square_mod_q", 0xd)
Botan::DL_Group_Data::assert_q_is_set(x0)
return Botan::Modular_Reducer::square(Botan::DL_Group::data() + 0xd0)
