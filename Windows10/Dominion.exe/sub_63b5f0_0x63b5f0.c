// 函数: sub_63b5f0
// 地址: 0x63b5f0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
void arg_8
va_list lpOutputString = &arg_8
char var_408[0x400]
int32_t eax_3 = Mod1::CheckFCreateWriter(&arg_8, 0x400, &var_408, arg1, lpOutputString)

if (*(&lpOutputString:3 + eax_3) != 0xa)
    if (eax_3 s>= 0x3ff)
        *(&lpOutputString:3 + eax_3) = 0xa
    else
        *(&var_408 + eax_3) = 0xa

lpOutputString = &var_408
uint32_t result = OutputDebugStringA(lpOutputString)
CookieCheckFunction(result)
return result
