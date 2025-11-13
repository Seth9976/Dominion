// 函数: sub_53a860
// 地址: 0x53a860
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_14 = __chkstk(0x1918)
int32_t var_18 = 0
void var_8
uint32_t result
int32_t edx
result, edx = sub_568960(__security_cookie ^ &var_8, 0, 0x3ea, 0)

if (result s>= 5)
    void arg_c80
    int32_t eax_3 = sub_568780(&arg_c80, edx, 0x3ea, &arg_c80)
    char var_18_1 = 0
    __builtin_memcpy(&var_8, eax_3, 0xc84)
    sub_5674c0(eax_3, 0x3ea, &var_8, 0xb, 7, var_18_1)
    void* eax_4 = sub_573400()
    int32_t var_24_1 = 0xc
    result =
        sub_588db0(eax_4, *(eax_4 + 0xc), *(eax_4 + 4), 4, 0x3ea, 0, 0, 0, nullptr, &arg_c80, 0)

CookieCheckFunction(result)
return result
