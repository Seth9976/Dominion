// 函数: sub_10a59a4
// 地址: 0x10a59a4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x21 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x21 + 0x28)
int32_t var_3c = 0
char var_40
std::__ndk1::basic_istream<char, std::__ndk1::char_traits<char> >::sentry::sentry(&var_40, arg1.b)

if (zx.d(var_40) != 0)
    *(*arg1 - 0x18)
    void var_48
    std::__ndk1::locale::locale(&var_48)
    int64_t* x0_3 = std::__ndk1::locale::use_facet(&var_48)
    void* x3_1 = arg1 + *(*arg1 - 0x18)
    (*(*x0_3 + 0x28))(x0_3, *(x3_1 + 0x28), 0, x3_1, &var_3c, arg2)
    std::__ndk1::locale::~locale()
    void* x8_10 = arg1 + *(*arg1 - 0x18)
    int32_t x9_4 = *(x8_10 + 0x20) | var_3c | (*(x8_10 + 0x28) == 0 ? 1 : 0)
    bool cond:1_1 = (x9_4 & *(x8_10 + 0x24)) != 0
    *(x8_10 + 0x20) = x9_4
    
    if (cond:1_1)
        sub_10b053c()
        noreturn

if (*(x21 + 0x28) == x8)
    return arg1

__stack_chk_fail()
noreturn
