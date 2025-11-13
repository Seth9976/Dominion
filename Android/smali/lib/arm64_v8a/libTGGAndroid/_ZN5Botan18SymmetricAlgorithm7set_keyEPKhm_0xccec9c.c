// 函数: _ZN5Botan18SymmetricAlgorithm7set_keyEPKhm
// 地址: 0xccec9c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

(*(*arg1 + 0x18))()
int64_t var_38
int64_t var_30
int64_t var_28
int64_t entry_x2

if (var_38 u<= entry_x2 && var_30 u>= entry_x2 && entry_x2 u% var_28 == 0)
    return (*(*arg1 + 0x28))(arg1, arg2, entry_x2)

std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >* 
    x0_2 = __cxa_allocate_exception(0x20)
(*(*arg1 + 0x20))(arg1)
Botan::Invalid_Key_Length::Invalid_Key_Length(x0_2, &var_38)
__cxa_throw(x0_2, _typeinfo_for_Botan::Invalid_Key_Length, Botan::Exception::~Exception)
noreturn
