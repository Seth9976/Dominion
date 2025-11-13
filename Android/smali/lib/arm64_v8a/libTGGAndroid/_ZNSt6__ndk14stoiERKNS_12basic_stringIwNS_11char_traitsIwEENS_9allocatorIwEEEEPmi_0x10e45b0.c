// 函数: _ZNSt6__ndk14stoiERKNS_12basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEEEPmi
// 地址: 0x10e45b0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x23 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x23 + 0x28)
char var_80 = 8
int32_t var_7f
__builtin_strncpy(&var_7f, "stoi", 5)
wchar_t* endptr = nullptr
void* __offset(
    std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> >, 
    0x4) nptr

if ((zx.d(*arg1) & 1) == 0)
    nptr = arg1 + 4
else
    nptr = *(arg1 + 0x10)

int32_t* x0 = __errno()
int32_t x24 = *x0
*x0 = 0
int64_t x0_2 = wcstol(nptr, &endptr, arg3)
int32_t x8_2 = *x0
*x0 = x24
char var_60[0x18]

if (x8_2 == 0x22)
    sub_cafe1c(&var_80, ": out of range", &var_60)
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >* 
        x0_6 = __cxa_allocate_exception(0x10)
    void** x20_2 = x0_6
    std::logic_error::logic_error(x0_6)
    *x20_2 = _vtable_for_std::out_of_range + 0x10
    __cxa_throw(x20_2, _typeinfo_for_std::out_of_range, std::out_of_range::~out_of_range)
    noreturn

wchar_t* endptr_1 = endptr

if (endptr_1 == nptr)
    sub_cafe1c(&var_80, ": no conversion", &var_60)
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >* 
        x0_9 = __cxa_allocate_exception(0x10)
    void** x20_3 = x0_9
    std::logic_error::logic_error(x0_9)
    *x20_3 = _vtable_for_std::invalid_argument + 0x10
    __cxa_throw(x20_3, _typeinfo_for_std::invalid_argument, 
        std::invalid_argument::~invalid_argument)
    noreturn

if (arg2 != 0)
    *arg2 = (endptr_1 - nptr) s>> 2

if (x0_2 != sx.q(x0_2.d))
    sub_cafe1c(&var_80, ": out of range", &var_60)
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >* 
        x0_12 = __cxa_allocate_exception(0x10)
    void** x20_4 = x0_12
    std::logic_error::logic_error(x0_12)
    *x20_4 = _vtable_for_std::out_of_range + 0x10
    __cxa_throw(x20_4, _typeinfo_for_std::out_of_range, std::out_of_range::~out_of_range)
    noreturn

void* var_70

if ((zx.d(var_80) & 1) != 0)
    operator delete(var_70)

if (*(x23 + 0x28) == x8)
    return zx.q(x0_2.d)

__stack_chk_fail()
noreturn
