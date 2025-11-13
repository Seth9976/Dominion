// 函数: _ZNSt6__ndk111basic_regexIcNS_12regex_traitsIcEEE7__parseIPKcEET_S7_S7_
// 地址: 0xf10564
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void** x0 = operator new(8)
*x0 = _vtable_for_std::__ndk1::__end_state<char> + 0x10
void** x0_1 = operator new(0x10)
*x0_1 = _vtable_for_std::__ndk1::__empty_state<char> + 0x10
x0_1[1] = x0
void** x0_2 = operator new(0x20)
x0_2[2] = 0
x0_2[3] = x0_1
*x0_2 = _vtable_for_std::__ndk1::__shared_ptr_pointer<std::__ndk1::__empty_state<char>*, std::__ndk1::default_delete<std::__ndk1::__empty_state<char> >, std::__ndk1::allocator<std::__ndk1::__empty_state<char> > >
    + 0x10
x0_2[1] = 0
int64_t* x22_1 = *(arg1 + 0x30)
*(arg1 + 0x28) = x0_1
*(arg1 + 0x30) = x0_2

if (x22_1 != 0)
    int64_t x9_1
    int32_t i
    
    do
        x9_1 = __ldaxr(&x22_1[1])
        i = __stlxr(x9_1 - 1, &x22_1[1])
    while (i != 0)
    
    if (x9_1 == 0)
        (*(*x22_1 + 0x10))(x22_1)
        std::__ndk1::__shared_weak_count::__release_weak()

int32_t x8_6 = *(arg1 + 0x18) & 0x1f0
*(arg1 + 0x38) = *(arg1 + 0x28)

if (x8_6 s<= 0x3f)
    if (x8_6 == 0)
        return std::__ndk1::basic_regex<char, std::__ndk1::regex_traits<char> >::__parse_ecma_exp<char const*>(
            arg1, arg2) __tailcall
    
    if (x8_6 == 0x10)
        return std::__ndk1::basic_regex<char, std::__ndk1::regex_traits<char> >::__parse_basic_reg_exp<char const*>(
            arg1, arg2) __tailcall
    
    if (x8_6 != 0x20)
        sub_f10fec()
        noreturn
else if (x8_6 != 0x40)
    if (x8_6 == 0x80)
        return std::__ndk1::basic_regex<char, std::__ndk1::regex_traits<char> >::__parse_grep<char const*>(
            arg1, arg2) __tailcall
    
    if (x8_6 == 0x100)
        return std::__ndk1::basic_regex<char, std::__ndk1::regex_traits<char> >::__parse_egrep<char const*>(
            arg1, arg2) __tailcall
    
    sub_f10fec()
    noreturn

return std::__ndk1::basic_regex<char, std::__ndk1::regex_traits<char> >::__parse_extended_reg_exp<char const*>(
    arg1, arg2) __tailcall
