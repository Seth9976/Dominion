// 函数: sub_5cc650
// 地址: 0x5cc650
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
int32_t var_c8c
int32_t eax_3 = sub_590990(&var_c8c, 0xffffffff, 0xb80ad8, 5, &var_c8c)
int32_t eax_4

if (eax_3 != 0)
    if (eax_3 != 1)
        sub_591930()
    
    uint32_t esi_1 = zx.d(var_c8c.w)
    
    if (esi_1 u>= 0x320)
        sub_591930()
    
    eax_4 = esi_1 * 0x64
else
    eax_4 = eax_3 * 0x64

uint32_t result = *(eax_4 + &data_b82524)
CookieCheckFunction(result)
return result
