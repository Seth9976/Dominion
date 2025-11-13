// 函数: _Z20DailyMonthLayoutRowsi5Month
// 地址: 0xb3d8ac
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg2.d
int32_t x0 = DaysInMonth(arg1, arg2)

if (x0 == 0x1c)
    if (CalcDayOfTheWeek(arg1, zx.q(x19), 1) == 0)
        return 4
else if (x0 s>= 0x1d
        && CalcDayOfTheWeek(arg1, zx.q(x19), 1) s> CalcDayOfTheWeek(arg1, zx.q(x19), x0))
    return 6

return 5
