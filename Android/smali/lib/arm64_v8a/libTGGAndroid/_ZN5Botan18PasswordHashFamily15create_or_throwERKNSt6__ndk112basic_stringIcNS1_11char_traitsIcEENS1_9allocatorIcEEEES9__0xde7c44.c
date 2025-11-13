// 函数: _ZN5Botan18PasswordHashFamily15create_or_throwERKNSt6__ndk112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_
// 地址: 0xde7c44
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t result = Botan::PasswordHashFamily::create(arg1, arg2)
int64_t* entry_x8

if (*entry_x8 != 0)
    return result

*entry_x8 = 0
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >* 
    x0 = __cxa_allocate_exception(0x20)
char var_38
__builtin_strncpy(&var_38, "$PasswordHashFamily", 0x14)
Botan::Lookup_Error::Lookup_Error(x0, &var_38, arg1)
__cxa_throw(x0, _typeinfo_for_Botan::Lookup_Error, Botan::Exception::~Exception)
noreturn
