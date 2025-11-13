// 函数: _ZNK5Botan14Cert_Extension17Basic_Constraints14get_path_limitEv
// 地址: 0xea6e14
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* entry_x0

if (zx.d(*(entry_x0 + 8)) != 0)
    return *(entry_x0 + 0x10)

void** x0_1 = __cxa_allocate_exception(0x20)
int64_t x0_2
int128_t v0
x0_2, v0 = operator new(0x30)
(*"_limit: Not a CA")[0].o
int64_t var_30 = x0_2
v0 = data_71cfc0
__builtin_strncpy(x0_2, "Basic_Constraints::get_path_limit: Not a CA", 0x2c)
int128_t var_40 = v0
*x0_1 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0_1[1])
*x0_1 = _vtable_for_Botan::Invalid_State + 0x10
__cxa_throw(x0_1, _typeinfo_for_Botan::Invalid_State, Botan::Exception::~Exception)
noreturn
