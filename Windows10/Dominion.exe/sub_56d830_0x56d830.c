// 函数: sub_56d830
// 地址: 0x56d830
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
void* eax_2 = sub_573400()
void var_c94
int32_t eax_3 = sub_590b50(eax_2, *(eax_2 + 0xc), *(eax_2 + 4), &var_c94)
void* ebx = &var_c94
int32_t var_14 = eax_3
void* var_c9c = &var_c94
uint32_t result = 0
void* eax_4 = &var_c94 + (eax_3 << 2)

if (&var_c94 != eax_4)
    do
        void* eax_5 = sub_573400()
        uint32_t ebx_2 = zx.d((*ebx).w)
        int32_t eax_6 = *(eax_5 + 4)
        
        if (ebx_2 u>= 0x320)
            sub_591930()
        
        int32_t i = *(ebx_2 * 0x64 + eax_6 + 0x1a4c)
        int32_t eax_8 = 0
        
        if (result s> 0)
            while (*(arg1 + (eax_8 << 2)) != i)
                eax_8 += 1
                
                if (eax_8 s>= result)
                    break
        
        int32_t edx_1 = eax_8 << 2
        
        if (eax_8 == result)
            *(edx_1 + arg2) = 0
            *(arg1 + (result << 2)) = i
            result += 1
        
        *(edx_1 + arg2) += 1
        ebx = var_c9c + 4
        var_c9c = ebx
    while (ebx != eax_4)

CookieCheckFunction(result)
return result
