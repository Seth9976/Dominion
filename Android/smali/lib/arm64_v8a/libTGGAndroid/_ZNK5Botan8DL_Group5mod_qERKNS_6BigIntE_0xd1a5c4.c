// 函数: _ZNK5Botan8DL_Group5mod_qERKNS_6BigIntE
// 地址: 0xd1a5c4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >* 
    x0 = Botan::DL_Group::data()
char var_38
__builtin_strcpy(&var_38, "\nmod_q")
Botan::DL_Group_Data::assert_q_is_set(x0)
return Botan::Modular_Reducer::reduce(Botan::DL_Group::data() + 0xd0)
