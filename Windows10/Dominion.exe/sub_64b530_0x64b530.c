// 函数: sub_64b530
// 地址: 0x64b530
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie

if (arg2 == 0)
    int32_t ecx = arg3[1].d
    *arg4 = *arg3
    arg4[1].d = ecx
    CookieCheckFunction(arg4)
    return arg4

struct tm _Tm
_Tm.tm_sec = 0
_Tm.tm_min = 0
_Tm.tm_year = *arg3 - 0x76c
_Tm.tm_hour = 0
_Tm.tm_mon = *(arg3 + 4) - 1
_Tm.tm_wday = 0
_Tm.tm_yday = 0
_Tm.tm_mday = arg3[1].d + arg2
_Tm.tm_isdst = 0
_mktime64(&_Tm)
int32_t tm_mday = _Tm.tm_mday
int32_t esi_1 = _Tm.tm_mon + 1
*arg4 = _Tm.tm_year + 0x76c
*(arg4 + 4) = esi_1
arg4[1].d = tm_mday
CookieCheckFunction(arg4)
return arg4
