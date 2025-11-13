// 函数: sub_5602b0
// 地址: 0x5602b0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_14 = __chkstk(0x1918)
int32_t var_18 = 0
int32_t var_8
uint32_t result
int32_t edx
result, edx = sub_568960(__security_cookie ^ &var_8, 0, 0x3ea, 0)

if (result s> 0)
    int32_t eax_3 = sub_568780(&var_8, edx, 0x3ea, &var_8)
    void arg_c80
    __builtin_memcpy(&arg_c80, eax_3, 0xc84)
    sub_5674c0(eax_3, 0x3ea, &arg_c80, 0xb, 7, 0)
    var_8 = 0
    result = sub_56bba0(&var_8, 0, sub_560360, &var_8, 1, 2)

CookieCheckFunction(result)
return result
