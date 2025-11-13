// 函数: _ZNKSt6__ndk17codecvtIDic9mbstate_tE5do_inERS1_PKcS5_RS5_PDiS7_RS7_
// 地址: 0x10d1a14
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x21 = _ReadMSR(tpidr_el0)
int64_t x10 = *(x21 + 0x28)
char32_t* var_48 = arg6
char const* var_40 = arg3
int64_t result = sub_10d1aac(arg3, arg4, &var_40, arg6, arg7, &var_48, 0x10ffff, 0)
*arg5 = var_40
char32_t** entry_x7
*entry_x7 = var_48

if (*(x21 + 0x28) == x10)
    return result

__stack_chk_fail()
noreturn
