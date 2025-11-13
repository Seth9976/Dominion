// 函数: _ZN5Botan17EMSA_PKCS1v15_Raw8raw_dataEv
// 地址: 0xd61fe0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* entry_x0
int64_t x9 = *(entry_x0 + 0x40)
int64_t x10 = *(entry_x0 + 0x48)
int64_t* entry_x8
*entry_x8 = x9
entry_x8[1] = x10
int64_t x11 = *(entry_x0 + 0x50)
__builtin_memset(entry_x0 + 0x40, 0, 0x18)
entry_x8[2] = x11
int64_t x12 = *(entry_x0 + 8)

if (x12 == 0 || x10 - x9 == x12)
    return 

int64_t* var_68 = entry_x8
int64_t var_60 = x11
int64_t var_58 = x9
void** x0 = __cxa_allocate_exception(0x20)
int64_t x0_1
int128_t v0
x0_1, v0 = operator new(0x40)
int64_t var_40 = x0_1
int128_t var_50 = data_71b3f0
__builtin_strncpy(x0_1, "EMSA_PKCS1v15_Raw::encoding_of: Bad input length", 0x31)
std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
    "Encoding error: ", &var_50)
*x0 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0[1])
*x0 = _vtable_for_Botan::Invalid_Argument + 0x10
char var_38
void* var_28

if ((zx.d(var_38) & 1) != 0)
    operator delete(var_28)
*x0 = _vtable_for_Botan::Encoding_Error + 0x10
__cxa_throw(x0, _typeinfo_for_Botan::Encoding_Error, Botan::Exception::~Exception)
noreturn
