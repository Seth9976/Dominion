// 函数: _ZN5Botan4Pipe5writeEPKhm
// 地址: 0xd665d0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (zx.d(arg1[0x20]) != 0)
    jump(*(**(arg1 + 8) + 8))

void** x0_1 = __cxa_allocate_exception(0x20)
int64_t x0_2
int128_t v0
x0_2, v0 = operator new(0x40)
v0 = data_71d0c0
int64_t var_30 = x0_2
__builtin_strncpy(x0_2, "Cannot write to a Pipe while it is not processing", 0x32)
int128_t var_40 = v0
*x0_1 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0_1[1])
*x0_1 = _vtable_for_Botan::Invalid_State + 0x10
__cxa_throw(x0_1, _typeinfo_for_Botan::Invalid_State, Botan::Exception::~Exception)
noreturn
