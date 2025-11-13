// 函数: _ZNK5Botan9Power_Mod12set_exponentERKNS_6BigIntE
// 地址: 0xdd89e4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* entry_x1

if (*(entry_x1 + 0x20) == 0)
    void** x0_1 = __cxa_allocate_exception(0x20)
    int64_t x0_2
    int128_t v0
    x0_2, v0 = operator new(0x30)
    v0 = data_71aa70
    int64_t var_30_1 = x0_2
    __builtin_strncpy(x0_2, "Power_Mod::set_exponent: arg must be > 0", 0x29)
    int128_t var_40_1 = v0
    *x0_1 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_1[1])
    *x0_1 = _vtable_for_Botan::Invalid_Argument + 0x10
    __cxa_throw(x0_1, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
    noreturn

int64_t* x0 = *(arg1 + 8)

if (x0 != 0)
    jump(*(*x0 + 8))

void** x0_6 = __cxa_allocate_exception(0x20)
int64_t x0_7
int128_t v0_1
x0_7, v0_1 = operator new(0x30)
int64_t var_50 = x0_7
int128_t var_60 = data_71aa70
__builtin_strncpy(x0_7, "Power_Mod::set_exponent: m_core was NULL", 0x29)
std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
    "Internal error: ", &var_60)
*x0_6 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0_6[1])
char var_40
void* var_30

if ((zx.d(var_40) & 1) != 0)
    operator delete(var_30)
*x0_6 = _vtable_for_Botan::Internal_Error + 0x10
__cxa_throw(x0_6, _typeinfo_for_Botan::Internal_Error, Botan::Exception::~Exception)
noreturn
