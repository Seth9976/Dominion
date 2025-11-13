// 函数: _ZNKSt6__ndk110__time_put8__do_putEPcRS1_PK2tmcc
// 地址: 0x10c06cc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x21 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x21 + 0x28)
char format = 0x25
char var_3b = arg5
char entry_x5
char var_3a = entry_x5
char var_39 = 0

if (zx.d(entry_x5) != 0)
    char var_3b_1 = entry_x5
    char var_3a_1 = arg5

int64_t x8_1
x8_1.d = arg3->tm_sec
x8_1:4.d = arg3->tm_min
size_t result = strftime_l(arg2, x8_1 - arg2, &format, arg4, *arg1)
void* x8_2 = arg2 + result
arg3->tm_sec = x8_2.d
arg3->tm_min = x8_2:4.d

if (*(x21 + 0x28) == x8)
    return result

__stack_chk_fail()
noreturn
