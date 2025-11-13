// 函数: _ZNK5Botan8DL_Group4dataEv
// 地址: 0xd18a7c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* entry_x0
int64_t result = *entry_x0

if (result != 0)
    return result

void** x0 = __cxa_allocate_exception(0x20)
char var_38
__builtin_strncpy(&var_38, ",DL_Group uninitialized", 0x18)
*x0 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0[1])
*x0 = _vtable_for_Botan::Invalid_State + 0x10
__cxa_throw(x0, _typeinfo_for_Botan::Invalid_State, Botan::Exception::~Exception)
noreturn
