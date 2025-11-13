// 函数: sub_513290
// 地址: 0x513290
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
void* esi = sub_573400()
int32_t ebx = 0
void* var_c8c = esi
int32_t i = 7
int32_t* ecx_1 = *(esi + 4) + 0x1594
int32_t var_c88[0x320]
void* result

do
    result = *ecx_1
    
    if (result != 0)
        var_c88[ebx] = result
        ebx += 1
    
    i += 1
    ecx_1 = &ecx_1[4]
while (i s< 0x21)

int32_t edi = 0

if (ebx s> 0)
    do
        int32_t i_1 = var_c88[edi]
        int32_t* esi_1
        
        if (i_1 == 0)
        label_51330a:
            esi_1 = nullptr
        else
            esi_1 = 7
            int32_t* eax_4 = *(esi + 4) + 0x1594
            
            while (*eax_4 != i_1)
                if (eax_4[1] == i_1)
                    break
                
                esi_1 += 1
                eax_4 = &eax_4[4]
                
                if (esi_1 s>= 0x48)
                    goto label_51330a
        
        result = sub_4fe8d0(esi_1)
        
        if (result.b == 0)
            esi = var_c8c
        else
            esi = var_c8c
            result = sub_5937c0(result, *(esi + 0xc), *(esi + 4), esi_1)
        
        edi += 1
    while (edi s< ebx)

CookieCheckFunction(result)
return result
