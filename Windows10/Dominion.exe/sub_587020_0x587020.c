// 函数: sub_587020
// 地址: 0x587020
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* ecx
uint32_t edx
ecx, edx = __chkstk(0x1920)
int32_t __saved_ebp
int32_t var_c = __security_cookie ^ &__saved_ebp
char var_1911
char* var_14 = &var_1911
var_1911 = 0
int32_t esi = 0
int32_t var_1910[0x320]
uint32_t eax_3 = sub_575c40(ecx, edx, ecx, &var_1910, arg2, var_14)
int32_t edi_1 = eax_3 - 1
void var_c90

if (eax_3 - 1 s>= 0)
    int32_t temp1_1
    
    do
        int32_t ebx_1 = var_1910[edi_1]
        eax_3 = sub_5759a0(eax_3, ebx_1.w, ecx, arg2)
        
        if (eax_3.b != 0)
            *(&var_c90 + (esi << 2)) = ebx_1
            esi += 1
        
        temp1_1 = edi_1
        edi_1 -= 1
    while (temp1_1 - 1 s>= 0)

int32_t ebx_2 = 0
int32_t edi_2 = 0

if (esi s> 0)
    do
        uint32_t eax_4 = zx.d(*(&var_c90 + (edi_2 << 2)))
        
        if (eax_4 u>= 0x320)
            sub_591930()
        
        if (ecx[eax_4 * 0x19 + 0x693] == 0x61b)
            int32_t ecx_4 = *(&var_c90 + (ebx_2 << 2))
            *(&var_c90 + (ebx_2 << 2)) = *(&var_c90 + (edi_2 << 2))
            ebx_2 += 1
            *(&var_c90 + (edi_2 << 2)) = ecx_4
        
        edi_2 += 1
    while (edi_2 s< esi)

int32_t* edx_2 = &var_c90 + (esi << 2)
int32_t* ecx_5 = &var_c90 + (ebx_2 << 2)
int32_t eax_9 = (edx_2 - ecx_5) s>> 2
sub_594620(eax_9, edx_2, ecx_5, eax_9, ecx)
void* result = sub_586880(&var_c90, edx, ecx, &var_c90, esi, -0x40)
CookieCheckFunction(result)
return result
