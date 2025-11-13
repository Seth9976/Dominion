// 函数: _ZN5Botan9EMSA_X931C1EPNS_12HashFunctionE
// 地址: 0xd64e78
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*arg1 = _vtable_for_Botan::EMSA_X931 + 0x10
*(arg1 + 8) = 0
*(arg1 + 0x10) = 0
*(arg1 + 0x18) = 0
int64_t* entry_x1
*(arg1 + 0x20) = entry_x1
Botan::Buffered_Computation::final()
void* x0_1 = *(arg1 + 8)

if (x0_1 != 0)
    int64_t x8_1 = *(arg1 + 0x18)
    *(arg1 + 0x10) = x0_1
    Botan::deallocate_memory(x0_1, x8_1 - x0_1, 1)
    __builtin_memset(arg1 + 8, 0, 0x18)

int128_t var_50
*(arg1 + 8) = var_50
void* var_40
*(arg1 + 0x18) = var_40
(*(*entry_x1 + 0x40))(entry_x1)
char result = Botan::ieee1363_hash_id(&var_50)
*(arg1 + 0x28) = result

if ((zx.d(var_50.b) & 1) != 0)
    operator delete(var_40)
    result = *(arg1 + 0x28)

if (zx.d(result) != 0)
    return result

void** x0_5 = __cxa_allocate_exception(0x20)
(*(*entry_x1 + 0x40))(entry_x1)
void var_88
int128_t* x0_8
int128_t v0_1
x0_8, v0_1 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::insert(
    &var_88, nullptr)
int64_t var_60 = x0_8[1].q
int128_t var_70 = *x0_8
__builtin_memset(x0_8, 0, 0x18)
std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
    "Encoding error: ", &var_70)
*x0_5 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0_5[1])
*x0_5 = _vtable_for_Botan::Invalid_Argument + 0x10

if ((zx.d(var_50.b) & 1) != 0)
    operator delete(var_40)

*x0_5 = _vtable_for_Botan::Encoding_Error + 0x10
__cxa_throw(x0_5, _typeinfo_for_Botan::Encoding_Error, Botan::Exception::~Exception)
noreturn
