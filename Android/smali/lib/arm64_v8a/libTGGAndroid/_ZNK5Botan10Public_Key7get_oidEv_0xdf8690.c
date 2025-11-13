// 函数: _ZNK5Botan10Public_Key7get_oidEv
// 地址: 0xdf8690
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* entry_x0
(*(*entry_x0 + 0x10))()
char var_50
int64_t result = Botan::OIDS::str2oid_or_empty(&var_50)
void* var_40

if ((zx.d(var_50) & 1) != 0)
    result = operator delete(var_40)
void* entry_x8

if (*(entry_x8 + 8) != *(entry_x8 + 0x10))
    return result

void** x0_2 = __cxa_allocate_exception(0x20)
(*(*entry_x0 + 0x10))(entry_x0)
void var_88
int128_t* x0_5
int128_t v0
x0_5, v0 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::insert(
    &var_88, nullptr)
int64_t var_60 = x0_5[1].q
int128_t var_70 = *x0_5
__builtin_memset(x0_5, 0, 0x18)
int128_t* x0_7
int128_t v0_1
x0_7, v0_1 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
    &var_70)
int64_t var_40_1 = x0_7[1].q
var_50.o = *x0_7
__builtin_memset(x0_7, 0, 0x18)
*x0_2 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0_2[1])
*x0_2 = _vtable_for_Botan::Lookup_Error + 0x10
__cxa_throw(x0_2, _typeinfo_for_Botan::Lookup_Error, Botan::Exception::~Exception)
noreturn
