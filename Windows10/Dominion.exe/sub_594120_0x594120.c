// 函数: sub_594120
// 地址: 0x594120
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
uint32_t esi = zx.d(arg2)

if (esi u>= 0x320)
    sub_591930()

int32_t eax_3 = sub_57da30(arg3, *(esi * 0x64 + arg3 + 0x1a4c))
int32_t var_1c[0x4]
uint32_t result = sub_577b50(eax_3, eax_3, arg3 + 0xd4c, &var_1c)
int32_t ecx_2 = 0

if (result s> 0)
    do
        if (var_1c[ecx_2] == arg4)
            result.b = 1
            CookieCheckFunction(result)
            return result
        
        ecx_2 += 1
    while (ecx_2 s< result)

result.b = 0
CookieCheckFunction(result)
return result
