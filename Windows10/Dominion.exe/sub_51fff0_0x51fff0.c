// 函数: sub_51fff0
// 地址: 0x51fff0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__chkstk(0x25a4)
__security_cookie
int16_t eax_2 = sub_56b800()
void* eax_3
int32_t ecx
eax_3, ecx = sub_573400()
uint32_t esi_1 = zx.d(eax_2)
int32_t edi = *(eax_3 + 4)

if (esi_1 u>= 0x320)
    sub_591930()

int32_t eax_4 = esi_1 * 0x64
int32_t var_18 = ecx
int32_t var_1c = 0
int32_t ebx
ebx.b = *(eax_4 + edi + 0x1a50) == 0x3ea
uint32_t eax_5
int32_t edx
eax_5, edx = sub_568960(eax_4, 0x702, 0x3ea, 0)

if (eax_5 s> ebx + 1)
label_52018e:
    CookieCheckFunction(0)
    return 0

int32_t arg_190c[0x320]
int32_t eax_7
int32_t edx_1
eax_7, edx_1 = sub_568780(&arg_190c, edx, 0x3ea, &arg_190c)
int32_t __saved_ebp
__builtin_memcpy(&__saved_ebp, eax_7, 0xc84)
int32_t esi_3 = 0
int32_t edi_1 = 0

if (arg1 s> 0)
    do
        void* eax_8
        eax_8, edx_1 = sub_573400()
        uint32_t ebx_2 = zx.d((&__saved_ebp)[edi_1].w)
        int32_t var_8 = *(eax_8 + 4)
        
        if (ebx_2 u>= 0x320)
            edx_1 = sub_591930()
        
        int32_t ecx_2 = *(ebx_2 * 0x64 + var_8 + 0x1a4c)
        
        if (ecx_2 != 0x702)
            int32_t eax_11 = 0
            
            if (esi_3 s> 0)
                do
                    if (arg_190c[eax_11] == ecx_2)
                        goto label_52018e
                    
                    eax_11 += 1
                while (eax_11 s< esi_3)
            
            arg_190c[esi_3] = ecx_2
            esi_3 += 1
        
        edi_1 += 1
    while (edi_1 s< arg1)

int32_t eax_13
int32_t edx_2
eax_13, edx_2 = sub_568780(&arg_190c, edx_1, 0x3eb, &arg_190c)
__builtin_memcpy(&__saved_ebp, eax_13, 0xc84)
void arg_c84
__builtin_memcpy(&arg_190c, sub_568780(&arg_c84, edx_2, 0x3ec, &arg_c84), 0xc84)

if (arg1 != 0)
    CookieCheckFunction(1)
    return 1

uint32_t result
result.b = arg2 != 0
CookieCheckFunction(result)
return result
