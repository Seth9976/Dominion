// 函数: _ZTv0_n24_NSt6__ndk119basic_istringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEED1Ev
// 地址: 0xf05044
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x20 = arg1 + *(*arg1 - 0x18)
*x20 = _vtable_for_std::__ndk1::basic_istringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
    + 0x18
*(x20 + 0x78) = _vtable_for_std::__ndk1::basic_istringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
    + 0x40
*(x20 + 0x10) = _vtable_for_std::__ndk1::basic_stringbuf<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
    + 0x10

if ((zx.d(*(x20 + 0x50)) & 1) != 0)
    operator delete(*(x20 + 0x60))

std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >::~basic_streambuf()
std::__ndk1::basic_istream<char, std::__ndk1::char_traits<char> >::~basic_istream()
return std::__ndk1::basic_ios<char, std::__ndk1::char_traits<char> >::~basic_ios() __tailcall
