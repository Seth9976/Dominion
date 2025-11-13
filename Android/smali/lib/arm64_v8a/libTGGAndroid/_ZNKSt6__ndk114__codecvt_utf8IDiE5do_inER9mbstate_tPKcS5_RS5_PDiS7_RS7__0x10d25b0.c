// 函数: _ZNKSt6__ndk114__codecvt_utf8IDiE5do_inER9mbstate_tPKcS5_RS5_PDiS7_RS7_
// 地址: 0x10d25b0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x21 = _ReadMSR(tpidr_el0)
int64_t x11 = *(x21 + 0x28)
char32_t* var_48 = arg6
char const* var_40 = arg3
struct __mbstate_t x6
x6.__count = arg1->__offset(0x10).d
x6.__value.__wch = arg1->__offset(0x14).d
int64_t result = sub_10d1aac(arg3, arg4, &var_40, arg6, arg7, &var_48, x6, arg1->__offset(0x18).d)
*arg5 = var_40
char32_t** entry_x7
*entry_x7 = var_48

if (*(x21 + 0x28) == x11)
    return result

__stack_chk_fail()
noreturn
