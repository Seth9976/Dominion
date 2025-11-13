// 函数: _ZNK5Botan9PK_Signer16signature_lengthEv
// 地址: 0xdfe6e0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* entry_x0
int32_t x8 = entry_x0[1].d

if (x8 == 1)
    return (*(**entry_x0 + 0x10))() + (entry_x0[2] << 2) + 8

if (x8 == 0)
    jump(*(**entry_x0 + 0x10))

void** x0_4 = __cxa_allocate_exception(0x20)
int64_t x0_5
int128_t v0
x0_5, v0 = operator new(0x30)
int64_t var_40 = x0_5
int128_t var_50 = data_71aa70
__builtin_strncpy(x0_5, "PK_Signer: Invalid signature format enum", 0x29)
std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
    "Internal error: ", &var_50)
*x0_4 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0_4[1])
char var_38
void* var_28

if ((zx.d(var_38) & 1) != 0)
    operator delete(var_28)
*x0_4 = _vtable_for_Botan::Internal_Error + 0x10
__cxa_throw(x0_4, _typeinfo_for_Botan::Internal_Error, Botan::Exception::~Exception)
noreturn
