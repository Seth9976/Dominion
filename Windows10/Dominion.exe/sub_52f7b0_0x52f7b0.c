// 函数: sub_52f7b0
// 地址: 0x52f7b0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__chkstk(0x1910)
int32_t __saved_ebp
int32_t var_8 = __security_cookie ^ &__saved_ebp
int32_t edi
int32_t var_c = edi
int32_t var_1914[0x320]
int32_t var_c94[0x320]
uint32_t eax_2 = sub_56d830(&var_c94, &var_1914)
int32_t esi = 0
int32_t var_c_1 = 0
int32_t edx_1 = 0
int64_t var_14 = 0

if (eax_2 s> 0)
    do
        for (int32_t i = 0; i s< 3; i += 1)
            int32_t ecx_1 = i << 2
            
            if (var_c94[edx_1] == *(ecx_1 + 0x819424))
                *(&var_14 + ecx_1) = var_1914[edx_1]
                break
        
        edx_1 += 1
    while (edx_1 s< eax_2)
    
    esi = var_c_1

int32_t edx_2 = var_14:4.d
int32_t eax_4 = esi
int32_t ecx_2 = var_14.d

if (edx_2 s< esi)
    eax_4 = edx_2

if (ecx_2 s>= eax_4)
    ecx_2 = esi
    
    if (edx_2 s< esi)
        ecx_2 = edx_2

uint32_t result = ecx_2 * 3
CookieCheckFunction(result)
return result
