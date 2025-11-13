// 函数: sub_563820
// 地址: 0x563820
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
void* ebx = sub_573400()
void* var_c98 = ebx
int16_t var_c8c[0x642]
uint32_t ecx_1 = sub_5777b0(&var_c8c, *(ebx + 0xc), *(ebx + 4), &var_c8c, arg2)
int32_t esi_1 = 0
uint32_t var_c94 = ecx_1
uint32_t result

if (ecx_1 s> 0)
    int32_t edx_1 = arg1
    
    do
        uint32_t edi_1 = zx.d(var_c8c[esi_1 * 2])
        int32_t ebx_1 = *(ebx + 4)
        
        if (edi_1 u>= 0x320)
            sub_591930()
            ecx_1 = var_c94
            edx_1 = arg1
        
        if (*(edi_1 * 0x64 + ebx_1 + 0x1a4c) == edx_1)
            result.b = 1
            CookieCheckFunction(result)
            return result
        
        ebx = var_c98
        esi_1 += 1
    while (esi_1 s< ecx_1)

result.b = 0
CookieCheckFunction(result)
return result
