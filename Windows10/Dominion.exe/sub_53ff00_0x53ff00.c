// 函数: sub_53ff00
// 地址: 0x53ff00
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
void* eax_2 = sub_573400()
int32_t var_c88
int32_t eax_3 = sub_590990(eax_2, 0xffffffff, *(eax_2 + 4), 5, &var_c88)
int32_t ecx_1

if (eax_3 != 0)
    if (eax_3 != 1)
        sub_591930()
    
    ecx_1 = var_c88
else
    ecx_1 = 0

void* result = sub_566bb0(ecx_1, 0)
CookieCheckFunction(result)
return result
