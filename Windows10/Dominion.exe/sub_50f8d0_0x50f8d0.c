// 函数: sub_50f8d0
// 地址: 0x50f8d0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
int32_t var_c8c[0x321]
int32_t ecx_1 = sub_590990(arg3, arg2, arg3, 0x3eb, &var_c8c)
int32_t esi = 0
int32_t var_c90 = ecx_1

if (ecx_1 s> 0)
    int32_t edx = arg4
    
    do
        uint32_t result = var_c8c[esi]
        uint32_t edi_1 = zx.d(result.w)
        
        if (edi_1 u>= 0x320)
            sub_591930()
            ecx_1 = var_c90
            edx = arg4
        
        if (*(edi_1 * 0x64 + arg3 + 0x1a4c) == edx)
            CookieCheckFunction(result)
            return result
        
        esi += 1
    while (esi s< ecx_1)

CookieCheckFunction(0)
return 0
