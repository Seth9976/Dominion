// 函数: _ZN5Botan14AutoSeeded_RNG12force_reseedEv
// 地址: 0xccd1c4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* entry_x0
void* x21 = *(entry_x0 + 8)
std::__ndk1::recursive_mutex::lock()
*(x21 + 0x50) = 0
std::__ndk1::recursive_mutex::unlock()
int64_t* x0_2 = *(entry_x0 + 8)
char var_38
(*(*x0_2 + 0x10))(x0_2, &var_38, 1)
void* x20_1 = *(entry_x0 + 8)
std::__ndk1::recursive_mutex::lock()
int64_t x20_2 = *(x20_1 + 0x50)
int64_t result = std::__ndk1::recursive_mutex::unlock()

if (x20_2 != 0)
    return result

void** x0_5 = __cxa_allocate_exception(0x20)
int64_t x0_6
int128_t v0
x0_6, v0 = operator new(0x20)
int64_t var_40 = x0_6
int128_t var_50 = data_71b7d0
__builtin_strncpy(x0_6, "AutoSeeded_RNG reseeding failed", 0x20)
std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
    "Internal error: ", &var_50)
*x0_5 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0_5[1])
void* var_28

if ((zx.d(var_38) & 1) != 0)
    operator delete(var_28)
*x0_5 = _vtable_for_Botan::Internal_Error + 0x10
__cxa_throw(x0_5, _typeinfo_for_Botan::Internal_Error, Botan::Exception::~Exception)
noreturn
