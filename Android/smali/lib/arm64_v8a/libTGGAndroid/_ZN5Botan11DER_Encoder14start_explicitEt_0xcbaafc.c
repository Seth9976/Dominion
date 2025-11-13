// 函数: _ZN5Botan11DER_Encoder14start_explicitEt
// 地址: 0xcbaafc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int16_t entry_x1
uint64_t x1 = zx.q(entry_x1)

if (x1.d != 0x11)
    return Botan::DER_Encoder::start_cons(arg1, x1) __tailcall

void** x0_1 = __cxa_allocate_exception(0x20, x1)
int64_t x0_2
int128_t v0_1
x0_2, v0_1 = operator new(0x30)
int64_t var_40 = x0_2
int128_t var_50 = data_71ce10
__builtin_strncpy(x0_2, "DER_Encoder.start_explicit(SET) not supported", 0x2e)
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
