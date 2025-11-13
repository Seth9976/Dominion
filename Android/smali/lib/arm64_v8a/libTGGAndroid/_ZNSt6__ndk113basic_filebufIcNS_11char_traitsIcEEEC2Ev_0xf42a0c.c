// 函数: _ZNSt6__ndk113basic_filebufIcNS_11char_traitsIcEEEC2Ev
// 地址: 0xf42a0c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >::basic_streambuf()
void** entry_x0
__builtin_memset(&entry_x0[8], 0, 0x18)
__builtin_memset(&entry_x0[0xc], 0, 0x43)
*entry_x0 = _vtable_for_std::__ndk1::basic_filebuf<char, std::__ndk1::char_traits<char> > + 0x10
void var_28
std::__ndk1::locale::locale(&var_28)
int32_t x0_2 = std::__ndk1::locale::has_facet(&var_28)
std::__ndk1::locale::~locale()

if ((x0_2 & 1) != 0)
    std::__ndk1::locale::locale(&var_28)
    entry_x0[0x10] = std::__ndk1::locale::use_facet(&var_28)
    std::__ndk1::locale::~locale()
    *(entry_x0 + 0xa2) = (*(*entry_x0[0x10] + 0x38))() & 1

return (*(*entry_x0 + 0x18))(entry_x0, 0, 0x1000)
