// 函数: sub_53df20
// 地址: 0x53df20
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
void* eax_2
int32_t ecx
eax_2, ecx = sub_573400()
void* ebx = eax_2
int32_t var_ca0 = ecx
void* var_c90 = ebx
int16_t var_c88[0x640]
uint32_t ecx_2 = sub_577640(&var_c88, *(ebx + 0xc), *(ebx + 4), &var_c88)
int32_t esi = 0
uint32_t var_c8c = ecx_2

if (ecx_2 s> 0)
    do
        uint32_t edi_1 = zx.d(var_c88[esi * 2])
        int32_t ebx_1 = *(ebx + 4)
        
        if (edi_1 u>= 0x320)
            sub_591930()
            ecx_2 = var_c8c
        
        if (*(edi_1 * 0x64 + ebx_1 + 0x1a4c) == 0xf46)
            CookieCheckFunction(0)
            return 0
        
        ebx = var_c90
        esi += 1
    while (esi s< ecx_2)

CookieCheckFunction(1)
return 1
