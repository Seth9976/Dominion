// 函数: _Z10IsThisWeekRK4Date
// 地址: 0xb3dcb0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t* x20 = GetClient() + 0x75f8
int64_t x0_4
int32_t x1_2
x0_4, x1_2 = DateAdd_Day(x20, neg.d(GetDayOfTheWeek(x20[2], x20[1], *x20)))
int64_t var_30 = x0_4
int32_t var_28 = x1_2
return zx.q(operator==(arg1, &var_30)) & 1
