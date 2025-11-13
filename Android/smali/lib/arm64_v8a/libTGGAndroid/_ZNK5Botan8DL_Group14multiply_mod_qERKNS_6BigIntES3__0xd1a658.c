// 函数: _ZNK5Botan8DL_Group14multiply_mod_qERKNS_6BigIntES3_
// 地址: 0xd1a658
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >* 
    x0 = Botan::DL_Group::data()
char var_48 = 0x1c
int64_t var_47
__builtin_strncpy(&var_47, "multiply_mod_q", 0xf)
Botan::DL_Group_Data::assert_q_is_set(x0)
return Botan::Modular_Reducer::multiply(Botan::DL_Group::data() + 0xd0, arg2)
