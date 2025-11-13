// 函数: _ZN5Botan6Filter8set_portEm
// 地址: 0xd79728
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t entry_x1

if (entry_x1 u< (*(arg1 + 0x28) - *(arg1 + 0x20)) s>> 3)
    *(arg1 + 0x38) = entry_x1
    return 

void** x0 = __cxa_allocate_exception(0x20)
int64_t x0_1
int128_t v0
x0_1, v0 = operator new(0x20)
int64_t var_30 = x0_1
int128_t var_40 = data_71abe0
__builtin_strncpy(x0_1, "Filter: Invalid port number", 0x1c)
*x0 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0[1])
*x0 = _vtable_for_Botan::Invalid_Argument + 0x10
__cxa_throw(x0, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
noreturn
