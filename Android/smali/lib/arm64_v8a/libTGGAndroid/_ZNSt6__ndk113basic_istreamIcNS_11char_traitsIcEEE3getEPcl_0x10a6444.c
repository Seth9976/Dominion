// 函数: _ZNSt6__ndk113basic_istreamIcNS_11char_traitsIcEEE3getEPcl
// 地址: 0x10a6444
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x23 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x23 + 0x28)
*(*arg1 - 0x18)
void var_50
std::__ndk1::locale::locale(&var_50)
int64_t* x0_2 = std::__ndk1::locale::use_facet(&var_50)
(*(*x0_2 + 0x38))(x0_2, 0xa)
std::__ndk1::locale::~locale()
char entry_x2
int64_t result =
    std::__ndk1::basic_istream<char, std::__ndk1::char_traits<char> >::get(arg1, arg2, entry_x2)

if (*(x23 + 0x28) == x8)
    return result

__stack_chk_fail()
noreturn
