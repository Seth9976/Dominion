// 函数: _ZNSt6__ndk112ctype_bynameIwEC1ERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEm
// 地址: 0x10cf8c8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x21 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x21 + 0x28)
*arg1 = _vtable_for_std::__ndk1::ctype_byname<wchar_t> + 0x10
int64_t entry_x2
*(arg1 + 8) = entry_x2 - 1
int64_t* x1

if ((zx.d(*arg2) & 1) != 0)
    x1 = *(arg2 + 0x10)
else
    x1 = arg2 + 1

int64_t result = newlocale(0x1fbf, x1, nullptr)
*(arg1 + 0x10) = result

if (result == 0)
    std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
        "ctype_byname<wchar_t>::ctype_byname failed to construct for ", arg2)
    sub_10cdaec()
    noreturn

if (*(x21 + 0x28) == x8)
    return result

__stack_chk_fail()
noreturn
