// 函数: _ZNSt6__ndk112system_errorC1EiRKNS_14error_categoryERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE
// 地址: 0x10e8ab8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x22 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x22 + 0x28)
int64_t* x20 = arg1
int32_t var_60 = arg2.d
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const
    & var_58 = arg3
char var_78
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &var_78)
std::__ndk1::system_error::__init(&var_60, &var_78)
int64_t result = std::runtime_error::runtime_error(x20)
char var_50
void* var_40

if ((zx.d(var_50) & 1) != 0)
    result = operator delete(var_40)
void* var_68

if ((zx.d(var_78) & 1) != 0)
    result = operator delete(var_68)
x20[2].d = arg2.d
x20[3] = arg3
*x20 = _vtable_for_std::__ndk1::system_error + 0x10

if (*(x22 + 0x28) == x8)
    return result

__stack_chk_fail()
noreturn
