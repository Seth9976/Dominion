// 函数: sub_591b80
// 地址: 0x591b80
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
void var_c94
int32_t eax_4 = sub_590b50(&var_c94, arg2, arg3, &var_c94)
void* ecx = &var_c94
int32_t var_14 = eax_4
void* var_c9c = &var_c94
uint32_t result = 0
void* eax_5 = &var_c94 + (eax_4 << 2)

if (&var_c94 != eax_5)
    do
        uint32_t edi_2 = zx.d((*ecx).w)
        
        if (edi_2 u>= 0x320)
            sub_591930()
        
        int32_t i = *(edi_2 * 0x64 + arg3 + 0x1a4c)
        int32_t eax_7 = 0
        
        if (result s> 0)
            while (*(arg4 + (eax_7 << 2)) != i)
                eax_7 += 1
                
                if (eax_7 s>= result)
                    break
        
        int32_t edx = eax_7 << 2
        
        if (eax_7 == result)
            *(edx + arg5) = 0
            *(arg4 + (result << 2)) = i
            result += 1
        
        *(edx + arg5) += 1
        ecx = var_c9c + 4
        var_c9c = ecx
    while (ecx != eax_5)

CookieCheckFunction(result)
return result
