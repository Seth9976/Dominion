// 函数: sub_5922e0
// 地址: 0x5922e0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
int32_t esi = 0
int32_t i = 7
int32_t* eax_2 = arg1 + 0x1594
int32_t var_78[0x1b]

do
    int32_t edx_1 = *eax_2
    
    if (edx_1 != 0 && eax_2[2] == 0)
        var_78[esi] = edx_1
        esi += 1
        
        if (esi == 0x1a)
            break
    
    i += 1
    eax_2 = &eax_2[4]
while (i s< 0x21)

void var_d00
int32_t eax_4 = sub_590b50(&var_d00, arg2, arg1, &var_d00)
void* edi_1 = &var_d00
int32_t var_80 = eax_4
int32_t var_d10 = 0
void* eax_5 = &var_d00 + (eax_4 << 2)

if (&var_d00 == eax_5)
    *arg3 = 0
    CookieCheckFunction(eax_5)
    return eax_5

int32_t ecx_4

do
    uint32_t ebx_1 = zx.d((*edi_1).w)
    
    if (ebx_1 u>= 0x320)
        sub_591930()
    
    int32_t eax_7 = ebx_1 * 0x64
    char eax_8 = sub_5754f0(eax_7, *(eax_7 + arg1 + 0x1a4c), arg1, 8, 0)
    int32_t i_1
    int32_t ecx_3
    
    if (eax_8 == 0)
        i_1 = sub_57dc30(arg1, (*edi_1).w)
        ecx_3 = 0
    
    if (eax_8 != 0 || esi s<= 0)
    label_5923bf:
        ecx_4 = var_d10
    else
        while (var_78[ecx_3] != i_1)
            ecx_3 += 1
            
            if (ecx_3 s>= esi)
                goto label_5923bf
        
        ecx_4 = var_d10 + 1
        var_d10 = ecx_4
    
    edi_1 += 4
while (edi_1 != eax_5)

*arg3 = ecx_4
CookieCheckFunction(arg3)
return arg3
