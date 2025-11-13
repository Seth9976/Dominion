// 函数: _ZN5Botan15nist_key_unwrapEPKhmRKNS_11BlockCipherE
// 地址: 0xdcb9fc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if ((*(*arg3 + 0x30))(arg3) != 0x10)
    void** x0_3 = __cxa_allocate_exception(0x20)
    int64_t x0_4
    int128_t v0
    x0_4, v0 = operator new(0x40)
    v0 = data_71d0c0
    int64_t var_40_1 = x0_4
    __builtin_strncpy(x0_4, "NIST key wrap algorithm requires a 128-bit cipher", 0x32)
    int128_t var_50_1 = v0
    *x0_3 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_3[1])
    *x0_3 = _vtable_for_Botan::Invalid_Argument + 0x10
    __cxa_throw(x0_3, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
    noreturn

if (arg2 u< 0x10 || (arg2 & 7) != 0)
    void** x0_8 = __cxa_allocate_exception(0x20)
    int64_t x0_9
    int128_t v0_1
    x0_9, v0_1 = operator new(0x30)
    v0_1 = data_71d3f0
    int64_t var_40_2 = x0_9
    __builtin_strncpy(x0_9, "Bad input size for NIST key unwrap", 0x23)
    int128_t var_50_2 = v0_1
    *x0_8 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_8[1])
    *x0_8 = _vtable_for_Botan::Invalid_Argument + 0x10
    __cxa_throw(x0_8, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
    noreturn

uint64_t var_28 = 0
int64_t* entry_x8
int64_t result = sub_dcbd24(entry_x8, arg1, arg2, arg3, &var_28)

if (var_28 == -0x595959595959595a)
    return result

void** x0_13 = __cxa_allocate_exception(0x20)
char var_68
__builtin_strncpy(&var_68, ",NIST key unwrap failed", 0x18)
std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
    "Invalid authentication tag: ", &var_68)
*x0_13 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0_13[1])
char var_50
void* var_40

if ((zx.d(var_50) & 1) != 0)
    operator delete(var_40)
*x0_13 = _vtable_for_Botan::Invalid_Authentication_Tag + 0x10
__cxa_throw(x0_13, _typeinfo_for_Botan::Invalid_Authentication_Tag, Botan::Exception::~Exception)
noreturn
