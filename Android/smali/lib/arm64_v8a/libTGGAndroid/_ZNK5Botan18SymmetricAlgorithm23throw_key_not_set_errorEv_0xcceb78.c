// 函数: _ZNK5Botan18SymmetricAlgorithm23throw_key_not_set_errorEv
// 地址: 0xcceb78
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void** x0 = __cxa_allocate_exception(0x20)
int64_t* entry_x0
(*(*entry_x0 + 0x20))(entry_x0)
void var_50
std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
    "Key not set in ", &var_50)
*x0 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0[1])
*x0 = _vtable_for_Botan::Invalid_State + 0x10
char var_38
void* var_28

if ((zx.d(var_38) & 1) != 0)
    operator delete(var_28)
*x0 = _vtable_for_Botan::Key_Not_Set + 0x10
__cxa_throw(x0, _typeinfo_for_Botan::Key_Not_Set, Botan::Exception::~Exception)
noreturn
