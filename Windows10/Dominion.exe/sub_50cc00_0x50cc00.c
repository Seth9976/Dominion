// 函数: sub_50cc00
// 地址: 0x50cc00
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
int32_t esi = 0
int32_t i = 0x22
int32_t* eax_4 = *(sub_573400() + 4) + 0x174c
int32_t var_c8c[0x321]

do
    int32_t ecx = *eax_4
    
    if (ecx != 0)
        var_c8c[esi] = ecx
        esi += 1
    
    i += 1
    eax_4 = &eax_4[4]
while (i s< 0x26)

if (esi == 0)
    sub_63b870(eax_4, &data_801800, "Halt", "C:\x\ax2017\Jams\Dominion\code\DomCards_Campaign.cpp", 
        0x83c, "LookupLandscape")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

int32_t (* esi_1)[0x321] = &var_c8c
uint32_t result

while (true)
    void* eax_5 = sub_573400()
    result = *esi_1
    uint32_t edi_1 = zx.d(result.w)
    int32_t ebx_1 = *(eax_5 + 4)
    
    if (edi_1 u>= 0x320)
        sub_591930()
        result = *esi_1
    
    if (*(edi_1 * 0x64 + ebx_1 + 0x1a4c) == arg1)
        break
    
    esi_1 = &(*esi_1)[1]

CookieCheckFunction(result)
return result
