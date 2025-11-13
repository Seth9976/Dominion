// 函数: sub_52f8b0
// 地址: 0x52f8b0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__chkstk(0x198c)
__security_cookie
int32_t arg_1914[0x1b]
int32_t eax_2 = sub_56d920(&arg_1914)
uint32_t result_1 = 0
void* eax_3 = sub_573400()
void arg_4
int32_t eax_4 = sub_590b50(eax_3, *(eax_3 + 0xc), *(eax_3 + 4), &arg_4)
int32_t arg_c84 = eax_4
void arg_c8c
__builtin_memcpy(&arg_c8c, &arg_4, 0xc84)
void* esi = &arg_c8c
void* eax_5 = &arg_c8c + (eax_4 << 2)

if (&arg_c8c == eax_5)
    CookieCheckFunction(0)
    return 0

uint32_t result

do
    uint32_t edi_2 = zx.d((*esi).w)
    void* ecx_2 = *(sub_573400() + 4)
    
    if (edi_2 u>= 0x320)
        sub_591930()
    
    int32_t eax_7 = edi_2 * 0x64
    char eax_8 = sub_5754f0(eax_7, *(eax_7 + ecx_2 + 0x1a4c), ecx_2, 8, 0)
    int32_t i
    int32_t ecx_4
    
    if (eax_8 == 0)
        i = sub_57dc30(*(sub_573400() + 4), (*esi).w)
        ecx_4 = 0
    
    if (eax_8 != 0 || eax_2 s<= 0)
    label_52f98f:
        result = result_1
    else
        while (arg_1914[ecx_4] != i)
            ecx_4 += 1
            
            if (ecx_4 s>= eax_2)
                goto label_52f98f
        
        result = result_1 + 1
        result_1 = result
    
    esi += 4
while (esi != eax_5)

CookieCheckFunction(result)
return result
