// 函数: sub_6806b0
// 地址: 0x6806b0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t edi = arg2
int32_t ebx = arg3
int32_t edx = arg4
int32_t esi = edi
int32_t var_c = ebx
int32_t eax = edi
int32_t var_8 = esi
int32_t ecx = edx - 1
int32_t ecx_1 = ecx s>> 1
int32_t var_18 = ecx_1

if (edi s< ecx_1)
    do
        int32_t esi_1 = eax * 2
        int32_t ecx_3 = ebx + 8 + (esi_1 << 2)
        uint32_t eax_3 = zx.d(arg6(ecx_3, ecx_3 - 4))
        int32_t eax_4 = neg.d(eax_3)
        char* const ecx_4 = &data_801800
        char* const edx_1 = &data_801800
        int32_t eax_7 = sbb.d(eax_4, eax_4, eax_3 != 0) + 2 + esi_1
        int32_t* esi_2 = ebx + (edi << 2)
        char* edi_1 = *esi_2
        
        if (edi_1 != 0)
            edx_1 = edi_1
        
        int32_t* eax_8 = ebx + (eax_7 << 2)
        char* eax_9 = *eax_8
        
        if (eax_9 != 0)
            ecx_4 = eax_9
        
        if (edx_1 != ecx_4)
            if (data_cf65bc != 0 && edi_1 != 0 && *edi_1 != 0)
                char* eax_10 = sub_63d4e0(esi_2)
                int32_t temp1_1 = *(eax_10 + 4)
                *(eax_10 + 4) -= 1
                
                if (temp1_1 == 1)
                    sub_64c080(eax_10, *(eax_10 + 0xc) + 0x10)
                    *esi_2 = &data_801800
            
            char* eax_12 = *eax_8
            *esi_2 = eax_12
            
            if (eax_12 != 0 && *eax_12 != 0)
                char* eax_13 = sub_63d4e0(esi_2)
                *(eax_13 + 4) += 1
        
        eax = eax_7
        edi = eax
        ecx_1 = var_18
    while (eax s< ecx_1)
    
    esi = var_8
    edx = arg4

if (eax == ecx_1 && (edx.b & 1) == 0)
    sub_63d850(ebx + (edi << 2), ebx + ((edx - 1) << 2))
    edi = ecx

if (esi s< edi)
    int32_t esi_4
    
    do
        esi_4 = (edi - 1) s>> 1
        int32_t* ebx_1 = ebx + (esi_4 << 2)
        
        if (arg6(ebx_1, arg5) == 0)
            ebx = var_c
            break
        
        ebx = var_c
        sub_63d850(ebx + (edi << 2), ebx_1)
        edi = esi_4
    while (var_8 s< esi_4)

char* edx_5 = *(ebx + (edi << 2))
char** esi_5 = ebx + (edi << 2)
char* const result_1 = &data_801800
char* const ecx_10 = &data_801800

if (edx_5 != 0)
    ecx_10 = edx_5

char* result = *arg5

if (result != 0)
    result_1 = result

if (ecx_10 != result_1)
    if (data_cf65bc != 0 && edx_5 != 0 && *edx_5 != 0)
        char* eax_16 = sub_63d4e0(esi_5)
        int32_t temp2_1 = *(eax_16 + 4)
        *(eax_16 + 4) -= 1
        
        if (temp2_1 == 1)
            sub_64c080(eax_16, *(eax_16 + 0xc) + 0x10)
            *esi_5 = &data_801800
    
    result = *arg5
    *esi_5 = result
    
    if (result != 0 && *result != 0)
        result = sub_63d4e0(esi_5)
        *(result + 4) += 1

return result
