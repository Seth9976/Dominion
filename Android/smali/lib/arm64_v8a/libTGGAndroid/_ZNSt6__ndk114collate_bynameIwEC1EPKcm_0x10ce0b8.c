// 函数: _ZNSt6__ndk114collate_bynameIwEC1EPKcm
// 地址: 0x10ce0b8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x21 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x21 + 0x28)
*arg1 = _vtable_for_std::__ndk1::collate_byname<wchar_t> + 0x10
int64_t entry_x2
*(arg1 + 8) = entry_x2 - 1
int64_t result = newlocale(0x1fbf, arg2, nullptr)
*(arg1 + 0x10) = result

if (result != 0)
    if (*(x21 + 0x28) != x8)
        __stack_chk_fail()
        noreturn
    
    return result

size_t x0_1 = strlen(arg2)

if (x0_1 u>= -0x10)
    x0_1 = std::__ndk1::__basic_string_common<true>::__throw_length_error()

int64_t var_78
int64_t x22

if (x0_1 u>= 0x17)
    uint64_t x23_1 = (x0_1 + 0x10) & 0xfffffffffffffff0
    int64_t x0_3 = operator new(x23_1)
    x22 = x0_3
    size_t var_70_1 = x0_1
    int64_t var_68_1 = x0_3
    var_78 = x23_1 | 1
    memcpy(x22, arg2, x0_1)
else
    x22 = &var_78 | 1
    var_78.b = (x0_1.d << 1).b
    
    if (x0_1 != 0)
        memcpy(x22, arg2, x0_1)

*(x22 + x0_1) = 0
int128_t* x0_6
int128_t v0
x0_6, v0 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::insert(
    &var_78, nullptr)
int64_t var_50 = x0_6[1].q
int128_t var_60 = *x0_6
__builtin_memset(x0_6, 0, 0x18)
sub_10cdaec()
noreturn
