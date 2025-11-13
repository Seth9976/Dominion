// 函数: _ZNSt6__ndk112system_errorC1EiRKNS_14error_categoryE
// 地址: 0x10e8d50
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x22 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x22 + 0x28)
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >* 
    x20 = arg1
int32_t var_60 = arg2.d
int64_t entry_x2
int64_t var_58 = entry_x2
int16_t var_78 = 0
std::__ndk1::system_error::__init(&var_60, &var_78)
int64_t result = std::runtime_error::runtime_error(x20)
char var_50
void* var_40

if ((zx.d(var_50) & 1) != 0)
    result = operator delete(var_40)
void* var_68

if ((zx.d(var_78.b) & 1) != 0)
    result = operator delete(var_68)
*(x20 + 0x10) = arg2.d
*(x20 + 0x18) = entry_x2
*x20 = _vtable_for_std::__ndk1::system_error + 0x10

if (*(x22 + 0x28) == x8)
    return result

__stack_chk_fail()
noreturn
