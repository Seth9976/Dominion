// 函数: _ZN5Botan3TLS21auth_method_to_stringENS0_11Auth_MethodE
// 地址: 0xe547e0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char* entry_x8
int16_t x10

if (arg1.d == 0)
    x10 = 0x5352
label_e548c0:
    *entry_x8 = 6
    *(entry_x8 + 1) = zx.d(x10) | 0x410000
    return 

if (arg1.d == 1)
    x10 = 0x5344
    goto label_e548c0

if (arg1.d == 2)
    __builtin_strcpy(entry_x8, "\nECDSA")
    return 

if (arg1.d == 0x10000)
    *entry_x8 = 0x10
    __builtin_strncpy(&entry_x8[1], "IMPLICIT", 9)
    return 

if (arg1.d == 0x10001)
    *entry_x8 = 0x12
    __builtin_strncpy(&entry_x8[1], "ANONYMOUS", 0xa)
    return 

void** x0 = __cxa_allocate_exception(0x20)
int64_t x0_1
int128_t v0
x0_1, v0 = operator new(0x30)
v0 = data_71aa70
int64_t var_30 = x0_1
__builtin_strncpy(x0_1, "auth_method_to_string unknown enum value", 0x29)
int128_t var_40 = v0
*x0 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0[1])
*x0 = _vtable_for_Botan::Invalid_State + 0x10
__cxa_throw(x0, _typeinfo_for_Botan::Invalid_State, Botan::Exception::~Exception)
noreturn
