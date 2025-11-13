// 函数: _ZN5Botan4Pipe15set_default_msgEm
// 地址: 0xd7bb68
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x8 = *(arg1 + 0x10)
int64_t entry_x1

if (*(x8 + 0x28) + *(x8 + 0x30) u> entry_x1)
    *(arg1 + 0x18) = entry_x1
    return 

void** x0 = __cxa_allocate_exception(0x20)
int64_t x0_1
int128_t v0
x0_1, v0 = operator new(0x30)
(*"mber is too high")[0].o
int64_t var_30 = x0_1
v0 = data_71ce10
__builtin_strncpy(x0_1, "Pipe::set_default_msg: msg number is too high", 0x2e)
int128_t var_40 = v0
*x0 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0[1])
*x0 = _vtable_for_Botan::Invalid_Argument + 0x10
__cxa_throw(x0, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
noreturn
