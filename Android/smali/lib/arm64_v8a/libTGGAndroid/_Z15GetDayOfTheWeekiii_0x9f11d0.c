// 函数: _Z15GetDayOfTheWeekiii
// 地址: 0x9f11d0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

time_t var_28
time(&var_28)
struct tm* tp = localtime(&var_28)
tp->tm_mon = arg2 - 1
tp->tm_year = arg3 - 0x76c
tp->tm_mday = arg1
mktime(tp)
return zx.q(tp->tm_wday)
