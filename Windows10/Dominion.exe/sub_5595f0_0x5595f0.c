// 函数: sub_5595f0
// 地址: 0x5595f0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__chkstk(0x1904)
int32_t __saved_ebp
int32_t var_8 = __security_cookie ^ &__saved_ebp
uint32_t esi_1 = zx.d(sub_56b800())
int32_t edi = *(sub_573400() + 4)

if (esi_1 u>= 0x320)
    sub_591930()

int32_t eax_5 = *(esi_1 * 0x64 + edi + 0x1a50)
int32_t esi_2

if (eax_5 == 0x3ea || eax_5 == 0x3ec || eax_5 == 0x45c || eax_5 == 0x469 || eax_5 == 0x46a
        || eax_5 == 0x46b)
    esi_2 = 1
else
    esi_2 = 0

int32_t var_c88[0x31e]
uint32_t eax_6 = sub_56d740(esi_2, &var_c88)
int32_t ecx_1 = 0

if (eax_6 s> 0)
    do
        int32_t var_1908[0x320]
        bool cond:0_1
        
        if (var_1908[ecx_1] != 0x1201 || esi_2 == 0)
            cond:0_1 = var_c88[ecx_1] s> 1
        else
            cond:0_1 = var_c88[ecx_1] s> 2
        
        if (cond:0_1)
            CookieCheckFunction(0)
            return 0
        
        ecx_1 += 1
    while (ecx_1 s< eax_6)

CookieCheckFunction(1)
return 1
