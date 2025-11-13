// 函数: sub_565d30
// 地址: 0x565d30
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
void* eax_2 = sub_573400()
uint32_t ecx = *(eax_2 + 0xc)
int32_t* ebx = *(eax_2 + 4)
void* result = sub_582de0(eax_2, arg3, ebx, arg2)

if (result.b == 0)
    uint32_t var_c8c
    uint32_t eax_4 = sub_590990(&var_c8c, 0xffffffff, ebx, 5, &var_c8c)
    
    if (eax_4 != 0)
        if (eax_4 != 1)
            sub_591930()
        
        eax_4 = var_c8c
    
    if (arg3 == eax_4)
        eax_4 = sub_591930()
    
    result =
        sub_5822e0(eax_4, ecx, ebx, arg3, 0xb, arg4, 2, 0, 0, 0, 0, 0, nullptr, 0, 0xfffffffe, arg5)

CookieCheckFunction(result)
return result
