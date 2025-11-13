// 函数: _ZTv0_n24_NSt6__ndk118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEED0Ev
// 地址: 0xef23f0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x19 = arg1 + *(*arg1 - 0x18)
*x19 = _vtable_for_std::__ndk1::basic_stringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
    + 0x18
*(x19 + 0x80) = _vtable_for_std::__ndk1::basic_stringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
    + 0x68
*(x19 + 0x10) = _vtable_for_std::__ndk1::basic_stringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
    + 0x40
*(x19 + 0x18) = _vtable_for_std::__ndk1::basic_stringbuf<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
    + 0x10

if ((zx.d(*(x19 + 0x58)) & 1) != 0)
    operator delete(*(x19 + 0x68))

std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >::~basic_streambuf()
std::__ndk1::basic_iostream<char, std::__ndk1::char_traits<char> >::~basic_iostream()
std::__ndk1::basic_ios<char, std::__ndk1::char_traits<char> >::~basic_ios()
return operator delete(x19) __tailcall
