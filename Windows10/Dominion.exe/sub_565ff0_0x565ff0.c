// 函数: sub_565ff0
// 地址: 0x565ff0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
void* eax_3 = sub_573400()
int32_t* ebx = *(eax_3 + 4)

if (sub_582de0(eax_3, arg3, ebx, arg2) == 0)
    uint32_t var_c90
    uint32_t eax_6 = sub_590990(&var_c90, 0xffffffff, ebx, 5, &var_c90)
    
    if (eax_6 != 0)
        if (eax_6 != 1)
            sub_591930()
        
        eax_6 = var_c90
    
    if (arg3 == eax_6)
        eax_6 = sub_591930()
    
    sub_5822e0(eax_6, arg4, ebx, arg3, arg8, arg5, arg6, 0, 0, 0, 0, 0, arg7, 0, arg9, arg10)

void* result = sub_583350(*(eax_3 + 4))
CookieCheckFunction(result)
return result
