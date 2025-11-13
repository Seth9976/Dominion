// 函数: _ZNSt6__ndk112future_errorC1ENS_10error_codeE
// 地址: 0x10a1ce4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x20 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x20 + 0x28)
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >* 
    x19 = arg1
int64_t x2
int64_t var_30 = x2
std::__ndk1::error_code::message()
int64_t result
int128_t v0
result, v0 = std::logic_error::logic_error(x19)
char var_50
void* var_40

if ((zx.d(var_50) & 1) != 0)
    result, v0 = operator delete(var_40)
*x19 = _vtable_for_std::__ndk1::future_error + 0x10
int64_t entry_x1
*(x19 + 0x10) = entry_x1.o

if (*(x20 + 0x28) == x8)
    return result

__stack_chk_fail()
noreturn
