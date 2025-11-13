// 函数: _ZNSt6__ndk112system_errorC1ENS_10error_codeERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE
// 地址: 0x10e8754
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x20 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x20 + 0x28)
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >* 
    x19 = arg1
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const
    & var_38 = arg2
int64_t x2
int64_t var_30 = x2
char var_68
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &var_68)
std::__ndk1::system_error::__init(&var_38, &var_68)
int64_t result
int128_t v0
result, v0 = std::runtime_error::runtime_error(x19)
char var_50
void* var_40

if ((zx.d(var_50) & 1) != 0)
    result, v0 = operator delete(var_40)
void* var_58

if ((zx.d(var_68) & 1) != 0)
    result, v0 = operator delete(var_58)
*x19 = _vtable_for_std::__ndk1::system_error + 0x10
*(x19 + 0x10) = var_38.o

if (*(x20 + 0x28) == x8)
    return result

__stack_chk_fail()
noreturn
