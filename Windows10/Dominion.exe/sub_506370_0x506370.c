// 函数: sub_506370
// 地址: 0x506370
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ecx
int32_t var_c = ecx
int16_t esi = (*arg1).w
void* eax_1 = sub_573400()
uint32_t esi_1 = zx.d(esi)
void* edi = *(eax_1 + 4)

if (esi_1 u>= 0x320)
    eax_1 = sub_591930()

int32_t ebx = esi_1 * 0x64
uint32_t result

if (sub_5754f0(eax_1, *(ebx + edi + 0x1a4c), edi, 4, 0).b != 0)
    int32_t edi_1 = *(sub_573400() + 4)
    
    if (esi_1 u>= 0x320)
        sub_591930()
    
    int32_t edi_2 = *(ebx + edi_1 + 0x1a4c)
    void* eax_3 = sub_573400()
    void* esi_2 = *(eax_3 + 4)
    result = sub_57da30(esi_2, edi_2)
    int32_t edx_2 = 7
    void* ecx_3 = esi_2 + 0x1594
    
    while (true)
        int32_t i = *ecx_3
        
        if (i != edi_2 && *(ecx_3 + 4) != edi_2 && i != result)
            edx_2 += 1
            ecx_3 += 0x10
            
            if (edx_2 s>= 0x48)
                break
            
            continue
        
        if (i == 0)
            break
        
        int32_t ecx_4 = 7
        result = *(eax_3 + 4) + 0x1594
        
        while (*result != i)
            if (*(result + 4) == i)
                break
            
            ecx_4 += 1
            result += 0x10
            
            if (ecx_4 s>= 0x48)
                result.b = 0
                return result
        
        if (ecx_4 == 0)
            break
        
        result.b = 1
        return result

result.b = 0
return result
