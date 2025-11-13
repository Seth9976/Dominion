// 函数: sub_591aa0
// 地址: 0x591aa0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
int32_t i = 1
uint32_t result = 0
void* var_c8c = arg1

if (*(arg1 + 0x1520) s> 1)
    do
        uint32_t ebx_1 = zx.d(i.w)
        
        if (ebx_1 u>= 0x320)
            sub_591930()
            arg1 = var_c8c
        
        void* ebx_3 = ebx_1 * 0x64 + arg1
        void* eax_2 = sub_571b30(*(ebx_3 + 0x1a4c), *(arg1 + 0xd48))
        
        if (((*(eax_2 + 0x98) & 0x7f000400) | (*(eax_2 + 0x9c) & 0x940)) == 0
                && *(ebx_3 + 0x1a70) == arg2)
            int32_t ecx_4 = *(ebx_3 + 0x1a4c)
            int32_t eax_6 = 0
            int32_t var_c88[0x320]
            
            if (result s> 0)
                do
                    if (var_c88[eax_6] == ecx_4)
                        goto label_591b4c
                    
                    eax_6 += 1
                while (eax_6 s< result)
            
            var_c88[result] = ecx_4
            result += 1
        
    label_591b4c:
        arg1 = var_c8c
        i += 1
    while (i s< *(arg1 + 0x1520))

CookieCheckFunction(result)
return result
