// 函数: _ZNK5Botan13DL_Group_Data15assert_q_is_setERKNSt6__ndk112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE
// 地址: 0xd1964c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(arg1 + 0x150) != 0)
    return 

void** x0 = __cxa_allocate_exception(0x20)
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >* 
    entry_x1
std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
    "DL_Group::", entry_x1)
char var_58[0x18]
int128_t* x0_2
int128_t v0
x0_2, v0 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
    &var_58)
int64_t var_30 = x0_2[1].q
int128_t var_40 = *x0_2
__builtin_memset(x0_2, 0, 0x18)
*x0 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0[1])
*x0 = _vtable_for_Botan::Invalid_State + 0x10
__cxa_throw(x0, _typeinfo_for_Botan::Invalid_State, Botan::Exception::~Exception)
noreturn
