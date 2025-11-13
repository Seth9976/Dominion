// 函数: _ZN5Botan12StreamCipher15create_or_throwERKNSt6__ndk112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_
// 地址: 0xd02c20
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t result = Botan::StreamCipher::create(arg1, arg2)
int64_t* entry_x8

if (*entry_x8 != 0)
    return result

*entry_x8 = 0
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >* 
    x0 = __cxa_allocate_exception(0x20)
char var_38 = 0x1a
int64_t var_37
__builtin_strncpy(&var_37, "Stream cipher", 0xe)
Botan::Lookup_Error::Lookup_Error(x0, &var_38, arg1)
__cxa_throw(x0, _typeinfo_for_Botan::Lookup_Error, Botan::Exception::~Exception)
noreturn
