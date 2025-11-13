// 函数: _ZNKSt6__ndk110__time_put8__do_putEPwRS1_PK2tmcc
// 地址: 0x10c0b40
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x23 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x23 + 0x28)
char var_b8 = 0x25
char var_b7 = arg5
char entry_x5
char var_b6 = entry_x5
char var_b5 = 0

if (zx.d(entry_x5) != 0)
    char var_b7_1 = entry_x5
    char var_b6_1 = arg5

char s[0x64]
strftime_l(&s, 0x64, &var_b8, arg4, *arg1)
char const* var_c0 = &s
var_b8.q = 0
int64_t x8_1
x8_1.d = arg3->tm_sec
x8_1:4.d = arg3->tm_min
locale_t newloc = uselocale(*arg1)
size_t result = mbsrtowcs(arg2, &var_c0, (x8_1 - arg2) s>> 2, &var_b8)
size_t result_1 = result

if (newloc != 0)
    result = uselocale(newloc)

if (result_1 == -1)
    std::__ndk1::__throw_runtime_error("locale not supported")
else
    void* x8_3 = arg2 + (result_1 << 2)
    arg3->tm_sec = x8_3.d
    arg3->tm_min = x8_3:4.d
    
    if (*(x23 + 0x28) == x8)
        return result

__stack_chk_fail()
noreturn
