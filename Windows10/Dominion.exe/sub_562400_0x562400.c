// 函数: sub_562400
// 地址: 0x562400
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
void* eax_2 = sub_573400()
int32_t var_c94 = arg3
int32_t var_c98 = *(eax_2 + 0xc)

if (arg3 != 0 && sub_582de0(eax_2, arg3, *(eax_2 + 4), arg2).b == 0)
    int32_t var_cac_2 = arg4
    int32_t var_c90 = arg2
    int32_t entry_ebx
    sub_590de0(&var_c94, 1, &var_c90, 0x13, entry_ebx, var_c90)
    void* eax_3
    eax_3.b = 1
    CookieCheckFunction(eax_3)
    return eax_3

eax_2.b = 0
CookieCheckFunction(eax_2)
return eax_2
