// 函数: sub_5442b0
// 地址: 0x5442b0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__chkstk(0x1904)
int32_t __saved_ebp
int32_t var_8 = __security_cookie ^ &__saved_ebp
int32_t var_c88[0x320]
int32_t esi
uint32_t eax_2 = sub_56d740(esi, &var_c88)
int32_t edx = 0
int32_t ecx_1 = 0

if (eax_2 s> 0)
    do
        int32_t var_1908[0x320]
        
        if (var_c88[ecx_1] == 1 && var_1908[ecx_1] != 0xd22)
            edx += 1
        
        ecx_1 += 1
    while (ecx_1 s< eax_2)

uint32_t result
result.b = edx s>= 5
CookieCheckFunction(result)
return result
