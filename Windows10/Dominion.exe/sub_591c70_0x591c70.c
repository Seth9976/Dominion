// 函数: sub_591c70
// 地址: 0x591c70
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ebp
int32_t var_4_1 = ebp
void* ecx
int32_t edx
ecx, edx = __chkstk(0x192c)
__security_cookie
void* esi = ecx
void* var_4 = esi
int32_t arg_1c[0x320]
int32_t arg_c9c[0x321]
uint32_t eax_3 = sub_591b80(edx, edx, esi, &arg_1c, &arg_c9c)
int32_t ebx = 0
void* eax_4 = *(esi + 0xd38)
uint32_t result = 0
uint32_t result_1 = 0
int32_t arg_8 = 0

if (eax_3 s> 0)
    do
        int32_t eax_5 = arg_1c[ebx]
        int32_t edi_1 = 0
        int32_t ecx_4 = *(sub_571b30(eax_5, *(esi + 0xd48)) + 0x98)
        int32_t eax_9 = ecx_4 & 2
        uint32_t eax_10
        
        if (eax_9 == 0 && (ecx_4 & 0x10) != 0)
            eax_10 = sub_576b30(eax_9, *(esi + 0x19cc), esi, 0x1d, eax_9, eax_9, eax_9)
        
        if (eax_9 == 0 && ((ecx_4 & 0x10) == 0 || eax_10 s<= 0))
            result = result_1
        else
            void* const eax_11 = eax_4
            int32_t esi_1 = 0
            
            if (eax_11 s> 0)
                int32_t ecx_8 = edx
                
                do
                    if (esi_1 != ecx_8)
                        int32_t eax_12 = sub_591a30(eax_11, esi_1, var_4, eax_5)
                        ecx_8 = edx
                        
                        if (eax_12 s> edi_1)
                            edi_1 = eax_12
                        
                        eax_11 = eax_4
                    
                    esi_1 += 1
                while (esi_1 s< eax_11)
                
                ebx = arg_8
            
            result = result_1
            esi = var_4
            
            if (arg_c9c[ebx] s>= edi_1)
                result += 1
                result_1 = result
        
        ebx += 1
        arg_8 = ebx
    while (ebx s< eax_3)

CookieCheckFunction(result)
return result
