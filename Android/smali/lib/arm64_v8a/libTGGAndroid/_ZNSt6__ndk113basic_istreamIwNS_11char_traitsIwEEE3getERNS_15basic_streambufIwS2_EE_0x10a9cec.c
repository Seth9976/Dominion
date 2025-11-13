// 函数: _ZNSt6__ndk113basic_istreamIwNS_11char_traitsIwEEE3getERNS_15basic_streambufIwS2_EE
// 地址: 0x10a9cec
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x22 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x22 + 0x28)
*(*arg1 - 0x18)
void var_40
std::__ndk1::locale::locale(&var_40)
int64_t* x0_2 = std::__ndk1::locale::use_facet(&var_40)
(*(*x0_2 + 0x58))(x0_2, 0xa)
std::__ndk1::locale::~locale()
wchar_t entry_x1
int64_t result =
    std::__ndk1::basic_istream<wchar_t, std::__ndk1::char_traits<wchar_t> >::get(arg1, entry_x1)

if (*(x22 + 0x28) == x8)
    return result

__stack_chk_fail()
noreturn
