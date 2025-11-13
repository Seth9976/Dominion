// 函数: _ZNSt6__ndk15stollERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPmi
// 地址: 0x10e4fcc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x23 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x23 + 0x28)
char var_80
__builtin_strcpy(&var_80, "\nstoll")
char* endptr = nullptr
void* __offset(
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, 
    0x1) nptr

if ((zx.d(*arg1) & 1) != 0)
    nptr = *(arg1 + 0x10)
else
    nptr = arg1 + 1

int32_t* x0 = __errno()
int32_t x24 = *x0
*x0 = 0
int64_t result = strtoll(nptr, &endptr, arg3)
int32_t x8_2 = *x0
*x0 = x24
char var_60[0x18]

if (x8_2 == 0x22)
    sub_cafe1c(&var_80, ": out of range", &var_60)
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >* 
        x0_5 = __cxa_allocate_exception(0x10)
    void** x20_2 = x0_5
    std::logic_error::logic_error(x0_5)
    *x20_2 = _vtable_for_std::out_of_range + 0x10
    __cxa_throw(x20_2, _typeinfo_for_std::out_of_range, std::out_of_range::~out_of_range)
    noreturn

char* endptr_1 = endptr

if (endptr_1 == nptr)
    sub_cafe1c(&var_80, ": no conversion", &var_60)
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >* 
        x0_8 = __cxa_allocate_exception(0x10)
    void** x20_3 = x0_8
    std::logic_error::logic_error(x0_8)
    *x20_3 = _vtable_for_std::invalid_argument + 0x10
    __cxa_throw(x20_3, _typeinfo_for_std::invalid_argument, 
        std::invalid_argument::~invalid_argument)
    noreturn

if (arg2 != 0)
    *arg2 = endptr_1 - nptr

void* var_70

if ((zx.d(var_80) & 1) != 0)
    operator delete(var_70)

if (*(x23 + 0x28) == x8)
    return result

__stack_chk_fail()
noreturn
