// 函数: sub_57d1e0
// 地址: 0x57d1e0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* ecx
void* edx
ecx, edx = __chkstk(0x10a0)
int32_t __saved_ebp
int32_t var_c = __security_cookie ^ &__saved_ebp
void* ebx = edx
void* var_1098 = ebx
int32_t var_1090[0x320]
uint32_t eax_2 = sub_577870(ebx, &var_1090)
uint32_t result = 0
uint32_t result_1 = 0

if (eax_2 s> 0)
    do
        int32_t eax_3 = var_1090[result]
        uint32_t eax_4 = sub_571b30(eax_3, *(ebx + 0xd48))
        uint32_t esi = eax_4
        int32_t ebx_1 = 0
        int32_t ecx_4 = 0
        int32_t i = *(esi + 0xa8)
        
        if (i != 0)
            int32_t var_410[0xfb]
            
            do
                if (i == 6 && *(eax_4 + 0xac) == 2 && *(eax_4 + 0xb4) == arg3)
                    var_410[ebx_1] = ecx_4
                    ebx_1 += 1
                
                ecx_4 += 1
                eax_4 = ecx_4 * 0xb4 + esi
                i = *(eax_4 + 0xa8)
            while (i != 0)
            
            if (ebx_1 != 0)
                int32_t edi_1 = 0
                
                if (ebx_1 s> 0)
                    do
                        uint32_t eax_6 = sub_575e70(eax_4, var_410[edi_1], eax_3, arg4)
                        eax_4 =
                            sub_57c810(eax_6, arg2, var_1098, eax_6, arg4, arg5, 0xffffffff, arg6)
                        
                        if (eax_4.b != 0)
                            eax_4 = *(ecx + 0x400)
                            *(ecx + (eax_4 << 2)) = eax_6
                            *(ecx + 0x400) += 1
                        
                        edi_1 += 1
                    while (edi_1 s< ebx_1)
        
        ebx = var_1098
        result = result_1 + 1
        result_1 = result
    while (result s< eax_2)

CookieCheckFunction(result)
return result
