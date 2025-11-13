// 函数: sub_5777b0
// 地址: 0x5777b0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
uint32_t result = 0
void* var_430 = arg3
void var_414
int32_t edx = sub_576540(&var_414, arg2, arg3, &var_414)
void* ecx = arg3
int32_t i = 7
void* esi = ecx + 0x159c

do
    int32_t eax_4 = *esi
    
    if (eax_4 != 0)
        if ((arg5 & 4) == 0)
            *(arg4 + (result << 2)) = *esi
            result += 1
        else
            uint32_t eax_5 = zx.d(eax_4.w)
            
            if (eax_5 u>= 0x320)
                edx = sub_591930()
                ecx = arg3
            
            char eax_8
            eax_8, edx = sub_577600(&var_414, edx, ecx, &var_414, *(eax_5 * 0x64 + ecx + 0x1a4c))
            
            if (eax_8 == 0)
                *(arg4 + (result << 2)) = *esi
                result += 1
    
    ecx = arg3
    i += 1
    esi += 0x10
while (i s< 0x21)

CookieCheckFunction(result)
return result
