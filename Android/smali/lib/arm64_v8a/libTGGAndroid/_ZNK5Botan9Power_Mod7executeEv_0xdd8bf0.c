// 函数: _ZNK5Botan9Power_Mod7executeEv
// 地址: 0xdd8bf0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* entry_x0
int64_t* x0 = *(entry_x0 + 8)

if (x0 != 0)
    jump(*(*x0 + 0x10))

void** x0_1 = __cxa_allocate_exception(0x20)
int64_t x0_2
int128_t v0
x0_2, v0 = operator new(0x30)
int64_t var_40 = x0_2
int128_t var_50 = data_71b820
__builtin_strncpy(x0_2, "Power_Mod::execute: m_core was NULL", 0x24)
std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
    "Internal error: ", &var_50)
*x0_1 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0_1[1])
char var_38
void* var_28

if ((zx.d(var_38) & 1) != 0)
    operator delete(var_28)
*x0_1 = _vtable_for_Botan::Internal_Error + 0x10
__cxa_throw(x0_1, _typeinfo_for_Botan::Internal_Error, Botan::Exception::~Exception)
noreturn
