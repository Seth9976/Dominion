// 函数: _ZN5Botan8PSSR_Raw8raw_dataEv
// 地址: 0xd63af0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* entry_x0
int64_t x19 = *(entry_x0 + 0x10)
int64_t x22 = *(entry_x0 + 0x18)
int64_t* entry_x8
*entry_x8 = x19
entry_x8[1] = x22
int64_t x21 = *(entry_x0 + 0x20)
__builtin_memset(entry_x0 + 0x10, 0, 0x18)
entry_x8[2] = x21
int64_t* x8 = *(entry_x0 + 8)
int64_t result = (**x8)(x8)

if (x22 - x19 == result)
    return result

void** x0_1 = __cxa_allocate_exception(0x20)
int64_t x0_2
int128_t v0
x0_2, v0 = operator new(0x30)
int64_t var_60 = x0_2
int128_t var_70 = data_71ce10
__builtin_strncpy(x0_2, "PSSR_Raw Bad input length, did not match hash", 0x2e)
std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
    "Encoding error: ", &var_70)
*x0_1 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0_1[1])
*x0_1 = _vtable_for_Botan::Invalid_Argument + 0x10
char var_58
void* var_48

if ((zx.d(var_58) & 1) != 0)
    operator delete(var_48)
*x0_1 = _vtable_for_Botan::Encoding_Error + 0x10
__cxa_throw(x0_1, _typeinfo_for_Botan::Encoding_Error, Botan::Exception::~Exception)
noreturn
