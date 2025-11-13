// 函数: sub_10ca6b8
// 地址: 0x10ca6b8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x21 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x21 + 0x28)
int64_t* x19 = arg1
*arg1 = _vtable_for_std::__ndk1::locale::facet + 0x10
arg1[1] = arg3 - 1
void* x1

if ((zx.d(*arg2) & 1) != 0)
    x1 = *(arg2 + 0x10)
else
    x1 = &arg2[1]

int64_t result = newlocale(0x1fbf, x1, nullptr)
x19[2] = result

if (result == 0)
    std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
        "time_put_byname failed to construct for ", arg2)
    sub_10cdaec()
    noreturn

*x19 = _vtable_for_std::__ndk1::time_put_byname<wchar_t, std::__ndk1::ostreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> > >
    + 0x10

if (*(x21 + 0x28) == x8)
    return result

__stack_chk_fail()
noreturn
