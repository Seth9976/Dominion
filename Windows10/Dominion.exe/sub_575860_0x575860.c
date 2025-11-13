// 函数: sub_575860
// 地址: 0x575860
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
uint32_t eax_2 = arg2 * 0x5a30

if (*(eax_2 + arg3 + 0x17530) s>= 3)
    eax_2 = sub_576b30(eax_2, arg2, arg3, 0x19, 0, 0, 0)
    
    if (eax_2 s> 0)
        CookieCheckFunction(0)
        return 0

int32_t esi_1 = sub_590990(eax_2, arg2, arg3, 0x3ea, arg4)
int32_t var_c90[0x321]
uint32_t eax_5 = sub_590990(&var_c90, arg2, arg3, 0x3eb, &var_c90)
uint32_t var_c94_1 = eax_5
int32_t edi_1 = 0

if (eax_5 s> 0)
    do
        int32_t ebx_1 = var_c90[edi_1]
        eax_5 = sub_5757f0(eax_5, ebx_1.w, arg3, 0, 0x1000)
        
        if (eax_5.b != 0)
            eax_5 = arg4
            *(eax_5 + (esi_1 << 2)) = ebx_1
            esi_1 += 1
        
        edi_1 += 1
    while (edi_1 s< var_c94_1)

uint32_t result = 0
int32_t edi_2 = 0

if (esi_1 s> 0)
    do
        int32_t eax_7 = arg4 + (edi_2 << 2)
        
        if (sub_5757f0(eax_7, (*(arg4 + (edi_2 << 2))).w, arg3, 4, 0) != 0)
            *(arg4 + (result << 2)) = *eax_7
            result += 1
        
        edi_2 += 1
    while (edi_2 s< esi_1)

CookieCheckFunction(result)
return result
