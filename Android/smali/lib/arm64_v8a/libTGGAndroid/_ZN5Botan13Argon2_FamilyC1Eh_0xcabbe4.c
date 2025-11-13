// 函数: _ZN5Botan13Argon2_FamilyC1Eh
// 地址: 0xcabbe4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char entry_x1
*(arg1 + 8) = entry_x1
*arg1 = _vtable_for_Botan::Argon2_Family + 0x10

if (zx.d(entry_x1) u< 3)
    return 

void** x0 = __cxa_allocate_exception(0x20)
int64_t x0_1
int128_t v0
x0_1, v0 = operator new(0x30)
int64_t var_30 = x0_1
v0 = data_71bb40
__builtin_strncpy(x0_1, "Unknown Argon2 family identifier", 0x21)
int128_t var_40 = v0
*x0 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0[1])
*x0 = _vtable_for_Botan::Invalid_Argument + 0x10
__cxa_throw(x0, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
noreturn
