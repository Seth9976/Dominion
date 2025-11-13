// 函数: sub_74b450
// 地址: 0x74b450
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
HDC hDC = GetWindowDC(arg3)
CallWindowProcA(GetPropA(arg3, "Wprc"), arg3, arg2, arg4, arg5)
int32_t var_1c
GetWindowRect(arg3, &var_1c)
MapWindowPoints(nullptr, arg3, &var_1c, 2)
int32_t var_18
int32_t var_18_1 = var_18 + 2
var_1c += 2
uint32_t eax_3 = GetSysColor(COLOR_WINDOW)
sub_74b280(eax_3, &var_1c, hDC, 0xf, eax_3)
int32_t var_18_2 = var_18_1 + 1
var_1c += 1
int32_t var_10
int32_t var_10_1 = var_10 + 1
int32_t var_14
int32_t var_14_1 = var_14 + 1
uint32_t eax_4 = GetSysColor(COLOR_WINDOW)
sub_74b280(eax_4, &var_1c, hDC, 0xf, eax_4)
ReleaseDC(arg3, hDC)
CookieCheckFunction(1)
return 1
