// 函数: _Z7DateAddRiS_i
// 地址: 0xb3ebbc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

struct tm tp
tp.tm_zone = 0
tp.tm_sec = 0
tp.tm_min = 0
tp.tm_hour = 0
tp.tm_mday = 0
tp.tm_mon = 0
tp.tm_year = 0
tp.tm_wday = 0
tp.tm_yday = 0
tp.tm_isdst = 0
tp.tm_gmtoff = 0
tp.tm_mon = *arg1 - 1
tp.tm_year = 0x64
tp.tm_hour = 0xc
tp.tm_mday = *arg2
time_t t = mktime(&tp) + muls.dp.d(arg3, 0x15180)
struct tm* result
int128_t v0
int128_t v1
int128_t v2
result, v0, v1, v2 = localtime(&t)
v1.d = result->tm_sec
v1:4.d = result->tm_min
v1:8.d = result->tm_hour
v1:0xc.d = result->tm_mday
v0.d = result->tm_mon
v0:4.d = result->tm_year
v0:8.d = result->tm_wday
v0:0xc.d = result->tm_yday
v2.d = result->tm_isdst
v2:8.q = result->tm_gmtoff
tp.tm_sec = v1.d
tp.tm_min = v1:4.d
tp.tm_hour = v1:8.d
tp.tm_mday = v1:0xc.d
tp.tm_mon = v0.d
tp.tm_year = v0:4.d
tp.tm_wday = v0:8.d
tp.tm_yday = v0:0xc.d
tp.tm_zone = result->tm_zone
tp.tm_isdst = v2.d
tp.tm_gmtoff = v2:8.q
*arg1 = tp.tm_mon + 1
*arg2 = tp.tm_mday
return result
