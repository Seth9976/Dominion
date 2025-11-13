// 函数: sub_10a85b8
// 地址: 0x10a85b8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x21 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x21 + 0x28)
int32_t var_3c = 0
char var_40
std::__ndk1::basic_istream<wchar_t, std::__ndk1::char_traits<wchar_t> >::sentry::sentry(&var_40, 
    arg1.b)

if (zx.d(var_40) != 0)
    *(*arg1 - 0x18)
    void var_50
    std::__ndk1::locale::locale(&var_50)
    int64_t* x0_3 = std::__ndk1::locale::use_facet(&var_50)
    void* x3_1 = arg1 + *(*arg1 - 0x18)
    int64_t var_48
    (*(*x0_3 + 0x20))(x0_3, *(x3_1 + 0x28), 0, x3_1, &var_3c, &var_48)
    std::__ndk1::locale::~locale()
    int64_t x8_8 = var_48
    
    if (x8_8 s<= -0x8001)
        var_3c |= 4
        *arg2 = -0x8000
    else if (x8_8 s< 0x8000)
        *arg2 = (x8_8.d).w
    else
        var_3c |= 4
        *arg2 = 0x7fff
    
    void* x8_13 = arg1 + *(*arg1 - 0x18)
    int32_t x9_5 = *(x8_13 + 0x20) | var_3c | (*(x8_13 + 0x28) == 0 ? 1 : 0)
    bool cond:1_1 = (x9_5 & *(x8_13 + 0x24)) != 0
    *(x8_13 + 0x20) = x9_5
    
    if (cond:1_1)
        sub_10b053c()
        noreturn

if (*(x21 + 0x28) == x8)
    return arg1

__stack_chk_fail()
noreturn
