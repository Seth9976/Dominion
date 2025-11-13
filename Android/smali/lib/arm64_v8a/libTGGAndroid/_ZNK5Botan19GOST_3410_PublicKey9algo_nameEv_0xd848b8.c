// 函数: _ZNK5Botan19GOST_3410_PublicKey9algo_nameEv
// 地址: 0xd848b8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* entry_x0
*(*entry_x0 - 0x88)
uint64_t x0_2 = *(Botan::EC_Group::data() + 0x1e0)
char var_38
void* var_28

if (x0_2 == 0x200 || x0_2 == 0x100)
    std::__ndk1::to_string(x0_2)
    int128_t* result
    int128_t v0
    result, v0 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::insert(
        &var_38, nullptr)
    int128_t* entry_x8
    entry_x8[1].q = result[1].q
    *entry_x8 = *result
    __builtin_memset(result, 0, 0x18)
    
    if ((zx.d(var_38) & 1) == 0)
        return result
    
    return operator delete(var_28)

void** x0_5 = __cxa_allocate_exception(0x20)
int64_t x0_6
int128_t v0_1
x0_6, v0_1 = operator new(0x40)
int64_t var_40 = x0_6
int128_t var_50 = data_71a7b0
__builtin_strncpy(x0_6, "GOST-34.10-2012 is not defined for parameters of this size", 0x3b)
std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
    "Encoding error: ", &var_50)
*x0_5 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0_5[1])
*x0_5 = _vtable_for_Botan::Invalid_Argument + 0x10

if ((zx.d(var_38) & 1) != 0)
    operator delete(var_28)

*x0_5 = _vtable_for_Botan::Encoding_Error + 0x10
__cxa_throw(x0_5, _typeinfo_for_Botan::Encoding_Error, Botan::Exception::~Exception)
noreturn
