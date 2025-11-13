// 函数: sub_6fba80
// 地址: 0x6fba80
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* var_8 = arg1
void* result = data_147dec8
int32_t* edi_2

for (void* i = 0x70; i s< 0x7c; i += 4)
    if (*(i + result) == 0)
        edi_2 = &arg1[1]
    else
        int32_t* eax = sub_64bfd0(0xc)
        eax[3] += 1
        
        if (*eax == 0)
            sub_64be70(eax)
        
        int32_t* ecx_2 = *eax
        *eax = *ecx_2
        edi_2 = &arg1[1]
        *ecx_2 = 0
        ecx_2[2] = 0
        *ecx_2 = *(i + result)
        ecx_2[2] = *edi_2
        int32_t eax_5 = *edi_2
        
        if (eax_5 == 0)
            arg1[2] += 1
            result = data_147dec8
            *arg1 = ecx_2
            *edi_2 = ecx_2
        else
            *(eax_5 + 4) = ecx_2
            arg1[2] += 1
            result = data_147dec8
            *edi_2 = ecx_2

if (*(result + 0x80) != 0)
    int32_t* eax_6 = sub_64bfd0(0xc)
    int32_t* edx_1 = edi_2
    eax_6[3] += 1
    
    if (*eax_6 == 0)
        sub_64be70(eax_6)
        edx_1 = &arg1[1]
    
    int32_t* ecx_4 = *eax_6
    *eax_6 = *ecx_4
    *ecx_4 = 0
    ecx_4[2] = 0
    *ecx_4 = *(result + 0x80)
    ecx_4[2] = *edi_2
    result = *edi_2
    
    if (result != 0)
        *(result + 4) = ecx_4
        arg1[2] += 1
        *edx_1 = ecx_4
        return result
    
    arg1[2] += 1
    *arg1 = ecx_4
    *edx_1 = ecx_4

return result
