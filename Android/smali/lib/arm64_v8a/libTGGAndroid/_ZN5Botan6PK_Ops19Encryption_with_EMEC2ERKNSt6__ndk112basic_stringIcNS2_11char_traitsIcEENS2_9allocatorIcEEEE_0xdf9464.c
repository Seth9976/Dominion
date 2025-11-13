// 函数: _ZN5Botan6PK_Ops19Encryption_with_EMEC2ERKNSt6__ndk112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE
// 地址: 0xdf9464
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*arg1 = _vtable_for_Botan::PK_Ops::Encryption_with_EME + 0x10
*(arg1 + 8) = 0
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >* 
    entry_x1
int64_t result = Botan::get_eme(entry_x1)
int64_t* x8_1 = *(arg1 + 8)
*(arg1 + 8) = result

if (x8_1 != 0)
    (*(*x8_1 + 8))(x8_1)
    result = *(arg1 + 8)

if (result != 0)
    return result

std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >* 
    x0_2 = __cxa_allocate_exception(0x20)
Botan::Algorithm_Not_Found::Algorithm_Not_Found(x0_2)
__cxa_throw(x0_2, _typeinfo_for_Botan::Algorithm_Not_Found, Botan::Exception::~Exception)
noreturn
