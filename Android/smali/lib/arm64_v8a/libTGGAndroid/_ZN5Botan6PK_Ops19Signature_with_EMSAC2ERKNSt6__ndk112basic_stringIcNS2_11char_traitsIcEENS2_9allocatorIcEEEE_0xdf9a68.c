// 函数: _ZN5Botan6PK_Ops19Signature_with_EMSAC2ERKNSt6__ndk112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE
// 地址: 0xdf9a68
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*arg1 = _vtable_for_Botan::PK_Ops::Signature_with_EMSA + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >* 
    entry_x1
*(arg1 + 8) = Botan::get_emsa(entry_x1)
int64_t result = Botan::hash_for_emsa(entry_x1)
int64_t x8_2 = *(arg1 + 8)
*(arg1 + 0x28) = 0

if (x8_2 != 0)
    return result

std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >* 
    x0_3 = __cxa_allocate_exception(0x20)
Botan::Algorithm_Not_Found::Algorithm_Not_Found(x0_3)
__cxa_throw(x0_3, _typeinfo_for_Botan::Algorithm_Not_Found, Botan::Exception::~Exception)
noreturn
