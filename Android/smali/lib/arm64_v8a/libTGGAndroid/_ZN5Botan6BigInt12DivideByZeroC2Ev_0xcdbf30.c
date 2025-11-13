// 函数: _ZN5Botan6BigInt12DivideByZeroC2Ev
// 地址: 0xcdbf30
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char var_38
__builtin_strncpy(&var_38, "*BigInt divide by zero", 0x17)
void** entry_x0
*entry_x0 = _vtable_for_Botan::Exception + 0x10
int64_t result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &entry_x0[1])
*entry_x0 = _vtable_for_Botan::Invalid_Argument + 0x10
*entry_x0 = _vtable_for_Botan::BigInt::DivideByZero + 0x10
return result
