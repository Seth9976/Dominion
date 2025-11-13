// 函数: sub_ebd354
// 地址: 0xebd354
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg2 != 1)
    sub_1101e04(arg1)
    noreturn

__cxa_begin_catch(arg1)
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >* 
    x0_2 = __cxa_allocate_exception(0x20)
int64_t x0_3
int128_t v0
x0_3, v0 = operator new(0x30)
int64_t arg_10 = x0_3
int128_t arg_0 = data_71cbb0
__builtin_strncpy(x0_3, "X509_Certificate::load_subject_public_key", 0x2a)
Botan::Exception::Exception(x0_2, &arg_0)
*x0_2 = _vtable_for_Botan::Decoding_Error + 0x10
__cxa_throw(x0_2, _typeinfo_for_Botan::Decoding_Error, Botan::Exception::~Exception)
noreturn
